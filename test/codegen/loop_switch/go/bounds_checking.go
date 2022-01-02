// Code generated by re2c, DO NOT EDIT.
//go:generate re2go $INPUT -o $OUTPUT --loop-switch -i
package main

import (
	"strings"
	"testing"
)

var YYMAXFILL int = 1


// Expects YYMAXFILL-padded string.
func lex(str string) int {
	var cursor int
	limit := len(str)
	count := 0
loop:
	
{
	var yych byte
	yystate := 0
	for {
		switch (yystate) {
		case 0:
			if (limit - cursor < 1) {
				return -1
			}
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case 0x00:
				yystate = 1
				continue
			case ' ':
				yystate = 3
				continue
			case '\'':
				yystate = 5
				continue
			default:
				yystate = 2
				continue
			}
		case 1:
			{
		if limit - cursor == YYMAXFILL - 1 {
			return count
		} else {
			return -1
		}
	}
		case 2:
			{
		return -1
	}
		case 3:
			if (limit - cursor < 1) {
				return -1
			}
			yych = str[cursor]
			switch (yych) {
			case ' ':
				cursor += 1
				yystate = 3
				continue
			default:
				yystate = 4
				continue
			}
		case 4:
			{
		goto loop
	}
		case 5:
			if (limit - cursor < 1) {
				return -1
			}
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case '\'':
				yystate = 6
				continue
			case '\\':
				yystate = 7
				continue
			default:
				yystate = 5
				continue
			}
		case 6:
			{
		count += 1;
		goto loop
	}
		case 7:
			if (limit - cursor < 1) {
				return -1
			}
			cursor += 1
			yystate = 5
			continue
		default:
			panic("internal lexer error")
		}
	}
}

}

// Pad string with YYMAXFILL zeroes at the end.
func pad(str string) string {
	return str + strings.Repeat("\000", YYMAXFILL)
}

func TestLex(t *testing.T) {
	var tests = []struct {
		res int
		str string
	}{
		{0, ""},
		{3, "'qu\000tes' 'are' 'fine: \\'' "},
		{-1, "'unterminated\\'"},
	}

	for _, x := range tests {
		t.Run(x.str, func(t *testing.T) {
			res := lex(pad(x.str))
			if res != x.res {
				t.Errorf("got %d, want %d", res, x.res)
			}
		})
	}
}
