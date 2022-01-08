// Code generated by re2c, DO NOT EDIT.
//line "go/submatch/01_stags_fill.re":1
//go:generate re2go $INPUT -o $OUTPUT --tags
package main

import (
	"os"
	"reflect"
	"strings"
)

const BUFSIZE int = 4095

type Input struct {
	file *os.File
	buf  []byte
	cur  int
	mar  int
	tok  int
	lim  int
	// Tag variables must be part of the lexer state passed to YYFILL.
	// They don't correspond to tags and should be autogenerated by re2c.
	
//line "go/submatch/01_stags_fill.go":25
	yyt1 int
	yyt2 int
	yyt3 int
//line "go/submatch/01_stags_fill.re":21

	eof  bool
}

type SemVer struct { major, minor, patch int }

func s2n(s []byte) int { // convert pre-parsed string to a number
	n := 0
	for _, c := range s { n = n*10 + int(c-'0') }
	return n
}

func fill(in *Input) int {
	if in.eof { return -1 } // unexpected EOF

	// Error: lexeme too long. In real life can reallocate a larger buffer.
	if in.tok < 1 { return -2 }

	// Shift buffer contents (discard everything up to the current token).
	copy(in.buf[0:], in.buf[in.tok:in.lim])
	in.cur -= in.tok
	in.mar -= in.tok
	in.lim -= in.tok
	// Tag variables need to be shifted like other input positions. The check
	// for -1 is only needed if some tags are nested inside of alternative or
	// repetition, so that they can have -1 value.
	
//line "go/submatch/01_stags_fill.go":57
	if in.yyt1 != -1 { in.yyt1 -= in.tok }
	if in.yyt2 != -1 { in.yyt2 -= in.tok }
	if in.yyt3 != -1 { in.yyt3 -= in.tok }
//line "go/submatch/01_stags_fill.re":47

	in.tok = 0

	// Fill free space at the end of buffer with new data from file.
	n, _ := in.file.Read(in.buf[in.lim:BUFSIZE])
	in.lim += n
	in.buf[in.lim] = 0

	// If read less than expected, this is the end of input.
	in.eof = in.lim < BUFSIZE

	return 0
}

func parse(in *Input) []SemVer {
	// User-defined local variables that store final tag values. They are
	// different from tag variables autogenerated with `stags:re2c`, as
	// they are set at the end of match and used only in semantic actions.
	var t1, t2, t3, t4 int
	vers := make([]SemVer, 0)
	for {
		in.tok = in.cur
	
//line "go/submatch/01_stags_fill.go":85
{
	var yych byte
yyFillLabel0:
	yych = in.buf[in.cur]
	switch (yych) {
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy3
	default:
		if (in.lim <= in.cur) {
			if (fill(in) == 0) {
				goto yyFillLabel0
			}
			goto yy11
		}
		goto yy1
	}
yy1:
	in.cur += 1
yy2:
//line "go/submatch/01_stags_fill.re":94
	{ return nil }
//line "go/submatch/01_stags_fill.go":107
yy3:
	in.cur += 1
	in.mar = in.cur
yyFillLabel1:
	yych = in.buf[in.cur]
	switch (yych) {
	case '.':
		goto yy4
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy6
	default:
		if (in.lim <= in.cur) {
			if (fill(in) == 0) {
				goto yyFillLabel1
			}
		}
		goto yy2
	}
yy4:
	in.cur += 1
yyFillLabel2:
	yych = in.buf[in.cur]
	switch (yych) {
	case '0','1','2','3','4','5','6','7','8','9':
		in.yyt1 = in.cur
		goto yy7
	default:
		if (in.lim <= in.cur) {
			if (fill(in) == 0) {
				goto yyFillLabel2
			}
		}
		goto yy5
	}
yy5:
	in.cur = in.mar
	goto yy2
yy6:
	in.cur += 1
yyFillLabel3:
	yych = in.buf[in.cur]
	switch (yych) {
	case '.':
		goto yy4
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy6
	default:
		if (in.lim <= in.cur) {
			if (fill(in) == 0) {
				goto yyFillLabel3
			}
		}
		goto yy5
	}
yy7:
	in.cur += 1
yyFillLabel4:
	yych = in.buf[in.cur]
	switch (yych) {
	case '\n':
		in.yyt2 = in.cur
		in.yyt3 = -1
		goto yy8
	case '.':
		in.yyt2 = in.cur
		goto yy9
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy7
	default:
		if (in.lim <= in.cur) {
			if (fill(in) == 0) {
				goto yyFillLabel4
			}
		}
		goto yy5
	}
yy8:
	in.cur += 1
	t2 = in.yyt1
	t3 = in.yyt2
	t4 = in.yyt3
	t1 = in.yyt1
	t1 += -1
//line "go/submatch/01_stags_fill.re":85
	{
			major := s2n(in.buf[in.tok:t1])
			minor := s2n(in.buf[t2:t3])
			patch := 0
			if t4 != -1 { patch = s2n(in.buf[t4:in.cur-1]) }
			vers = append(vers, SemVer{major, minor, patch})
			continue
		}
//line "go/submatch/01_stags_fill.go":200
yy9:
	in.cur += 1
yyFillLabel5:
	yych = in.buf[in.cur]
	switch (yych) {
	case '0','1','2','3','4','5','6','7','8','9':
		in.yyt3 = in.cur
		goto yy10
	default:
		if (in.lim <= in.cur) {
			if (fill(in) == 0) {
				goto yyFillLabel5
			}
		}
		goto yy5
	}
yy10:
	in.cur += 1
yyFillLabel6:
	yych = in.buf[in.cur]
	switch (yych) {
	case '\n':
		goto yy8
	case '0','1','2','3','4','5','6','7','8','9':
		goto yy10
	default:
		if (in.lim <= in.cur) {
			if (fill(in) == 0) {
				goto yyFillLabel6
			}
		}
		goto yy5
	}
yy11:
//line "go/submatch/01_stags_fill.re":93
	{ return vers }
//line "go/submatch/01_stags_fill.go":237
}
//line "go/submatch/01_stags_fill.re":95

	}
}


func main() () {
	fname := "input"
	content := "1.22.333\n";

	expect := make([]SemVer, 0, BUFSIZE)
	for i := 0; i < BUFSIZE; i += 1 { expect = append(expect, SemVer{1, 22, 333}) }

	// Prepare input file (make sure it exceeds buffer size).
	f, _ := os.Create(fname)
	f.WriteString(strings.Repeat(content, BUFSIZE))
	f.Seek(0, 0)

	// Initialize lexer state.
	in := &Input{
		file: f,
		// Default initialize sentinel to zero, which triggers YYFILL.
		buf:  make([]byte, BUFSIZE+1),
		cur:  BUFSIZE,
		mar:  BUFSIZE,
		tok:  BUFSIZE,
		lim:  BUFSIZE,
		eof:  false,
	}

	// Run the lexer and check results.
	if !reflect.DeepEqual(parse(in), expect) { panic("error"); }

	// Cleanup: remove input file.
	f.Close();
	os.Remove(fname);
}
