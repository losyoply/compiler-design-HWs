
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
     TYPE_INT = 258,
     TYPE_DOUBLE = 259,
     TYPE_BOOL = 260,
     TYPE_CHAR = 261,
     OP_PLUS = 262,
     OP_MINUS = 263,
     OP_MULTIPLE = 264,
     OP_DIVIDE = 265,
     OP_PERCENT = 266,
     OP_2PLUS = 267,
     OP_2MINUS = 268,
     OP_LESS = 269,
     OP_LE = 270,
     OP_GREATER = 271,
     OP_GE = 272,
     OP_2EQUAL = 273,
     OP_NE = 274,
     OP_EQUAL = 275,
     OP_AND = 276,
     OP_OR = 277,
     OP_NOT = 278,
     OP_POINTER = 279,
     OP_ADDR = 280,
     PUNC_COLON = 281,
     PUNC_SEMICOLON = 282,
     PUNC_COMMA = 283,
     PUNC_DOT = 284,
     PUNC_LBRACKET = 285,
     PUNC_RBRACKET = 286,
     PUNC_LPERAN = 287,
     PUNC_RPERAN = 288,
     PUNC_LBRACE = 289,
     PUNC_RBRACE = 290,
     KEY_VOID = 291,
     KEY_NULL = 292,
     KEY_FOR = 293,
     KEY_WHILE = 294,
     KEY_DO = 295,
     KEY_IF = 296,
     KEY_ELSE = 297,
     KEY_SWITCH = 298,
     KEY_RETURN = 299,
     KEY_BREAK = 300,
     KEY_CONTINUE = 301,
     KEY_CONST = 302,
     KEY_TRUE = 303,
     KEY_FALSE = 304,
     KEY_STRUCT = 305,
     KEY_CASE = 306,
     KEY_DEFAULT = 307,
     TOKEN_ID = 308,
     TOKEN_STRING = 309,
     TOKEN_CHAR = 310,
     TOKEN_INTEGER = 311,
     TOKEN_DOUBLE = 312,
     TOKEN_SCI = 313,
     TOKEN_SINGLE_QUOTE = 314,
     LOWER_THAN_ELSE = 315
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


