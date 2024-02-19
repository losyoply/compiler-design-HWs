%{

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "parser.tab.h"


int lineNum = 1;
bool pragmaSource = true;
bool pragmaToken = true;
char *tokenType="A";
int debug = 0;
void printToken();
void newLine();

%}

/* Definitions */

SHORT	("short"|"long")
SIGN		("signed"|"unsigned")
MACROS		("__COUNTER__"|"__LINE__"|"INT_MAX"|"INT_MIN"|"CHAR_MAX"|"CHAR_MIN"|"MAX"|"MIN")
IDENTIFIER	([_a-zA-Z][_a-zA-Z0-9]*)
SOURCE_ON	([\ \t]*"#"[\ \t]*"pragma"[\ \t]*"source"[\ \t]*"on"[\ \t]*"\n")
SOURCE_OFF	([\ \t]*"#"[\ \t]*"pragma"[\ \t]*"source"[\ \t]*"off"[\ \t]*"\n")
TOKEN_ON	([\ \t]*"#"[\ \t]*"pragma"[\ \t]*"token"[\ \t]*"on"[\ \t]*"\n")
TOKEN_OFF	([\ \t]*"#"[\ \t]*"pragma"[\ \t]*"token"[\ \t]*"off"[\ \t]*"\n")

/* INTEGER		([-+]?[0-9]+)*/
/* FLOAT		([-+]?[0-9]*\.[0-9]+|[-+]?[0-9]+\.[0-9]*)*/

/*SCI_NOTATION	([0-9]*\.[0-9]+|[0-9]+\.[0-9]*)([eE][\+\-]?[0-9]+)*/

/*CHARACTER (("'\\n'"|"'\\t'"|"'\\0'")|('[^'\\]')|"'\\\\'")*/
/*STRING		(\"[^\"\n]*\")*/
SINGLE_COMMENT	(\/\/.*)


%x		COMMENT
%x		SINGLE_COMMENT

%%
{SOURCE_ON}	{;}
{SOURCE_OFF}	{printf("hi");}
{TOKEN_ON}	{;}
{TOKEN_OFF}	{;}

[\n]		{;}
[ \t\r]+	{; }
"long long" {yylval.str = strdup("longlong"); return SHORT;}
{SHORT} {yylval.str = strdup(yytext); return SHORT;}
{SIGN} {yylval.str = strdup(yytext); return SIGN;}
void {      yylval.str = strdup(yytext); return TYPE;}
int {       yylval.str = strdup(yytext); return TYPE;}
double {    yylval.str = strdup(yytext); return TYPE;}
float {     yylval.str = strdup(yytext); return TYPE;}
char {      yylval.str = strdup(yytext); return TYPE;}
const {     yylval.str = strdup(yytext); return CONST; }
NULL {   yylval.inte = atoi("0"); return INTEGER;   }
for {        yylval.str = strdup(yytext); return FOR;}
do {         yylval.str = strdup(yytext); return DO;}
while {      yylval.str = strdup(yytext); return WHILE;}
break {      yylval.str = strdup(yytext); return BREAK;}
continue {   yylval.str = strdup(yytext); return CONTINUE;}
if {         yylval.str = strdup(yytext); return IF;}
else {       yylval.str = strdup(yytext); return ELSE;}
return {     yylval.str = strdup(yytext); return RET;}
struct {   }
switch {     yylval.str = strdup(yytext); return SWITCH;}
case {       yylval.str = strdup(yytext); return CASE;}
default {    yylval.str = strdup(yytext); return DEFAULT;}
{IDENTIFIER}	{  yylval.str = strdup(yytext); return ID;}

"<<" {yylval.str = strdup(yytext); return OP;}
">>" {yylval.str = strdup(yytext); return OP;}
"++" {  yylval.str = strdup(yytext); return INC;}
"--" {  yylval.str = strdup(yytext); return DEC;}
"==" {  yylval.str = strdup(yytext); return EQUAL; }
"<=" {  yylval.str = strdup(yytext); return L_EQUAL; }
">=" {  yylval.str = strdup(yytext); return G_EQUAL; }
"!=" {  yylval.str = strdup(yytext); return N_EQUAL; }
"&&" {  yylval.str = strdup(yytext); return LOGIC_AND; }
"||" {  yylval.str = strdup(yytext); return LOGIC_OR; }
"+" {   yylval.str = strdup(yytext); return PLUS;}
"-" {   yylval.str = strdup(yytext); return MINUS;}
"*" {   yylval.str = strdup(yytext); return MUL;}
"/" {   yylval.str = strdup(yytext); return DIV;}
"%" {   yylval.str = strdup(yytext); return MOD;}
"<" {   yylval.str = strdup(yytext); return LESS; }
">" {   yylval.str = strdup(yytext); return GREATER; }
"=" {   yylval.str = strdup(yytext); return ASSIGN;}
"!" {   yylval.str = strdup(yytext); return NEG;}
"&" {   yylval.str = strdup(yytext); return BITWISE_AND; }
"|" {   yylval.str = strdup(yytext); return BITWISE_OR; }


":" {   yylval.str = strdup(yytext); return COLON;}
";" {   yylval.str = strdup(yytext); return SEMICOLON;}
"," {   yylval.str = strdup(yytext); return COMMA;}
"." {  }
"[" {   yylval.str = strdup(yytext); return L_BRKT;}
"]" {   yylval.str = strdup(yytext); return R_BRKT;}
"(" {   yylval.str = strdup(yytext); return L_PARA;}
")" {   yylval.str = strdup(yytext); return R_PARA;}
"{" {   yylval.str = strdup(yytext); return L_CURV;}
"}" {   yylval.str = strdup(yytext); return R_CURV;}
"~" {yylval.str = strdup(yytext); return OP;}
"^" {yylval.str = strdup(yytext); return OP;}

([0-9]+) {              yylval.inte = atoi(yytext); return INTEGER;}
([0-9]*)"."([0-9]+) {   yylval.doub = atof(yytext); return DOUBLE;}
([0-9]+)"."([0-9]*) {   yylval.doub = atof(yytext); return DOUBLE;}
\'([^\\\']|\\.)\' {     yylval.str = strdup(yytext); return CHAR;}
\"([^\\\"]|\\.)*\" {    yylval.str = strdup(yytext); return STRING;}





{SINGLE_COMMENT}	{ ; }
"/*"			{  BEGIN COMMENT; }
<COMMENT>"*/"		{  BEGIN INITIAL; }
<COMMENT>\n		{ ; }
<COMMENT>.		{; }

%%


int yywrap() {
	return 1;
}

// void printToken() {
// 	if(debug==0) return;
//     int len = strlen(yytext);
//     memcpy(currentLine + strlen(currentLine), yytext, len);
//     if (pragmaToken == 1) {
//         printf("#%s:", tokenType);
//         fwrite(yytext, sizeof(char), len, stdout);
//         putchar('\n');
//     }
// }
// void trim(char *s) {
//     int j;
//     for (j = strlen(s) - 1; j >= 0 && isspace(s[j]); j--);
//     // if (j >= 0) {
//     //     s[j + 1] = '\0';
//     // }
// 	s[j + 1] = '\0';
// }
// void newLine() {
// 	if(debug==0) return;
// 	// trim(currentLine);
// 	if (strcmp(tokenType, "pragmaSourceOn") == 0 || (strcmp(tokenType, "pragmaToken") == 0&&pragmaSource)) {
// 		// printf("%d:%s", lineNum, yytext);
// 	} 
// 	else if (pragmaSource) 
// 	{
// 		// printf("%d:%s\n", lineNum, currentLine);
// 	}
// 	memset(currentLine, 0, sizeof(currentLine)); 
// 	lineNum++;
// }

void yyerror(const char* msg) {
    fprintf(stderr, "Error: %s\n", msg);
}
