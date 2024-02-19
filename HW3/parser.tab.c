
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
#line 4 "parser.y"

  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  #include <math.h>
  #include "sym_table.h"
  

  #define CHAR_VAL 2147483647
  #define BOOL_VAL 2147483646
  #define STR_VAL 2147483645

  extern char *yytext; // The scanned token
  extern char line[1000];
  extern int numLines;

  typedef enum {false, true} bool; // Boolean algebra.

  FILE *f_asm; // File used for generating assembly code
  int yylex(void);  
  int yyerror(char *s)
  int varType; // Variable type
  char *delimiter = " +-*/=,;()"; // Used for strtok
  int maxRegNum = -1; // The max register number, -1: no register used
  int compExprNum = 0; // See how many expressions in the compare expression


/* Line 189 of yacc.c  */
#line 101 "parser.tab.c"

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
     INT_CONSTANT = 258,
     DOUB_CONSTANT = 259,
     CHAR_CONSTANT = 260,
     BOOL_CONSTANT = 261,
     STR_CONSTANT = 262,
     INTTYPE = 263,
     DOUBLETYPE = 264,
     CHARTYPE = 265,
     BOOLTYPE = 266,
     VOIDTYPE = 267,
     ID = 268,
     RETURN = 269,
     CONST = 270,
     IF = 271,
     ELSE = 272,
     SWITCH = 273,
     CASE = 274,
     DEFAULT = 275,
     WHILE = 276,
     DO = 277,
     FOR = 278,
     BREAK = 279,
     CONTINUE = 280,
     COMMENT_START = 281,
     COMMENT_SINGLE = 282,
     COMMENT_END = 283,
     PRAGMA = 284,
     DIGITALWRITE = 285,
     DELAY = 286,
     OROR = 287,
     ANDAND = 288,
     NOTEQUAL = 289,
     EQUALEQUAL = 290,
     MOREEQUAL = 291,
     LESSEQUAL = 292,
     MINUSMINUS = 293,
     PLUSPLUS = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 34 "parser.y"

         int intVal;
         double doubVal;
         char charVal;
         char *strVal;
       


/* Line 214 of yacc.c  */
#line 185 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "parser.tab.c"

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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNRULES -- Number of states.  */
#define YYNSTATES  462

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,     2,     2,    48,     2,     2,
      55,    56,    46,    44,    33,    45,    58,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    32,
      38,    34,    39,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    35,    36,    40,
      41,    42,    43,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    14,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    37,    41,    45,    49,
      54,    58,    60,    62,    66,    70,    72,    75,    80,    83,
      85,    89,    93,    96,   100,   102,   107,   111,   115,   117,
     120,   124,   128,   130,   134,   136,   138,   140,   142,   144,
     146,   148,   150,   152,   153,   164,   165,   175,   176,   186,
     187,   196,   197,   207,   208,   217,   218,   227,   228,   236,
     239,   241,   243,   246,   248,   250,   253,   255,   257,   260,
     262,   265,   267,   269,   271,   274,   276,   278,   280,   281,
     285,   287,   289,   290,   293,   295,   297,   299,   301,   304,
     307,   310,   312,   314,   316,   317,   321,   323,   325,   326,
     329,   331,   333,   335,   337,   339,   341,   344,   347,   350,
     352,   354,   356,   357,   361,   363,   365,   366,   369,   371,
     373,   375,   377,   379,   381,   383,   386,   389,   394,   400,
     403,   405,   409,   415,   420,   421,   422,   432,   433,   441,
     443,   444,   450,   454,   455,   463,   467,   470,   475,   477,
     482,   486,   491,   495,   499,   502,   503,   512,   513,   521,
     523,   524,   525,   537,   546,   547,   548,   562,   573,   574,
     575,   588,   598,   599,   600,   613,   623,   624,   625,   638,
     648,   652,   655,   658,   666,   672,   676,   678,   680,   683,
     685,   688,   691,   696,   700,   704,   708,   712,   716,   720,
     724,   728,   732,   736,   740,   744,   748,   751,   755,   759,
     762,   765,   769,   773,   775,   777,   780,   782,   785,   788,
     792,   796,   800,   804,   808,   812,   816,   820,   824,   828,
     832,   836,   839,   843,   847,   850,   853,   857,   861,   863,
     866,   868,   870,   872,   874,   876,   878,   880,   882,   884,
     886,   888,   890,   892,   894,   896,   898,   900,   902,   904,
     906,   908,   910,   912,   914,   916,   918
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      61,     0,    -1,    62,    83,    -1,    83,    -1,    62,    63,
      -1,    62,    66,    -1,    62,    83,    -1,    63,    -1,    66,
      -1,    83,    -1,    64,    -1,    65,    -1,    67,    -1,   152,
      -1,    29,    -1,    81,    68,    32,    -1,    81,    70,    32,
      -1,    81,    75,    32,    -1,    12,    75,    32,    -1,    15,
      81,    79,    32,    -1,    68,    33,    69,    -1,    69,    -1,
      13,    -1,    13,    34,   149,    -1,    70,    33,    71,    -1,
      71,    -1,    13,    72,    -1,    13,    72,    34,    74,    -1,
      72,    73,    -1,    73,    -1,    51,     3,    52,    -1,    53,
     150,    54,    -1,    53,    54,    -1,    75,    33,    76,    -1,
      76,    -1,    13,    55,    77,    56,    -1,    13,    55,    56,
      -1,    77,    33,    78,    -1,    78,    -1,    81,    13,    -1,
      81,    13,    72,    -1,    79,    33,    80,    -1,    80,    -1,
      13,    34,    82,    -1,     8,    -1,     9,    -1,    10,    -1,
      11,    -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,
       7,    -1,    -1,    81,    13,    55,    77,    56,    53,    84,
      93,   143,    54,    -1,    -1,    81,    13,    55,    56,    53,
      85,    93,   143,    54,    -1,    -1,    81,    13,    55,    77,
      56,    53,    86,   143,    54,    -1,    -1,    81,    13,    55,
      56,    53,    87,   143,    54,    -1,    -1,    12,    13,    55,
      77,    56,    53,    88,    92,    54,    -1,    -1,    12,    13,
      55,    56,    53,    89,    92,    54,    -1,    -1,    12,    13,
      55,    77,    56,    53,    90,    54,    -1,    -1,    12,    13,
      55,    56,    53,    91,    54,    -1,    95,    96,    -1,    95,
      -1,    96,    -1,    95,    98,    -1,    95,    -1,    98,    -1,
      95,   106,    -1,    95,    -1,   106,    -1,    95,    63,    -1,
      63,    -1,    96,    97,    -1,    97,    -1,    99,    -1,   143,
      -1,    98,    99,    -1,    99,    -1,   110,    -1,   113,    -1,
      -1,   114,   100,   119,    -1,   114,    -1,   121,    -1,    -1,
     101,   127,    -1,   131,    -1,   134,    -1,   146,    -1,   147,
      -1,    99,   152,    -1,    99,    29,    -1,   102,   103,    -1,
     103,    -1,   110,    -1,   113,    -1,    -1,   114,   104,   119,
      -1,   114,    -1,   121,    -1,    -1,   105,   127,    -1,   131,
      -1,   134,    -1,   143,    -1,   144,    -1,   146,    -1,   147,
      -1,   103,   152,    -1,   103,    29,    -1,   106,   107,    -1,
     107,    -1,   110,    -1,   113,    -1,    -1,   114,   108,   119,
      -1,   114,    -1,   121,    -1,    -1,   109,   127,    -1,   131,
      -1,   134,    -1,   143,    -1,   144,    -1,   145,    -1,   146,
      -1,   147,    -1,   107,   152,    -1,   107,    29,    -1,    13,
      34,   149,    32,    -1,    13,   111,    34,   149,    32,    -1,
     111,   112,    -1,   112,    -1,    51,   149,    52,    -1,    13,
      55,   148,    56,    32,    -1,    13,    55,    56,    32,    -1,
      -1,    -1,   118,    55,   149,    56,    53,   115,    92,   116,
      54,    -1,    -1,   118,    55,   149,    56,    53,   117,    54,
      -1,    16,    -1,    -1,    17,    53,   120,    92,    54,    -1,
      17,    53,    54,    -1,    -1,    18,    55,    13,    56,    53,
     122,   123,    -1,   124,   126,    54,    -1,   124,    54,    -1,
     124,   126,   124,   125,    -1,   125,    -1,    19,     3,    57,
     102,    -1,    19,     3,    57,    -1,    19,     5,    57,   102,
      -1,    19,     5,    57,    -1,    20,    57,   102,    -1,    20,
      57,    -1,    -1,   130,    55,   149,    56,    53,   128,    94,
      54,    -1,    -1,   130,    55,   149,    56,    53,   129,    54,
      -1,    21,    -1,    -1,    -1,    22,    53,   132,    94,   133,
      54,    21,    55,   149,    56,    32,    -1,    22,    53,    54,
      21,    55,   149,    56,    32,    -1,    -1,    -1,    23,    55,
     149,    32,   149,    32,   149,    56,    53,   135,    94,   136,
      54,    -1,    23,    55,   149,    32,   149,    32,   149,    56,
      53,    54,    -1,    -1,    -1,    23,    55,    32,   149,    32,
     149,    56,    53,   137,    94,   138,    54,    -1,    23,    55,
      32,   149,    32,   149,    56,    53,    54,    -1,    -1,    -1,
      23,    55,   149,    32,    32,   149,    56,    53,   139,    94,
     140,    54,    -1,    23,    55,   149,    32,    32,   149,    56,
      53,    54,    -1,    -1,    -1,    23,    55,   149,    32,   149,
      32,    56,    53,   141,    94,   142,    54,    -1,    23,    55,
     149,    32,   149,    32,    56,    53,    54,    -1,    14,   149,
      32,    -1,    24,    32,    -1,    25,    32,    -1,    30,    55,
     149,    33,   149,    56,    32,    -1,    31,    55,   149,    56,
      32,    -1,   148,    33,   149,    -1,   149,    -1,    82,    -1,
      45,    82,    -1,    13,    -1,    45,    13,    -1,    13,   111,
      -1,    13,    55,   148,    56,    -1,    13,    55,    56,    -1,
     149,    34,   149,    -1,   149,    44,   149,    -1,   149,    45,
     149,    -1,   149,    46,   149,    -1,   149,    47,   149,    -1,
     149,    48,   149,    -1,   149,    43,   149,    -1,   149,    42,
     149,    -1,   149,    41,   149,    -1,   149,    40,   149,    -1,
     149,    38,   149,    -1,   149,    39,   149,    -1,    37,   149,
      -1,   149,    36,   149,    -1,   149,    35,   149,    -1,   149,
      50,    -1,   149,    49,    -1,    55,   149,    56,    -1,   150,
      33,   151,    -1,   151,    -1,    82,    -1,    45,    82,    -1,
      13,    -1,    45,    13,    -1,    13,   111,    -1,   151,    34,
     151,    -1,   151,    44,   151,    -1,   151,    45,   151,    -1,
     151,    46,   151,    -1,   151,    47,   151,    -1,   151,    48,
     151,    -1,   151,    43,   151,    -1,   151,    42,   151,    -1,
     151,    41,   151,    -1,   151,    40,   151,    -1,   151,    38,
     151,    -1,   151,    39,   151,    -1,    37,   151,    -1,   151,
      36,   151,    -1,   151,    35,   151,    -1,   151,    50,    -1,
     151,    49,    -1,    55,   151,    56,    -1,    26,   153,    28,
      -1,    27,    -1,   153,   154,    -1,   154,    -1,    82,    -1,
      13,    -1,    33,    -1,    58,    -1,    32,    -1,    55,    -1,
      56,    -1,    51,    -1,    52,    -1,    53,    -1,    54,    -1,
      57,    -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,
      48,    -1,    34,    -1,    43,    -1,    42,    -1,    41,    -1,
      40,    -1,    38,    -1,    39,    -1,    37,    -1,    59,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    72,    76,    77,    78,    79,    80,    81,
      87,    88,    89,    90,    91,    95,    99,   103,   104,   108,
     112,   113,   117,   154,   183,   184,   188,   189,   193,   194,
     198,   202,   203,   207,   208,   212,   227,   245,   246,   250,
     271,   275,   276,   280,   289,   294,   299,   304,   314,   318,
     322,   326,   330,   340,   339,   370,   369,   400,   399,   428,
     427,   456,   455,   481,   480,   506,   505,   527,   526,   550,
     551,   552,   556,   557,   558,   562,   563,   564,   568,   569,
     575,   576,   580,   581,   585,   586,   590,   591,   593,   592,
     600,   605,   606,   606,   613,   614,   615,   616,   617,   618,
     622,   623,   627,   628,   630,   629,   637,   642,   643,   643,
     650,   651,   652,   653,   654,   655,   656,   657,   661,   662,
     666,   667,   669,   668,   676,   681,   682,   682,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   701,   721,   725,
     726,   730,   734,   747,   763,   772,   762,   779,   778,   794,
     802,   801,   810,   815,   814,   822,   827,   835,   837,   841,
     842,   843,   844,   848,   849,   854,   853,   869,   868,   886,
     894,   898,   893,   903,   908,   912,   907,   917,   919,   923,
     918,   928,   930,   934,   929,   939,   941,   945,   940,   950,
     954,   964,   968,   972,   980,   990,   991,   995,  1003,  1011,
    1030,  1051,  1055,  1059,  1063,  1069,  1090,  1111,  1132,  1153,
    1170,  1185,  1200,  1214,  1228,  1243,  1258,  1271,  1272,  1273,
    1274,  1275,  1284,  1285,  1289,  1290,  1291,  1292,  1293,  1294,
    1295,  1296,  1297,  1298,  1299,  1300,  1301,  1302,  1303,  1304,
    1305,  1306,  1307,  1308,  1309,  1310,  1311,  1317,  1318,  1322,
    1323,  1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,  1335,
    1336,  1337,  1338,  1339,  1340,  1341,  1342,  1343,  1344,  1345,
    1346,  1347,  1348,  1349,  1350,  1351,  1352
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_CONSTANT", "DOUB_CONSTANT",
  "CHAR_CONSTANT", "BOOL_CONSTANT", "STR_CONSTANT", "INTTYPE",
  "DOUBLETYPE", "CHARTYPE", "BOOLTYPE", "VOIDTYPE", "ID", "RETURN",
  "CONST", "IF", "ELSE", "SWITCH", "CASE", "DEFAULT", "WHILE", "DO", "FOR",
  "BREAK", "CONTINUE", "COMMENT_START", "COMMENT_SINGLE", "COMMENT_END",
  "PRAGMA", "DIGITALWRITE", "DELAY", "';'", "','", "'='", "OROR", "ANDAND",
  "'!'", "'<'", "'>'", "NOTEQUAL", "EQUALEQUAL", "MOREEQUAL", "LESSEQUAL",
  "'+'", "'-'", "'*'", "'/'", "'%'", "MINUSMINUS", "PLUSPLUS", "'['",
  "']'", "'{'", "'}'", "'('", "')'", "':'", "'.'", "'?'", "$accept",
  "program", "external", "var_declaration", "scalar_declaration",
  "array_declaration", "func_declaration", "const_declaration",
  "ID_declarations", "ID_declaration", "IDarr_declarations",
  "IDarr_declaration", "dcl_dimensions", "dcl_dimension", "arr_content",
  "IDfunc_declarations", "IDfunc_declaration", "parameters", "parameter",
  "IDconst_declarations", "IDconst_declaration", "NONVOIDTYPE", "CONSTANT",
  "func_definition", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7",
  "$@8", "func_contents", "func_contents_without_return",
  "func_contents_with_break_cont", "var_declarations", "func_statements",
  "func_statement", "func_statements_without_return",
  "func_statement_without_return", "$@9", "$@10",
  "func_statements_with_break", "func_statement_with_break", "$@11",
  "$@12", "func_statements_with_break_cont",
  "func_statement_with_break_cont", "$@13", "$@14", "simple_statement",
  "stm_dimensions", "stm_dimension", "func_invocation", "if_statement",
  "$@15", "$@16", "$@17", "if_keyword", "else_statement", "$@18",
  "switch_statement", "$@19", "switch_option", "case_statements",
  "case_statement", "default_statement", "while_statement", "$@20", "$@21",
  "while_keyword", "do_while_statement", "$@22", "$@23", "for_statement",
  "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31",
  "return_statement", "break_statement", "continue_statement",
  "digitalWrite_statement", "delay_statement", "expressions", "expression",
  "arr_expressions", "arr_expression", "COMMENT", "comment_contents",
  "comment_content", 0
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
     285,   286,    59,    44,    61,   287,   288,    33,    60,    62,
     289,   290,   291,   292,    43,    45,    42,    47,    37,   293,
     294,    91,    93,   123,   125,    40,    41,    58,    46,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    62,    62,    62,    62,
      63,    63,    63,    63,    63,    64,    65,    66,    66,    67,
      68,    68,    69,    69,    70,    70,    71,    71,    72,    72,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    81,    81,    81,    81,    82,    82,
      82,    82,    82,    84,    83,    85,    83,    86,    83,    87,
      83,    88,    83,    89,    83,    90,    83,    91,    83,    92,
      92,    92,    93,    93,    93,    94,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,    99,
      99,    99,   101,    99,    99,    99,    99,    99,    99,    99,
     102,   102,   103,   103,   104,   103,   103,   103,   105,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   106,   106,
     107,   107,   108,   107,   107,   107,   109,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   110,   110,   111,
     111,   112,   113,   113,   115,   116,   114,   117,   114,   118,
     120,   119,   119,   122,   121,   123,   123,   124,   124,   125,
     125,   125,   125,   126,   126,   128,   127,   129,   127,   130,
     132,   133,   131,   131,   135,   136,   134,   134,   137,   138,
     134,   134,   139,   140,   134,   134,   141,   142,   134,   134,
     143,   144,   145,   146,   147,   148,   148,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   150,   150,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     4,
       3,     1,     1,     3,     3,     1,     2,     4,     2,     1,
       3,     3,     2,     3,     1,     4,     3,     3,     1,     2,
       3,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,    10,     0,     9,     0,     9,     0,
       8,     0,     9,     0,     8,     0,     8,     0,     7,     2,
       1,     1,     2,     1,     1,     2,     1,     1,     2,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     0,     3,
       1,     1,     0,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     0,     3,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     0,     3,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     4,     5,     2,
       1,     3,     5,     4,     0,     0,     9,     0,     7,     1,
       0,     5,     3,     0,     7,     3,     2,     4,     1,     4,
       3,     4,     3,     3,     2,     0,     8,     0,     7,     1,
       0,     0,    11,     8,     0,     0,    13,    10,     0,     0,
      12,     9,     0,     0,    12,     9,     0,     0,    12,     9,
       3,     2,     2,     7,     5,     3,     1,     1,     2,     1,
       2,     2,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     2,
       2,     3,     3,     1,     1,     2,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     2,     2,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    44,    45,    46,    47,     0,     0,     0,   248,    14,
       0,     0,     7,    10,    11,     8,    12,     0,     9,    13,
       0,     0,    34,     0,    48,    49,    50,    51,    52,   252,
     255,   253,   268,   275,   273,   274,   272,   271,   270,   269,
     263,   264,   265,   266,   267,   258,   259,   260,   261,   256,
     257,   262,   254,   276,   251,     0,   250,     1,     4,     5,
       6,    22,     0,    21,     0,    25,     0,     0,    18,     0,
       0,     0,    42,   247,   249,     0,     0,     0,    26,    29,
      15,     0,    16,     0,    17,    36,     0,    38,     0,     0,
      33,     0,    19,     0,   199,     0,     0,     0,   197,    23,
       0,    36,     0,     0,    28,    22,    20,     0,    24,    63,
       0,    35,    39,     0,    43,    41,     0,     0,   201,   140,
     216,   200,   198,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   219,
      30,    55,    35,     0,    27,    92,     0,    37,    61,    40,
      36,     0,     0,   203,     0,   196,   139,   221,   204,   218,
     217,   214,   215,   213,   212,   211,   210,   205,   206,   207,
     208,   209,    92,     0,    53,   226,     0,     0,    32,     0,
     224,     0,   223,     0,     0,   149,     0,     0,     0,     0,
       0,    79,     0,     0,    70,    71,    81,    82,     0,    86,
      87,    90,     0,    91,    94,    95,    83,    96,    97,    68,
      92,     0,    35,   141,     0,   202,     0,    73,    74,    85,
       0,    92,     0,   228,   241,   227,   225,     0,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   245,   244,     0,     0,     0,     0,
       0,   170,     0,     0,     0,    22,    64,    78,    69,    80,
      99,    98,   169,    93,     0,     0,     0,     0,    66,   195,
       0,    72,    84,    60,     0,     0,   246,   222,   229,   243,
     242,   239,   240,   238,   237,   236,   235,   230,   231,   232,
     233,   234,     0,     0,     0,     0,   190,     0,     0,   126,
       0,     0,     0,     0,     0,     0,    89,     0,    62,    56,
       0,    58,   137,   143,     0,     0,     0,     0,     0,     0,
     171,    76,    77,   119,     0,   120,   121,   124,   125,   128,
     129,   130,   131,   132,   133,   134,     0,     0,     0,     0,
       0,   150,     0,    54,   142,   138,   153,     0,   191,   192,
       0,    75,   118,   136,   135,   127,     0,     0,     0,     0,
       0,   194,     0,   152,    92,   144,     0,     0,     0,   123,
       0,     0,     0,     0,   165,     0,    92,     0,     0,   154,
       0,   158,     0,     0,     0,     0,     0,     0,   193,   126,
       0,   151,   145,   148,     0,     0,     0,   156,     0,   173,
       0,   178,   182,   186,     0,     0,   168,     0,   160,   162,
     164,   155,     0,     0,   181,   126,   185,   126,   189,   126,
     174,   166,   146,   159,   101,     0,   102,   103,   106,   107,
     110,   111,   112,   113,   114,   115,   161,   163,   157,     0,
       0,   179,   183,   187,   177,   126,   100,   117,   116,   109,
       0,   172,     0,     0,     0,   175,   105,   180,   184,   188,
       0,   176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,   191,    13,    14,    15,    16,    62,    63,
      64,    65,    78,    79,   144,    21,    22,    86,    87,    71,
      72,   192,    98,    18,   221,   172,   222,   173,   210,   145,
     211,   146,   193,   216,   320,   321,   195,   196,   218,   197,
     265,   198,   423,   424,   450,   425,   322,   323,   356,   324,
     199,   118,   119,   200,   201,   376,   407,   377,   202,   306,
     364,   203,   366,   379,   412,   381,   398,   263,   389,   390,
     264,   204,   299,   350,   205,   445,   460,   415,   452,   417,
     453,   419,   454,   331,   332,   333,   207,   208,   154,   155,
     181,   182,    19,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -350
static const yytype_int16 yypact[] =
{
     447,  -350,  -350,  -350,  -350,     5,   245,   606,  -350,  -350,
      23,   447,  -350,  -350,  -350,  -350,  -350,    20,    45,  -350,
      22,   140,  -350,    73,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,   549,  -350,  -350,  -350,  -350,
      96,    65,   180,  -350,   184,  -350,   189,    19,  -350,    85,
      76,   194,  -350,  -350,  -350,   710,   109,    27,    79,  -350,
    -350,   106,  -350,   124,  -350,    69,   -17,  -350,   151,   114,
    -350,   433,  -350,    73,   102,   710,   310,   710,  -350,  1260,
     130,   131,    33,   133,  -350,    92,  -350,   141,  -350,   142,
     245,   148,   141,    94,  -350,  -350,   710,   202,   159,  -350,
    1320,  -350,  -350,   864,   710,   710,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   710,   710,   710,  -350,  -350,
    -350,   200,   166,   664,  -350,   842,   170,  -350,   174,   141,
    -350,    34,  1073,  -350,    51,  1260,  -350,  -350,  1260,  1292,
    1320,   493,   493,   493,   493,   493,   493,   498,   498,   182,
     182,   182,   866,   220,   224,   159,   732,   462,  -350,   732,
    -350,   -20,  1277,    90,   710,  -350,   191,   197,   204,   205,
     206,  -350,   229,   190,   818,  1244,  -350,   125,   243,  -350,
    -350,   251,   214,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
     842,   216,  -350,  -350,   710,  -350,   220,   741,   483,   125,
     217,   866,   220,   159,  1333,  -350,  -350,   883,   732,  -350,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,  -350,  -350,   710,   396,    87,  1092,
     260,   222,   675,   710,   710,    98,  -350,  -350,  1244,  -350,
    -350,  -350,  -350,  -350,   219,   258,   710,   226,  -350,  1260,
     227,   483,   125,  -350,   220,   232,  -350,  1277,  1277,  1307,
    1333,   576,   576,   576,   576,   576,   576,   568,   568,   187,
     187,   187,  1111,   256,    62,   710,  -350,   235,   278,   794,
     710,  1130,  1243,   902,   710,   247,  -350,   921,  -350,  -350,
     253,  -350,  -350,  -350,   277,  1149,   259,   263,   288,   289,
    -350,   770,  1225,   161,   243,  -350,  -350,   307,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  1168,   689,   710,   294,
     940,   273,   275,  -350,  -350,  -350,  -350,   710,  -350,  -350,
     281,  1225,   161,  -350,  -350,  -350,   258,   710,   710,  1187,
     959,  -350,   276,  -350,   842,   283,   313,   978,   334,  -350,
     997,  1016,   629,   302,   304,   308,   842,   311,    14,  -350,
     -11,  -350,   324,   309,   315,   316,   318,  1035,  -350,   794,
     312,  -350,  -350,  -350,   317,   322,   325,  -350,    54,  -350,
     710,   321,   330,   332,   319,   336,  -350,   340,   280,   280,
     280,  -350,   221,  1054,  -350,   794,  -350,   794,  -350,   794,
     343,  -350,  -350,   280,   171,   243,  -350,  -350,   371,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,   280,   280,  -350,   313,
     374,  -350,  -350,  -350,  -350,   794,   171,  -350,  -350,  -350,
     258,  -350,   353,   354,   356,  -350,  -350,  -350,  -350,  -350,
     357,  -350
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -350,  -350,  -350,     1,  -350,  -350,   403,  -350,  -350,   335,
    -350,   337,   303,   -68,  -350,   404,   358,   -45,   320,  -350,
     338,    15,   108,   412,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -208,   208,  -345,  -141,   248,  -187,   230,  -124,
    -350,  -350,  -161,  -277,  -350,  -350,   122,  -311,  -350,  -350,
    -275,   -52,  -112,  -234,   -56,  -350,  -350,  -350,  -350,  -349,
    -350,   -32,  -350,  -350,    78,    36,    37,  -319,  -350,  -350,
    -350,     9,  -350,  -350,    71,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -131,  -243,  -350,    74,   113,   203,   -75,
    -350,   333,  -194,  -350,   398
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -168
static const yytype_int16 yytable[] =
{
      99,    12,   267,   261,   194,   355,   156,   369,   259,   396,
     104,   352,    58,   228,   206,    17,   110,   394,    20,   395,
     120,    23,   123,    57,   325,   261,    17,     1,     2,     3,
       4,   217,   102,    61,   229,     1,     2,     3,     4,   111,
     352,   152,   220,   397,   405,    -3,   325,   325,   219,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   206,   206,   326,   110,   110,   151,   194,
     441,   259,   442,   378,   443,    85,   325,    67,   261,   206,
     217,   104,    88,   101,   214,   270,    70,   326,   326,   142,
     212,   275,    88,   219,   272,   214,    -2,   219,    89,    75,
     455,   456,     1,     2,     3,     4,   449,   215,   411,   249,
      91,   156,   100,   103,   325,    54,    76,   326,   314,   105,
      77,   295,   109,   223,   246,    88,    75,   206,    88,   354,
      76,   248,    75,   426,   426,   426,   156,   107,   116,   269,
     325,   116,   325,   310,   325,   247,   446,   272,   426,    76,
     150,     7,     8,   116,   260,   326,   375,   117,   354,   446,
     446,   426,   426,    54,   112,   433,   433,   433,   392,   113,
     325,   292,    68,    69,   427,   427,   427,   301,   302,   303,
     433,   326,   140,   326,   141,   326,   143,     7,     8,   427,
     353,   307,    76,   433,   433,   257,   -67,     7,     8,   114,
     447,   148,   427,   427,   122,    24,    25,    26,    27,    28,
     116,   326,    80,    81,   -59,    94,    82,    83,   257,   174,
     315,    84,    69,   194,   209,   336,    92,    93,   -65,   340,
     448,   138,   139,   206,   184,   194,   244,   245,   -57,    95,
     378,   396,   255,   327,   256,   206,   250,    96,   436,   437,
     251,   180,   448,     1,     2,     3,     4,    97,   153,   252,
     253,   254,   359,   360,   262,   327,   327,   328,   -88,   266,
     268,   273,   367,   297,   304,   305,   298,   432,   432,   432,
     308,   309,   370,   371,   180,   226,   311,   180,   313,   328,
     328,   316,   432,   183,   184,   327,   185,   387,   186,   317,
     341,  -108,   187,   188,   318,   432,   432,   343,   329,   344,
     189,   190,   346,    24,    25,    26,    27,    28,   347,   328,
     348,   349,   257,   121,  -122,   413,   361,   363,   365,   374,
     329,   329,   378,   327,   388,   368,   180,  -147,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   428,   428,   428,   383,   399,   328,  -167,   327,
     329,   327,   391,   327,   400,   393,   406,   428,   401,   402,
     330,   403,   420,   334,   408,   414,   429,   429,   429,   409,
     428,   428,   410,   328,   416,   328,   418,   328,  -104,   327,
     421,   429,   330,   330,   422,   334,   334,   444,   329,    24,
      25,    26,    27,    28,   429,   429,   451,   457,   458,    94,
     459,   461,   335,   328,    59,   149,   106,   430,   430,   430,
     108,    66,   330,    60,   329,   334,   329,    90,   329,   274,
     147,   115,   430,    95,   335,   335,    24,    25,    26,    27,
      28,    96,   258,   351,   380,   430,   430,   271,   438,   439,
     294,    97,   293,    74,   329,     1,     2,     3,     4,     5,
     330,     0,     6,   334,   335,    24,    25,    26,    27,    28,
       0,     0,     0,     7,     8,   225,     9,     0,     0,   431,
     431,   431,   434,   434,   434,     0,   330,     0,   330,   334,
     330,   334,     0,   334,   431,     0,   183,   434,     0,   185,
       0,   186,   335,     0,   -92,   187,   188,   431,   431,   224,
     434,   434,   227,   189,   190,     0,   330,     0,     0,   334,
       0,   435,   435,   435,     0,     0,     0,     0,   335,     0,
     335,     0,   335,     0,     0,     0,   435,   133,   134,   135,
     136,   137,   138,   139,   135,   136,   137,   138,   139,   435,
     435,     0,    24,    25,    26,    27,    28,     0,   335,     0,
       0,   277,    29,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    73,     0,     0,
       0,    30,    31,    32,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     0,     0,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    24,
      25,    26,    27,    28,   241,   242,   243,   244,   245,    29,
     239,   240,   241,   242,   243,   244,   245,     0,     0,     0,
       0,     0,    24,    25,    26,    27,    28,     0,    30,    31,
      32,     0,    94,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    95,    24,    25,    26,
      27,    28,     0,     0,    96,     0,     0,   175,    24,    25,
      26,    27,    28,     0,    97,   386,     0,     0,    94,     0,
       0,     0,    24,    25,    26,    27,    28,     0,     0,     0,
       0,   176,    94,     0,     0,     0,     0,   300,     0,   177,
       0,     0,    95,    24,    25,    26,    27,    28,   178,   179,
      96,   358,     0,    94,     0,     0,    95,     0,     0,     0,
      97,     0,     0,     0,    96,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    97,   175,     0,    95,     0,     1,
       2,     3,     4,     0,   183,    96,     6,   185,     0,   186,
       0,     0,   -92,   187,   188,    97,     0,     7,     8,   176,
       9,   189,   190,     0,     0,     0,     0,   177,     1,     2,
       3,     4,     0,   183,   184,     6,   185,   179,   186,     0,
       0,  -126,   187,   188,   318,   319,     7,     8,     0,     9,
     189,   190,     1,     2,     3,     4,     0,   183,   184,     6,
     185,     0,   186,     0,     0,     0,   187,   188,   318,   319,
       7,     8,     0,     9,   189,   190,     1,     2,     3,     4,
       0,   183,   184,     6,   185,     0,   186,     0,     0,   -92,
     187,   188,     0,     0,     7,     8,     0,     9,   189,   190,
       1,     2,     3,     4,     0,   183,   184,     6,   185,     0,
     186,     0,     0,     0,   187,   188,     0,     0,     7,     8,
       0,     9,   189,   190,     1,     2,     3,     4,     0,   183,
       0,     6,   185,     0,   186,     0,     0,     0,   187,   188,
       0,     0,     7,     8,     0,     9,   189,   190,   124,   125,
     126,     0,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,     0,     0,   230,   231,   232,
     157,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,     0,   124,   125,   126,   276,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,     0,   124,   125,   126,   339,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,     0,   124,   125,   126,   342,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,     0,     0,   124,   125,   126,   362,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,     0,   124,   125,   126,   373,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,     0,
       0,   124,   125,   126,   382,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     0,     0,
     124,   125,   126,   384,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,     0,     0,   124,
     125,   126,   385,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     0,     0,   124,   125,
     126,   404,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,     0,     0,   124,   125,   126,
     440,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   296,   213,   124,   125,   126,     0,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   312,     0,   124,   125,   126,     0,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   337,     0,   124,   125,   126,     0,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   345,     0,   124,   125,   126,     0,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     357,     0,   124,   125,   126,     0,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   372,
       0,   124,   125,   126,     0,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   183,   184,
       0,   185,     0,   186,     0,     0,  -126,   187,   188,   318,
     319,     0,     0,     0,     0,   189,   190,   183,   184,     0,
     185,     0,   186,     0,     0,   -92,   187,   188,     0,     0,
       0,     0,     0,     0,   189,   190,   338,   124,   125,   126,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   124,   125,   126,     0,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   230,   231,   232,     0,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   126,     0,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   232,     0,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245
};

static const yytype_int16 yycheck[] =
{
      75,     0,   210,   197,   145,   324,   118,   356,   195,    20,
      78,   322,    11,    33,   145,     0,    33,     3,    13,     5,
      95,     6,    97,     0,   299,   219,    11,     8,     9,    10,
      11,   172,    77,    13,    54,     8,     9,    10,    11,    56,
     351,   116,   173,    54,   389,     0,   321,   322,   172,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   194,   195,   299,    33,    33,   113,   210,
     415,   258,   417,    19,   419,    56,   351,    55,   272,   210,
     221,   149,    67,    56,    33,   216,    13,   321,   322,    56,
      56,   222,    77,   217,   218,    33,     0,   221,    13,    34,
     445,   450,     8,     9,    10,    11,   425,    56,    54,   184,
      34,   223,     3,    34,   389,     7,    51,   351,    56,    13,
      55,    34,    53,   175,    34,   110,    34,   258,   113,   323,
      51,   183,    34,   408,   409,   410,   248,    13,    51,   214,
     415,    51,   417,   274,   419,    55,   423,   271,   423,    51,
      56,    26,    27,    51,    29,   389,   364,    55,   352,   436,
     437,   436,   437,    55,    13,   408,   409,   410,   376,    55,
     445,   246,    32,    33,   408,   409,   410,   252,   253,   254,
     423,   415,    52,   417,    53,   419,    53,    26,    27,   423,
      29,   266,    51,   436,   437,   194,    54,    26,    27,    91,
      29,    53,   436,   437,    96,     3,     4,     5,     6,     7,
      51,   445,    32,    33,    14,    13,    32,    33,   217,    53,
     295,    32,    33,   364,    54,   300,    32,    33,    54,   304,
     424,    49,    50,   364,    14,   376,    49,    50,    14,    37,
      19,    20,    13,   299,    54,   376,    55,    45,   409,   410,
      53,   143,   446,     8,     9,    10,    11,    55,    56,    55,
      55,    55,   337,   338,    21,   321,   322,   299,    17,    55,
      54,    54,   347,    13,    55,    17,    54,   408,   409,   410,
      54,    54,   357,   358,   176,   177,    54,   179,    32,   321,
     322,    56,   423,    13,    14,   351,    16,   372,    18,    21,
      53,    21,    22,    23,    24,   436,   437,    54,   299,    32,
      30,    31,    53,     3,     4,     5,     6,     7,    55,   351,
      32,    32,   321,    13,    17,   400,    32,    54,    53,    53,
     321,   322,    19,   389,    32,    54,   228,    54,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   408,   409,   410,    21,    32,   389,    54,   415,
     351,   417,    54,   419,    55,    54,    54,   423,    53,    53,
     299,    53,    53,   299,    57,    54,   408,   409,   410,    57,
     436,   437,    57,   415,    54,   417,    54,   419,    17,   445,
      54,   423,   321,   322,    54,   321,   322,    54,   389,     3,
       4,     5,     6,     7,   436,   437,    32,    54,    54,    13,
      54,    54,   299,   445,    11,   112,    81,   408,   409,   410,
      83,    17,   351,    11,   415,   351,   417,    69,   419,   221,
     110,    93,   423,    37,   321,   322,     3,     4,     5,     6,
       7,    45,   194,   321,   366,   436,   437,   217,   412,   412,
     247,    55,    56,    55,   445,     8,     9,    10,    11,    12,
     389,    -1,    15,   389,   351,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    26,    27,    13,    29,    -1,    -1,   408,
     409,   410,   408,   409,   410,    -1,   415,    -1,   417,   415,
     419,   417,    -1,   419,   423,    -1,    13,   423,    -1,    16,
      -1,    18,   389,    -1,    21,    22,    23,   436,   437,   176,
     436,   437,   179,    30,    31,    -1,   445,    -1,    -1,   445,
      -1,   408,   409,   410,    -1,    -1,    -1,    -1,   415,    -1,
     417,    -1,   419,    -1,    -1,    -1,   423,    44,    45,    46,
      47,    48,    49,    50,    46,    47,    48,    49,    50,   436,
     437,    -1,     3,     4,     5,     6,     7,    -1,   445,    -1,
      -1,   228,    13,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,    28,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     3,
       4,     5,     6,     7,    46,    47,    48,    49,    50,    13,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    32,    33,
      34,    -1,    13,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    37,     3,     4,     5,
       6,     7,    -1,    -1,    45,    -1,    -1,    13,     3,     4,
       5,     6,     7,    -1,    55,    56,    -1,    -1,    13,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    37,    13,    -1,    -1,    -1,    -1,    32,    -1,    45,
      -1,    -1,    37,     3,     4,     5,     6,     7,    54,    55,
      45,    32,    -1,    13,    -1,    -1,    37,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    45,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    55,    13,    -1,    37,    -1,     8,
       9,    10,    11,    -1,    13,    45,    15,    16,    -1,    18,
      -1,    -1,    21,    22,    23,    55,    -1,    26,    27,    37,
      29,    30,    31,    -1,    -1,    -1,    -1,    45,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    55,    18,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    31,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    31,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    -1,    18,    -1,    -1,    21,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    31,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    31,     8,     9,    10,    11,    -1,    13,
      -1,    15,    16,    -1,    18,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    34,    35,    36,
      56,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    34,    35,    36,    56,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    34,    35,    36,    56,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    34,    35,    36,    56,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    34,    35,    36,    56,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    34,    35,    36,    56,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    34,    35,    36,    56,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      34,    35,    36,    56,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    34,
      35,    36,    56,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    34,    35,
      36,    56,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    34,    35,    36,
      56,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    32,    52,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    32,    -1,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    32,    -1,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      32,    -1,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    13,    14,
      -1,    16,    -1,    18,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    13,    14,    -1,
      16,    -1,    18,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    10,    11,    12,    15,    26,    27,    29,
      61,    62,    63,    64,    65,    66,    67,    81,    83,   152,
      13,    75,    76,    81,     3,     4,     5,     6,     7,    13,
      32,    33,    34,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    82,   153,   154,     0,    63,    66,
      83,    13,    68,    69,    70,    71,    75,    55,    32,    33,
      13,    79,    80,    28,   154,    34,    51,    55,    72,    73,
      32,    33,    32,    33,    32,    56,    77,    78,    81,    13,
      76,    34,    32,    33,    13,    37,    45,    55,    82,   149,
       3,    56,    77,    34,    73,    13,    69,    13,    71,    53,
      33,    56,    13,    55,    82,    80,    51,    55,   111,   112,
     149,    13,    82,   149,    34,    35,    36,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      52,    53,    56,    53,    74,    89,    91,    78,    53,    72,
      56,    77,   149,    56,   148,   149,   112,    56,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,    85,    87,    53,    13,    37,    45,    54,    55,
      82,   150,   151,    13,    14,    16,    18,    22,    23,    30,
      31,    63,    81,    92,    95,    96,    97,    99,   101,   110,
     113,   114,   118,   121,   131,   134,   143,   146,   147,    54,
      88,    90,    56,    52,    33,    56,    93,    95,    98,    99,
     143,    84,    86,   111,   151,    13,    82,   151,    33,    54,
      34,    35,    36,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    34,    55,   111,   149,
      55,    53,    55,    55,    55,    13,    54,    63,    96,    97,
      29,   152,    21,   127,   130,   100,    55,    92,    54,   149,
     143,    98,    99,    54,    93,   143,    56,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   149,    56,   148,    34,    32,    13,    54,   132,
      32,   149,   149,   149,    55,    17,   119,   149,    54,    54,
     143,    54,    32,    32,    56,   149,    56,    21,    24,    25,
      94,    95,   106,   107,   109,   110,   113,   114,   121,   131,
     134,   143,   144,   145,   146,   147,   149,    32,    33,    56,
     149,    53,    56,    54,    32,    32,    53,    55,    32,    32,
     133,   106,   107,    29,   152,   127,   108,    32,    32,   149,
     149,    32,    56,    54,   120,    53,   122,   149,    54,   119,
     149,   149,    32,    56,    53,    92,   115,   117,    19,   123,
     124,   125,    56,    21,    56,    56,    56,   149,    32,   128,
     129,    54,    92,    54,     3,     5,    20,    54,   126,    32,
      55,    53,    53,    53,    56,    94,    54,   116,    57,    57,
      57,    54,   124,   149,    54,   137,    54,   139,    54,   141,
      53,    54,    54,   102,   103,   105,   110,   113,   114,   121,
     131,   134,   143,   144,   146,   147,   102,   102,   125,   126,
      56,    94,    94,    94,    54,   135,   103,    29,   152,   127,
     104,    32,   138,   140,   142,    94,   119,    54,    54,    54,
     136,    54
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
        case 22:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {
      char *id;
      int index, value;

      id = strtok((yyvsp[(1) - (1)].strVal), delimiter);
      install_symbol(id, varType);
      if (varType == CHAR_T)
      {
        set_symbol(id, CHAR_VAL);
      }
      else if (varType == BOOL_T)
      {
        set_symbol(id, BOOL_VAL);
      }
      else if (varType == STR_VAL)
      {
        set_symbol(id, STR_VAL);
      }
      else
      {
        set_symbol(id, 0);
      }
      index = look_up_symbol(id);
      value = table[index].value;
      if (index >= 0)
      {
        fprintf(f_asm, "  movi $r%d, %d\n", ++maxRegNum, value);
        fprintf(f_asm, "  swi $r%d, [$sp + (%d)]\n", maxRegNum, table[index].offset * 4);
        maxRegNum--;
      }
      else
      {
        fprintf(stderr, "Error at line %d: Variable %s is not declared or outside the compound statement\n", ++numLines, id);
        exit(1);
      }
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {
      char *id;
      int index, exprType;

      id = strtok((yyvsp[(1) - (3)].strVal), delimiter);
      install_symbol(id, varType);
      exprType = checkType((yyvsp[(3) - (3)].doubVal));
      if (varType != exprType)
      {
        fprintf(stderr, "Error at line %d: The type of the left should be the same as the type of the right\n", ++numLines);
        exit(1);
      }
      set_symbol(id, (yyvsp[(3) - (3)].doubVal));
      index = look_up_symbol(id);
      if (index >= 0)
      {
        fprintf(f_asm, "  swi $r%d, [$sp + (%d)]\n", maxRegNum, table[index].offset * 4);
        maxRegNum--;
      }
      else
      {
        fprintf(stderr, "Error at line %d: Variable %s is not declared or outside the compound statement\n", ++numLines, id);
        exit(1);
      }
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {
      char *id;
      int index;

      id = strtok((yyvsp[(1) - (4)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index >= 0)
      {
        fprintf(stderr, "Error at line %d: Function %s can only be declared once\n", ++numLines, id);
        exit(1);
      }
      install_symbol(id, FUNC_T);
      set_symbol(id, 0);
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    {
      char *id;
      int index;

      id = strtok((yyvsp[(1) - (3)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index >= 0)
      {
        fprintf(stderr, "Error at line %d: Function %s can only be declared once\n", ++numLines, id);
        exit(1);
      }
      install_symbol(id, FUNC_T);
      set_symbol(id, 0);
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    {
      char *id;
      int index;

      id = strtok((yyvsp[(2) - (2)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0)
      {
        install_symbol(id, varType);
        set_symbol(id, 1);
      }
      else
      {
        if (table[index].value != 1)
        {
          fprintf(stderr, "Error at line %d: Function's definition must match its declaration\n", ++numLines);
          exit(1);
        }
      }
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    {
      install_symbol((yyvsp[(1) - (3)].strVal), varType);
      set_symbol((yyvsp[(1) - (3)].strVal), (yyvsp[(3) - (3)].doubVal));
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    {
      varType = INT_T;
      (yyval.intVal) = INT_T;
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    {
      varType = DOUBLE_T;
      (yyval.intVal) = DOUBLE_T;
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 300 "parser.y"
    {
      varType = CHAR_T;
      (yyval.intVal) = CHAR_T;
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    {
      varType = BOOL_T;
      (yyval.intVal) = BOOL_T;
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    {
      (yyval.doubVal) = (yyvsp[(1) - (1)].intVal);
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 319 "parser.y"
    {
      (yyval.doubVal) = (yyvsp[(1) - (1)].doubVal);
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    {
      (yyval.doubVal) = CHAR_VAL;
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 327 "parser.y"
    {
      (yyval.doubVal) = BOOL_VAL;
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    {
      (yyval.doubVal) = STR_VAL;
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 340 "parser.y"
    {
      char *id;
      int index;

      cur_scope++;
      id = strtok((yyvsp[(2) - (6)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0 && strcmp(id, "main") != 0)
      {
        fprintf(stderr, "Error at line %d: Function %s's declaration must appear before its definition\n", ++numLines, id);
        exit(1);
      }
      if (table[index].value >= 1)
      {
        fprintf(stderr, "Error at line %d: Function %s can only be defined once\n", ++numLines, id);
        exit(1);
      }
      set_symbol(id, 1);
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    {
      if ((yyvsp[(1) - (10)].intVal) != (yyvsp[(9) - (10)].intVal))
      {
        fprintf(stderr, "Error at line %d: The return type should match the function's definition\n", ++numLines);
        exit(1);
      }
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 370 "parser.y"
    {
      char *id;
      int index;

      cur_scope++;
      id = strtok((yyvsp[(2) - (5)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0 && strcmp(id, "main") != 0)
      {
        fprintf(stderr, "Error at line %d: Function %s's declaration must appear before its definition\n", ++numLines, id);
        exit(1);
      }
      if (table[index].value >= 1)
      {
        fprintf(stderr, "Error at line %d: Function %s can only be defined once\n", ++numLines, id);
        exit(1);
      }
      set_symbol(id, 1);
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 390 "parser.y"
    {
      if ((yyvsp[(1) - (9)].intVal) != (yyvsp[(8) - (9)].intVal))
      {
        fprintf(stderr, "Error at line %d: The return type should match the function's definition\n", ++numLines);
        exit(1);
      }
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 400 "parser.y"
    {
      char *id;
      int index;

      cur_scope++;
      id = strtok((yyvsp[(2) - (6)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0 && strcmp(id, "main") != 0)
      {
        fprintf(stderr, "Error at line %d: Function %s's declaration must appear before its definition\n", ++numLines, id);
        exit(1);
      }
      if (table[index].value >= 1)
      {
        fprintf(stderr, "Error at line %d: Function %s can only be defined once\n", ++numLines, id);
        exit(1);
      }
      set_symbol(id, 1);
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 420 "parser.y"
    {
      if ((yyvsp[(1) - (9)].intVal) != (yyvsp[(8) - (9)].intVal))
      {
        fprintf(stderr, "Error at line %d: The return type should match the function's definition\n", ++numLines);
        exit(1);
      }
    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    {
      char *id;
      int index;

      cur_scope++;
      id = strtok((yyvsp[(2) - (5)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0 && strcmp(id, "main") != 0)
      {
        fprintf(stderr, "Error at line %d: Function %s's declaration must appear before its definition\n", ++numLines, id);
        exit(1);
      }
      if (table[index].value >= 1)
      {
        fprintf(stderr, "Error at line %d: Function %s can only be defined once\n", ++numLines, id);
        exit(1);
      }
      set_symbol(id, 1);
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 448 "parser.y"
    {
      if ((yyvsp[(1) - (8)].intVal) != (yyvsp[(7) - (8)].intVal))
      {
        fprintf(stderr, "Error at line %d: The return type should match the function's definition\n", ++numLines);
        exit(1);
      }
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 456 "parser.y"
    {
      char *id;
      int index;

      cur_scope++;
      id = strtok((yyvsp[(2) - (6)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0 && strcmp(id, "main") != 0)
      {
        fprintf(stderr, "Error at line %d: Function %s's declaration must appear before its definition\n", ++numLines, id);
        exit(1);
      }
      if (table[index].value >= 1)
      {
        fprintf(stderr, "Error at line %d: Function %s can only be defined once\n", ++numLines, id);
        exit(1);
      }
      set_symbol(id, 1);
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 476 "parser.y"
    {
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 481 "parser.y"
    {
      char *id;
      int index;

      cur_scope++;
      id = strtok((yyvsp[(2) - (5)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0 && strcmp(id, "main") != 0)
      {
        fprintf(stderr, "Error at line %d: Function %s's declaration must appear before its definition\n", ++numLines, id);
        exit(1);
      }
      if (table[index].value >= 1)
      {
        fprintf(stderr, "Error at line %d: Function %s can only be defined once\n", ++numLines, id);
        exit(1);
      }
      set_symbol(id, 1);
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 501 "parser.y"
    {
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 506 "parser.y"
    {
      char *id;
      int index;

      cur_scope++;
      id = strtok((yyvsp[(2) - (6)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0 && strcmp(id, "main") != 0)
      {
        fprintf(stderr, "Error at line %d: Function %s's declaration must appear before its definition\n", ++numLines, id);
        exit(1);
      }
      if (table[index].value >= 1)
      {
        fprintf(stderr, "Error at line %d: Function %s can only be defined once\n", ++numLines, id);
        exit(1);
      }
      set_symbol(id, 1);
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 527 "parser.y"
    {
      char *id;
      int index;

      cur_scope++;
      id = strtok((yyvsp[(2) - (5)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0 && strcmp(id, "main") != 0)
      {
        fprintf(stderr, "Error at line %d: Function %s's declaration must appear before its definition\n", ++numLines, id);
        exit(1);
      }
      if (table[index].value >= 1)
      {
        fprintf(stderr, "Error at line %d: Function %s can only be defined once\n", ++numLines, id);
        exit(1);
      }
      set_symbol(id, 1);
    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 593 "parser.y"
    {
      fprintf(f_asm, "out:\n");
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 597 "parser.y"
    {
      fprintf(f_asm, "out2:\n");
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 601 "parser.y"
    {
      fprintf(f_asm, "out:\n");
      fprintf(f_asm, "out2:\n");
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 606 "parser.y"
    {
      fprintf(f_asm, "loop:\n");
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 610 "parser.y"
    {
      fprintf(f_asm, "out:\n");
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 630 "parser.y"
    {
      fprintf(f_asm, "out:\n");
    ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 634 "parser.y"
    {
      fprintf(f_asm, "out2:\n");
    ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 638 "parser.y"
    {
      fprintf(f_asm, "out:\n");
      fprintf(f_asm, "out2:\n");
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 643 "parser.y"
    {
      fprintf(f_asm, "loop:\n");
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 647 "parser.y"
    {
      fprintf(f_asm, "out:\n");
    ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 669 "parser.y"
    {
      fprintf(f_asm, "out:\n");
    ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 673 "parser.y"
    {
      fprintf(f_asm, "out2:\n");
    ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 677 "parser.y"
    {
      fprintf(f_asm, "out:\n");
      fprintf(f_asm, "out2:\n");
    ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 682 "parser.y"
    {
      fprintf(f_asm, "loop:\n");
    ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 686 "parser.y"
    {
      fprintf(f_asm, "out:\n");
    ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 702 "parser.y"
    {
      char *id;
      int index;

      id = strtok((yyvsp[(1) - (4)].strVal), delimiter);
      set_symbol((yyvsp[(1) - (4)].strVal), (yyvsp[(3) - (4)].doubVal));
      index = look_up_symbol(id);
      if (index >= 0)
      {
        fprintf(f_asm, "  swi $r%d, [$sp + (%d)]\n", maxRegNum, table[index].offset * 4);
        maxRegNum--;
      }
      else
      {
        fprintf(stderr, "Error at line %d: Variable %s is not declared or outside the compound statement\n", ++numLines, id);
        exit(1);
      }

    ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 735 "parser.y"
    {
      char *id;
      int index;

      id = strtok((yyvsp[(1) - (5)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0)
      {
        fprintf(stderr, "Error at line %d: Function %s must be declared or defined before invoked\n", ++numLines, id);
        exit(1);
      }
    ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 748 "parser.y"
    {
      char *id;
      int index;

      id = strtok((yyvsp[(1) - (4)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index < 0)
      {
        fprintf(stderr, "Error at line %d: Function %s must be declared or defined before invoked\n", ++numLines, id);
        exit(1);
      }
    ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 763 "parser.y"
    {
      cur_scope++;
      if (compExprNum == 1)
      {
        fprintf(f_asm, "  beqz $r%d, out\n", maxRegNum);
      }
      maxRegNum--;
    ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 772 "parser.y"
    {
      fprintf(f_asm, "  j out2\n");
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 779 "parser.y"
    {
      cur_scope++;
      if (compExprNum == 1)
      {
        fprintf(f_asm, "  beqz $r%d, out\n", maxRegNum);
      }
      maxRegNum--;
      fprintf(f_asm, "  j out2\n");
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 795 "parser.y"
    {
      compExprNum = 0;
    ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 802 "parser.y"
    {
      cur_scope++;
    ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 806 "parser.y"
    {
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 815 "parser.y"
    {
      cur_scope++;
    ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 823 "parser.y"
    {
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 828 "parser.y"
    {
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 854 "parser.y"
    {
      cur_scope++;
      if (compExprNum == 1)
      {
        fprintf(f_asm, "  beqz $r%d, out\n", maxRegNum);
      }
      maxRegNum--;
    ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 863 "parser.y"
    {
      fprintf(f_asm, "  j loop\n");
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 869 "parser.y"
    {
      cur_scope++;
      if (compExprNum == 1)
      {
        fprintf(f_asm, "  beqz $r%d, out\n", maxRegNum);
      }
      maxRegNum--;
    ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 878 "parser.y"
    {
      fprintf(f_asm, "  j loop\n");
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 887 "parser.y"
    {
      compExprNum = 0;
    ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 894 "parser.y"
    {
      cur_scope++;
    ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 898 "parser.y"
    {
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 908 "parser.y"
    {
      cur_scope++;
    ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 912 "parser.y"
    {
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 919 "parser.y"
    {
      cur_scope++;
    ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 923 "parser.y"
    {
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 930 "parser.y"
    {
      cur_scope++;
    ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 934 "parser.y"
    {
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 941 "parser.y"
    {
      cur_scope++;
    ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 945 "parser.y"
    {
      pop_up_symbol(cur_scope);
      cur_scope--;
    ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 955 "parser.y"
    {
      int exprType = checkType((yyvsp[(2) - (3)].doubVal));

      (yyval.intVal) = exprType;
      maxRegNum--;
    ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 973 "parser.y"
    {
      fprintf(f_asm, "  bal	digitalWrite\n");
      maxRegNum = maxRegNum - 2;
    ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 981 "parser.y"
    {
      fprintf(f_asm, "  bal	delay\n");
      maxRegNum--;
    ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 996 "parser.y"
    {
      int num = (yyvsp[(1) - (1)].doubVal);

      (yyval.doubVal) = (yyvsp[(1) - (1)].doubVal);
      fprintf(f_asm, "  movi $r%d, %d\n", ++maxRegNum, num);
      compExprNum++;
    ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1004 "parser.y"
    {
      int num = -1 * (yyvsp[(2) - (2)].doubVal);

      (yyval.doubVal) = -1 * (yyvsp[(2) - (2)].doubVal);
      fprintf(f_asm, "  movi $r%d, %d\n", ++maxRegNum, num);
      compExprNum++;
    ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1012 "parser.y"
    {
      int index;
      char *id;

      id = strtok((yyvsp[(1) - (1)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index >= 0)
      {
        (yyval.doubVal) = table[index].value;
        fprintf(f_asm, "  lwi $r%d, [$sp + (%d)]\n", ++maxRegNum, table[index].offset * 4);
        compExprNum++;
      }
      else
      {
        fprintf(stderr, "Error at line %d: Variable %s is not declared or outside the compound statement\n", ++numLines, id);
        exit(1);
      }
    ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1031 "parser.y"
    {
      int index;
      char *id;

      id = strtok((yyvsp[(2) - (2)].strVal), delimiter);
      index = look_up_symbol(id);
      if (index >= 0)
      {
        (yyval.doubVal) = -1 * table[index].value;
        fprintf(f_asm, "  lwi $r%d, [$sp + (%d)]\n", ++maxRegNum, table[index].offset * 4);
        fprintf(f_asm, "  movi $r%d, -1\n", maxRegNum + 1);
        fprintf(f_asm, "  muli $r%d, $r%d, $r%d\n", maxRegNum, maxRegNum, maxRegNum + 1);
        compExprNum++;
      }
      else
      {
        fprintf(stderr, "Error at line %d: Variable %s is not declared or outside the compound statement\n", ++numLines, id);
        exit(1);
      }
    ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1052 "parser.y"
    {
      (yyval.doubVal) = 0;
    ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1056 "parser.y"
    {
      (yyval.doubVal) = 0;
    ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1060 "parser.y"
    {
      (yyval.doubVal) = 0;
    ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1064 "parser.y"
    {
      (yyvsp[(1) - (3)].doubVal) = (yyvsp[(3) - (3)].doubVal);
      (yyval.doubVal) = (yyvsp[(1) - (3)].doubVal);
      compExprNum++;
    ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1070 "parser.y"
    {
      int type1, type2;

      type1 = checkType((yyvsp[(1) - (3)].doubVal));
      type2 = checkType((yyvsp[(3) - (3)].doubVal));
      if (type1 != INT_T && type1 != DOUBLE_T && type2 != INT_T && type2 != DOUBLE_T)
      {
        fprintf(stderr, "Error at line %d: Operands' types must be either integer or double\n", ++numLines);
        exit(1);
      }
      if (type1 != type2)
      {
        fprintf(stderr, "Error at line %d: Operands' types must be the same\n", ++numLines);
        exit(1);
      }

      (yyval.doubVal) = (yyvsp[(1) - (3)].doubVal) + (yyvsp[(3) - (3)].doubVal);
      fprintf(f_asm, "  add $r%d, $r%d, $r%d\n", maxRegNum - 1, maxRegNum - 1, maxRegNum);
      maxRegNum--;
    ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1091 "parser.y"
    {
      int type1, type2;

      type1 = checkType((yyvsp[(1) - (3)].doubVal));
      type2 = checkType((yyvsp[(3) - (3)].doubVal));
      if (type1 != INT_T && type1 != DOUBLE_T && type2 != INT_T && type2 != DOUBLE_T)
      {
        fprintf(stderr, "Error at line %d: Operands' types must be either integer or double\n", ++numLines);
        exit(1);
      }
      if (type1 != type2)
      {
        fprintf(stderr, "Error at line %d: Operands' types must be the same\n", ++numLines);
        exit(1);
      }

      (yyval.doubVal) = (yyvsp[(1) - (3)].doubVal) - (yyvsp[(3) - (3)].doubVal);
      fprintf(f_asm, "  sub $r%d, $r%d, $r%d\n", maxRegNum - 1, maxRegNum - 1, maxRegNum);
      maxRegNum--;
    ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1112 "parser.y"
    {
      int type1, type2;

      type1 = checkType((yyvsp[(1) - (3)].doubVal));
      type2 = checkType((yyvsp[(3) - (3)].doubVal));
      if (type1 != INT_T && type1 != DOUBLE_T && type2 != INT_T && type2 != DOUBLE_T)
      {
        fprintf(stderr, "Error at line %d: Operands' types must be either integer or double\n", ++numLines);
        exit(1);
      }
      if (type1 != type2)
      {
        fprintf(stderr, "Error at line %d: Operands' types must be the same\n", ++numLines);
        exit(1);
      }

      (yyval.doubVal) = (yyvsp[(1) - (3)].doubVal) * (yyvsp[(3) - (3)].doubVal);
      fprintf(f_asm, "  mul $r%d, $r%d, $r%d\n", maxRegNum - 1, maxRegNum - 1, maxRegNum);
      maxRegNum--;
    ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1133 "parser.y"
    {
      int type1, type2;

      type1 = checkType((yyvsp[(1) - (3)].doubVal));
      type2 = checkType((yyvsp[(3) - (3)].doubVal));
      if (type1 != INT_T && type1 != DOUBLE_T && type2 != INT_T && type2 != DOUBLE_T)
      {
        fprintf(stderr, "Error at line %d: Operands' types must be either integer or double\n", ++numLines);
        exit(1);
      }
      if (type1 != type2)
      {
        fprintf(stderr, "Error at line %d: Operands' types must be the same\n", ++numLines);
        exit(1);
      }

      (yyval.doubVal) = (yyvsp[(1) - (3)].doubVal) / (yyvsp[(3) - (3)].doubVal);
      fprintf(f_asm, "  divsr $r%d, $r%d, $r%d, $r%d\n", maxRegNum - 1, maxRegNum, maxRegNum - 1, maxRegNum);
      maxRegNum--;
    ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1154 "parser.y"
    {
      int type1, type2;

      type1 = checkType((yyvsp[(1) - (3)].doubVal));
      type2 = checkType((yyvsp[(3) - (3)].doubVal));
      if (type1 != type2)
      {
        fprintf(stderr, "Error at line %d: Operands' types must be the same\n", ++numLines);
        exit(1);
      }
      if ((type1 != INT_T && type1 != DOUBLE_T) || (type2 != INT_T && type2 != DOUBLE_T))
      {
        fprintf(stderr, "Error at line %d: Operands' types must be either integer or double\n", ++numLines);
        exit(1);
      }
    ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1171 "parser.y"
    {
      if ((yyvsp[(1) - (3)].doubVal) <= (yyvsp[(3) - (3)].doubVal))
      {
        (yyval.doubVal) = 1;
      }
      else
      {
        (yyval.doubVal) = 0;
      }
      fprintf(f_asm, "  slt $r%d, $r%d, $r%d\n", maxRegNum - 1, maxRegNum, maxRegNum - 1);
      maxRegNum--;
      fprintf(f_asm, "  bnez $r%d, out\n", maxRegNum);
      compExprNum++;
    ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1186 "parser.y"
    {
      if ((yyvsp[(1) - (3)].doubVal) >= (yyvsp[(3) - (3)].doubVal))
      {
        (yyval.doubVal) = 1;
      }
      else
      {
        (yyval.doubVal) = 0;
      }
      fprintf(f_asm, "  slt $r%d, $r%d, $r%d\n", maxRegNum - 1, maxRegNum - 1, maxRegNum);
      maxRegNum--;
      fprintf(f_asm, "  bnez $r%d, out\n", maxRegNum);
      compExprNum++;
    ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1201 "parser.y"
    {
      if ((yyvsp[(1) - (3)].doubVal) == (yyvsp[(3) - (3)].doubVal))
      {
        (yyval.doubVal) = 1;
      }
      else
      {
        (yyval.doubVal) = 0;
      }
      fprintf(f_asm, "  bne $r%d, $r%d, out\n", maxRegNum - 1, maxRegNum);
      maxRegNum--;
      compExprNum++;
    ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1215 "parser.y"
    {
      if ((yyvsp[(1) - (3)].doubVal) != (yyvsp[(3) - (3)].doubVal))
      {
        (yyval.doubVal) = 1;
      }
      else
      {
        (yyval.doubVal) = 0;
      }
      fprintf(f_asm, "  beq $r%d, $r%d, out\n", maxRegNum - 1, maxRegNum);
      maxRegNum--;
      compExprNum++;
    ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1229 "parser.y"
    {
      if ((yyvsp[(1) - (3)].doubVal) < (yyvsp[(3) - (3)].doubVal))
      {
        (yyval.doubVal) = 1;
      }
      else
      {
        (yyval.doubVal) = 0;
      }
      fprintf(f_asm, "  slt $r%d, $r%d, $r%d\n", maxRegNum - 1, maxRegNum - 1, maxRegNum);
      maxRegNum--;
      fprintf(f_asm, "  beqz $r%d, out\n", maxRegNum);
      compExprNum++;
    ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1244 "parser.y"
    {
      if ((yyvsp[(1) - (3)].doubVal) > (yyvsp[(3) - (3)].doubVal))
      {
        (yyval.doubVal) = 1;
      }
      else
      {
        (yyval.doubVal) = 0;
      }
      fprintf(f_asm, "  slt $r%d, $r%d, $r%d\n", maxRegNum - 1, maxRegNum, maxRegNum - 1);
      maxRegNum--;
      fprintf(f_asm, "  beqz $r%d, out\n", maxRegNum);
      compExprNum++;
    ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1259 "parser.y"
    {
      if ((yyvsp[(2) - (2)].doubVal) != 0)
      {
        (yyval.doubVal) = 0;
      }
      else
      {
        (yyval.doubVal) = 1;
      }
      fprintf(f_asm, "  bnez $r%d, out\n", maxRegNum);
      compExprNum = compExprNum + 2;
    ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1276 "parser.y"
    {
      (yyval.doubVal) = (yyvsp[(2) - (3)].doubVal);
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 3424 "parser.tab.c"
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
#line 1355 "parser.y"


int checkType(double val)
{
  int type;

  if (fabs(round(val) - CHAR_VAL) <= 0.00001)
  {
    type = CHAR_T;
  }
  else if (fabs(round(val) - BOOL_VAL) <= 0.00001)
  {
    type = BOOL_T;
  }
  else if (fabs(round(val) - STR_VAL) <= 0.00001)
  {
    type = STR_T;
  }
  else if (fabs(round(val) - val) <= 0.00001)
  {
    type = INT_T;
  }
  else
  {
    type = DOUBLE_T;
  }
  return type;
}

int main()
{
  init_symbol_table();

  f_asm = fopen("assembly", "w");
  if (f_asm == NULL)
  {
    fprintf(stderr, "Can not open the file %s for writing.\n", "assembly");
  }
  fprintf(f_asm, "\n");

  yyparse();
  check_undefined_func();

  printf("No syntax error!\n");

  return 0;
}

int yyerror(char *s)
{
  fprintf(stderr, "*** Error at line %d: %s\n", ++numLines, line);
  fprintf(stderr, "\n");
  fprintf(stderr, "Unmatched token: %s\n", yytext);
  fprintf(stderr, "*** %s\n", s);
  exit(1);
}
