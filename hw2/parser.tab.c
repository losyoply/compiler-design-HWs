
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


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int yylex(void);
void yyerror(const char* msg);
char* int2chr(int);
char* dul2chr(double);
// char* str2chr(char *);
char* get_non_term0(const char *);
char* get_non_term1(const char *, char *);
char* get_non_term2(const char * ,char *, char *);
char* get_non_term3(const char * ,char *, char *, char *);
char* get_non_term4(const char * ,char *, char *, char *, char *);
char* get_non_term5(const char * ,char *, char *, char *, char *, char *);
char* get_non_term6(const char * ,char *, char *, char *, char *, char *, char *);
char* get_non_term7(const char * ,char *, char *, char *, char *, char *, char *, char *);
char* get_non_term8(const char * ,char *, char *, char *, char *, char *, char *, char *,char *);



/* Line 189 of yacc.c  */
#line 97 "parser.tab.c"

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

/* Line 214 of yacc.c  */
#line 24 "parser.y"

    int inte;
    double doub;
    char* str;



/* Line 214 of yacc.c  */
#line 192 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 204 "parser.tab.c"

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   347

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  229

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    14,    16,    18,
      21,    23,    25,    27,    29,    31,    33,    37,    40,    43,
      46,    48,    50,    54,    57,    60,    68,    74,    82,    89,
      92,    94,    99,   103,   107,   110,   116,   124,   130,   136,
     138,   139,   141,   143,   145,   149,   153,   157,   161,   166,
     172,   176,   178,   179,   182,   187,   191,   193,   197,   201,
     205,   207,   211,   213,   216,   219,   221,   225,   229,   231,
     235,   237,   241,   245,   247,   251,   253,   256,   260,   262,
     266,   268,   272,   274,   278,   280,   284,   286,   289,   293,
     297,   299,   303,   307,   311,   315,   317,   321,   323,   327,
     329,   332,   335,   338,   340,   343,   345,   347,   349,   353,
     355,   357,   359,   361,   363,   365,   367,   369,   374,   378,
     380,   381,   384,   386,   388,   390,   392,   394,   397,   399
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    53,    54,    -1,    54,    -1,    68,    -1,
      69,    -1,    73,    -1,    76,    -1,    84,    -1,    55,    56,
      -1,    56,    -1,    58,    -1,    59,    -1,    60,    -1,    63,
      -1,    64,    -1,     7,    87,    21,    -1,     7,    21,    -1,
       5,    21,    -1,     6,    21,    -1,    67,    -1,    57,    -1,
      43,    55,    44,    -1,    43,    44,    -1,    87,    21,    -1,
      47,    45,    87,    46,    57,    48,    57,    -1,    47,    45,
      87,    46,    57,    -1,    11,    45,    87,    46,    43,    61,
      44,    -1,    11,    45,    87,    46,    43,    44,    -1,    61,
      62,    -1,    62,    -1,    12,    87,    22,    55,    -1,    12,
      87,    22,    -1,    13,    22,    55,    -1,    13,    22,    -1,
      10,    45,    87,    46,    56,    -1,     9,    56,    10,    45,
      87,    46,    21,    -1,     8,    45,    65,    46,    56,    -1,
      66,    21,    66,    21,    66,    -1,    87,    -1,    -1,    73,
      -1,    76,    -1,    84,    -1,    15,    70,    57,    -1,    14,
      70,    57,    -1,    15,    70,    21,    -1,    14,    70,    21,
      -1,    16,    45,    71,    46,    -1,    35,    16,    45,    71,
      46,    -1,    71,    20,    72,    -1,    72,    -1,    -1,    15,
      16,    -1,    19,    15,    74,    21,    -1,    74,    20,    75,
      -1,    75,    -1,    16,    49,    87,    -1,    15,    77,    21,
      -1,    77,    20,    78,    -1,    78,    -1,    79,    49,    83,
      -1,    79,    -1,    16,    80,    -1,    80,    81,    -1,    81,
      -1,    41,    87,    42,    -1,    82,    20,    83,    -1,    83,
      -1,    43,    82,    44,    -1,    87,    -1,    15,    85,    21,
      -1,    85,    20,    86,    -1,    86,    -1,    16,    49,    87,
      -1,    16,    -1,    35,    16,    -1,   103,    49,    87,    -1,
      88,    -1,    88,    23,    89,    -1,    89,    -1,    89,    24,
      90,    -1,    90,    -1,    90,    25,    91,    -1,    91,    -1,
      91,    26,    92,    -1,    92,    -1,    26,    92,    -1,    92,
      27,    93,    -1,    92,    28,    93,    -1,    93,    -1,    93,
      31,    94,    -1,    93,    29,    94,    -1,    93,    32,    94,
      -1,    93,    30,    94,    -1,    94,    -1,    94,    98,    95,
      -1,    95,    -1,    95,    99,    96,    -1,    96,    -1,    38,
      96,    -1,    98,    96,    -1,   100,   103,    -1,    97,    -1,
     103,   100,    -1,   101,    -1,   103,    -1,   104,    -1,    45,
      87,    46,    -1,    34,    -1,    33,    -1,    35,    -1,    36,
      -1,    37,    -1,    39,    -1,    40,    -1,     3,    -1,   103,
      45,   102,    46,    -1,   102,    20,    87,    -1,    87,    -1,
      -1,    16,   105,    -1,    16,    -1,    50,    -1,    51,    -1,
      17,    -1,    18,    -1,   105,   106,    -1,   106,    -1,    41,
      87,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    71,    74,    75,    76,    77,    78,    81,
      84,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   100,   103,   108,   113,   114,   118,   121,   126,
     129,   132,   135,   138,   141,   145,   148,   153,   158,   163,
     164,   170,   171,   172,   175,   178,   183,   186,   191,   194,
     199,   202,   203,   206,   211,   216,   219,   222,   227,   233,
     236,   239,   242,   245,   250,   253,   256,   262,   265,   269,
     272,   275,   280,   283,   286,   289,   290,   293,   296,   299,
     302,   305,   308,   311,   314,   317,   320,   321,   324,   327,
     330,   333,   336,   339,   342,   345,   348,   351,   354,   357,
     360,   363,   366,   369,   372,   375,   378,   379,   382,   387,
     388,   391,   392,   393,   396,   397,   398,   401,   406,   409,
     410,   413,   416,   421,   422,   423,   424,   428,   429,   432
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OP", "NUL", "BREAK", "CONTINUE", "RET",
  "FOR", "DO", "WHILE", "SWITCH", "CASE", "DEFAULT", "VOID", "TYPE", "ID",
  "CHAR", "STRING", "CONST", "COMMA", "SEMICOLON", "COLON", "LOGIC_OR",
  "LOGIC_AND", "BITWISE_OR", "BITWISE_AND", "EQUAL", "N_EQUAL", "G_EQUAL",
  "L_EQUAL", "GREATER", "LESS", "MINUS", "PLUS", "MUL", "DIV", "MOD",
  "NEG", "INC", "DEC", "L_BRKT", "R_BRKT", "L_CURV", "R_CURV", "L_PARA",
  "R_PARA", "IF", "ELSE", "ASSIGN", "INTEGER", "DOUBLE", "$accept",
  "programs", "program", "stmts", "stmt", "comp_stmt", "stmt_expr",
  "stmt_if", "stmt_switch", "swth_clauses", "swth_clause", "stmt_while",
  "stmt_for", "for_ctnt", "expr_", "var_decl", "fn_def", "fn_decl",
  "fn_head", "fn_params", "fn_param", "const_decl", "const_idents",
  "const_ident", "array_decl", "arrays", "array_init", "array",
  "arr_brkts", "arr_brkt", "arr_ctnts", "arr_ctnt", "scalar_decl",
  "idents", "ident_init", "expr", "e_logic_or", "e_logic_and",
  "e_bitwise_or", "e_bitwise_and", "e_equal", "e_greater", "e_add_sub",
  "e_mul_div_mod", "e_unary", "e_top", "plus_minus", "mul_div_mod",
  "inc_dec", "call_fn", "params", "VAR", "LITER", "brkts_e", "brkt_e", 0
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    54,    54,    54,    55,
      55,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    62,    63,    63,    64,    65,    66,
      66,    67,    67,    67,    68,    68,    69,    69,    70,    70,
      71,    71,    71,    72,    73,    74,    74,    75,    76,    77,
      77,    78,    78,    79,    80,    80,    81,    82,    82,    83,
      83,    84,    85,    85,    86,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    92,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    98,
      98,    99,    99,    99,   100,   100,   100,   101,   102,   102,
     102,   103,   103,   104,   104,   104,   104,   105,   105,   106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     2,
       1,     1,     3,     2,     2,     7,     5,     7,     6,     2,
       1,     4,     3,     3,     2,     5,     7,     5,     5,     1,
       0,     1,     1,     1,     3,     3,     3,     3,     4,     5,
       3,     1,     0,     2,     4,     3,     1,     3,     3,     3,
       1,     3,     1,     2,     2,     1,     3,     3,     1,     3,
       1,     3,     3,     1,     3,     1,     2,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     1,     3,     1,
       2,     2,     2,     1,     2,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       0,     2,     1,     1,     1,     1,     1,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     0,     0,     0,    75,     0,     0,     0,    60,    62,
       0,    73,     0,     1,     2,    52,     0,    47,     0,    45,
       0,     0,    63,    65,    76,    46,    44,     0,    58,     0,
       0,    71,     0,     0,    56,     0,     0,    51,    52,   116,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   125,
     126,     0,   110,   109,     0,   114,   115,    23,     0,     0,
     123,   124,     0,    10,    21,    11,    12,    13,    14,    15,
      20,    41,    42,    43,     0,    78,    80,    82,    84,    86,
      90,    95,    97,    99,   103,     0,     0,   105,   106,   107,
       0,    74,    64,     0,    59,     0,    61,    70,    75,     0,
      72,     0,     0,    54,    53,     0,    48,     0,    18,    19,
      17,     0,    40,     0,     0,     0,    75,     0,   121,   128,
      87,   106,   100,     0,     0,    22,     9,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
     112,   113,     0,   101,   102,   120,     0,   104,    66,     0,
      68,    76,    57,    55,    50,    49,    16,     0,     0,    39,
       0,     0,     0,     0,   127,   108,     0,    79,    81,    83,
      85,    88,    89,    92,    94,    91,    93,    96,    98,   119,
       0,    77,     0,    69,     0,    40,     0,     0,     0,   129,
       0,     0,   117,    67,    37,     0,     0,    35,     0,    26,
     118,    40,     0,     0,     0,    28,     0,    30,     0,    38,
      36,     0,    34,    27,    29,    25,    32,    33,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    72,    73,    74,    75,    76,    77,   216,
     217,    78,    79,   167,   168,    80,     6,     7,    13,    46,
      47,    81,    43,    44,    82,    17,    18,    19,    32,    33,
     159,   106,    83,    20,    21,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,   152,    96,    97,
     190,    98,    99,   128,   129
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -214
static const yytype_int16 yypact[] =
{
     136,    -5,     5,    26,   124,  -214,  -214,  -214,  -214,  -214,
    -214,    10,    69,    29,    42,    74,    98,   153,  -214,    76,
     159,  -214,   130,  -214,  -214,   133,   109,  -214,     9,  -214,
     296,   296,   127,  -214,   109,  -214,  -214,   160,  -214,   119,
     105,  -214,   132,   175,  -214,   167,    31,  -214,   133,  -214,
     164,   187,   270,   152,   232,   174,   179,   114,   177,  -214,
    -214,    28,  -214,  -214,    28,  -214,  -214,  -214,   296,   180,
    -214,  -214,   183,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,   199,   206,   207,   211,   218,   176,
     181,   173,    96,  -214,  -214,    28,   216,  -214,    35,  -214,
     203,  -214,  -214,   127,  -214,   119,  -214,  -214,   197,   240,
    -214,   296,   130,  -214,  -214,   133,  -214,    51,  -214,  -214,
    -214,   236,   296,   249,   296,   296,    93,   296,   177,  -214,
     176,    78,  -214,   214,   296,  -214,  -214,  -214,   296,   296,
     296,    28,    28,    28,    28,    28,    28,    28,    28,  -214,
    -214,  -214,    28,  -214,  -214,   296,   296,  -214,  -214,    84,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,   215,   241,  -214,
     219,   217,   221,   226,  -214,  -214,   223,   207,   211,   218,
     176,   181,   181,   173,   173,   173,   173,    96,  -214,  -214,
      83,  -214,   119,  -214,   232,   296,   296,   232,   231,  -214,
     233,   296,  -214,  -214,  -214,   257,   234,  -214,    21,   237,
    -214,   296,   260,   296,   262,  -214,    45,  -214,   233,  -214,
    -214,   267,   232,  -214,  -214,  -214,   232,   232,   232
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -214,  -214,   286,  -213,   -50,   -13,  -214,  -214,  -214,  -214,
      77,  -214,  -214,  -214,  -125,  -214,  -214,  -214,   290,   246,
     182,   156,  -214,   186,   161,  -214,   258,  -214,  -214,   268,
    -214,  -100,   171,  -214,   261,   -29,  -214,   168,   163,   165,
     -53,    72,   108,   169,   -58,  -214,   -84,  -214,   -62,  -214,
    -214,   -32,  -214,  -214,   188
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      29,   100,   101,    36,   123,   160,   132,   148,   130,   227,
     107,    11,    49,   228,    50,    51,    52,    53,    54,    55,
      56,    14,   136,   121,    57,    58,    59,    60,     3,   131,
      12,    49,   131,   213,   214,    61,   157,   153,    49,   133,
      15,    22,    62,    63,    58,    59,    60,    64,    65,    66,
      27,   115,    28,    67,    68,    25,    69,   213,   214,    70,
      71,    62,    63,   131,   154,   215,    64,    65,    66,   157,
     205,   115,    28,    68,    65,    66,   107,   116,    70,    71,
     155,    49,   162,    30,   156,    26,   219,    25,   180,   223,
      34,    31,   203,   169,   188,   171,   172,   165,   173,   148,
     148,   148,   148,   201,   192,   176,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,    65,    66,    35,
     131,   108,    49,   155,    23,    39,   189,   191,   193,   202,
     126,   149,   150,   151,    30,    58,    59,    60,     1,     2,
     109,    28,    31,     3,   204,    61,    42,   207,    45,   109,
       1,     2,    62,    63,    48,     3,     8,    64,    65,    66,
       8,     9,   105,   107,    68,     9,   169,   206,    30,    70,
      71,    10,   210,    37,    38,    10,   103,   136,   136,    40,
      41,   111,   169,   114,   221,   118,    49,   209,    50,    51,
      52,    53,    54,    55,    56,   112,   113,   122,    57,    58,
      59,    60,     3,   142,   143,   225,    62,    63,   119,    61,
     144,   145,   146,   147,   181,   182,    62,    63,   127,   124,
     137,    64,    65,    66,   125,   134,    28,   135,    68,   138,
      69,   139,    58,    70,    71,    49,   140,    50,    51,    52,
      53,    54,    55,    56,   141,   158,    31,    57,    58,    59,
      60,     3,   183,   184,   185,   186,   161,   166,    61,   170,
     175,   194,   195,   197,   196,    62,    63,   198,   199,   200,
      64,    65,    66,    49,   208,    28,    28,    68,   211,    69,
     212,   220,    70,    71,   222,   218,    58,    59,    60,   226,
      24,   120,    16,   224,   117,   104,    61,   164,   163,    49,
     102,   110,   178,    62,    63,   179,   177,     0,    64,    65,
      66,     0,    58,    59,    60,    68,   174,   187,     0,     0,
      70,    71,    61,     0,     0,     0,     0,     0,     0,    62,
      63,     0,     0,     0,    64,    65,    66,     0,     0,     0,
       0,    68,     0,     0,     0,     0,    70,    71
};

static const yytype_int16 yycheck[] =
{
      13,    30,    31,    16,    54,   105,    64,    91,    61,   222,
      39,    16,     3,   226,     5,     6,     7,     8,     9,    10,
      11,    16,    72,    52,    15,    16,    17,    18,    19,    61,
      35,     3,    64,    12,    13,    26,    98,    95,     3,    68,
      35,    15,    33,    34,    16,    17,    18,    38,    39,    40,
      21,    20,    43,    44,    45,    45,    47,    12,    13,    50,
      51,    33,    34,    95,    96,    44,    38,    39,    40,   131,
     195,    20,    43,    45,    39,    40,   105,    46,    50,    51,
      45,     3,   111,    41,    49,    16,   211,    45,   141,    44,
      16,    49,   192,   122,   152,   124,   125,    46,   127,   183,
     184,   185,   186,    20,    20,   134,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    39,    40,    21,
     152,    16,     3,    45,     0,    49,   155,   156,    44,    46,
      16,    35,    36,    37,    41,    16,    17,    18,    14,    15,
      35,    43,    49,    19,   194,    26,    16,   197,    15,    35,
      14,    15,    33,    34,    45,    19,     0,    38,    39,    40,
       4,     0,    43,   192,    45,     4,   195,   196,    41,    50,
      51,     0,   201,    20,    21,     4,    16,   227,   228,    20,
      21,    49,   211,    16,   213,    21,     3,   200,     5,     6,
       7,     8,     9,    10,    11,    20,    21,    45,    15,    16,
      17,    18,    19,    27,    28,   218,    33,    34,    21,    26,
      29,    30,    31,    32,   142,   143,    33,    34,    41,    45,
      21,    38,    39,    40,    45,    45,    43,    44,    45,    23,
      47,    24,    16,    50,    51,     3,    25,     5,     6,     7,
       8,     9,    10,    11,    26,    42,    49,    15,    16,    17,
      18,    19,   144,   145,   146,   147,    16,    21,    26,    10,
      46,    46,    21,    46,    45,    33,    34,    46,    42,    46,
      38,    39,    40,     3,    43,    43,    43,    45,    21,    47,
      46,    21,    50,    51,    22,    48,    16,    17,    18,    22,
       4,    21,     2,   216,    48,    37,    26,   115,   112,     3,
      32,    40,   139,    33,    34,   140,   138,    -1,    38,    39,
      40,    -1,    16,    17,    18,    45,   128,   148,    -1,    -1,
      50,    51,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    15,    19,    53,    54,    68,    69,    73,    76,
      84,    16,    35,    70,    16,    35,    70,    77,    78,    79,
      85,    86,    15,     0,    54,    45,    16,    21,    43,    57,
      41,    49,    80,    81,    16,    21,    57,    20,    21,    49,
      20,    21,    16,    74,    75,    15,    71,    72,    45,     3,
       5,     6,     7,     8,     9,    10,    11,    15,    16,    17,
      18,    26,    33,    34,    38,    39,    40,    44,    45,    47,
      50,    51,    55,    56,    57,    58,    59,    60,    63,    64,
      67,    73,    76,    84,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   100,   101,   103,   104,
      87,    87,    81,    16,    78,    43,    83,    87,    16,    35,
      86,    49,    20,    21,    16,    20,    46,    71,    21,    21,
      21,    87,    45,    56,    45,    45,    16,    41,   105,   106,
      92,   103,    96,    87,    45,    44,    56,    21,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    98,    35,
      36,    37,    99,    96,   103,    45,    49,   100,    42,    82,
      83,    16,    87,    75,    72,    46,    21,    65,    66,    87,
      10,    87,    87,    87,   106,    46,    87,    89,    90,    91,
      92,    93,    93,    94,    94,    94,    94,    95,    96,    87,
     102,    87,    20,    44,    46,    21,    45,    46,    46,    42,
      46,    20,    46,    83,    56,    66,    87,    56,    43,    57,
      87,    21,    46,    12,    13,    44,    61,    62,    48,    66,
      21,    87,    22,    44,    62,    57,    22,    55,    55
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
        case 4:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    { printf("%s", (yyvsp[(1) - (1)].str)); free((yyvsp[(1) - (1)].str)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    { printf("%s", (yyvsp[(1) - (1)].str)); free((yyvsp[(1) - (1)].str)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    { printf("%s", (yyvsp[(1) - (1)].str)); free((yyvsp[(1) - (1)].str)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    { printf("%s", (yyvsp[(1) - (1)].str)); free((yyvsp[(1) - (1)].str)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    { printf("%s", (yyvsp[(1) - (1)].str)); free((yyvsp[(1) - (1)].str)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    {
        (yyval.str) = get_non_term2("", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    { (yyval.str) = get_non_term1("stmt", (yyvsp[(1) - (1)].str)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    { (yyval.str) = get_non_term1("stmt", (yyvsp[(1) - (1)].str)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { (yyval.str) = get_non_term1("stmt", (yyvsp[(1) - (1)].str)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    { (yyval.str) = get_non_term1("stmt", (yyvsp[(1) - (1)].str)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { (yyval.str) = get_non_term1("stmt", (yyvsp[(1) - (1)].str)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    { (yyval.str) = get_non_term3("stmt", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    { (yyval.str) = get_non_term2("stmt", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    { (yyval.str) = get_non_term2("stmt", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    { (yyval.str) = get_non_term2("stmt", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    { (yyval.str) = get_non_term1("stmt", (yyvsp[(1) - (1)].str)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {
             (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
             ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {
            (yyval.str) = get_non_term2("", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
             ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {
             (yyval.str) = get_non_term2("", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
             ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {(yyval.str) = get_non_term7("", (yyvsp[(1) - (7)].str), (yyvsp[(2) - (7)].str), (yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].str));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {(yyval.str) = get_non_term5("", (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {
               (yyval.str) = get_non_term7("", (yyvsp[(1) - (7)].str), (yyvsp[(2) - (7)].str), (yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));
               ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {
               (yyval.str) = get_non_term6("", (yyvsp[(1) - (6)].str), (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));
               ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {
                (yyval.str) = get_non_term2("", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
                ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    {
               (yyval.str) = get_non_term4("", (yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str));
               ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {
               (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
               ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {
               (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
               ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {
               (yyval.str) = get_non_term2("", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
           ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    {
              (yyval.str) = get_non_term5("", (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str));
              ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {
              (yyval.str) = get_non_term7("", (yyvsp[(1) - (7)].str), (yyvsp[(2) - (7)].str), (yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));
              ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    {
            (yyval.str) = get_non_term5("", (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str));
            ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    {
            (yyval.str) = get_non_term5("", (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str));
            ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    { (yyval.str) = get_non_term0(""); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {
           (yyval.str) = get_non_term3("func_def", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
           ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {
           (yyval.str) = get_non_term3("func_def", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
           ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {
           (yyval.str) = get_non_term3("func_decl", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
           ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {
           (yyval.str) = get_non_term3("func_decl", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
           ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {
           (yyval.str) = get_non_term4("", (yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str));
           ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {
           (yyval.str) = get_non_term5("", (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str));
           ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {
             (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
             ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    { (yyval.str) = get_non_term0(""); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {
            (yyval.str) = get_non_term2("", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
            ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    {
              (yyval.str) = get_non_term4("scalar_decl", (yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str));
              ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    {
                (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
                ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    {
              (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
              ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    {
              (yyval.str) = get_non_term3("array_decl", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
              ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    {
          (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
          ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    {
              (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
              ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 245 "parser.y"
    {
         (yyval.str) = get_non_term2("", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
         ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    {
             (yyval.str) = get_non_term2("", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
             ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    {
            (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
            ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    {
             (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
             ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {
            (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
            ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    {
               (yyval.str) = get_non_term3("scalar_decl", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
               ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    {
                (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
                ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 286 "parser.y"
    {
              (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
              ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 293 "parser.y"
    {
        (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
        ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {
              (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
              ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    {
              (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
              ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    {
              (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
              ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    {
                 (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
                 ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    {(yyval.str) = get_non_term2("expr", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    {
           (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
           ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 327 "parser.y"
    {
           (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
           ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 333 "parser.y"
    {
             (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
             ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    {
             (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
             ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 339 "parser.y"
    {
             (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
             ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    {
             (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
             ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {
             (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
             ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
    {
                 (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
                 ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    {
           (yyval.str) = get_non_term2("expr", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
           ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 363 "parser.y"
    {
           (yyval.str) = get_non_term2("expr", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
           ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    {
           (yyval.str) = get_non_term2("expr", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
           ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 372 "parser.y"
    {
         (yyval.str) = get_non_term2("expr", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
         ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    {
         (yyval.str) = get_non_term1("expr", (yyvsp[(1) - (1)].str));
         ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 379 "parser.y"
    {
         (yyval.str) = get_non_term1("expr", (yyvsp[(1) - (1)].str));
         ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 382 "parser.y"
    {
         (yyval.str) = get_non_term3("expr", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
         ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 401 "parser.y"
    {
           (yyval.str) = get_non_term4("", (yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str));
           ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 406 "parser.y"
    {
          (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
          ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
    { (yyval.str) = get_non_term0(""); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 413 "parser.y"
    {
       (yyval.str) = get_non_term2("expr", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 416 "parser.y"
    {(yyval.str) = get_non_term1("expr", (yyvsp[(1) - (1)].str));;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 421 "parser.y"
    {(yyval.str) = int2chr((yyvsp[(1) - (1)].inte)); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 422 "parser.y"
    {(yyval.str) = dul2chr((yyvsp[(1) - (1)].doub));;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
    {(yyval.str) =(yyvsp[(1) - (1)].str);;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    {(yyval.str) = get_non_term2("", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    {
    (yyval.str) = get_non_term3("", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
;}
    break;



/* Line 1455 of yacc.c  */
#line 2369 "parser.tab.c"
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
#line 438 "parser.y"


int main(void)
{
    yyparse();//
   
    return 0;
}


char* int2chr(int d)
{
    int length = snprintf(NULL, 0, "%d", d) + 1;
    char *ret = (char*)malloc(sizeof(char) * length);
    snprintf(ret, length, "%d", d);
    return ret;
}

char* dul2chr(double f)
{
    int length = snprintf(NULL, 0, "%lf", f) + 1;
    char *ret = (char*)malloc(sizeof(char) * length);
    snprintf(ret, length, "%lf", f);
    return ret;
}

/* char* str2chr(char* s)
{
    char* ret = (char*)malloc(sizeof(char) * 2);
    ret[1] = '\x00';

    if (strcmp(s + 1, "\\n") == 0)
    {
        ret[0] = '\n';
    }
    else if (strcmp(s + 1, "\\t") == 0)
    {
        ret[0] = '\t';
    }
    else if (strcmp(s + 1, "\\\\") == 0)
    {
        ret[0] = '\\';
    }
    else if (strcmp(s + 1, "\\\'") == 0)
    {
        ret[0] = '\'';
    }
    else
    {
        ret[0] = s[1];
    }

    free(s);
    return ret;
} */


char* get_non_term0(const char* tag)
{
    int len = 1;

    if (strcmp(tag, "") != 0)//not 空
    {
        len += (strlen(tag) * 2 + 5);
    }

    char* ret = (char*)malloc(sizeof(char) * len);

    if (strcmp(tag, "") != 0)//not 空
    {
        sprintf(ret, "<%s></%s>", tag, tag);
    }

    ret[len - 1] = '\0';

    return ret;
}

char *get_non_term1(const char *tag, char *s1)
{
    int len = strlen(s1)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s</%s>", tag, s1, tag);
    else
        sprintf(ret, "%s", s1);

    free(s1);

    ret[len - 1] = '\0';
    return ret;
}

char *get_non_term2(const char *tag, char *s1, char *s2)
{
    int len = strlen(s1)+strlen(s2)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s</%s>", tag, s1, s2, tag);
    else
        sprintf(ret, "%s%s", s1, s2);

    free(s1);
    free(s2);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term3(const char *tag, char *s1, char *s2, char *s3)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s</%s>", tag, s1, s2, s3, tag);
    else
        sprintf(ret, "%s%s%s", s1, s2, s3);

    free(s1);
    free(s2);
    free(s3);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term4(const char *tag, char *s1, char *s2, char *s3, char *s4)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+strlen(s4)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s%s</%s>", tag, s1, s2, s3, s4, tag);
    else
        sprintf(ret, "%s%s%s%s", s1, s2, s3, s4);

    free(s1);
    free(s2);
    free(s3);
    free(s4);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term5(const char *tag, char *s1, char *s2, char *s3, char *s4, char *s5)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+strlen(s4)+strlen(s5)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s%s%s</%s>", tag, s1, s2, s3, s4, s5, tag);
    else
        sprintf(ret, "%s%s%s%s%s", s1, s2, s3, s4, s5);

    free(s1);
    free(s2);
    free(s3);
    free(s4);
    free(s5);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term6(const char *tag, char *s1, char *s2, char *s3, char *s4, char *s5, char *s6)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+strlen(s4)+strlen(s5)+strlen(s6)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s%s%s%s</%s>", tag, s1, s2, s3, s4, s5, s6, tag);
    else
        sprintf(ret, "%s%s%s%s%s%s", s1, s2, s3, s4, s5, s6);

    free(s1);
    free(s2);
    free(s3);
    free(s4);
    free(s5);
    free(s6);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term7(const char *tag, char *s1, char *s2, char *s3, char *s4, char *s5, char *s6, char *s7)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+strlen(s4)+strlen(s5)+strlen(s6)+strlen(s7)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s%s%s%s%s</%s>", tag, s1, s2, s3, s4, s5, s6, s7, tag);
    else
        sprintf(ret, "%s%s%s%s%s%s%s", s1, s2, s3, s4, s5, s6, s7);

    free(s1);
    free(s2);
    free(s3);
    free(s4);
    free(s5);
    free(s6);
    free(s7);

    ret[len - 1] = '\0';
    return ret;
}

char* get_non_term8(const char *tag, char *s1, char *s2, char *s3, char *s4, char *s5, char *s6, char *s7,char *s8)
{
    int len = strlen(s1)+strlen(s2)+strlen(s3)+strlen(s4)+strlen(s5)+strlen(s6)+strlen(s7)+strlen(s8)+1;
    if(strcmp(tag, "")!=0)
        len += (strlen(tag)*2+5);

    char *ret = (char *)malloc(sizeof(char)*len);

    if(strcmp(tag, "")!=0)
        sprintf(ret, "<%s>%s%s%s%s%s%s%s%s</%s>", tag, s1, s2, s3, s4, s5, s6, s7,s8, tag);
    else
        sprintf(ret, "%s%s%s%s%s%s%s%s", s1, s2, s3, s4, s5, s6, s7,s8);

    free(s1);
    free(s2);
    free(s3);
    free(s4);
    free(s5);
    free(s6);
    free(s7);
    free(s8);

    ret[len - 1] = '\0';
    return ret;
}

