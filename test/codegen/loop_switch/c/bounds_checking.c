/* Generated by re2c */
// re2c $INPUT -o $OUTPUT --loop-switch -i
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#define YYMAXFILL 1


// expect YYMAXFILL-padded string
static int lex(const char *str, unsigned int len)
{
    const char *YYCURSOR = str, *YYLIMIT = str + len + YYMAXFILL;
    int count = 0;

loop:
    
{
	char yych;
	unsigned int yystate = 0;
	for (;;) {
		switch (yystate) {
			case 0:
				if (YYLIMIT <= YYCURSOR) return -1;
				yych = *YYCURSOR;
				++YYCURSOR;
				switch (yych) {
					case 0x00:
						yystate = 1;
						continue;
					case ' ':
						yystate = 3;
						continue;
					case '\'':
						yystate = 5;
						continue;
					default:
						yystate = 2;
						continue;
				}
			case 1:
				{ return YYCURSOR + YYMAXFILL - 1 == YYLIMIT ? count : -1; }
			case 2:
				{ return -1; }
			case 3:
				if (YYLIMIT <= YYCURSOR) return -1;
				yych = *YYCURSOR;
				switch (yych) {
					case ' ':
						++YYCURSOR;
						yystate = 3;
						continue;
					default:
						yystate = 4;
						continue;
				}
			case 4:
				{ goto loop; }
			case 5:
				if (YYLIMIT <= YYCURSOR) return -1;
				yych = *YYCURSOR;
				++YYCURSOR;
				switch (yych) {
					case '\'':
						yystate = 6;
						continue;
					case '\\':
						yystate = 7;
						continue;
					default:
						yystate = 5;
						continue;
				}
			case 6:
				{ ++count; goto loop; }
			case 7:
				if (YYLIMIT <= YYCURSOR) return -1;
				++YYCURSOR;
				yystate = 5;
				continue;
		}
	}
}

}

// make a copy of the string with YYMAXFILL zeroes at the end
static void test(const char *str, unsigned int len, int res)
{
    char *s = (char*) malloc(len + YYMAXFILL);
    memcpy(s, str, len);
    memset(s + len, 0, YYMAXFILL);
    int r = lex(s, len);
    free(s);
    assert(r == res);
}

#define TEST(s, r) test(s, sizeof(s) - 1, r)
int main()
{
    TEST("", 0);
    TEST("'qu\0tes' 'are' 'fine: \\'' ", 3);
    TEST("'unterminated\\'", -1);
    return 0;
}
