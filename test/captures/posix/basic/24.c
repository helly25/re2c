/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	YYMARKER = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt1 = YYCURSOR;
			goto yy3;
		default:
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			goto yy1;
	}
yy1:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt2;
	if (yypmatch[2] != NULL) yypmatch[2] -= 2;
	{}
yy2:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy6;
		default:
			yyt2 = NULL;
			goto yy1;
	}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy7;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
		case 0:
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			goto yy1;
		case 1:
			yyt2 = NULL;
			goto yy1;
		default:
			yyt2 = YYCURSOR;
			goto yy1;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy7;
		default: goto yy4;
	}
yy6:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy3;
		default:
			yyt2 = YYCURSOR;
			goto yy1;
	}
yy7:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy3;
		default:
			yyt2 = YYCURSOR;
			goto yy1;
	}
yy8:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy6;
		default:
			yyt2 = YYCURSOR;
			goto yy1;
	}
}

captures/posix/basic/24.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/basic/24.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/basic/24.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
