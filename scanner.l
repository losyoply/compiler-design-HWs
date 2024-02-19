%{

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX_LINE_LENGTH 256

int lineNum = 1;
bool pragmaSource = true;
bool pragmaToken = true;
char currentLine[MAX_LINE_LENGTH];
char *tokenType="A";

void printToken();
void newLine();

%}

/* Definitions */

KEYWORDS	("void"|"int"|"double"|"float"|"char"|"for"|"do"|"while"|"break"|"continue"|"if"|"else"|"return"|"struct"|"switch"|"case"|"default"|"const"|"signed"|"unsigned"|"short"|"long")
MACROS		("NULL"|"__COUNTER__"|"__LINE__"|"INT_MAX"|"INT_MIN"|"CHAR_MAX"|"CHAR_MIN"|"MAX"|"MIN")
IDENTIFIER	([_a-zA-Z][_a-zA-Z0-9]*)
OPERATOR	([\+\-\*\/\%\<\>=!]|"++"|"--"|"<="|">="|"=="|"!="|"&&"|"||"|"&"|"|")
PUNC_CHAR	([:;,.\[\]\{\}\(\)])
INTEGER		([-+]?[0-9]+)
FLOAT		([-+]?[0-9]*\.[0-9]+|[-+]?[0-9]+\.[0-9]*)

/*SCI_NOTATION	([0-9]*\.[0-9]+|[0-9]+\.[0-9]*)([eE][\+\-]?[0-9]+)*/

CHARACTER (("'\\n'"|"'\\t'"|"'\\0'")|('[^'\\]')|"'\\\\'")
STRING		(\"[^\"\n]*\")
SINGLE_COMMENT	(\/\/.*)

SOURCE_ON	([\ \t]*"#"[\ \t]*"pragma"[\ \t]*"source"[\ \t]*"on\n")
SOURCE_OFF	([\ \t]*"#"[\ \t]*"pragma"[\ \t]*"source"[\ \t]*"off\n")
TOKEN_ON	([\ \t]*"#"[\ \t]*"pragma"[\ \t]*"token"[\ \t]*"on\n")
TOKEN_OFF	([\ \t]*"#"[\ \t]*"pragma"[\ \t]*"token"[\ \t]*"off\n")

%x		COMMENT
%x		SINGLE_COMMENT

%%
{SOURCE_ON}	{ tokenType = "pragmaSourceOn"; pragmaSource = true; newLine(); }
{SOURCE_OFF}	{ tokenType = "pragmaSourceOff"; pragmaSource = false; newLine();}
{TOKEN_ON}	{ tokenType = "pragmaToken"; pragmaToken = true; newLine(); }
{TOKEN_OFF}	{ tokenType = "pragmaToken"; pragmaToken = false; newLine(); }
[\n]		{ newLine(); }
[ \t\r]+	{ strcat(currentLine, yytext); }
{KEYWORDS}	{ tokenType = "key"; printToken(); }
{MACROS}	{ tokenType = "macro"; printToken(); }
{IDENTIFIER}	{ tokenType = "id"; printToken(); }
{OPERATOR}	{ tokenType = "op"; printToken(); }
{PUNC_CHAR}	{ tokenType = "punc"; printToken(); }
{INTEGER}	{ tokenType = "integer"; printToken(); }
{FLOAT}	{ tokenType = "float"; printToken(); } 
{CHARACTER}	{ tokenType = "char"; printToken(); }

{STRING}	{ tokenType = "string"; printToken(); }




{SINGLE_COMMENT}	{ strcat(currentLine, yytext); }
"/*"			{ strcat(currentLine, yytext); BEGIN COMMENT; }
<COMMENT>"*/"		{ strcat(currentLine, yytext); BEGIN INITIAL; }
<COMMENT>\n		{ newLine(); }
<COMMENT>.		{ strcat(currentLine, yytext); }

%%

int main (int argc, char* argv[]) {
	yylex();
	return 0;
}

int yywrap() {
	return 1;
}

void printToken() {
    int len = strlen(yytext);
    memcpy(currentLine + strlen(currentLine), yytext, len);
    if (pragmaToken == 1) {
        printf("#%s:", tokenType);
        fwrite(yytext, sizeof(char), len, stdout);
        putchar('\n');
    }
}
// void trim(char *s) {
//     int j;
//     for (j = strlen(s) - 1; j >= 0 && isspace(s[j]); j--);
//     // if (j >= 0) {
//     //     s[j + 1] = '\0';
//     // }
// 	s[j + 1] = '\0';
// }
void newLine() {
	// trim(currentLine);
	if (strcmp(tokenType, "pragmaSourceOn") == 0 || (strcmp(tokenType, "pragmaToken") == 0&&pragmaSource)) {
		printf("%d:%s", lineNum, yytext);
	} 
	else if (pragmaSource) 
	{
		printf("%d:%s\n", lineNum, currentLine);
	}
	memset(currentLine, 0, sizeof(currentLine)); 
	lineNum++;
}

void yyerror(const char* msg) {
    fprintf(stderr, "Error: %s\n", msg);
}
