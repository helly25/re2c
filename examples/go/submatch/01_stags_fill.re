//go:generate re2go $INPUT -o $OUTPUT --tags
package main

import (
	"fmt"
	"os"
	"reflect"
)

const SIZE int = 4096

type Input struct {
	file   *os.File
	data   []byte
	cursor int
	marker int
	token  int
	limit  int
	// Tag variables must be part of the lexer state passed to YYFILL.
	// They don't correspond to tags and should be autogenerated by re2c.
	/*!stags:re2c format = "\t@@ int\n"; */
	eof    bool
}

func fill(in *Input) int {
	// If nothing can be read, fail.
	if in.eof {
		return 1
	}

	// Check if at least some space can be freed.
	if in.token == 0 {
		// In real life can reallocate a larger buffer.
		panic("fill error: lexeme too long")
	}

	// Discard everything up to the start of the current lexeme,
	// shift buffer contents and adjust offsets.
	copy(in.data[0:], in.data[in.token:in.limit])
	in.cursor -= in.token
	in.marker -= in.token
	in.limit -= in.token
	// Tag variables need to be shifted like other input positions. The
	// check for -1 is only needed if some tags are nested inside of
	// alternative or repetition, so that they can have -1 value.
	/*!stags:re2c
		format = "\tif in.@@ != -1 { in.@@ -= in.token }\n";
	*/
	in.token = 0

	// Read new data (as much as possible to fill the buffer).
	n, _ := in.file.Read(in.data[in.limit:SIZE])
	in.limit += n
	in.data[in.limit] = 0

	// If read less than expected, this is the end of input.
	in.eof = in.limit < SIZE

	// If nothing has been read, fail.
	if n == 0 {
		return 1
	}

	return 0
}

func lex(in *Input) []int {
	// User-defined local variables that store final tag values. They are
	// different from tag variables autogenerated with `stags:re2c`, as
	// they are set at the end of match and used only in semantic actions.
	var o1, o2, o3, o4 int
	var ips []int

	num := func(pos int, end int) int {
		n := 0
		for ; pos < end; pos++ {
			n = n*10 + int(in.data[pos]-'0')
		}
		return n
	}

loop:
	in.token = in.cursor
	/*!re2c
	re2c:eof = 0;
	re2c:define:YYCTYPE    = byte;
	re2c:define:YYPEEK     = "in.data[in.cursor]";
	re2c:define:YYSKIP     = "in.cursor += 1";
	re2c:define:YYBACKUP   = "in.marker = in.cursor";
	re2c:define:YYRESTORE  = "in.cursor = in.marker";
	re2c:define:YYLESSTHAN = "in.limit <= in.cursor";
	re2c:define:YYFILL     = "fill(in) == 0";
	re2c:define:YYSTAGP    = "@@{tag} = in.cursor";
	re2c:define:YYSTAGN    = "@@{tag} = -1";

	// The way tag variables are accessed from the lexer (not needed if tag
	// variables are defined as local variables).
	re2c:tags:expression = "in.@@";

	octet = [0-9] | [1-9][0-9] | [1][0-9][0-9] | [2][0-4][0-9] | [2][5][0-5];
	dot = [.];
	eol = [\n];

	@o1 octet dot @o2 octet dot @o3 octet dot @o4 octet eol {
		ips = append(ips, num(o4, in.cursor-1)+
			(num(o3, o4-1) << 8)+
			(num(o2, o3-1) << 16)+
			(num(o1, o2-1) << 24))
		goto loop
	}
	$ { return ips }
	* { return nil }
	*/
}

func main() {
	tmpfile := "input.txt"
	var want, have []int

	// Write a few IPv4 addresses to the input file and save them to compare
	// against parse results.
	f, _ := os.Create(tmpfile)
	for i := 0; i < 256; i++ {
		fmt.Fprintf(f, "%d.%d.%d.%d\n", i, i, i, i)
		want = append(want, i + (i<<8) + (i<<16) + (i<<24))
	}
	f.Seek(0, 0)

	defer func() {
		if r := recover(); r != nil {
			have = nil
		}
		f.Close()
		os.Remove(tmpfile)
	}()

	in := &Input{
		file:   f,
		data:   make([]byte, SIZE+1),
		cursor: SIZE,
		marker: SIZE,
		token:  SIZE,
		limit:  SIZE,
		eof:    false,
	}

	have = lex(in)

	if !reflect.DeepEqual(have, want) {
		panic(fmt.Sprintf("have %d, want %d", have, want))
	}
}
