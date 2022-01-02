/* Generated by re2c */
#line 1 "c/eof/02_bounds_checking.re"
// re2c $INPUT -o $OUTPUT
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#line 9 "c/eof/02_bounds_checking.c"
#define YYMAXFILL 1
#line 6 "c/eof/02_bounds_checking.re"


static int lex(const char *str, unsigned int len) {
    // Make a copy of the string with YYMAXFILL zeroes at the end.
    char *buf = (char*) malloc(len + YYMAXFILL);
    memcpy(buf, str, len);
    memset(buf + len, 0, YYMAXFILL);
    const char *YYCURSOR = buf, *YYLIMIT = buf + len + YYMAXFILL;
    int count = 0;
loop:
    
#line 23 "c/eof/02_bounds_checking.c"
{
	char yych;
	if (YYLIMIT <= YYCURSOR) goto fail;
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy1;
		case ' ': goto yy3;
		case '\'': goto yy5;
		default: goto yy2;
	}
yy1:
	++YYCURSOR;
#line 21 "c/eof/02_bounds_checking.re"
	{
            // Check that it is the sentinel, not some unexpected null.
            if (YYCURSOR - 1 == buf + len) goto exit; else goto fail;
        }
#line 41 "c/eof/02_bounds_checking.c"
yy2:
	++YYCURSOR;
#line 27 "c/eof/02_bounds_checking.re"
	{ goto fail; }
#line 46 "c/eof/02_bounds_checking.c"
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) goto fail;
	yych = *YYCURSOR;
	switch (yych) {
		case ' ': goto yy3;
		default: goto yy4;
	}
yy4:
#line 26 "c/eof/02_bounds_checking.re"
	{ goto loop; }
#line 58 "c/eof/02_bounds_checking.c"
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) goto fail;
	yych = *YYCURSOR;
	switch (yych) {
		case '\'': goto yy6;
		case '\\': goto yy7;
		default: goto yy5;
	}
yy6:
	++YYCURSOR;
#line 25 "c/eof/02_bounds_checking.re"
	{ ++count; goto loop; }
#line 72 "c/eof/02_bounds_checking.c"
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) goto fail;
	goto yy5;
}
#line 28 "c/eof/02_bounds_checking.re"

fail:
    count = -1;
exit:
    free(buf);
    return count;
}

#define TEST(s, r) assert(lex(s, sizeof(s) - 1) == r)
int main() {
    TEST("", 0);
    TEST("'qu\0tes' 'are' 'fine: \\'' ", 3);
    TEST("'unterminated\\'", -1);
    TEST("'unexpected \0 null\\'", -1);
    return 0;
}
