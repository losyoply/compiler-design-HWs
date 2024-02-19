
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OP = 258,
     NUL = 259,
     BREAK = 260,
     CONTINUE = 261,
     RET = 262,
     FOR = 263,
     DO = 264,
     WHILE = 265,
     SWITCH = 266,
     CASE = 267,
     DEFAULT = 268,
     VOID = 269,
     TYPE = 270,
     ID = 271,
     CHAR = 272,
     STRING = 273,
     CONST = 274,
     COMMA = 275,
     SEMICOLON = 276,
     COLON = 277,
     LOGIC_OR = 278,
     LOGIC_AND = 279,
     BITWISE_OR = 280,
     BITWISE_AND = 281,
     EQUAL = 282,
     N_EQUAL = 283,
     G_EQUAL = 284,
     L_EQUAL = 285,
     GREATER = 286,
     LESS = 287,
     MINUS = 288,
     PLUS = 289,
     MUL = 290,
     DIV = 291,
     MOD = 292,
     NEG = 293,
     INC = 294,
     DEC = 295,
     L_BRKT = 296,
     R_BRKT = 297,
     L_CURV = 298,
     R_CURV = 299,
     L_PARA = 300,
     R_PARA = 301,
     IF = 302,
     ELSE = 303,
     ASSIGN = 304,
     INTEGER = 305,
     DOUBLE = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 24 "parser.y"

    int inte;
    double doub;
    char* str;



/* Line 1676 of yacc.c  */
#line 111 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


