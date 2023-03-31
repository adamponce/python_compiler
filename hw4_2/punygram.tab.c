/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENDMARKER = 258,
     NEWLINE = 259,
     FALSE = 260,
     IF = 261,
     DEF = 262,
     RAISE = 263,
     NONE = 264,
     DEL = 265,
     IMPORT = 266,
     RETURN = 267,
     TRUE = 268,
     ELIF = 269,
     TRY = 270,
     AND = 271,
     ELSE = 272,
     WHILE = 273,
     AS = 274,
     EXCEPT = 275,
     LAMBDA = 276,
     WITH = 277,
     ASSERT = 278,
     FINALLY = 279,
     NONLOCAL = 280,
     YIELD = 281,
     BREAK = 282,
     FOR = 283,
     NOT = 284,
     CLASS = 285,
     FROM = 286,
     OR = 287,
     CONTINUE = 288,
     GLOBAL = 289,
     PASS = 290,
     LPAR = 291,
     RPAR = 292,
     LSQB = 293,
     RSQB = 294,
     COLON = 295,
     COMMA = 296,
     SEMI = 297,
     PLUS = 298,
     MINUS = 299,
     STAR = 300,
     SLASH = 301,
     LESS = 302,
     GREATER = 303,
     EQUAL = 304,
     DOT = 305,
     PERCENT = 306,
     LBRACE = 307,
     RBRACE = 308,
     EQEQUAL = 309,
     NOTEQUAL = 310,
     LESSEQUAL = 311,
     GREATEREQUAL = 312,
     DOUBLESTAR = 313,
     PLUSEQUAL = 314,
     MINEQUAL = 315,
     STAREQUAL = 316,
     SLASHEQUAL = 317,
     PERCENTEQUAL = 318,
     DOUBLESTAREQUAL = 319,
     DOUBLESLASH = 320,
     DOUBLESLASHEQUAL = 321,
     RARROW = 322,
     ELLIPSIS = 323,
     COLONEQUAL = 324,
     NAME = 325,
     NUMBER = 326,
     STRING = 327,
     INDENT = 328,
     DEDENT = 329,
     IN = 330,
     TYPE_COMMENT = 331,
     FUNC = 332
   };
#endif
/* Tokens.  */
#define ENDMARKER 258
#define NEWLINE 259
#define FALSE 260
#define IF 261
#define DEF 262
#define RAISE 263
#define NONE 264
#define DEL 265
#define IMPORT 266
#define RETURN 267
#define TRUE 268
#define ELIF 269
#define TRY 270
#define AND 271
#define ELSE 272
#define WHILE 273
#define AS 274
#define EXCEPT 275
#define LAMBDA 276
#define WITH 277
#define ASSERT 278
#define FINALLY 279
#define NONLOCAL 280
#define YIELD 281
#define BREAK 282
#define FOR 283
#define NOT 284
#define CLASS 285
#define FROM 286
#define OR 287
#define CONTINUE 288
#define GLOBAL 289
#define PASS 290
#define LPAR 291
#define RPAR 292
#define LSQB 293
#define RSQB 294
#define COLON 295
#define COMMA 296
#define SEMI 297
#define PLUS 298
#define MINUS 299
#define STAR 300
#define SLASH 301
#define LESS 302
#define GREATER 303
#define EQUAL 304
#define DOT 305
#define PERCENT 306
#define LBRACE 307
#define RBRACE 308
#define EQEQUAL 309
#define NOTEQUAL 310
#define LESSEQUAL 311
#define GREATEREQUAL 312
#define DOUBLESTAR 313
#define PLUSEQUAL 314
#define MINEQUAL 315
#define STAREQUAL 316
#define SLASHEQUAL 317
#define PERCENTEQUAL 318
#define DOUBLESTAREQUAL 319
#define DOUBLESLASH 320
#define DOUBLESLASHEQUAL 321
#define RARROW 322
#define ELLIPSIS 323
#define COLONEQUAL 324
#define NAME 325
#define NUMBER 326
#define STRING 327
#define INDENT 328
#define DEDENT 329
#define IN 330
#define TYPE_COMMENT 331
#define FUNC 332




/* Copy the first part of user declarations.  */
#line 1 "punygram.y"

    #define YYDEBUG 1
    #include "tree.h"
    #include <stdio.h>
    int yylex();
    int yyerror(char *);
    struct tree *root;



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "punygram.y"
{
    struct tree *treeptr;
}
/* Line 193 of yacc.c.  */
#line 264 "punygram.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 277 "punygram.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1010

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  186
/* YYNRULES -- Number of rules.  */
#define YYNRULES  328
/* YYNRULES -- Number of states.  */
#define YYNSTATES  467

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   337

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    12,    14,    21,    22,
      25,    29,    32,    33,    36,    39,    42,    43,    46,    47,
      50,    52,    54,    59,    60,    63,    66,    68,    70,    72,
      74,    76,    78,    80,    82,    84,    87,    89,    92,    94,
      96,    98,    99,   102,   104,   107,   111,   112,   114,   117,
     119,   121,   125,   126,   129,   132,   134,   136,   138,   140,
     142,   144,   146,   148,   150,   153,   155,   157,   159,   161,
     163,   165,   167,   169,   172,   173,   175,   177,   180,   181,
     184,   185,   188,   190,   192,   195,   200,   203,   205,   206,
     209,   211,   214,   216,   218,   220,   224,   226,   229,   232,
     236,   237,   240,   243,   246,   247,   250,   253,   256,   260,
     264,   268,   270,   272,   274,   276,   278,   280,   282,   289,
     290,   293,   298,   304,   313,   318,   322,   326,   327,   331,
     333,   336,   340,   347,   348,   351,   354,   357,   360,   363,
     365,   370,   372,   375,   378,   379,   382,   385,   386,   391,
     393,   396,   397,   400,   403,   406,   407,   410,   413,   416,
     418,   421,   422,   425,   428,   430,   432,   434,   436,   438,
     440,   442,   444,   447,   450,   451,   454,   457,   460,   461,
     464,   467,   470,   471,   474,   477,   480,   481,   484,   487,
     489,   491,   494,   495,   498,   501,   504,   505,   508,   511,
     513,   515,   517,   519,   522,   524,   527,   528,   531,   534,
     535,   538,   542,   546,   550,   552,   554,   556,   558,   560,
     562,   564,   566,   568,   570,   571,   573,   575,   578,   579,
     582,   584,   587,   588,   591,   594,   596,   598,   602,   606,
     609,   610,   612,   616,   617,   620,   623,   625,   630,   631,
     633,   636,   640,   641,   644,   647,   649,   651,   655,   656,
     659,   662,   664,   666,   668,   671,   675,   678,   679,   683,
     685,   688,   691,   693,   696,   702,   703,   707,   711,   712,
     716,   719,   723,   727,   730,   733,   734,   736,   738,   740,
     746,   748,   752,   753,   755,   758,   759,   761,   764,   766,
     768,   774,   775,   778,   779,   781,   782,   784,   785,   788,
     789,   792,   793,   796,   799,   800,   803,   806,   807,   810,
     811,   815,   816,   819,   821,   823,   824,   826,   827
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      84,     0,    -1,    85,     3,    -1,    -1,    85,    86,    -1,
       4,    -1,    96,    -1,     7,    70,    89,    88,    40,   253,
      -1,    -1,    67,   167,    -1,    36,    90,    37,    -1,    93,
      91,    -1,    -1,    91,    92,    -1,    41,    93,    -1,    94,
     257,    -1,    -1,    70,    95,    -1,    -1,    40,   167,    -1,
      97,    -1,   146,    -1,   100,    98,   268,     4,    -1,    -1,
      98,    99,    -1,    42,   100,    -1,   101,    -1,   115,    -1,
     116,    -1,   117,    -1,   126,    -1,   143,    -1,   144,    -1,
     145,    -1,    73,    -1,   110,   102,    -1,   106,    -1,   114,
     103,    -1,   104,    -1,   250,    -1,   228,    -1,    -1,   105,
     256,    -1,   108,    -1,   105,   108,    -1,    40,   167,   107,
      -1,    -1,   108,    -1,    49,   109,    -1,   250,    -1,   110,
      -1,   113,   111,   255,    -1,    -1,   111,   112,    -1,    41,
     113,    -1,   167,    -1,   181,    -1,    59,    -1,    60,    -1,
      61,    -1,    62,    -1,    63,    -1,    66,    -1,    64,    -1,
      10,   224,    -1,    35,    -1,   118,    -1,   119,    -1,   120,
      -1,   123,    -1,   122,    -1,    27,    -1,    33,    -1,    12,
     121,    -1,    -1,   110,    -1,   250,    -1,     8,   124,    -1,
      -1,   167,   125,    -1,    -1,    31,   167,    -1,   127,    -1,
     128,    -1,    11,   139,    -1,    31,   129,    11,   133,    -1,
     130,   142,    -1,   131,    -1,    -1,   130,   132,    -1,   132,
      -1,   131,   132,    -1,    50,    -1,    68,    -1,    45,    -1,
      36,   136,    37,    -1,   136,    -1,    70,   258,    -1,   142,
     258,    -1,   134,   137,   255,    -1,    -1,   137,   138,    -1,
      41,   134,    -1,   135,   140,    -1,    -1,   140,   141,    -1,
      41,   135,    -1,    70,   261,    -1,    34,    70,   259,    -1,
      25,    70,   259,    -1,    23,   167,   263,    -1,   147,    -1,
     150,    -1,   151,    -1,   152,    -1,   157,    -1,    87,    -1,
     239,    -1,     6,   165,    40,   163,   148,   264,    -1,    -1,
     148,   149,    -1,    14,   165,    40,   163,    -1,    18,   165,
      40,   163,   264,    -1,    28,   224,    75,   228,    40,   256,
     163,   264,    -1,    15,    40,   163,   153,    -1,   155,   264,
     154,    -1,    24,    40,   163,    -1,    -1,    24,    40,   163,
      -1,   156,    -1,   155,   156,    -1,   161,    40,   163,    -1,
      22,   160,   158,    40,   256,   163,    -1,    -1,   158,   159,
      -1,    41,   160,    -1,   167,   265,    -1,    20,   162,    -1,
     167,   258,    -1,    97,    -1,     4,    73,   164,    74,    -1,
      96,    -1,   164,    96,    -1,   167,   166,    -1,    -1,    69,
     167,    -1,   170,   168,    -1,    -1,     6,   170,    17,   167,
      -1,   170,    -1,   173,   171,    -1,    -1,   171,   172,    -1,
      32,   173,    -1,   176,   174,    -1,    -1,   174,   175,    -1,
      16,   176,    -1,    29,   176,    -1,   177,    -1,   182,   178,
      -1,    -1,   178,   179,    -1,   180,   182,    -1,    47,    -1,
      48,    -1,    54,    -1,    56,    -1,    57,    -1,    55,    -1,
      29,    -1,    75,    -1,    45,   182,    -1,   185,   183,    -1,
      -1,   183,   184,    -1,    78,   185,    -1,   188,   186,    -1,
      -1,   186,   187,    -1,    79,   188,    -1,   191,   189,    -1,
      -1,   189,   190,    -1,    80,   191,    -1,   195,   192,    -1,
      -1,   192,   193,    -1,   194,   195,    -1,    81,    -1,    82,
      -1,   198,   196,    -1,    -1,   196,   197,    -1,   266,   198,
      -1,   202,   199,    -1,    -1,   199,   200,    -1,   201,   202,
      -1,    45,    -1,    46,    -1,    51,    -1,    65,    -1,   266,
     202,    -1,   203,    -1,   205,   204,    -1,    -1,    58,   202,
      -1,   207,   206,    -1,    -1,   206,   216,    -1,    36,   208,
      37,    -1,    38,   211,    39,    -1,    52,   209,    53,    -1,
      70,    -1,    71,    -1,   210,    -1,    68,    -1,     9,    -1,
      13,    -1,     5,    -1,    77,    -1,   211,    -1,   250,    -1,
      -1,   231,    -1,    72,    -1,   210,    72,    -1,    -1,   215,
     212,    -1,   247,    -1,   213,   255,    -1,    -1,   213,   214,
      -1,    41,   215,    -1,   165,    -1,   181,    -1,    36,   217,
      37,    -1,    38,   218,    39,    -1,    50,    70,    -1,    -1,
     241,    -1,   221,   219,   255,    -1,    -1,   219,   220,    -1,
      41,   221,    -1,   167,    -1,   267,    40,   267,   222,    -1,
      -1,   223,    -1,    40,   267,    -1,   227,   225,   255,    -1,
      -1,   225,   226,    -1,    41,   227,    -1,   182,    -1,   181,
      -1,   167,   229,   255,    -1,    -1,   229,   230,    -1,    41,
     167,    -1,   232,    -1,   233,    -1,   237,    -1,   234,   236,
      -1,   167,    40,   167,    -1,    58,   182,    -1,    -1,   235,
      41,   234,    -1,   247,    -1,   235,   255,    -1,   113,   238,
      -1,   247,    -1,   111,   255,    -1,    30,    70,   240,    40,
     163,    -1,    -1,    36,   217,    37,    -1,   243,   242,   255,
      -1,    -1,   242,    41,   243,    -1,   167,   244,    -1,   167,
      69,   167,    -1,   167,    49,   167,    -1,    58,   167,    -1,
      45,   167,    -1,    -1,   247,    -1,   247,    -1,   248,    -1,
      28,   224,    75,   170,   249,    -1,   246,    -1,     6,   169,
     249,    -1,    -1,   245,    -1,    26,   251,    -1,    -1,   252,
      -1,    31,   167,    -1,   110,    -1,    97,    -1,     4,   254,
      73,   164,    74,    -1,    -1,    76,     4,    -1,    -1,    41,
      -1,    -1,    76,    -1,    -1,    49,   167,    -1,    -1,    19,
      70,    -1,    -1,   259,   260,    -1,    41,    70,    -1,    -1,
     261,   262,    -1,    50,    70,    -1,    -1,    41,   167,    -1,
      -1,    17,    40,   163,    -1,    -1,    19,   182,    -1,    43,
      -1,    44,    -1,    -1,   167,    -1,    -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   144,   144,   146,   146,   148,   148,   150,   151,   151,
     153,   158,   159,   159,   160,   162,   192,   192,   193,   193,
     234,   235,   237,   238,   238,   239,   241,   242,   242,   243,
     243,   244,   244,   245,   246,   249,   251,   252,   253,   256,
     257,   259,   260,   262,   263,   265,   268,   268,   270,   272,
     273,   275,   277,   278,   280,   282,   283,   285,   286,   287,
     288,   289,   290,   291,   294,   295,   296,   297,   298,   299,
     300,   302,   303,   304,   305,   306,   308,   310,   312,   313,
     315,   316,   318,   319,   321,   323,   325,   326,   328,   329,
     332,   333,   335,   336,   339,   340,   341,   343,   345,   346,
     348,   349,   351,   353,   354,   355,   357,   360,   361,   362,
     363,   370,   371,   372,   373,   374,   375,   376,   378,   379,
     380,   382,   384,   386,   388,   390,   391,   392,   392,   395,
     396,   397,   399,   400,   400,   401,   403,   405,   406,   408,
     409,   411,   412,   415,   416,   417,   419,   420,   421,   423,
     425,   426,   427,   428,   430,   431,   432,   433,   435,   436,
     438,   439,   440,   441,   443,   444,   445,   446,   447,   448,
     449,   450,   452,   454,   455,   456,   457,   459,   460,   461,
     462,   464,   465,   466,   467,   469,   470,   471,   472,   473,
     474,   476,   477,   478,   479,   481,   482,   483,   484,   485,
     486,   487,   488,   490,   491,   493,   494,   495,   497,   498,
     499,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   513,   514,   520,   521,   523,   524,   526,   526,
     532,   533,   534,   535,   536,   538,   539,   541,   542,   543,
     544,   544,   546,   547,   548,   549,   551,   552,   553,   553,
     555,   557,   558,   559,   560,   562,   563,   565,   566,   567,
     568,   573,   576,   577,   579,   581,   582,   584,   585,   587,
     588,   590,   592,   593,   595,   596,   597,   599,   600,   601,
     603,   604,   605,   606,   607,   609,   610,   612,   613,   615,
     617,   618,   619,   620,   622,   623,   623,   625,   625,   627,
     628,   630,   631,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   669,   669
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDMARKER", "NEWLINE", "FALSE", "IF",
  "DEF", "RAISE", "NONE", "DEL", "IMPORT", "RETURN", "TRUE", "ELIF", "TRY",
  "AND", "ELSE", "WHILE", "AS", "EXCEPT", "LAMBDA", "WITH", "ASSERT",
  "FINALLY", "NONLOCAL", "YIELD", "BREAK", "FOR", "NOT", "CLASS", "FROM",
  "OR", "CONTINUE", "GLOBAL", "PASS", "LPAR", "RPAR", "LSQB", "RSQB",
  "COLON", "COMMA", "SEMI", "PLUS", "MINUS", "STAR", "SLASH", "LESS",
  "GREATER", "EQUAL", "DOT", "PERCENT", "LBRACE", "RBRACE", "EQEQUAL",
  "NOTEQUAL", "LESSEQUAL", "GREATEREQUAL", "DOUBLESTAR", "PLUSEQUAL",
  "MINEQUAL", "STAREQUAL", "SLASHEQUAL", "PERCENTEQUAL", "DOUBLESTAREQUAL",
  "DOUBLESLASH", "DOUBLESLASHEQUAL", "RARROW", "ELLIPSIS", "COLONEQUAL",
  "NAME", "NUMBER", "STRING", "INDENT", "DEDENT", "IN", "TYPE_COMMENT",
  "FUNC", "\"|\"", "\"^\"", "\"$\"", "\"<<\"", "\">>\"", "$accept",
  "file_input", "zero_more_newline_stmt", "newline_stmt", "funcdef",
  "opt_rarrowtest", "parameters", "argumentstd", "zero_more_comma_argtd",
  "comma_argstd", "argumenttd", "tfdef", "opt_col_test", "stmt",
  "simple_stmt", "zero_more_stmts", "single_stmt", "small_stmt",
  "expr_stmt", "everything_in_parenthesis", "yield_or_testlist",
  "opt_eq_yeild__tc", "one_or_more_eq_yield_or_tlse", "annassign",
  "opt_eq_yeild_or_tlse", "eq_yield_or_tlse", "yield_or_tlse",
  "testlist_star_expr", "zero_more_comma_test_or_se", "comma_test_or_se",
  "test_or_se", "augassign", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "opt_tse", "yield_stmt",
  "raise_stmt", "opt_test_opt_from_test", "opt_from_test", "import_stmt",
  "import_name", "import_from", "dot_ellip_dn_or_one_more_dot_ellip",
  "zero_more_dot_or_ellip", "one_more_dot_or_ellip", "dot_or_ellip",
  "star_or_names", "import_as_name", "dotted_as_name", "import_as_names",
  "zero_more_comma_isn", "comma_isn", "dotted_as_names", "zero_more_dsn",
  "comma_dsn", "dotted_name", "global_stmt", "nonlocal_stmt",
  "assert_stmt", "compound_stmt", "if_stmt", "zero_more_elif", "elif",
  "while_stmt", "for_stmt", "try_stmt", "except_else_or_finally",
  "opt_finally", "one_more_except", "except_stmt", "with_stmt",
  "zero_more_comma_with_item", "comma_with_item", "with_item",
  "except_clause", "opt_test_as_name", "suite", "one_more_stmt",
  "namedexpr_test", "opt_coleq_test", "test", "opt_if_else", "test_nocond",
  "or_test", "zero_more_or_and_test", "or_and_test", "and_test",
  "zero_more_and_not_test", "not_and_test", "not_test", "comparison",
  "zero_more_comp_op_expr", "comp_op_expr", "comp_op", "star_expr", "expr",
  "zero_more_or_xor_expr", "or_xor_expr", "xor_expr",
  "zero_more_carrot_and_expr", "carrot_and_expr", "and_expr",
  "zero_more_and_shift", "and_shift", "shift_expr",
  "zero_more_double_arrow_arith", "double_arrow_arith", "left_or_right",
  "arith_expr", "zero_more_plus_minus_term", "plus_minus_term", "term",
  "zero_more_factor", "symbols_factor", "symbols_f", "factor", "power",
  "opt_doublestar_factor", "atom_expr", "zero_more_trailer", "atom",
  "opt_yield_tlc", "opt_dictsetmarker", "one_more_string", "testlist_comp",
  "comp_for_multiple", "zero_more_comma_nt_or_se", "comma_nt_or_se",
  "namedexpr_or_star_expr", "trailer", "opt_arglist", "subscriptlist",
  "zero_more_comma_sub", "comma_sub", "subscript", "opt_slicop", "sliceop",
  "exprlist", "zero_more_comma_expr_or_se", "comma_expr_or_se",
  "expr_or_starexpr", "testlist", "zero_more_comma_test", "comma_test",
  "dictorsetmarker", "dict_set_maker", "dsm_expr", "tct_or_dse",
  "zero_more_comma_tct_or_dse", "cf_or_comma_tct_dct", "dsm_star_expr",
  "cf_or_comma_tse", "classdef", "opt_lpar_arglist_rpar", "arglist",
  "zero_more_comma_arguments", "argument", "opt_comp_for", "comp_iter",
  "sync_comp_for", "comp_for", "comp_if", "opt_comp_iter", "yield_expr",
  "opt_yield_args", "yield_args", "func_body_suite",
  "opt_type_comment_newline", "opt_comma", "opt_type_comment",
  "opt_eq_test", "opt_as_name", "zero_more_comma_name", "comma_name",
  "zero_more_dot_name", "dot_name", "opt_comma_test", "opt_else",
  "opt_as_expr", "plus_or_minus", "opt_test", "opt_semi_colon", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,    83,    84,    85,    85,    86,    86,    87,    88,    88,
      89,    90,    91,    91,    92,    93,    94,    94,    95,    95,
      96,    96,    97,    98,    98,    99,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   101,   102,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   107,   107,   108,   109,
     109,   110,   111,   111,   112,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   115,   116,   117,   117,   117,   117,
     117,   118,   119,   120,   121,   121,   122,   123,   124,   124,
     125,   125,   126,   126,   127,   128,   129,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   133,   134,   135,   136,
     137,   137,   138,   139,   140,   140,   141,   142,   143,   144,
     145,   146,   146,   146,   146,   146,   146,   146,   147,   148,
     148,   149,   150,   151,   152,   153,   153,   154,   154,   155,
     155,   156,   157,   158,   158,   159,   160,   161,   162,   163,
     163,   164,   164,   165,   166,   166,   167,   168,   168,   169,
     170,   171,   171,   172,   173,   174,   174,   175,   176,   176,
     177,   178,   178,   179,   180,   180,   180,   180,   180,   180,
     180,   180,   181,   182,   183,   183,   184,   185,   186,   186,
     187,   188,   189,   189,   190,   191,   192,   192,   193,   194,
     194,   195,   196,   196,   197,   198,   199,   199,   200,   201,
     201,   201,   201,   202,   202,   203,   204,   204,   205,   206,
     206,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   208,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   215,   215,   216,   216,   216,
     217,   217,   218,   219,   219,   220,   221,   221,   222,   222,
     223,   224,   225,   225,   226,   227,   227,   228,   229,   229,
     230,   231,   232,   232,   233,   234,   234,   235,   235,   236,
     236,   237,   238,   238,   239,   240,   240,   241,   242,   242,
     243,   243,   243,   243,   243,   244,   244,   245,   245,   246,
     247,   248,   249,   249,   250,   251,   251,   252,   252,   253,
     253,   254,   254,   255,   255,   256,   256,   257,   257,   258,
     258,   259,   259,   260,   261,   261,   262,   263,   263,   264,
     264,   265,   265,   266,   266,   267,   267,   268,   268
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     6,     0,     2,
       3,     2,     0,     2,     2,     2,     0,     2,     0,     2,
       1,     1,     4,     0,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     0,     2,     1,     2,     3,     0,     1,     2,     1,
       1,     3,     0,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     1,     2,     0,     2,
       0,     2,     1,     1,     2,     4,     2,     1,     0,     2,
       1,     2,     1,     1,     1,     3,     1,     2,     2,     3,
       0,     2,     2,     2,     0,     2,     2,     2,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     6,     0,
       2,     4,     5,     8,     4,     3,     3,     0,     3,     1,
       2,     3,     6,     0,     2,     2,     2,     2,     2,     1,
       4,     1,     2,     2,     0,     2,     2,     0,     4,     1,
       2,     0,     2,     2,     2,     0,     2,     2,     2,     1,
       2,     0,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     0,     2,     2,     2,     0,     2,
       2,     2,     0,     2,     2,     2,     0,     2,     2,     1,
       1,     2,     0,     2,     2,     2,     0,     2,     2,     1,
       1,     1,     1,     2,     1,     2,     0,     2,     2,     0,
       2,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     2,     0,     2,
       1,     2,     0,     2,     2,     1,     1,     3,     3,     2,
       0,     1,     3,     0,     2,     2,     1,     4,     0,     1,
       2,     3,     0,     2,     2,     1,     1,     3,     0,     2,
       2,     1,     1,     1,     2,     3,     2,     0,     3,     1,
       2,     2,     1,     2,     5,     0,     3,     3,     0,     3,
       2,     3,     3,     2,     2,     0,     1,     1,     1,     5,
       1,     3,     0,     1,     2,     0,     1,     2,     1,     1,
       5,     0,     2,     0,     1,     0,     1,     0,     2,     0,
       2,     0,     2,     2,     0,     2,     2,     0,     2,     0,
       3,     0,     2,     1,     1,     0,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,     2,     5,   220,     0,     0,    78,
     218,     0,     0,    74,   219,     0,     0,     0,     0,     0,
     295,    71,     0,     0,     0,    88,    72,     0,    65,   228,
     228,   323,   324,     0,   224,   217,   214,   215,   226,    34,
     221,     4,   116,     6,    20,    23,    26,    41,    52,    27,
      28,    29,    66,    67,    68,    70,    69,    30,    82,    83,
      31,    32,    33,    21,   111,   112,   113,   114,   115,    55,
     147,   151,   155,   159,    56,   161,   174,   178,   182,   186,
     192,   196,   204,   206,   209,   216,   117,    76,     0,     0,
     144,     0,    77,    80,   256,   255,    64,   252,   314,   104,
      84,   309,    75,    73,     0,     0,   133,   321,   317,   311,
       0,   298,   294,   296,     0,   158,   275,    92,    93,     0,
       0,    87,    90,   311,   235,   236,     0,   222,   232,   223,
       0,   172,     0,    52,    55,     0,   225,   261,   262,   267,
     263,   327,     0,     0,    57,    58,    59,    60,    61,    63,
      62,    35,    38,   305,    36,    43,     0,   303,     0,   146,
     150,   154,   160,   173,   177,   181,   185,   191,   195,     0,
     205,   208,   227,   203,     0,     0,   143,    16,     8,     0,
      79,   303,   107,   103,     0,    98,     0,   139,     0,     0,
       0,     0,   136,     0,   110,   109,   297,     0,   240,     0,
       0,    89,    86,    91,   108,   211,     0,   229,   303,   290,
     230,   212,   266,   303,   271,   272,     0,   213,   303,   264,
     269,   328,    24,     0,    46,    48,    50,    49,   306,    44,
      42,    37,   258,    40,    39,   304,    53,    51,     0,     0,
     152,     0,   156,   170,   164,   165,   166,   169,   167,   168,
     171,   162,     0,     0,   175,     0,   179,     0,   183,   189,
     190,   187,     0,   193,     0,   199,   200,   201,   202,   197,
       0,   207,   240,   325,     0,   210,   119,   145,    18,     0,
      12,   307,     0,     0,    81,   304,   253,   251,     0,   315,
       0,   105,   310,     0,     0,     0,   124,   319,   129,     0,
     319,   305,     0,   134,   322,   318,     0,   312,     0,     0,
       0,   285,     0,   241,   278,     0,     0,    94,   309,    85,
     100,    96,     0,   304,   233,   231,   273,   265,   304,   270,
      25,    22,    45,    47,   303,    54,     0,   153,   157,   163,
     176,   180,   184,   188,   194,   198,     0,   246,     0,   243,
       0,   239,   319,     0,    17,    10,    11,     0,    15,     9,
       0,   254,   316,   106,   141,     0,   137,   309,     0,     0,
     130,   127,     0,   122,     0,   135,   313,   305,   284,   283,
       0,     0,   280,   286,   276,   303,   274,     0,    97,   303,
       0,   234,     0,   268,   304,   259,   257,   148,   237,   238,
     303,   325,     0,   120,   118,    19,    16,    13,   308,   301,
     299,     7,   140,   142,   138,   126,     0,     0,   125,   131,
     132,     0,   282,   281,   304,   277,    95,   304,   101,    99,
     292,   260,   304,   244,   242,   326,   248,     0,    14,     0,
       0,   320,     0,   319,   279,   102,     0,   293,   287,   288,
     289,   245,   325,   247,   249,     0,   302,     0,   128,   123,
     292,   149,   250,   121,     0,   291,   300
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    41,    42,   283,   178,   279,   356,   407,
     280,   281,   354,   364,   187,   141,   222,    45,    46,   151,
     231,   152,   153,   154,   332,   155,   225,    47,   157,   236,
      48,   156,    49,    50,    51,    52,    53,    54,   103,    55,
      56,    92,   180,    57,    58,    59,   119,   120,   121,   122,
     319,   320,    99,   321,   389,   428,   100,   183,   291,   101,
      60,    61,    62,    63,    64,   352,   403,    65,    66,    67,
     296,   418,   297,   298,    68,   190,   303,   106,   299,   366,
     188,   365,   124,   176,    69,   159,   460,    70,   160,   240,
      71,   161,   242,    72,    73,   162,   251,   252,    74,    75,
     163,   254,    76,   164,   256,    77,   165,   258,    78,   166,
     261,   262,    79,   167,   263,    80,   168,   269,   270,    81,
      82,   170,    83,   171,    84,   126,   135,    85,   127,   207,
     208,   324,   128,   275,   312,   348,   400,   433,   349,   453,
     454,    96,   181,   286,    97,   233,   334,   395,   136,   137,
     138,   139,   218,   219,   140,   214,    86,   199,   313,   385,
     314,   382,   447,   209,   448,   449,   450,    87,   112,   113,
     411,   440,   237,   230,   358,   185,   195,   307,   182,   289,
     194,   371,   192,    88,   350,   223
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -368
static const yytype_int16 yypact[] =
{
    -368,    66,    45,  -368,  -368,  -368,  -368,   933,    17,   933,
    -368,   114,    24,   841,  -368,    64,   933,   933,   933,    44,
     699,  -368,   114,   933,    51,    61,  -368,    55,  -368,   759,
     841,  -368,  -368,   447,   770,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,   179,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
     125,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,    77,  -368,    72,  -368,  -368,   447,   106,
      69,   117,  -368,   118,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,   135,  -368,  -368,   399,   115,  -368,   137,   121,  -368,
     933,  -368,  -368,  -368,    89,  -368,   129,  -368,  -368,   156,
      56,    61,  -368,  -368,  -368,  -368,   131,  -368,   141,  -368,
     132,  -368,   447,   141,   133,   119,  -368,  -368,  -368,   141,
    -368,   134,   933,   759,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,   -17,  -368,  -368,   852,   136,   933,  -368,
     143,   162,    53,   101,   102,   100,   -36,    59,    47,   447,
    -368,    98,  -368,  -368,   399,   933,  -368,   120,   116,   933,
    -368,   146,   139,   153,   126,  -368,   122,  -368,    16,   399,
      99,   447,  -368,   933,  -368,   158,  -368,   933,   781,   161,
      50,  -368,  -368,  -368,   158,  -368,   114,  -368,   164,  -368,
    -368,  -368,  -368,   136,  -368,  -368,   933,  -368,   166,  -368,
    -368,   301,  -368,   204,   160,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,   841,  -368,  -368,   195,   933,
    -368,   933,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,   447,   447,  -368,   447,  -368,   447,  -368,  -368,
    -368,  -368,   447,  -368,   447,  -368,  -368,  -368,  -368,  -368,
     447,  -368,   781,   933,   145,  -368,  -368,  -368,   176,   183,
    -368,   173,   933,   184,  -368,   114,  -368,  -368,   155,  -368,
      24,  -368,  -368,   688,   933,   186,  -368,   113,  -368,   187,
     206,   154,   933,  -368,  -368,  -368,   163,  -368,   191,   933,
     933,    15,   197,  -368,  -368,   399,   165,  -368,   135,  -368,
    -368,  -368,   157,   841,  -368,  -368,  -368,  -368,   863,  -368,
    -368,  -368,  -368,  -368,   203,  -368,   933,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,   199,   207,   210,  -368,
     211,  -368,    48,   933,  -368,  -368,   205,   933,  -368,  -368,
     469,  -368,  -368,  -368,  -368,   542,  -368,   135,   399,   212,
    -368,   226,   399,  -368,   399,  -368,  -368,   154,  -368,  -368,
     933,   933,  -368,  -368,  -368,   213,  -368,   218,  -368,   215,
     933,  -368,   133,  -368,   933,  -368,  -368,  -368,  -368,  -368,
     216,   933,   933,  -368,  -368,  -368,   120,  -368,  -368,   182,
    -368,  -368,  -368,  -368,  -368,  -368,   399,   219,  -368,  -368,
    -368,   399,  -368,  -368,   781,  -368,  -368,   165,  -368,  -368,
      33,  -368,   923,  -368,  -368,  -368,   220,   221,  -368,   258,
     192,  -368,   399,   206,  -368,  -368,   933,  -368,  -368,  -368,
    -368,  -368,   933,  -368,  -368,   399,  -368,   688,  -368,  -368,
      33,  -368,  -368,  -368,   615,  -368,  -368
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -142,  -368,  -368,    -1,    -2,  -368,  -368,    49,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -133,  -368,    18,   138,  -368,
     -25,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,    21,
    -368,  -161,   -21,   -44,  -368,  -368,  -368,  -368,  -368,   159,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,   -24,  -368,  -368,  -368,   -27,  -368,  -368,
    -168,  -181,     0,  -368,    -5,  -368,  -368,  -153,  -368,  -368,
      39,  -368,  -368,   -20,  -368,  -368,  -368,  -368,    -3,    11,
    -368,  -368,    27,  -368,  -368,    26,  -368,  -368,    28,  -368,
    -368,  -368,    22,  -368,  -368,    19,  -368,  -368,  -368,   -73,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,   256,  -368,
    -368,  -368,   -35,  -368,    20,  -368,  -368,  -368,  -138,  -368,
    -368,    -8,  -368,  -368,     5,   103,  -368,  -368,  -368,  -368,
    -368,   -33,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -126,  -368,  -368,  -368,   -98,  -368,  -159,   -11,  -368,  -368,
    -368,  -368,  -171,  -278,  -368,  -290,   180,  -368,  -368,  -368,
    -368,  -283,  -368,   140,  -367,  -368
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -327
static const yytype_int16 yytable[] =
{
      44,    43,    90,   115,    93,   238,   276,    89,    94,   133,
     287,    90,   107,   108,   114,   173,   105,   373,   129,    94,
     229,   300,    95,   374,    90,    90,   125,   125,   388,   134,
     210,   102,   143,    95,   436,   215,   294,   325,   111,   446,
     295,   220,   326,   206,   131,   259,   260,   329,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   228,
      15,   206,   402,    16,   380,   369,     3,    17,    18,   404,
      19,    20,    21,    22,    23,    24,    25,   414,    26,    27,
      28,    29,   243,    30,   381,   462,   316,    91,    31,    32,
      33,   333,   265,   266,    98,   317,   271,    34,   267,   421,
     244,   245,    31,    32,   104,   196,   117,   246,   247,   248,
     249,   117,   268,    35,   109,    36,    37,    38,    39,     6,
     318,   116,    40,    10,   118,   123,    98,    14,   250,   118,
     369,   158,   227,   294,   272,   169,   273,   224,   175,   301,
     302,   201,   203,   212,   172,   234,   174,   386,   274,   179,
      29,   232,    30,   177,   184,   189,   191,    31,    32,    33,
     459,   226,   193,   396,   197,   198,    34,   200,   205,   206,
     277,   211,   217,   216,   284,   239,   221,   235,   241,   253,
     257,   255,    35,   282,    36,    37,    38,   285,   305,   288,
     278,    40,   232,   311,   290,   293,   292,   345,   322,   306,
     415,   315,   304,    94,   419,   323,   420,   328,   331,   143,
     335,   327,   336,   383,   425,   351,   353,    95,   429,   142,
     355,   338,   357,   369,   360,   362,   368,   372,   143,   434,
     228,   377,   390,   376,   384,   318,   398,   430,   144,   145,
     146,   147,   148,   149,   394,   150,   406,  -326,   441,   399,
     417,   401,   416,   443,   424,   426,   427,   432,   439,   442,
     452,   455,   456,   339,   438,   457,   445,   311,   347,   363,
     330,   213,   387,   370,   458,   375,   464,   359,   337,   202,
     340,   341,    94,   344,   343,   342,   130,   463,   391,   367,
     361,    44,   346,   461,   451,   393,    95,   107,   444,     0,
     308,   465,     0,   204,   378,   379,     6,   264,     0,     9,
      10,    11,    12,    13,    14,     0,     0,     0,    90,     0,
     125,     0,     0,   392,    18,     0,    19,    20,    21,     0,
      23,   397,    25,     0,    26,    27,    28,    29,     0,    30,
       0,     0,     0,     0,    31,    32,    33,     0,   405,     0,
       0,     0,   408,    34,     0,     0,     0,     0,   410,     0,
       0,     0,     0,    44,   413,     0,     0,     0,     0,    35,
       0,    36,    37,    38,    39,   422,   423,     0,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   431,
       0,     0,     0,     0,     0,     0,   435,    90,     0,     0,
       0,     0,   437,   186,     6,     0,     0,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,     0,     0,   311,
       0,     0,    18,     0,    19,    20,    21,   347,    23,     0,
      25,     0,    26,    27,    28,    29,     0,    30,     0,     0,
       0,     0,    31,    32,    33,     0,     0,   435,     0,     0,
       0,    34,     6,     0,     0,    44,    10,     0,     0,     0,
      14,     0,    44,   413,     0,     0,     0,    35,     0,    36,
      37,    38,    39,   409,     6,     0,    40,     9,    10,    11,
      12,    13,    14,    29,     0,    30,     0,     0,     0,     0,
      31,    32,    18,     0,    19,    20,    21,     0,    23,    34,
      25,     0,    26,    27,    28,    29,     0,    30,     0,     0,
       0,     0,    31,    32,    33,    35,     0,    36,    37,    38,
       0,    34,     0,     0,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,    36,
      37,    38,    39,     0,     0,     0,    40,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,    15,     0,     0,
      16,     0,     0,     0,    17,    18,     0,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
      30,     0,     0,     0,     0,    31,    32,    33,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,    36,    37,    38,    39,   412,     0,     0,    40,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
      15,     0,     0,    16,     0,     0,     0,    17,    18,     0,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,    30,     0,     0,     0,     0,    31,    32,
      33,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,    36,    37,    38,    39,   466,
       0,     0,    40,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,    15,     6,     0,    16,     0,    10,     0,
      17,    18,    14,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,     0,    30,     0,    23,     0,
     110,    31,    32,    33,     0,    29,     0,    30,     0,     0,
      34,     0,    31,    32,    33,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,    35,     0,    36,    37,
      38,    39,     0,     0,     6,    40,     0,    35,    10,    36,
      37,    38,    14,     0,     0,     6,    40,     0,     0,    10,
       0,     0,     0,    14,     0,    20,     6,     0,    23,     0,
      10,     0,     0,     0,    14,    29,     0,    30,     0,    23,
       0,     0,    31,    32,    33,     0,    29,     0,    30,     0,
      23,    34,     0,    31,    32,    33,     0,    29,     0,    30,
       0,     0,    34,     0,    31,    32,   309,    35,   132,    36,
      37,    38,     0,    34,     0,     0,    40,     0,    35,   310,
      36,    37,    38,     0,     0,     0,     6,    40,     0,    35,
      10,    36,    37,    38,    14,     0,     0,     6,    40,     0,
       0,    10,     0,     0,     0,    14,     0,     0,     6,     0,
      23,     0,    10,     0,     0,     0,    14,    29,    20,    30,
       0,    23,     0,     0,    31,    32,    33,     0,    29,     0,
      30,     0,    23,    34,     0,    31,    32,     0,     0,    29,
       0,    30,     0,     0,    34,     0,    31,    32,     0,    35,
       0,    36,    37,    38,     0,    34,     0,     0,    40,     0,
      35,   132,    36,    37,    38,     0,     0,     0,     6,    40,
       0,    35,    10,    36,    37,    38,    14,     0,     6,     0,
      40,     0,    10,     0,     0,     0,    14,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,    29,
       0,    30,    23,  -325,     0,     0,    31,    32,     0,    29,
       0,    30,     0,     0,     0,    34,    31,    32,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,     0,
       0,    35,     0,    36,    37,    38,     0,     0,     0,     0,
      40,    35,     0,    36,    37,    38,     0,     0,     0,     0,
      40
};

static const yytype_int16 yycheck[] =
{
       2,     2,     7,    23,     9,   158,   174,     7,    11,    34,
     181,    16,    17,    18,    22,    88,    16,   300,    29,    22,
     153,   189,    11,   301,    29,    30,    29,    30,   318,    34,
     128,    13,    49,    22,   401,   133,    20,   208,    20,     6,
      24,   139,   213,    28,    33,    81,    82,   218,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    76,
      15,    28,    14,    18,    49,    17,     0,    22,    23,   352,
      25,    26,    27,    28,    29,    30,    31,   367,    33,    34,
      35,    36,    29,    38,    69,   452,    36,    70,    43,    44,
      45,   224,    45,    46,    70,    45,   169,    52,    51,   377,
      47,    48,    43,    44,    40,   110,    50,    54,    55,    56,
      57,    50,    65,    68,    70,    70,    71,    72,    73,     5,
      70,    70,    77,     9,    68,    70,    70,    13,    75,    68,
      17,     6,   143,    20,    36,    58,    38,   142,    69,    40,
      41,   120,   121,   132,    72,   156,    40,   315,    50,    31,
      36,   156,    38,    36,    19,    40,    19,    43,    44,    45,
     443,   143,    41,   334,    75,    36,    52,    11,    37,    28,
     175,    39,    53,    40,   179,    32,    42,    41,    16,    78,
      80,    79,    68,    67,    70,    71,    72,    41,   193,    50,
      70,    77,   197,   198,    41,    73,    70,   270,   206,    41,
     368,    40,   191,   206,   372,    41,   374,    41,     4,    49,
     235,   216,    17,   311,   385,    70,    40,   206,   389,    40,
      37,   241,    49,    17,    40,    70,    40,    40,    49,   400,
      76,    40,    75,    70,    37,    70,    37,   390,    59,    60,
      61,    62,    63,    64,    41,    66,    41,    40,   416,    39,
      24,    40,    40,   421,    41,    37,    41,    41,    76,    40,
      40,    40,     4,   252,   406,    73,   427,   272,   273,   290,
     221,   133,   316,   297,   442,   302,   457,   282,   239,   120,
     253,   255,   285,   264,   262,   257,    30,   455,   323,   294,
     285,   293,   272,   446,   432,   328,   285,   302,   424,    -1,
     197,   460,    -1,   123,   309,   310,     5,   167,    -1,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,   323,    -1,
     323,    -1,    -1,   328,    23,    -1,    25,    26,    27,    -1,
      29,   336,    31,    -1,    33,    34,    35,    36,    -1,    38,
      -1,    -1,    -1,    -1,    43,    44,    45,    -1,   353,    -1,
      -1,    -1,   357,    52,    -1,    -1,    -1,    -1,   360,    -1,
      -1,    -1,    -1,   365,   365,    -1,    -1,    -1,    -1,    68,
      -1,    70,    71,    72,    73,   380,   381,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,
      -1,    -1,    -1,    -1,    -1,    -1,   401,   402,    -1,    -1,
      -1,    -1,   402,     4,     5,    -1,    -1,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,   424,
      -1,    -1,    23,    -1,    25,    26,    27,   432,    29,    -1,
      31,    -1,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      -1,    -1,    43,    44,    45,    -1,    -1,   452,    -1,    -1,
      -1,    52,     5,    -1,    -1,   457,     9,    -1,    -1,    -1,
      13,    -1,   464,   464,    -1,    -1,    -1,    68,    -1,    70,
      71,    72,    73,     4,     5,    -1,    77,     8,     9,    10,
      11,    12,    13,    36,    -1,    38,    -1,    -1,    -1,    -1,
      43,    44,    23,    -1,    25,    26,    27,    -1,    29,    52,
      31,    -1,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      -1,    -1,    43,    44,    45,    68,    -1,    70,    71,    72,
      -1,    52,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,
      71,    72,    73,    -1,    -1,    -1,    77,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    -1,    -1,    77,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    -1,    -1,    18,    -1,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    -1,    38,    -1,    -1,    -1,    -1,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    77,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,     5,    -1,    18,    -1,     9,    -1,
      22,    23,    13,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,    38,    -1,    29,    -1,
      31,    43,    44,    45,    -1,    36,    -1,    38,    -1,    -1,
      52,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,
      72,    73,    -1,    -1,     5,    77,    -1,    68,     9,    70,
      71,    72,    13,    -1,    -1,     5,    77,    -1,    -1,     9,
      -1,    -1,    -1,    13,    -1,    26,     5,    -1,    29,    -1,
       9,    -1,    -1,    -1,    13,    36,    -1,    38,    -1,    29,
      -1,    -1,    43,    44,    45,    -1,    36,    -1,    38,    -1,
      29,    52,    -1,    43,    44,    45,    -1,    36,    -1,    38,
      -1,    -1,    52,    -1,    43,    44,    45,    68,    58,    70,
      71,    72,    -1,    52,    -1,    -1,    77,    -1,    68,    58,
      70,    71,    72,    -1,    -1,    -1,     5,    77,    -1,    68,
       9,    70,    71,    72,    13,    -1,    -1,     5,    77,    -1,
      -1,     9,    -1,    -1,    -1,    13,    -1,    -1,     5,    -1,
      29,    -1,     9,    -1,    -1,    -1,    13,    36,    26,    38,
      -1,    29,    -1,    -1,    43,    44,    45,    -1,    36,    -1,
      38,    -1,    29,    52,    -1,    43,    44,    -1,    -1,    36,
      -1,    38,    -1,    -1,    52,    -1,    43,    44,    -1,    68,
      -1,    70,    71,    72,    -1,    52,    -1,    -1,    77,    -1,
      68,    58,    70,    71,    72,    -1,    -1,    -1,     5,    77,
      -1,    68,     9,    70,    71,    72,    13,    -1,     5,    -1,
      77,    -1,     9,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    38,    29,    40,    -1,    -1,    43,    44,    -1,    36,
      -1,    38,    -1,    -1,    -1,    52,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    68,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    84,    85,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    15,    18,    22,    23,    25,
      26,    27,    28,    29,    30,    31,    33,    34,    35,    36,
      38,    43,    44,    45,    52,    68,    70,    71,    72,    73,
      77,    86,    87,    96,    97,   100,   101,   110,   113,   115,
     116,   117,   118,   119,   120,   122,   123,   126,   127,   128,
     143,   144,   145,   146,   147,   150,   151,   152,   157,   167,
     170,   173,   176,   177,   181,   182,   185,   188,   191,   195,
     198,   202,   203,   205,   207,   210,   239,   250,   266,   165,
     167,    70,   124,   167,   181,   182,   224,   227,    70,   135,
     139,   142,   110,   121,    40,   165,   160,   167,   167,    70,
      31,   110,   251,   252,   224,   176,    70,    50,    68,   129,
     130,   131,   132,    70,   165,   181,   208,   211,   215,   250,
     211,   182,    58,   113,   167,   209,   231,   232,   233,   234,
     237,    98,    40,    49,    59,    60,    61,    62,    63,    64,
      66,   102,   104,   105,   106,   108,   114,   111,     6,   168,
     171,   174,   178,   183,   186,   189,   192,   196,   199,    58,
     204,   206,    72,   202,    40,    69,   166,    36,    89,    31,
     125,   225,   261,   140,    19,   258,     4,    97,   163,    40,
     158,    19,   265,    41,   263,   259,   167,    75,    36,   240,
      11,   132,   142,   132,   259,    37,    28,   212,   213,   246,
     247,    39,   182,   111,   238,   247,    40,    53,   235,   236,
     247,    42,    99,   268,   167,   109,   110,   250,    76,   108,
     256,   103,   167,   228,   250,    41,   112,   255,   170,    32,
     172,    16,   175,    29,    47,    48,    54,    55,    56,    57,
      75,   179,   180,    78,   184,    79,   187,    80,   190,    81,
      82,   193,   194,   197,   266,    45,    46,    51,    65,   200,
     201,   202,    36,    38,    50,   216,   163,   167,    70,    90,
      93,    94,    67,    88,   167,    41,   226,   255,    50,   262,
      41,   141,    70,    73,    20,    24,   153,   155,   156,   161,
     163,    40,    41,   159,   182,   167,    41,   260,   228,    45,
      58,   167,   217,   241,   243,    40,    36,    45,    70,   133,
     134,   136,   224,    41,   214,   255,   255,   167,    41,   255,
     100,     4,   107,   108,   229,   113,    17,   173,   176,   182,
     185,   188,   191,   195,   198,   202,   217,   167,   218,   221,
     267,    70,   148,    40,    95,    37,    91,    49,   257,   167,
      40,   227,    70,   135,    96,   164,   162,   167,    40,    17,
     156,   264,    40,   264,   256,   160,    70,    40,   167,   167,
      49,    69,   244,   247,    37,   242,   163,   136,   258,   137,
      75,   215,   167,   234,    41,   230,   255,   167,    37,    39,
     219,    40,    14,   149,   264,   167,    41,    92,   167,     4,
      97,   253,    74,    96,   258,   163,    40,    24,   154,   163,
     163,   256,   167,   167,    41,   255,    37,    41,   138,   255,
     170,   167,    41,   220,   255,   167,   267,   165,    93,    76,
     254,   163,    40,   163,   243,   134,     6,   245,   247,   248,
     249,   221,    40,   222,   223,    40,     4,    73,   163,   264,
     169,   170,   267,   163,   164,   249,    74
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 2:
#line 144 "punygram.y"
    {(yyval.treeptr) = alctree(1000, "file_input", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL); root = (yyval.treeptr);;}
    break;

  case 3:
#line 146 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 4:
#line 146 "punygram.y"
    {(yyval.treeptr) = alctree(1001, "zero_more_newline_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 5:
#line 148 "punygram.y"
    {(yyval.treeptr) = alctree(1002, "NEWLINE", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 6:
#line 148 "punygram.y"
    {(yyval.treeptr) = alctree(1003, "stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 7:
#line 150 "punygram.y"
    {(yyval.treeptr) = alctree(1004, "fundef", 6, (yyvsp[(1) - (6)].treeptr), (yyvsp[(2) - (6)].treeptr), (yyvsp[(3) - (6)].treeptr), (yyvsp[(4) - (6)].treeptr), (yyvsp[(5) - (6)].treeptr), (yyvsp[(6) - (6)].treeptr), NULL, NULL);;}
    break;

  case 8:
#line 151 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 9:
#line 151 "punygram.y"
    {(yyval.treeptr) = alctree(1005, "opt_rarrowtest", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 10:
#line 153 "punygram.y"
    {(yyval.treeptr) = alctree(1006, "parameters", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 11:
#line 158 "punygram.y"
    {(yyval.treeptr) = alctree(1006, "argumentstd", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 12:
#line 159 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 13:
#line 159 "punygram.y"
    {(yyval.treeptr) = alctree(1007, "zero_more_comma_argtd", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 14:
#line 160 "punygram.y"
    {(yyval.treeptr) = alctree(1008, "comma_argstd", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 15:
#line 162 "punygram.y"
    {(yyval.treeptr) = alctree(1009, "argumentd", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 16:
#line 192 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 17:
#line 192 "punygram.y"
    {(yyval.treeptr) = alctree(1011, "tfdef", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 18:
#line 193 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 19:
#line 193 "punygram.y"
    {(yyval.treeptr) = alctree(1012, "opt_col_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 20:
#line 234 "punygram.y"
    {(yyval.treeptr) = alctree(1013, "stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 21:
#line 235 "punygram.y"
    {(yyval.treeptr) = alctree(1014, "stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 22:
#line 237 "punygram.y"
    {(yyval.treeptr) = alctree(1015, "simple_stmt", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 23:
#line 238 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 24:
#line 238 "punygram.y"
    {(yyval.treeptr) = alctree(1016, "zero_more_stmtms", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 25:
#line 239 "punygram.y"
    {(yyval.treeptr) = alctree(1017, "single_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 26:
#line 241 "punygram.y"
    {(yyval.treeptr) = alctree(1018, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 27:
#line 242 "punygram.y"
    {(yyval.treeptr) = alctree(1019, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 28:
#line 242 "punygram.y"
    {(yyval.treeptr) = alctree(1020, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 29:
#line 243 "punygram.y"
    {(yyval.treeptr) = alctree(1021, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 30:
#line 243 "punygram.y"
    {(yyval.treeptr) = alctree(1022, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 31:
#line 244 "punygram.y"
    {(yyval.treeptr) = alctree(1023, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 32:
#line 244 "punygram.y"
    {(yyval.treeptr) = alctree(1024, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 33:
#line 245 "punygram.y"
    {(yyval.treeptr) = alctree(1025, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 35:
#line 249 "punygram.y"
    {(yyval.treeptr) = alctree(1026, "expr_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 36:
#line 251 "punygram.y"
    {(yyval.treeptr) = alctree(1026, "everything_in_paranthesis", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 37:
#line 252 "punygram.y"
    {(yyval.treeptr) = alctree(1027, "everything_in_paranthesis", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 38:
#line 253 "punygram.y"
    {(yyval.treeptr) = alctree(1028, "everything_in_paranthesis", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 39:
#line 256 "punygram.y"
    {(yyval.treeptr) = alctree(1029, "yield_or_testlist", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 40:
#line 257 "punygram.y"
    {(yyval.treeptr) = alctree(1030, "yield_or_testlist", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 41:
#line 259 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 42:
#line 260 "punygram.y"
    {(yyval.treeptr) = alctree(1031, "opt_eq_yield__tc", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 43:
#line 262 "punygram.y"
    {(yyval.treeptr) = alctree(1032, "one_or_more_eq_yeild_or_tlse", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 44:
#line 263 "punygram.y"
    {(yyval.treeptr) = alctree(1033, "one_or_more_eq_yield_or_tlse", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 45:
#line 265 "punygram.y"
    {(yyval.treeptr) = alctree(1034, "annassign", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 46:
#line 268 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 47:
#line 268 "punygram.y"
    {(yyval.treeptr) = alctree(1035, "opt_eq_yield_or_tlse", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 48:
#line 270 "punygram.y"
    {(yyval.treeptr) = alctree(1036, "eq_yield_or_tlse", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 49:
#line 272 "punygram.y"
    {(yyval.treeptr) = alctree(1037, "yield_or_tlse", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 50:
#line 273 "punygram.y"
    {(yyval.treeptr) = alctree(1038, "yield_or_tlse", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 51:
#line 275 "punygram.y"
    {(yyval.treeptr) = alctree(1039, "testlist_star_expr", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 52:
#line 277 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 53:
#line 278 "punygram.y"
    {(yyval.treeptr) = alctree(1039, "zero_more_comma_test_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 54:
#line 280 "punygram.y"
    {(yyval.treeptr) = alctree(1040, "comma_test_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 55:
#line 282 "punygram.y"
    {(yyval.treeptr) = alctree(1041, "test_or_se", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 56:
#line 283 "punygram.y"
    {(yyval.treeptr) = alctree(1042, "test_or_se", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 57:
#line 285 "punygram.y"
    {(yyval.treeptr) = alctree(1043, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 58:
#line 286 "punygram.y"
    {(yyval.treeptr) = alctree(1044, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 59:
#line 287 "punygram.y"
    {(yyval.treeptr) = alctree(1045, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 60:
#line 288 "punygram.y"
    {(yyval.treeptr) = alctree(1046, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 61:
#line 289 "punygram.y"
    {(yyval.treeptr) = alctree(1047, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 62:
#line 290 "punygram.y"
    {(yyval.treeptr) = alctree(1048, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 63:
#line 291 "punygram.y"
    {(yyval.treeptr) = alctree(1049, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 64:
#line 294 "punygram.y"
    {(yyval.treeptr) = alctree(1050, "del_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 66:
#line 296 "punygram.y"
    {(yyval.treeptr) = alctree(1051, "flow_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 67:
#line 297 "punygram.y"
    {(yyval.treeptr) = alctree(1052, "flow_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 68:
#line 298 "punygram.y"
    {(yyval.treeptr) = alctree(1053, "flow_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 69:
#line 299 "punygram.y"
    {(yyval.treeptr) = alctree(1054, "flow_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 70:
#line 300 "punygram.y"
    {(yyval.treeptr) = alctree(1055, "flow_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 71:
#line 302 "punygram.y"
    {(yyval.treeptr) = alctree(1056, "break_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 72:
#line 303 "punygram.y"
    {(yyval.treeptr) = alctree(1057, "continue_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 73:
#line 304 "punygram.y"
    {(yyval.treeptr) = alctree(1058, "return stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 74:
#line 305 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 75:
#line 306 "punygram.y"
    {(yyval.treeptr) = alctree(1059, "opt_se", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 76:
#line 308 "punygram.y"
    {(yyval.treeptr) = alctree(1060, "yield_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 77:
#line 310 "punygram.y"
    {(yyval.treeptr) = alctree(1061, "raise_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 78:
#line 312 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 79:
#line 313 "punygram.y"
    {(yyval.treeptr) = alctree(1062, "opt_test_opt_from_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 80:
#line 315 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 81:
#line 316 "punygram.y"
    {(yyval.treeptr) = alctree(1063, "opt_from_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 82:
#line 318 "punygram.y"
    {(yyval.treeptr) = alctree(1064, "import_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 83:
#line 319 "punygram.y"
    {(yyval.treeptr) = alctree(1065, "import_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 84:
#line 321 "punygram.y"
    {(yyval.treeptr) = alctree(1066, "import_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 85:
#line 323 "punygram.y"
    {(yyval.treeptr) = alctree(1067, "import_from", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 86:
#line 325 "punygram.y"
    {(yyval.treeptr) = alctree(1068, "dot_ellip_dn_or_one_more_dot_ellip", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 87:
#line 326 "punygram.y"
    {(yyval.treeptr) = alctree(1069, "dot_ellip_dn_or_one_more_dot_ellip", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 88:
#line 328 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 89:
#line 329 "punygram.y"
    {(yyval.treeptr) = alctree(1070, "zero_more_dot_or_ellip", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 90:
#line 332 "punygram.y"
    {(yyval.treeptr) = alctree(1071, "one_more_dot_or_ellip", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 91:
#line 333 "punygram.y"
    {(yyval.treeptr) = alctree(1072, "one_more_dot_or_ellip", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 92:
#line 335 "punygram.y"
    {(yyval.treeptr) = alctree(1073, "dot_or_ellip", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 93:
#line 336 "punygram.y"
    {(yyval.treeptr) = alctree(1074, "dot_or_ellip", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 94:
#line 339 "punygram.y"
    {(yyval.treeptr) = alctree(1075, "star_or_names", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 95:
#line 340 "punygram.y"
    {(yyval.treeptr) = alctree(1077, "star_or_names", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 96:
#line 341 "punygram.y"
    {(yyval.treeptr) = alctree(1078, "star_or_names", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 97:
#line 343 "punygram.y"
    {(yyval.treeptr) = alctree(1079, "import_as_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 98:
#line 345 "punygram.y"
    {(yyval.treeptr) = alctree(1080, "dotted_as_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 99:
#line 346 "punygram.y"
    {(yyval.treeptr) = alctree(1081, "import_as_names", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 100:
#line 348 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 101:
#line 349 "punygram.y"
    {(yyval.treeptr) = alctree(1082, "zero_more_comma_isn", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 102:
#line 351 "punygram.y"
    {(yyval.treeptr) = alctree(1083, "comma_isn", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 103:
#line 353 "punygram.y"
    {(yyval.treeptr) = alctree(1084, "dotted_as_names", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 104:
#line 354 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 105:
#line 355 "punygram.y"
    {(yyval.treeptr) = alctree(1085, "zero_more_dsn", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 106:
#line 357 "punygram.y"
    {(yyval.treeptr) = alctree(1086, "comma_dsn", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 107:
#line 360 "punygram.y"
    {(yyval.treeptr) = alctree(1087, "dotted_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 108:
#line 361 "punygram.y"
    {(yyval.treeptr) = alctree(1088, "global_stmt", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 111:
#line 370 "punygram.y"
    {(yyval.treeptr) = alctree(1089, "compound_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 113:
#line 372 "punygram.y"
    {(yyval.treeptr) = alctree(1090, "compound_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 116:
#line 375 "punygram.y"
    {(yyval.treeptr) = alctree(1091, "compound_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 117:
#line 376 "punygram.y"
    {(yyval.treeptr) = alctree(1092, "compound_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 118:
#line 378 "punygram.y"
    {(yyval.treeptr) = alctree(1093, "if_stmt", 6, (yyvsp[(1) - (6)].treeptr), (yyvsp[(2) - (6)].treeptr), (yyvsp[(3) - (6)].treeptr), (yyvsp[(4) - (6)].treeptr), (yyvsp[(5) - (6)].treeptr), (yyvsp[(6) - (6)].treeptr), NULL, NULL);;}
    break;

  case 119:
#line 379 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 120:
#line 380 "punygram.y"
    {(yyval.treeptr) = alctree(1094, "zero_more_elif", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 121:
#line 382 "punygram.y"
    {(yyval.treeptr) = alctree(1095, "elif", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 122:
#line 384 "punygram.y"
    {(yyval.treeptr) = alctree(1096, "while_stmt", 5, (yyvsp[(1) - (5)].treeptr), (yyvsp[(2) - (5)].treeptr), (yyvsp[(3) - (5)].treeptr), (yyvsp[(4) - (5)].treeptr), (yyvsp[(5) - (5)].treeptr), NULL, NULL, NULL);;}
    break;

  case 123:
#line 386 "punygram.y"
    {(yyval.treeptr) = alctree(1097, "for_stmt", 8, (yyvsp[(1) - (8)].treeptr), (yyvsp[(2) - (8)].treeptr), (yyvsp[(3) - (8)].treeptr), (yyvsp[(4) - (8)].treeptr), (yyvsp[(5) - (8)].treeptr), (yyvsp[(6) - (8)].treeptr), (yyvsp[(7) - (8)].treeptr), (yyvsp[(8) - (8)].treeptr));;}
    break;

  case 127:
#line 392 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 133:
#line 400 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 139:
#line 408 "punygram.y"
    {(yyval.treeptr) = alctree(1098, "suite", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 140:
#line 409 "punygram.y"
    {(yyval.treeptr) = alctree(1099, "suite", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 141:
#line 411 "punygram.y"
    {(yyval.treeptr) = alctree(1100, "one_more_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 142:
#line 412 "punygram.y"
    {(yyval.treeptr) = alctree(1101, "one_more_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 143:
#line 415 "punygram.y"
    {(yyval.treeptr) = alctree(1101, "namedexpr_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 144:
#line 416 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 145:
#line 417 "punygram.y"
    {(yyval.treeptr) = alctree(1102, "opt_coleq_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 146:
#line 419 "punygram.y"
    {(yyval.treeptr) = alctree(1103, "test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 147:
#line 420 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 148:
#line 421 "punygram.y"
    {(yyval.treeptr) = alctree(1104, "opt_if_else", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 149:
#line 423 "punygram.y"
    {(yyval.treeptr) = alctree(1105, "test_nocond", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 150:
#line 425 "punygram.y"
    {(yyval.treeptr) = alctree(1106, "or_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 151:
#line 426 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 152:
#line 427 "punygram.y"
    {(yyval.treeptr) = alctree(1107, "zero_more_or_and_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 153:
#line 428 "punygram.y"
    {(yyval.treeptr) = alctree(1107, "or_and_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 154:
#line 430 "punygram.y"
    {(yyval.treeptr) = alctree(1108, "and_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 155:
#line 431 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 156:
#line 432 "punygram.y"
    {(yyval.treeptr) = alctree(1109, "zero_more_and_no_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 157:
#line 433 "punygram.y"
    {(yyval.treeptr) = alctree(1107, "not_and_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 158:
#line 435 "punygram.y"
    {(yyval.treeptr) = alctree(1110, "not_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 159:
#line 436 "punygram.y"
    {(yyval.treeptr) = alctree(1111, "not_test", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 160:
#line 438 "punygram.y"
    {(yyval.treeptr) = alctree(1112, "comparison", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 161:
#line 439 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 162:
#line 440 "punygram.y"
    {(yyval.treeptr) = alctree(1113, "zero_more_comp_op_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 163:
#line 441 "punygram.y"
    {(yyval.treeptr) = alctree(1114, "comp_op_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 164:
#line 443 "punygram.y"
    {(yyval.treeptr) = alctree(1115, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 165:
#line 444 "punygram.y"
    {(yyval.treeptr) = alctree(1116, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 166:
#line 445 "punygram.y"
    {(yyval.treeptr) = alctree(1117, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 167:
#line 446 "punygram.y"
    {(yyval.treeptr) = alctree(1118, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 168:
#line 447 "punygram.y"
    {(yyval.treeptr) = alctree(1119, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 169:
#line 448 "punygram.y"
    {(yyval.treeptr) = alctree(1120, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 170:
#line 449 "punygram.y"
    {(yyval.treeptr) = alctree(1121, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 172:
#line 452 "punygram.y"
    {(yyval.treeptr) = alctree(1122, "star_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 173:
#line 454 "punygram.y"
    {(yyval.treeptr) = alctree(1123, "expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 174:
#line 455 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 175:
#line 456 "punygram.y"
    {(yyval.treeptr) = alctree(1124, "zero_more_or_xor_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 176:
#line 457 "punygram.y"
    {(yyval.treeptr) = alctree(1125, "or_xor_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 177:
#line 459 "punygram.y"
    {(yyval.treeptr) = alctree(1126, "xor_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 178:
#line 460 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 179:
#line 461 "punygram.y"
    {(yyval.treeptr) = alctree(1127, "zero_more_carrot_and_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 180:
#line 462 "punygram.y"
    {(yyval.treeptr) = alctree(1128, "carrot_and_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 181:
#line 464 "punygram.y"
    {(yyval.treeptr) = alctree(1130, "and_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 182:
#line 465 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 183:
#line 466 "punygram.y"
    {(yyval.treeptr) = alctree(1131, "zero_more_and_shift", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 184:
#line 467 "punygram.y"
    {(yyval.treeptr) = alctree(1132, "and_shif", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 185:
#line 469 "punygram.y"
    {(yyval.treeptr) = alctree(1133, "shift_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 186:
#line 470 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 187:
#line 471 "punygram.y"
    {(yyval.treeptr) = alctree(1134, "zero_more_double_arrow_arith", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 188:
#line 472 "punygram.y"
    {(yyval.treeptr) = alctree(1135, "double_arrow_arith", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 189:
#line 473 "punygram.y"
    {(yyval.treeptr) = alctree(1136, "left_or_right", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 190:
#line 474 "punygram.y"
    {(yyval.treeptr) = alctree(1137, "left_or_right", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 191:
#line 476 "punygram.y"
    {(yyval.treeptr) = alctree(1138, "arith_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 192:
#line 477 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 193:
#line 478 "punygram.y"
    {(yyval.treeptr) = alctree(1139, "zero_more_plus_minus_term", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 194:
#line 479 "punygram.y"
    {(yyval.treeptr) = alctree(1138, "plus_minus_term", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 195:
#line 481 "punygram.y"
    {(yyval.treeptr) = alctree(1140, "term", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 196:
#line 482 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 197:
#line 483 "punygram.y"
    {(yyval.treeptr) = alctree(1141, "zero_more_factor", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 198:
#line 484 "punygram.y"
    {(yyval.treeptr) = alctree(1142, "symbols_factor", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 199:
#line 485 "punygram.y"
    {(yyval.treeptr) = alctree(1143, "symbols_tf", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 200:
#line 486 "punygram.y"
    {(yyval.treeptr) = alctree(1144, "symbols_tf", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 201:
#line 487 "punygram.y"
    {(yyval.treeptr) = alctree(1145, "symbols_tf", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 202:
#line 488 "punygram.y"
    {(yyval.treeptr) = alctree(1146, "symbols_tf", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 203:
#line 490 "punygram.y"
    {(yyval.treeptr) = alctree(1147, "factor", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 204:
#line 491 "punygram.y"
    {(yyval.treeptr) = alctree(1148, "term", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 205:
#line 493 "punygram.y"
    {(yyval.treeptr) = alctree(1149, "power", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 206:
#line 494 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 207:
#line 495 "punygram.y"
    {(yyval.treeptr) = alctree(1150, "opt_doublestar_factor", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 208:
#line 497 "punygram.y"
    {(yyval.treeptr) = alctree(11451, "atom_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 209:
#line 498 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 210:
#line 499 "punygram.y"
    {(yyval.treeptr) = alctree(1152, "zero_more_trailer", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 211:
#line 501 "punygram.y"
    {(yyval.treeptr) = alctree(1153, "atom", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 212:
#line 502 "punygram.y"
    {(yyval.treeptr) = alctree(1154, "atom", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 213:
#line 503 "punygram.y"
    {(yyval.treeptr) = alctree(1155, "atom", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 214:
#line 504 "punygram.y"
    {(yyval.treeptr) = alctree(1156, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 215:
#line 505 "punygram.y"
    {(yyval.treeptr) = alctree(1157, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 216:
#line 506 "punygram.y"
    {(yyval.treeptr) = alctree(1158, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 217:
#line 507 "punygram.y"
    {(yyval.treeptr) = alctree(1159, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 218:
#line 508 "punygram.y"
    {(yyval.treeptr) = alctree(1160, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 219:
#line 509 "punygram.y"
    {(yyval.treeptr) = alctree(1161, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 220:
#line 510 "punygram.y"
    {(yyval.treeptr) = alctree(1162, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 221:
#line 511 "punygram.y"
    {(yyval.treeptr) = alctree(1162, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 222:
#line 513 "punygram.y"
    {(yyval.treeptr) = alctree(1163, "opt_yield_tlc", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 223:
#line 514 "punygram.y"
    {(yyval.treeptr) = alctree(1164, "opt_yield_tlc", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 224:
#line 520 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 225:
#line 521 "punygram.y"
    {(yyval.treeptr) = alctree(1165, "opt_dictsetmarker", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 226:
#line 523 "punygram.y"
    {(yyval.treeptr) = alctree(1166, "one_more_string", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 227:
#line 524 "punygram.y"
    {(yyval.treeptr) = alctree(1167, "one_more_sttring", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 228:
#line 526 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 229:
#line 526 "punygram.y"
    {(yyval.treeptr) = alctree(1169, "testlist_comp", 1, (yyvsp[(1) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 230:
#line 532 "punygram.y"
    {(yyval.treeptr) = alctree(1170, "comp_for_multiple", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 231:
#line 533 "punygram.y"
    {(yyval.treeptr) = alctree(1171, "comp_for_multiple", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 232:
#line 534 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 233:
#line 535 "punygram.y"
    {(yyval.treeptr) = alctree(1172, "zero_more_comma_nt_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 234:
#line 536 "punygram.y"
    {(yyval.treeptr) = alctree(1173, "comma_nt_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 235:
#line 538 "punygram.y"
    {(yyval.treeptr) = alctree(1174, "namedexpr_or_star_expr", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 236:
#line 539 "punygram.y"
    {(yyval.treeptr) = alctree(1175, "namedexpr_or_star_expr", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 237:
#line 541 "punygram.y"
    {(yyval.treeptr) = alctree(1175, "trailer", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 238:
#line 542 "punygram.y"
    {(yyval.treeptr) = alctree(1176, "trailer", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 239:
#line 543 "punygram.y"
    {(yyval.treeptr) = alctree(1176, "trailer", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 240:
#line 544 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 241:
#line 544 "punygram.y"
    {(yyval.treeptr) = alctree(1177, "opt_arglist", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 242:
#line 546 "punygram.y"
    {(yyval.treeptr) = alctree(1178, "subscriptlist", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 243:
#line 547 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 244:
#line 548 "punygram.y"
    {(yyval.treeptr) = alctree(1179, "zero_more_comma_sub", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 245:
#line 549 "punygram.y"
    {(yyval.treeptr) = alctree(1180, "comma_sub", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 246:
#line 551 "punygram.y"
    {(yyval.treeptr) = alctree(1181, "subscrtipt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 247:
#line 552 "punygram.y"
    {(yyval.treeptr) = alctree(1182, "subscript", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 248:
#line 553 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 249:
#line 553 "punygram.y"
    {(yyval.treeptr) = alctree(1183, "opt_slicop", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 250:
#line 555 "punygram.y"
    {(yyval.treeptr) = alctree(1184, "sliceop", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 251:
#line 557 "punygram.y"
    {(yyval.treeptr) = alctree(1185, "exprlist", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 252:
#line 558 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 253:
#line 559 "punygram.y"
    {(yyval.treeptr) = alctree(1186, "zero_more_comma_expr_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 254:
#line 560 "punygram.y"
    {(yyval.treeptr) = alctree(1187, "comma_expr_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 255:
#line 562 "punygram.y"
    {(yyval.treeptr) = alctree(1188, "expr_or_starexpr", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 256:
#line 563 "punygram.y"
    {(yyval.treeptr) = alctree(1189, "expr_or_starexpr", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 257:
#line 565 "punygram.y"
    {(yyval.treeptr) = alctree(1190, "testlist", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 258:
#line 566 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 259:
#line 567 "punygram.y"
    {(yyval.treeptr) = alctree(1191, "zero_more_comma_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 260:
#line 568 "punygram.y"
    {(yyval.treeptr) = alctree(1192, "comma_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 261:
#line 573 "punygram.y"
    {(yyval.treeptr) = alctree(1300, "dictorsetmaker", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 262:
#line 576 "punygram.y"
    {(yyval.treeptr) = alctree(1193, "dict_set_marker", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 263:
#line 577 "punygram.y"
    {(yyval.treeptr) = alctree(1194, "dict_set_marker", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 264:
#line 579 "punygram.y"
    {(yyval.treeptr) = alctree(1195, "dsm_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 265:
#line 581 "punygram.y"
    {(yyval.treeptr) = alctree(1196, "tct_or_dse", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 266:
#line 582 "punygram.y"
    {(yyval.treeptr) = alctree(1197, "tct_or_dse", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 267:
#line 584 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 268:
#line 585 "punygram.y"
    {(yyval.treeptr) = alctree(1198, "zero_more_comma_tct_or_dse", 2, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 269:
#line 587 "punygram.y"
    {(yyval.treeptr) = alctree(1199, "cf_or_comma_tct_dct", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 270:
#line 588 "punygram.y"
    {(yyval.treeptr) = alctree(1200, "cf_or_comma_tct_dct", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 271:
#line 590 "punygram.y"
    {(yyval.treeptr) = alctree(1201, "dsm_star_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 272:
#line 592 "punygram.y"
    {(yyval.treeptr) = alctree(1202, "cf_or_comma_tse", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 273:
#line 593 "punygram.y"
    {(yyval.treeptr) = alctree(1203, "cf_or_comma_tse", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 274:
#line 595 "punygram.y"
    {(yyval.treeptr) = alctree(1204, "classdef", 5, (yyvsp[(1) - (5)].treeptr), (yyvsp[(2) - (5)].treeptr), (yyvsp[(3) - (5)].treeptr), (yyvsp[(4) - (5)].treeptr), (yyvsp[(5) - (5)].treeptr), NULL, NULL, NULL);;}
    break;

  case 275:
#line 596 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 276:
#line 597 "punygram.y"
    {(yyval.treeptr) = alctree(1205, "opt_lpar_arglist_rpar", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 277:
#line 599 "punygram.y"
    {(yyval.treeptr) = alctree(1206, "arglist", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 278:
#line 600 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 279:
#line 601 "punygram.y"
    {(yyval.treeptr) = alctree(1207, "zero_more_comma_arguments", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 280:
#line 603 "punygram.y"
    {(yyval.treeptr) = alctree(1208, "argument", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 281:
#line 604 "punygram.y"
    {(yyval.treeptr) = alctree(1209, "argument", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 282:
#line 605 "punygram.y"
    {(yyval.treeptr) = alctree(1210, "argument", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 283:
#line 606 "punygram.y"
    {(yyval.treeptr) = alctree(1211, "argument", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 284:
#line 607 "punygram.y"
    {(yyval.treeptr) = alctree(1212, "argument", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 285:
#line 609 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 286:
#line 610 "punygram.y"
    {(yyval.treeptr) = alctree(1213, "opt_comp_for", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 287:
#line 612 "punygram.y"
    {(yyval.treeptr) = alctree(1214, "comp_iter", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 288:
#line 613 "punygram.y"
    {(yyval.treeptr) = alctree(1215, "comp_iter", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 289:
#line 615 "punygram.y"
    {(yyval.treeptr) = alctree(1216, "sync_comp_for", 5, (yyvsp[(1) - (5)].treeptr), (yyvsp[(2) - (5)].treeptr), (yyvsp[(3) - (5)].treeptr), (yyvsp[(4) - (5)].treeptr), (yyvsp[(5) - (5)].treeptr), NULL, NULL, NULL);;}
    break;

  case 290:
#line 617 "punygram.y"
    {(yyval.treeptr) = alctree(1217, "comp_for", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 291:
#line 618 "punygram.y"
    {(yyval.treeptr) = alctree(1218, "comp_if", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 292:
#line 619 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 293:
#line 620 "punygram.y"
    {(yyval.treeptr) = alctree(1219, "opt_comp_iter", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 295:
#line 623 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 299:
#line 627 "punygram.y"
    {(yyval.treeptr) = alctree(1220, "func_body_suite", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 300:
#line 628 "punygram.y"
    {(yyval.treeptr) = alctree(1221, "func_body_suite", 5, (yyvsp[(1) - (5)].treeptr), (yyvsp[(2) - (5)].treeptr), (yyvsp[(3) - (5)].treeptr), (yyvsp[(4) - (5)].treeptr), (yyvsp[(5) - (5)].treeptr), NULL, NULL, NULL);;}
    break;

  case 301:
#line 630 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 302:
#line 631 "punygram.y"
    {(yyval.treeptr) = alctree(1222, "opt_type_comment_newline", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 303:
#line 644 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 304:
#line 645 "punygram.y"
    {(yyval.treeptr) = alctree(1223, "opt_comma", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 305:
#line 646 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 306:
#line 647 "punygram.y"
    {(yyval.treeptr) = alctree(1224, "opt_type_comment", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 307:
#line 648 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 308:
#line 649 "punygram.y"
    {(yyval.treeptr) = alctree(1225, "opt_eq_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 309:
#line 650 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 310:
#line 651 "punygram.y"
    {(yyval.treeptr) = alctree(1226, "opt_as_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 311:
#line 652 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 312:
#line 653 "punygram.y"
    {(yyval.treeptr) = alctree(1227, "zero_more_comma_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 313:
#line 654 "punygram.y"
    {(yyval.treeptr) = alctree(1228, "comma_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 314:
#line 655 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 315:
#line 656 "punygram.y"
    {(yyval.treeptr) = alctree(1229, "zero_more_dot_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 316:
#line 657 "punygram.y"
    {(yyval.treeptr) = alctree(1230, "dot_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 317:
#line 658 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 318:
#line 659 "punygram.y"
    {(yyval.treeptr) = alctree(1231, "opt_comma_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 319:
#line 660 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 320:
#line 661 "punygram.y"
    {(yyval.treeptr) = alctree(1232, "opt_else", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 321:
#line 662 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 322:
#line 663 "punygram.y"
    {(yyval.treeptr) = alctree(1233, "opt_as_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 324:
#line 665 "punygram.y"
    {(yyval.treeptr) = alctree(1234, "plus_or_minus", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 325:
#line 666 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 326:
#line 667 "punygram.y"
    {(yyval.treeptr) = alctree(1235, "opt_test", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 327:
#line 669 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 328:
#line 669 "punygram.y"
    {(yyval.treeptr) = alctree(1235, "opt_semi_colon", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;


/* Line 1267 of yacc.c.  */
#line 3621 "punygram.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 671 "punygram.y"

