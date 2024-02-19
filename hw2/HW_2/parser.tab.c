
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
int yylex();
void yyerror(const char* msg);


/* Line 189 of yacc.c  */
#line 80 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 182 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   632

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNRULES -- Number of states.  */
#define YYNSTATES  321

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    12,    14,    16,    19,
      21,    23,    26,    30,    33,    35,    37,    39,    41,    43,
      45,    49,    53,    55,    57,    59,    63,    67,    72,    77,
      80,    84,    86,    89,    91,    95,    99,   101,   103,   105,
     109,   114,   118,   123,   128,   133,   137,   142,   146,   149,
     153,   158,   160,   163,   165,   170,   174,   177,   179,   182,
     185,   187,   191,   193,   197,   200,   202,   206,   209,   210,
     213,   215,   217,   219,   221,   223,   225,   228,   230,   234,
     236,   240,   242,   246,   248,   252,   254,   258,   260,   264,
     266,   270,   274,   276,   280,   284,   288,   292,   294,   298,
     302,   304,   308,   312,   316,   318,   321,   324,   327,   329,
     331,   333,   335,   337,   339,   344,   348,   353,   357,   360,
     363,   365,   367,   369,   373,   375,   377,   379,   381,   385,
     387,   391,   393,   397,   399,   403,   407,   409,   413,   417,
     421,   425,   427,   431,   435,   437,   441,   445,   449,   451,
     454,   457,   460,   462,   467,   471,   474,   477,   479,   481,
     483,   487,   489,   493,   501,   507,   515,   517,   520,   522,
     525,   530,   534,   536,   538,   542,   548,   556,   563,   571,
     578,   586,   589,   592,   595
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      62,     0,    -1,    63,    81,    -1,    -1,    63,    64,    -1,
      81,    -1,    66,    -1,    66,    -1,    65,    66,    -1,    67,
      -1,    75,    -1,    68,    27,    -1,    68,    71,    27,    -1,
      70,    69,    -1,     6,    -1,     5,    -1,     3,    -1,     4,
      -1,    47,    -1,    72,    -1,    71,    28,    72,    -1,    73,
      20,    82,    -1,    73,    -1,    74,    -1,    53,    -1,    32,
      73,    33,    -1,    74,    32,    33,    -1,    74,    32,    88,
      33,    -1,    74,    32,    87,    33,    -1,    76,    27,    -1,
      76,    77,    27,    -1,    69,    -1,    69,    76,    -1,    78,
      -1,    77,    28,    78,    -1,    79,    20,    82,    -1,    79,
      -1,    80,    -1,    53,    -1,    32,    79,    33,    -1,    80,
      30,    56,    31,    -1,    80,    32,    33,    -1,    80,    32,
      88,    33,    -1,    80,    32,    87,    33,    -1,    76,    79,
      65,    90,    -1,    76,    79,    90,    -1,    36,    79,    65,
      90,    -1,    36,    79,    90,    -1,    34,    35,    -1,    34,
      83,    35,    -1,    34,    83,    28,    35,    -1,    97,    -1,
      84,    82,    -1,    82,    -1,    83,    28,    84,    82,    -1,
      83,    28,    82,    -1,    85,    20,    -1,    86,    -1,    85,
      86,    -1,    29,    53,    -1,    53,    -1,    87,    28,    53,
      -1,    89,    -1,    88,    28,    89,    -1,    76,    79,    -1,
      76,    -1,    34,    91,    35,    -1,    63,    92,    -1,    -1,
      92,    93,    -1,    90,    -1,    94,    -1,   121,    -1,   127,
      -1,   128,    -1,    27,    -1,    95,    27,    -1,    96,    -1,
      95,    28,    96,    -1,    98,    -1,   105,    20,    96,    -1,
     110,    -1,   117,    20,    97,    -1,    99,    -1,    98,    22,
      99,    -1,   100,    -1,    99,    21,   100,    -1,   101,    -1,
     100,    25,   101,    -1,   102,    -1,   101,    18,   102,    -1,
     101,    19,   102,    -1,   103,    -1,   102,    16,   103,    -1,
     102,    17,   103,    -1,   102,    14,   103,    -1,   102,    15,
     103,    -1,   104,    -1,   103,     7,   104,    -1,   103,     8,
     104,    -1,   105,    -1,   104,     9,   105,    -1,   104,    10,
     105,    -1,   104,    11,   105,    -1,   107,    -1,    12,   105,
      -1,    13,   105,    -1,   106,   105,    -1,    25,    -1,    24,
      -1,     7,    -1,     8,    -1,    23,    -1,   108,    -1,   107,
      30,    95,    31,    -1,   107,    32,    33,    -1,   107,    32,
     120,    33,    -1,   107,    29,    53,    -1,   107,    12,    -1,
     107,    13,    -1,    53,    -1,   109,    -1,    54,    -1,    32,
      95,    33,    -1,    56,    -1,    57,    -1,    58,    -1,   111,
      -1,   110,    22,   111,    -1,   112,    -1,   111,    21,   112,
      -1,   113,    -1,   112,    25,   113,    -1,   114,    -1,   113,
      18,   114,    -1,   113,    19,   114,    -1,   115,    -1,   114,
      16,   115,    -1,   114,    17,   115,    -1,   114,    14,   115,
      -1,   114,    15,   115,    -1,   116,    -1,   115,     7,   116,
      -1,   115,     8,   116,    -1,   117,    -1,   116,     9,   117,
      -1,   116,    10,   117,    -1,   116,    11,   117,    -1,   118,
      -1,    12,   117,    -1,    13,   117,    -1,   106,   117,    -1,
     119,    -1,   118,    30,    56,    31,    -1,   118,    29,    53,
      -1,   118,    12,    -1,   118,    13,    -1,    53,    -1,   109,
      -1,    54,    -1,    32,    95,    33,    -1,    96,    -1,   120,
      28,    96,    -1,    41,    32,    95,    33,    93,    42,    93,
      -1,    41,    32,    95,    33,    93,    -1,    43,    32,    87,
      33,    34,   122,    35,    -1,   123,    -1,   123,   125,    -1,
     124,    -1,   123,   124,    -1,    51,   126,    26,    92,    -1,
      52,    26,    92,    -1,    56,    -1,    55,    -1,    59,    55,
      59,    -1,    39,    32,    95,    33,    93,    -1,    40,    93,
      39,    32,    95,    33,    27,    -1,    38,    32,    94,    94,
      33,    93,    -1,    38,    32,    94,    94,    95,    33,    93,
      -1,    38,    32,    66,    94,    33,    93,    -1,    38,    32,
      66,    94,    95,    33,    93,    -1,    46,    27,    -1,    45,
      27,    -1,    44,    27,    -1,    44,    95,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    22,    22,    25,    27,    31,    32,    36,    37,    41,
      42,    46,    47,    51,    55,    56,    57,    58,    63,    67,
      68,    72,    73,    77,    81,    82,    83,    84,    85,    89,
      90,    94,    95,   100,   101,   105,   106,   110,   114,   115,
     116,   117,   118,   119,   124,   125,   126,   127,   133,   134,
     135,   136,   140,   141,   142,   143,   147,   151,   152,   156,
     161,   162,   167,   168,   172,   173,   177,   181,   185,   187,
     191,   192,   193,   194,   195,   199,   200,   204,   205,   209,
     210,   214,   215,   219,   220,   224,   225,   229,   230,   234,
     235,   236,   240,   241,   242,   243,   244,   248,   249,   250,
     254,   255,   256,   257,   261,   262,   263,   264,   268,   269,
     270,   271,   272,   276,   277,   278,   279,   280,   281,   282,
     286,   287,   288,   289,   293,   294,   295,   299,   300,   304,
     305,   309,   310,   314,   315,   316,   320,   321,   322,   323,
     324,   328,   329,   330,   334,   335,   336,   337,   341,   342,
     343,   344,   348,   349,   350,   351,   352,   356,   357,   358,
     359,   364,   365,   369,   370,   371,   375,   376,   380,   381,
     385,   389,   393,   394,   395,   399,   400,   401,   402,   403,
     404,   408,   409,   410,   411
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE_INT", "TYPE_DOUBLE", "TYPE_BOOL",
  "TYPE_CHAR", "OP_PLUS", "OP_MINUS", "OP_MULTIPLE", "OP_DIVIDE",
  "OP_PERCENT", "OP_2PLUS", "OP_2MINUS", "OP_LESS", "OP_LE", "OP_GREATER",
  "OP_GE", "OP_2EQUAL", "OP_NE", "OP_EQUAL", "OP_AND", "OP_OR", "OP_NOT",
  "OP_POINTER", "OP_ADDR", "PUNC_COLON", "PUNC_SEMICOLON", "PUNC_COMMA",
  "PUNC_DOT", "PUNC_LBRACKET", "PUNC_RBRACKET", "PUNC_LPERAN",
  "PUNC_RPERAN", "PUNC_LBRACE", "PUNC_RBRACE", "KEY_VOID", "KEY_NULL",
  "KEY_FOR", "KEY_WHILE", "KEY_DO", "KEY_IF", "KEY_ELSE", "KEY_SWITCH",
  "KEY_RETURN", "KEY_BREAK", "KEY_CONTINUE", "KEY_CONST", "KEY_TRUE",
  "KEY_FALSE", "KEY_STRUCT", "KEY_CASE", "KEY_DEFAULT", "TOKEN_ID",
  "TOKEN_STRING", "TOKEN_CHAR", "TOKEN_INTEGER", "TOKEN_DOUBLE",
  "TOKEN_SCI", "TOKEN_SINGLE_QUOTE", "LOWER_THAN_ELSE", "$accept",
  "starting_unit", "zero_or_more_declaration", "external_declaration",
  "declaration_list", "declaration", "declaration_const",
  "declaration_specifiers_const", "type_specifier", "type_qualifier",
  "init_declarator_list_const", "init_declarator_const",
  "declarator_const", "direct_declarator_const", "declaration_no_const",
  "declaration_specifiers_no_const", "init_declarator_list_no_const",
  "init_declarator_no_const", "declarator_no_const",
  "direct_declarator_no_const", "function_definition", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "identifier_list", "parameter_list", "parameter_declaration",
  "compound_statement", "block_item_list", "zero_or_more_statement",
  "statement", "expression_statement", "expression",
  "assignment_expression", "assignment_expression_without_func",
  "logical_or_expression", "logical_and_expression", "and_expression",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "unary_operator",
  "postfix_expression", "primary_expression", "constant",
  "logical_or_expression_without_func",
  "logical_and_expression_without_func", "and_expression_without_func",
  "equality_expression_without_func", "relational_expression_without_func",
  "additive_expression_without_func",
  "multiplicative_expression_without_func",
  "unary_expression_without_func", "postfix_expression_without_func",
  "primary_expression_without_func", "argument_expression_list",
  "selection_statement", "switch_content", "one_or_more_case",
  "case_statement", "default_statement", "int_or_char_const",
  "iteration_statement", "jump_statement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    69,    69,    69,    69,    70,    71,
      71,    72,    72,    73,    74,    74,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    81,    82,    82,
      82,    82,    83,    83,    83,    83,    84,    85,    85,    86,
      87,    87,    88,    88,    89,    89,    90,    91,    92,    92,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    98,    98,    99,    99,   100,   100,   101,
     101,   101,   102,   102,   102,   102,   102,   103,   103,   103,
     104,   104,   104,   104,   105,   105,   105,   105,   106,   106,
     106,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   109,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   113,   114,   114,   114,   114,
     114,   115,   115,   115,   116,   116,   116,   116,   117,   117,
     117,   117,   118,   118,   118,   118,   118,   119,   119,   119,
     119,   120,   120,   121,   121,   121,   122,   122,   123,   123,
     124,   125,   126,   126,   126,   127,   127,   127,   127,   127,
     127,   128,   128,   128,   128
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     1,     2,     1,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     3,     3,     4,     4,     2,
       3,     1,     2,     1,     3,     3,     1,     1,     1,     3,
       4,     3,     4,     4,     4,     3,     4,     3,     2,     3,
       4,     1,     2,     1,     4,     3,     2,     1,     2,     2,
       1,     3,     1,     3,     2,     1,     3,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     4,     3,     4,     3,     2,     2,
       1,     1,     1,     3,     1,     1,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     2,
       2,     2,     1,     4,     3,     2,     2,     1,     1,     1,
       3,     1,     3,     7,     5,     7,     1,     2,     1,     2,
       4,     3,     1,     1,     3,     5,     7,     6,     7,     6,
       7,     2,     2,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,    16,    17,    15,    14,     0,    18,
       4,     6,     9,     0,    31,     0,    10,     0,     5,     0,
      38,     0,    37,    11,     0,    24,     0,    19,    22,    23,
      32,    13,    29,     0,    33,    36,     0,     3,     0,     7,
       0,    47,     0,     0,     0,    12,     0,     0,     0,    30,
       0,     0,     0,    45,    39,    68,     0,     8,    46,    36,
       0,    41,    60,    65,     0,     0,    62,    25,    20,   110,
     111,     0,     0,   112,   109,   108,     0,     0,   157,   159,
     124,   125,   126,    21,    51,     0,   158,    81,   127,   129,
     131,   133,   136,   141,   144,   148,   152,    26,     0,     0,
      34,    35,    44,     5,    67,    66,    40,    64,     0,    43,
       0,    42,   149,   150,     0,     0,     0,   120,   122,     0,
      77,    79,    83,    85,    87,    89,    92,    97,   100,     0,
     104,   113,   121,     0,    48,    53,     0,     0,     0,    57,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   155,   156,     0,     0,
      28,    27,    75,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    69,    71,     0,    72,    73,    74,    61,    63,
     105,   106,     0,     0,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   118,   119,     0,     0,     0,    59,     0,    49,    52,
      56,    58,   128,   144,   130,   132,   134,   135,   139,   140,
     137,   138,   142,   143,   145,   146,   147,    82,   154,     0,
       0,     0,     0,     0,     0,   183,     0,   182,   181,    76,
     123,    78,    84,   100,    86,    88,    90,    91,    95,    96,
      93,    94,    98,    99,   101,   102,   103,    80,   117,     0,
     115,   161,     0,    50,    55,     0,   153,     0,     0,     0,
       0,     0,     0,   184,   114,     0,   116,    54,     0,     0,
       0,     0,     0,     0,   162,     0,     0,     0,     0,   175,
       0,   164,     0,   179,     0,   177,     0,     0,     0,     0,
       0,   166,   168,   180,   178,   176,   163,   173,   172,     0,
       0,   165,     0,   169,   167,     0,    68,    68,   174,   170,
     171
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    10,    38,    11,    12,    13,    14,    15,
      26,    27,    28,    29,    16,    40,    33,    34,    59,    22,
      18,    83,   136,   137,   138,   139,    64,    65,    66,   171,
      56,   104,   172,   173,   174,   120,    84,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    87,
      88,    89,    90,    91,    92,    93,   213,    95,    96,   262,
     175,   300,   301,   302,   314,   310,   176,   177
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -221
static const yytype_int16 yypact[] =
{
    -221,    18,     3,  -221,  -221,  -221,  -221,  -221,   -21,  -221,
    -221,  -221,  -221,    -1,   216,   216,  -221,     1,    29,   -21,
    -221,   224,   175,  -221,    14,  -221,    50,  -221,    20,    26,
    -221,  -221,  -221,   183,  -221,   162,    41,  -221,   224,  -221,
       1,  -221,    36,    58,    52,  -221,    14,   397,    77,  -221,
     -21,   397,   224,  -221,  -221,     3,    98,  -221,  -221,    92,
     114,  -221,  -221,   -21,    23,    40,  -221,  -221,  -221,  -221,
    -221,   538,   538,  -221,  -221,  -221,   574,   345,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,   538,  -221,   131,   134,   145,
     195,   209,   228,   152,   163,   146,  -221,  -221,    42,    56,
    -221,  -221,  -221,  -221,   293,  -221,  -221,  -221,   124,  -221,
     216,  -221,  -221,  -221,   574,   574,   574,  -221,  -221,    60,
    -221,   173,   169,   179,   198,   217,   249,   267,   188,   574,
     168,  -221,  -221,   215,  -221,  -221,     7,   397,    -7,  -221,
    -221,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   538,   538,   538,  -221,  -221,   226,   227,
    -221,  -221,  -221,   277,   280,   293,   287,   289,   411,   295,
     296,  -221,  -221,  -221,   239,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,   106,   574,  -221,   574,   574,   574,   574,   574,
     574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
    -221,  -221,  -221,   271,   574,   449,  -221,   359,  -221,  -221,
    -221,  -221,   134,  -221,   145,   195,   209,   209,   228,   228,
     228,   228,   152,   152,  -221,  -221,  -221,  -221,  -221,   297,
     257,   574,   290,   574,   273,  -221,   263,  -221,  -221,  -221,
    -221,  -221,   169,  -221,   179,   198,   217,   217,   249,   249,
     249,   249,   267,   267,  -221,  -221,  -221,  -221,  -221,   -16,
    -221,  -221,   107,  -221,  -221,   397,  -221,   463,   463,   109,
     298,   123,   141,  -221,  -221,   574,  -221,  -221,   501,   515,
     293,   574,   293,   301,  -221,   293,   156,   293,   159,  -221,
     166,   299,   291,  -221,   293,  -221,   293,   313,   293,   147,
     308,   241,  -221,  -221,  -221,  -221,  -221,  -221,  -221,   300,
     318,  -221,   319,  -221,  -221,   302,  -221,  -221,  -221,   293,
     293
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,   311,  -221,   321,   -18,  -221,  -221,   339,  -221,
    -221,   314,   335,  -221,  -221,   130,  -221,   312,    -3,  -221,
     309,   -50,  -221,   171,  -221,   225,   -46,   317,   265,    34,
    -221,   -22,  -144,  -220,   -40,  -146,   218,  -221,   191,   199,
     194,   108,    82,   104,    57,   -47,  -221,  -221,   -28,  -221,
     245,   247,   244,   158,   139,   157,    -6,  -221,  -221,  -221,
    -221,  -221,  -221,    89,  -221,  -221,  -221,  -221
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      85,   101,    98,    39,    85,    21,     4,     5,     6,     7,
     268,    19,   183,   210,    35,   274,    36,    39,     3,    86,
      57,   232,   133,    86,    85,    85,    23,   135,    32,    -2,
      85,    24,    20,    19,    57,   207,   119,   241,    85,     8,
      47,    94,   208,    86,    86,    94,    24,   278,   279,    86,
       9,   108,    25,   257,    20,    41,   109,    86,    48,   261,
     107,     4,     5,     6,     7,   112,   113,    25,   110,    53,
     108,    94,    58,   111,    54,   160,   182,    45,    46,   140,
       4,     5,     6,     7,   110,    67,   102,   209,   183,   161,
      85,    61,    60,   184,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      97,    62,    51,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,   236,   284,
      62,    94,    17,   105,   183,   275,   289,   183,   291,   240,
     276,   293,   280,   295,    30,   106,   224,   225,   226,    94,
     303,   183,   304,   141,   306,   142,   282,   264,   156,   157,
      85,   152,   153,   154,   259,     4,     5,     6,     7,   108,
     143,   180,   181,    63,   283,   158,   159,   178,    63,    86,
     201,   202,    51,   155,   183,    17,   200,   183,   272,   294,
     186,   269,   296,   271,   183,   185,    37,   203,   204,   297,
     205,    94,   307,   308,   187,    42,   309,    43,   199,     9,
      49,    50,   267,   144,   145,   277,   188,   189,    85,     4,
       5,     6,     7,   146,   147,   148,   149,     4,     5,     6,
       7,   190,   191,   192,   193,   150,   151,    86,   286,   288,
      63,   290,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   254,   255,   256,   194,   195,    37,    94,
       4,     5,     6,     7,    69,    70,   239,   183,   206,   114,
     115,     9,   248,   249,   250,   251,   196,   197,   198,   228,
      73,    74,    75,   229,   162,   218,   219,   220,   221,   116,
     273,   183,   299,   312,   319,   320,   246,   247,   252,   253,
      69,    70,   216,   217,     9,   114,   115,   222,   223,   230,
     117,   118,   231,    80,    81,    82,    73,    74,    75,   233,
     162,   234,   237,   238,   258,   116,    62,    37,   266,   270,
     281,   163,   164,   165,   166,   292,   167,   168,   169,   170,
     305,   298,   299,   311,   316,   317,   117,   118,    55,    80,
      81,    82,    69,    70,    31,   315,    52,    71,    72,    44,
      68,   318,   100,   211,   103,    99,    69,    70,    73,    74,
      75,    71,    72,   227,   133,   179,   242,    76,   265,    77,
     134,   245,    73,    74,    75,   244,   212,   215,   133,   214,
     313,    76,     0,    77,   263,     0,     0,     0,    78,    79,
       0,    80,    81,    82,    69,    70,     0,     0,     0,    71,
      72,     0,    78,    79,     0,    80,    81,    82,    69,    70,
      73,    74,    75,   114,   115,     0,     0,     0,     0,    76,
       0,    77,     0,     0,    73,    74,    75,     0,   235,     0,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
      78,    79,     0,    80,    81,    82,    69,    70,     0,     0,
       0,   114,   115,     0,   117,   118,     0,    80,    81,    82,
      69,    70,    73,    74,    75,   114,   115,     0,     0,     0,
       0,   116,   260,     0,     0,     0,    73,    74,    75,     0,
     162,     0,     0,     0,     0,   116,     0,     0,     0,     0,
       0,     0,   117,   118,     0,    80,    81,    82,    69,    70,
       0,     0,     0,   114,   115,     0,   117,   118,     0,    80,
      81,    82,    69,    70,    73,    74,    75,   114,   115,     0,
       0,     0,     0,   116,   285,     0,     0,     0,    73,    74,
      75,     0,     0,     0,     0,    69,    70,   116,   287,     0,
      71,    72,     0,     0,   117,   118,     0,    80,    81,    82,
       0,    73,    74,    75,     0,     0,     0,     0,   117,   118,
      76,    80,    81,    82,     0,     0,     0,     0,     0,     0,
       0,    69,    70,     0,     0,     0,   114,   115,     0,     0,
       0,    78,    79,     0,    80,    81,    82,    73,    74,    75,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,     0,
      80,    81,    82
};

static const yytype_int16 yycheck[] =
{
      47,    51,    48,    21,    51,     8,     3,     4,     5,     6,
     230,    32,    28,    20,    17,    31,    19,    35,     0,    47,
      38,   165,    29,    51,    71,    72,    27,    77,    27,     0,
      77,    32,    53,    32,    52,    28,    76,   183,    85,    36,
      20,    47,    35,    71,    72,    51,    32,   267,   268,    77,
      47,    28,    53,   199,    53,    21,    33,    85,    32,   205,
      63,     3,     4,     5,     6,    71,    72,    53,    28,    35,
      28,    77,    38,    33,    33,    33,   116,    27,    28,    85,
       3,     4,     5,     6,    28,    33,    52,   137,    28,    33,
     137,    33,    56,    33,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   137,
      33,    53,    20,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   168,   275,
      53,   137,     2,    35,    28,    28,   280,    28,   282,    33,
      33,   285,    33,   287,    14,    31,   152,   153,   154,   155,
     294,    28,   296,    22,   298,    21,    33,   207,    12,    13,
     207,     9,    10,    11,   204,     3,     4,     5,     6,    28,
      25,   114,   115,    43,    33,    29,    30,    53,    48,   207,
      12,    13,    20,    20,    28,    55,   129,    28,   234,    33,
      21,   231,    33,   233,    28,    22,    34,    29,    30,    33,
      32,   207,    55,    56,    25,    30,    59,    32,    20,    47,
      27,    28,   230,    18,    19,   265,    18,    19,   265,     3,
       4,     5,     6,    14,    15,    16,    17,     3,     4,     5,
       6,    14,    15,    16,    17,     7,     8,   265,   278,   279,
     110,   281,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,     7,     8,    34,   265,
       3,     4,     5,     6,     7,     8,    27,    28,    53,    12,
      13,    47,   190,   191,   192,   193,     9,    10,    11,    53,
      23,    24,    25,    56,    27,   146,   147,   148,   149,    32,
      27,    28,    51,    52,   316,   317,   188,   189,   194,   195,
       7,     8,   144,   145,    47,    12,    13,   150,   151,    32,
      53,    54,    32,    56,    57,    58,    23,    24,    25,    32,
      27,    32,    27,    27,    53,    32,    53,    34,    31,    39,
      32,    38,    39,    40,    41,    34,    43,    44,    45,    46,
      27,    42,    51,    35,    26,    26,    53,    54,    37,    56,
      57,    58,     7,     8,    15,    55,    35,    12,    13,    24,
      46,    59,    50,   138,    55,    48,     7,     8,    23,    24,
      25,    12,    13,   155,    29,   110,   185,    32,   207,    34,
      35,   187,    23,    24,    25,   186,   141,   143,    29,   142,
     301,    32,    -1,    34,    35,    -1,    -1,    -1,    53,    54,
      -1,    56,    57,    58,     7,     8,    -1,    -1,    -1,    12,
      13,    -1,    53,    54,    -1,    56,    57,    58,     7,     8,
      23,    24,    25,    12,    13,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    23,    24,    25,    -1,    27,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    56,    57,    58,     7,     8,    -1,    -1,
      -1,    12,    13,    -1,    53,    54,    -1,    56,    57,    58,
       7,     8,    23,    24,    25,    12,    13,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    23,    24,    25,    -1,
      27,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    56,    57,    58,     7,     8,
      -1,    -1,    -1,    12,    13,    -1,    53,    54,    -1,    56,
      57,    58,     7,     8,    23,    24,    25,    12,    13,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,     7,     8,    32,    33,    -1,
      12,    13,    -1,    -1,    53,    54,    -1,    56,    57,    58,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    53,    54,
      32,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,    53,    54,    -1,    56,    57,    58,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      56,    57,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,    63,     0,     3,     4,     5,     6,    36,    47,
      64,    66,    67,    68,    69,    70,    75,    76,    81,    32,
      53,    79,    80,    27,    32,    53,    71,    72,    73,    74,
      76,    69,    27,    77,    78,    79,    79,    34,    65,    66,
      76,    90,    30,    32,    73,    27,    28,    20,    32,    27,
      28,    20,    65,    90,    33,    63,    91,    66,    90,    79,
      56,    33,    53,    76,    87,    88,    89,    33,    72,     7,
       8,    12,    13,    23,    24,    25,    32,    34,    53,    54,
      56,    57,    58,    82,    97,   106,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,    33,    87,    88,
      78,    82,    90,    81,    92,    35,    31,    79,    28,    33,
      28,    33,   117,   117,    12,    13,    32,    53,    54,    95,
      96,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    29,    35,    82,    83,    84,    85,    86,
     117,    22,    21,    25,    18,    19,    14,    15,    16,    17,
       7,     8,     9,    10,    11,    20,    12,    13,    29,    30,
      33,    33,    27,    38,    39,    40,    41,    43,    44,    45,
      46,    90,    93,    94,    95,   121,   127,   128,    53,    89,
     105,   105,    95,    28,    33,    22,    21,    25,    18,    19,
      14,    15,    16,    17,     7,     8,     9,    10,    11,    20,
     105,    12,    13,    29,    30,    32,    53,    28,    35,    82,
      20,    86,   111,   117,   112,   113,   114,   114,   115,   115,
     115,   115,   116,   116,   117,   117,   117,    97,    53,    56,
      32,    32,    93,    32,    32,    27,    95,    27,    27,    27,
      33,    96,    99,   105,   100,   101,   102,   102,   103,   103,
     103,   103,   104,   104,   105,   105,   105,    96,    53,    95,
      33,    96,   120,    35,    82,    84,    31,    66,    94,    95,
      39,    95,    87,    27,    31,    28,    33,    82,    94,    94,
      33,    32,    33,    33,    96,    33,    95,    33,    95,    93,
      95,    93,    34,    93,    33,    93,    33,    33,    42,    51,
     122,   123,   124,    93,    93,    27,    93,    55,    56,    59,
     126,    35,    52,   124,   125,    55,    26,    26,    59,    92,
      92
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1773 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 413 "parser.y"

int main(){
	yyparse();
	printf("No syntax error!\n");
	return 0;
}


