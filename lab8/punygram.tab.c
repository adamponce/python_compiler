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
#define YYLAST   1004

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  189
/* YYNRULES -- Number of rules.  */
#define YYNRULES  333
/* YYNRULES -- Number of states.  */
#define YYNSTATES  473

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
      50,    52,    54,    56,    60,    62,    65,    70,    71,    74,
      77,    78,    80,    82,    84,    86,    88,    90,    92,    94,
      96,    99,   101,   104,   106,   108,   110,   111,   114,   116,
     119,   123,   124,   126,   129,   131,   133,   137,   138,   141,
     144,   146,   148,   150,   152,   154,   156,   158,   160,   162,
     165,   167,   169,   171,   173,   175,   177,   179,   181,   184,
     185,   187,   189,   192,   193,   196,   197,   200,   202,   204,
     207,   212,   215,   217,   218,   221,   223,   226,   228,   230,
     232,   236,   238,   241,   244,   248,   249,   252,   255,   258,
     259,   262,   265,   268,   272,   276,   280,   282,   284,   286,
     288,   290,   292,   294,   301,   302,   305,   310,   316,   325,
     330,   334,   338,   339,   343,   345,   348,   352,   359,   360,
     363,   366,   369,   372,   375,   377,   382,   384,   387,   390,
     391,   394,   397,   398,   403,   405,   408,   409,   412,   415,
     418,   419,   422,   425,   428,   430,   433,   434,   437,   440,
     442,   444,   446,   448,   450,   452,   454,   456,   459,   462,
     463,   466,   469,   472,   473,   476,   479,   482,   483,   486,
     489,   492,   493,   496,   499,   501,   503,   506,   507,   510,
     513,   516,   517,   520,   523,   525,   527,   529,   531,   534,
     536,   539,   540,   543,   546,   547,   550,   554,   558,   562,
     564,   566,   568,   570,   572,   574,   576,   578,   580,   582,
     583,   585,   587,   590,   591,   594,   596,   599,   600,   603,
     606,   608,   610,   614,   618,   621,   622,   624,   628,   629,
     632,   635,   637,   642,   643,   645,   648,   652,   653,   656,
     659,   661,   663,   667,   668,   671,   674,   676,   678,   680,
     683,   687,   690,   691,   695,   697,   700,   703,   705,   708,
     714,   715,   719,   723,   724,   728,   731,   735,   739,   742,
     745,   746,   748,   750,   752,   758,   760,   764,   765,   767,
     770,   771,   773,   776,   778,   780,   786,   787,   790,   791,
     793,   794,   796,   797,   800,   801,   804,   805,   808,   811,
     812,   815,   818,   819,   822,   823,   827,   828,   831,   833,
     835,   836,   838,   839
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      84,     0,    -1,    85,     3,    -1,    -1,    85,    86,    -1,
       4,    -1,    96,    -1,     7,    70,    89,    88,    40,   256,
      -1,    -1,    67,   170,    -1,    36,    90,    37,    -1,    93,
      91,    -1,    -1,    91,    92,    -1,    41,    93,    -1,    94,
     260,    -1,    -1,    70,    95,    -1,    -1,    40,   170,    -1,
      99,    -1,   149,    -1,    97,    -1,    74,    98,    73,    -1,
       4,    -1,    98,     4,    -1,   102,   100,   271,     4,    -1,
      -1,   100,   101,    -1,    42,   103,    -1,    -1,   103,    -1,
     104,    -1,   118,    -1,   119,    -1,   120,    -1,   129,    -1,
     146,    -1,   147,    -1,   148,    -1,   113,   105,    -1,   109,
      -1,   117,   106,    -1,   107,    -1,   253,    -1,   231,    -1,
      -1,   108,   259,    -1,   111,    -1,   108,   111,    -1,    40,
     170,   110,    -1,    -1,   111,    -1,    49,   112,    -1,   253,
      -1,   113,    -1,   116,   114,   258,    -1,    -1,   114,   115,
      -1,    41,   116,    -1,   170,    -1,   184,    -1,    59,    -1,
      60,    -1,    61,    -1,    62,    -1,    63,    -1,    66,    -1,
      64,    -1,    10,   227,    -1,    35,    -1,   121,    -1,   122,
      -1,   123,    -1,   126,    -1,   125,    -1,    27,    -1,    33,
      -1,    12,   124,    -1,    -1,   113,    -1,   253,    -1,     8,
     127,    -1,    -1,   170,   128,    -1,    -1,    31,   170,    -1,
     130,    -1,   131,    -1,    11,   142,    -1,    31,   132,    11,
     136,    -1,   133,   145,    -1,   134,    -1,    -1,   133,   135,
      -1,   135,    -1,   134,   135,    -1,    50,    -1,    68,    -1,
      45,    -1,    36,   139,    37,    -1,   139,    -1,    70,   261,
      -1,   145,   261,    -1,   137,   140,   258,    -1,    -1,   140,
     141,    -1,    41,   137,    -1,   138,   143,    -1,    -1,   143,
     144,    -1,    41,   138,    -1,    70,   264,    -1,    34,    70,
     262,    -1,    25,    70,   262,    -1,    23,   170,   266,    -1,
     150,    -1,   153,    -1,   154,    -1,   155,    -1,   160,    -1,
      87,    -1,   242,    -1,     6,   168,    40,   166,   151,   267,
      -1,    -1,   151,   152,    -1,    14,   168,    40,   166,    -1,
      18,   168,    40,   166,   267,    -1,    28,   227,    75,   231,
      40,   259,   166,   267,    -1,    15,    40,   166,   156,    -1,
     158,   267,   157,    -1,    24,    40,   166,    -1,    -1,    24,
      40,   166,    -1,   159,    -1,   158,   159,    -1,   164,    40,
     166,    -1,    22,   163,   161,    40,   259,   166,    -1,    -1,
     161,   162,    -1,    41,   163,    -1,   170,   268,    -1,    20,
     165,    -1,   170,   261,    -1,    99,    -1,     4,    73,   167,
      74,    -1,    96,    -1,   167,    96,    -1,   170,   169,    -1,
      -1,    69,   170,    -1,   173,   171,    -1,    -1,     6,   173,
      17,   170,    -1,   173,    -1,   176,   174,    -1,    -1,   174,
     175,    -1,    32,   176,    -1,   179,   177,    -1,    -1,   177,
     178,    -1,    16,   179,    -1,    29,   179,    -1,   180,    -1,
     185,   181,    -1,    -1,   181,   182,    -1,   183,   185,    -1,
      47,    -1,    48,    -1,    54,    -1,    56,    -1,    57,    -1,
      55,    -1,    29,    -1,    75,    -1,    45,   185,    -1,   188,
     186,    -1,    -1,   186,   187,    -1,    78,   188,    -1,   191,
     189,    -1,    -1,   189,   190,    -1,    79,   191,    -1,   194,
     192,    -1,    -1,   192,   193,    -1,    80,   194,    -1,   198,
     195,    -1,    -1,   195,   196,    -1,   197,   198,    -1,    81,
      -1,    82,    -1,   201,   199,    -1,    -1,   199,   200,    -1,
     269,   201,    -1,   205,   202,    -1,    -1,   202,   203,    -1,
     204,   205,    -1,    45,    -1,    46,    -1,    51,    -1,    65,
      -1,   269,   205,    -1,   206,    -1,   208,   207,    -1,    -1,
      58,   205,    -1,   210,   209,    -1,    -1,   209,   219,    -1,
      36,   211,    37,    -1,    38,   214,    39,    -1,    52,   212,
      53,    -1,    70,    -1,    71,    -1,   213,    -1,    68,    -1,
       9,    -1,    13,    -1,     5,    -1,    77,    -1,   214,    -1,
     253,    -1,    -1,   234,    -1,    72,    -1,   213,    72,    -1,
      -1,   218,   215,    -1,   250,    -1,   216,   258,    -1,    -1,
     216,   217,    -1,    41,   218,    -1,   168,    -1,   184,    -1,
      36,   220,    37,    -1,    38,   221,    39,    -1,    50,    70,
      -1,    -1,   244,    -1,   224,   222,   258,    -1,    -1,   222,
     223,    -1,    41,   224,    -1,   170,    -1,   270,    40,   270,
     225,    -1,    -1,   226,    -1,    40,   270,    -1,   230,   228,
     258,    -1,    -1,   228,   229,    -1,    41,   230,    -1,   185,
      -1,   184,    -1,   170,   232,   258,    -1,    -1,   232,   233,
      -1,    41,   170,    -1,   235,    -1,   236,    -1,   240,    -1,
     237,   239,    -1,   170,    40,   170,    -1,    58,   185,    -1,
      -1,   238,    41,   237,    -1,   250,    -1,   238,   258,    -1,
     116,   241,    -1,   250,    -1,   114,   258,    -1,    30,    70,
     243,    40,   166,    -1,    -1,    36,   220,    37,    -1,   246,
     245,   258,    -1,    -1,   245,    41,   246,    -1,   170,   247,
      -1,   170,    69,   170,    -1,   170,    49,   170,    -1,    58,
     170,    -1,    45,   170,    -1,    -1,   250,    -1,   250,    -1,
     251,    -1,    28,   227,    75,   173,   252,    -1,   249,    -1,
       6,   172,   252,    -1,    -1,   248,    -1,    26,   254,    -1,
      -1,   255,    -1,    31,   170,    -1,   113,    -1,    99,    -1,
       4,   257,    73,   167,    74,    -1,    -1,    76,     4,    -1,
      -1,    41,    -1,    -1,    76,    -1,    -1,    49,   170,    -1,
      -1,    19,    70,    -1,    -1,   262,   263,    -1,    41,    70,
      -1,    -1,   264,   265,    -1,    50,    70,    -1,    -1,    41,
     170,    -1,    -1,    17,    40,   166,    -1,    -1,    19,   185,
      -1,    43,    -1,    44,    -1,    -1,   170,    -1,    -1,    42,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   145,   145,   147,   147,   149,   149,   151,   152,   152,
     154,   159,   160,   160,   161,   163,   193,   193,   194,   194,
     235,   236,   237,   239,   241,   242,   244,   245,   245,   247,
     249,   249,   253,   254,   254,   255,   255,   256,   256,   257,
     260,   262,   263,   264,   267,   268,   270,   271,   273,   274,
     276,   279,   279,   281,   283,   284,   286,   288,   289,   291,
     293,   294,   296,   297,   298,   299,   300,   301,   302,   305,
     306,   307,   308,   309,   310,   311,   313,   314,   315,   316,
     317,   319,   321,   323,   324,   326,   327,   329,   330,   332,
     334,   336,   337,   339,   340,   343,   344,   346,   347,   350,
     351,   352,   354,   356,   357,   359,   360,   362,   364,   365,
     366,   368,   371,   372,   373,   374,   381,   382,   383,   384,
     385,   386,   387,   389,   390,   391,   393,   395,   397,   399,
     401,   402,   403,   403,   406,   407,   408,   410,   411,   411,
     412,   414,   416,   417,   419,   420,   422,   423,   426,   427,
     428,   430,   431,   432,   434,   436,   437,   438,   439,   441,
     442,   443,   444,   446,   447,   449,   450,   451,   452,   454,
     455,   456,   457,   458,   459,   460,   461,   463,   465,   466,
     467,   468,   470,   471,   472,   473,   475,   476,   477,   478,
     480,   481,   482,   483,   484,   485,   487,   488,   489,   490,
     492,   493,   494,   495,   496,   497,   498,   499,   501,   502,
     504,   505,   506,   508,   509,   510,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   524,   525,   531,
     532,   534,   535,   537,   537,   543,   544,   545,   546,   547,
     549,   550,   552,   553,   554,   555,   555,   557,   558,   559,
     560,   562,   563,   564,   564,   566,   568,   569,   570,   571,
     573,   574,   576,   577,   578,   579,   584,   587,   588,   590,
     592,   593,   595,   596,   598,   599,   601,   603,   604,   606,
     607,   608,   610,   611,   612,   614,   615,   616,   617,   618,
     620,   621,   623,   624,   626,   628,   629,   630,   631,   633,
     634,   634,   636,   636,   638,   639,   641,   642,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   680,   680
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
  "weird_buggy_thing", "one_more_newline", "simple_stmt",
  "zero_more_stmts", "single_stmt", "small_or_null", "small_stmt",
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
      96,    96,    96,    97,    98,    98,    99,   100,   100,   101,
     102,   102,   103,   103,   103,   103,   103,   103,   103,   103,
     104,   105,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   110,   110,   111,   112,   112,   113,   114,   114,   115,
     116,   116,   117,   117,   117,   117,   117,   117,   117,   118,
     119,   120,   120,   120,   120,   120,   121,   122,   123,   124,
     124,   125,   126,   127,   127,   128,   128,   129,   129,   130,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   137,   138,   139,   140,   140,   141,   142,   143,
     143,   144,   145,   146,   147,   148,   149,   149,   149,   149,
     149,   149,   149,   150,   151,   151,   152,   153,   154,   155,
     156,   156,   157,   157,   158,   158,   159,   160,   161,   161,
     162,   163,   164,   165,   166,   166,   167,   167,   168,   169,
     169,   170,   171,   171,   172,   173,   174,   174,   175,   176,
     177,   177,   178,   179,   179,   180,   181,   181,   182,   183,
     183,   183,   183,   183,   183,   183,   183,   184,   185,   186,
     186,   187,   188,   189,   189,   190,   191,   192,   192,   193,
     194,   195,   195,   196,   197,   197,   198,   199,   199,   200,
     201,   202,   202,   203,   204,   204,   204,   204,   205,   205,
     206,   207,   207,   208,   209,   209,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   211,   211,   212,
     212,   213,   213,   214,   214,   215,   215,   216,   216,   217,
     218,   218,   219,   219,   219,   220,   220,   221,   222,   222,
     223,   224,   224,   225,   225,   226,   227,   228,   228,   229,
     230,   230,   231,   232,   232,   233,   234,   235,   235,   236,
     237,   237,   238,   238,   239,   239,   240,   241,   241,   242,
     243,   243,   244,   245,   245,   246,   246,   246,   246,   246,
     247,   247,   248,   248,   249,   250,   251,   252,   252,   253,
     254,   254,   255,   255,   256,   256,   257,   257,   258,   258,
     259,   259,   260,   260,   261,   261,   262,   262,   263,   264,
     264,   265,   266,   266,   267,   267,   268,   268,   269,   269,
     270,   270,   271,   271
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     1,     6,     0,     2,
       3,     2,     0,     2,     2,     2,     0,     2,     0,     2,
       1,     1,     1,     3,     1,     2,     4,     0,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     0,     2,     1,     2,
       3,     0,     1,     2,     1,     1,     3,     0,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     1,     2,     0,     2,     0,     2,     1,     1,     2,
       4,     2,     1,     0,     2,     1,     2,     1,     1,     1,
       3,     1,     2,     2,     3,     0,     2,     2,     2,     0,
       2,     2,     2,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     0,     2,     4,     5,     8,     4,
       3,     3,     0,     3,     1,     2,     3,     6,     0,     2,
       2,     2,     2,     2,     1,     4,     1,     2,     2,     0,
       2,     2,     0,     4,     1,     2,     0,     2,     2,     2,
       0,     2,     2,     2,     1,     2,     0,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     0,
       2,     2,     2,     0,     2,     2,     2,     0,     2,     2,
       2,     0,     2,     2,     1,     1,     2,     0,     2,     2,
       2,     0,     2,     2,     1,     1,     1,     1,     2,     1,
       2,     0,     2,     2,     0,     2,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     2,     0,     2,     1,     2,     0,     2,     2,
       1,     1,     3,     3,     2,     0,     1,     3,     0,     2,
       2,     1,     4,     0,     1,     2,     3,     0,     2,     2,
       1,     1,     3,     0,     2,     2,     1,     1,     1,     2,
       3,     2,     0,     3,     1,     2,     2,     1,     2,     5,
       0,     3,     3,     0,     3,     2,     3,     3,     2,     2,
       0,     1,     1,     1,     5,     1,     3,     0,     1,     2,
       0,     1,     2,     1,     1,     5,     0,     2,     0,     1,
       0,     1,     0,     2,     0,     2,     0,     2,     2,     0,
       2,     2,     0,     2,     0,     3,     0,     2,     1,     1,
       0,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,    30,     1,     2,     5,   225,     0,     0,    83,
     223,     0,     0,    79,   224,     0,     0,     0,     0,     0,
     300,    76,     0,     0,     0,    93,    77,     0,    70,   233,
     233,   328,   329,     0,   229,   222,   219,   220,   231,     0,
     226,     4,   121,     6,    22,    20,    27,    31,    32,    46,
      57,    33,    34,    35,    71,    72,    73,    75,    74,    36,
      87,    88,    37,    38,    39,    21,   116,   117,   118,   119,
     120,    60,   152,   156,   160,   164,    61,   166,   179,   183,
     187,   191,   197,   201,   209,   211,   214,   221,   122,    81,
       0,     0,   149,     0,    82,    85,   261,   260,    69,   257,
     319,   109,    89,   314,    80,    78,    30,     0,   138,   326,
     322,   316,     0,   303,   299,   301,     0,   163,   280,    97,
      98,     0,     0,    92,    95,   316,   240,   241,     0,   227,
     237,   228,     0,   177,     0,    57,    60,     0,   230,   266,
     267,   272,   268,    24,     0,   332,     0,     0,    62,    63,
      64,    65,    66,    68,    67,    40,    43,   310,    41,    48,
       0,   308,     0,   151,   155,   159,   165,   178,   182,   186,
     190,   196,   200,     0,   210,   213,   232,   208,    30,     0,
     148,    16,     8,     0,    84,   308,   112,   108,     0,   103,
       0,   144,     0,    30,     0,     0,   141,     0,   115,   114,
     302,     0,   245,     0,     0,    94,    91,    96,   113,   216,
       0,   234,   308,   295,   235,   217,   271,   308,   276,   277,
       0,   218,   308,   269,   274,    25,    23,   333,    28,     0,
      51,    53,    55,    54,   311,    49,    47,    42,   263,    45,
      44,   309,    58,    56,     0,     0,   157,     0,   161,   175,
     169,   170,   171,   174,   172,   173,   176,   167,     0,     0,
     180,     0,   184,     0,   188,   194,   195,   192,     0,   198,
       0,   204,   205,   206,   207,   202,     0,   212,   245,   330,
       0,   215,   124,   150,    18,     0,    12,   312,     0,     0,
      86,   309,   258,   256,     0,   320,     0,   110,   315,    30,
       0,     0,   129,   324,   134,     0,   324,   310,     0,   139,
     327,   323,     0,   317,     0,     0,     0,   290,     0,   246,
     283,    30,     0,    99,   314,    90,   105,   101,     0,   309,
     238,   236,   278,   270,   309,   275,    29,    26,    50,    52,
     308,    59,     0,   158,   162,   168,   181,   185,   189,   193,
     199,   203,     0,   251,     0,   248,     0,   244,   324,     0,
      17,    10,    11,     0,    15,     9,    30,   259,   321,   111,
     146,    30,   142,   314,    30,     0,   135,   132,    30,   127,
      30,   140,   318,   310,   289,   288,     0,     0,   285,   291,
     281,   308,   279,     0,   102,   308,     0,   239,     0,   273,
     309,   264,   262,   153,   242,   243,   308,   330,     0,   125,
     123,    19,    16,    13,   313,   306,   304,     7,   145,   147,
     143,   131,    30,     0,   130,   136,   137,    30,   287,   286,
     309,   282,   100,   309,   106,   104,   297,   265,   309,   249,
     247,   331,   253,     0,    14,     0,     0,   325,    30,   324,
     284,   107,     0,   298,   292,   293,   294,   250,   330,   252,
     254,    30,   307,    30,   133,   128,   297,   154,   255,   126,
      30,   296,   305
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    41,    42,   289,   182,   285,   362,   413,
     286,   287,   360,   370,    44,   144,   191,   145,   228,    46,
      47,    48,   155,   237,   156,   157,   158,   338,   159,   231,
      49,   161,   242,    50,   160,    51,    52,    53,    54,    55,
      56,   105,    57,    58,    94,   184,    59,    60,    61,   121,
     122,   123,   124,   325,   326,   101,   327,   395,   434,   102,
     187,   297,   103,    62,    63,    64,    65,    66,   358,   409,
      67,    68,    69,   302,   424,   303,   304,    70,   194,   309,
     108,   305,   372,   192,   371,   126,   180,    71,   163,   466,
      72,   164,   246,    73,   165,   248,    74,    75,   166,   257,
     258,    76,    77,   167,   260,    78,   168,   262,    79,   169,
     264,    80,   170,   267,   268,    81,   171,   269,    82,   172,
     275,   276,    83,    84,   174,    85,   175,    86,   128,   137,
      87,   129,   211,   212,   330,   130,   281,   318,   354,   406,
     439,   355,   459,   460,    98,   185,   292,    99,   239,   340,
     401,   138,   139,   140,   141,   222,   223,   142,   218,    88,
     203,   319,   391,   320,   388,   453,   213,   454,   455,   456,
      89,   114,   115,   417,   446,   243,   236,   364,   189,   199,
     313,   186,   295,   198,   377,   196,    90,   356,   229
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -373
static const yytype_int16 yypact[] =
{
    -373,    38,    49,  -373,  -373,  -373,  -373,   887,    -4,   887,
    -373,   927,     3,   209,  -373,    57,   887,   887,   887,    19,
     123,  -373,   927,   887,    30,    31,  -373,    39,  -373,   705,
     209,  -373,  -373,   453,   750,  -373,  -373,  -373,  -373,    64,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,   122,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,   107,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,    45,  -373,    43,  -373,  -373,
     453,    78,    53,    91,  -373,   104,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,   120,  -373,  -373,   405,   102,  -373,   127,
     106,  -373,   887,  -373,  -373,  -373,    73,  -373,   114,  -373,
    -373,   140,    46,    31,  -373,  -373,  -373,  -373,   119,  -373,
     129,  -373,   124,  -373,   453,   129,   118,   112,  -373,  -373,
    -373,   129,  -373,  -373,    29,   128,   887,   705,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,   -13,  -373,  -373,
     800,   131,   887,  -373,   141,   160,   215,    99,   100,   109,
      52,    87,    60,   453,  -373,    74,  -373,  -373,   405,   887,
    -373,   110,   132,   887,  -373,   146,   153,   149,   135,  -373,
     136,  -373,    20,   405,    97,   453,  -373,   887,  -373,   170,
    -373,   887,   787,   172,    59,  -373,  -373,  -373,   170,  -373,
     927,  -373,   176,  -373,  -373,  -373,  -373,   131,  -373,  -373,
     887,  -373,   180,  -373,  -373,  -373,  -373,   307,  -373,   219,
     164,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,   209,  -373,  -373,   208,   887,  -373,   887,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,   453,   453,
    -373,   453,  -373,   453,  -373,  -373,  -373,  -373,   453,  -373,
     453,  -373,  -373,  -373,  -373,  -373,   453,  -373,   787,   887,
     156,  -373,  -373,  -373,   187,   191,  -373,   181,   887,   192,
    -373,   927,  -373,  -373,   161,  -373,     3,  -373,  -373,   548,
     887,   193,  -373,    28,  -373,   194,   222,   165,   887,  -373,
    -373,  -373,   166,  -373,   200,   887,   887,    21,   205,  -373,
    -373,   405,   173,  -373,   120,  -373,  -373,  -373,   171,   209,
    -373,  -373,  -373,  -373,   837,  -373,  -373,  -373,  -373,  -373,
     207,  -373,   887,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,   212,   211,   217,  -373,   218,  -373,    33,   887,
    -373,  -373,   216,   887,  -373,  -373,   475,  -373,  -373,  -373,
    -373,   621,  -373,   120,   405,   220,  -373,   235,   405,  -373,
     405,  -373,  -373,   165,  -373,  -373,   887,   887,  -373,  -373,
    -373,   223,  -373,   228,  -373,   225,   887,  -373,   118,  -373,
     887,  -373,  -373,  -373,  -373,  -373,   227,   887,   887,  -373,
    -373,  -373,   110,  -373,  -373,   199,  -373,  -373,    64,  -373,
    -373,  -373,   405,   238,  -373,  -373,  -373,   405,  -373,  -373,
     787,  -373,  -373,   173,  -373,  -373,    37,  -373,   877,  -373,
    -373,  -373,   242,   244,  -373,   281,   214,  -373,   405,   222,
    -373,  -373,   887,  -373,  -373,  -373,  -373,  -373,   887,  -373,
    -373,   405,  -373,   548,  -373,  -373,    37,  -373,  -373,  -373,
     694,  -373,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -121,  -373,  -373,    -1,  -373,  -373,    -2,  -373,  -373,  -373,
      65,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -139,  -373,
      17,   159,  -373,   -25,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,    22,  -373,  -137,     2,   -23,  -373,  -373,  -373,
    -373,  -373,   179,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,     1,  -373,  -373,  -373,
      -6,  -373,  -373,  -172,  -158,     0,  -373,    -5,  -373,  -373,
    -159,  -373,  -373,    61,  -373,  -373,   -18,  -373,  -373,  -373,
    -373,    -3,     9,  -373,  -373,    48,  -373,  -373,    47,  -373,
    -373,    50,  -373,  -373,  -373,    41,  -373,  -373,    44,  -373,
    -373,  -373,   -75,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,   291,  -373,  -373,  -373,     6,  -373,    66,  -373,  -373,
    -373,  -116,  -373,  -373,   -12,  -373,  -373,    32,   126,  -373,
    -373,  -373,  -373,  -373,    -9,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -102,  -373,  -373,  -373,  -107,  -373,  -135,
      -7,  -373,  -373,  -373,  -373,  -171,  -275,  -373,  -285,   221,
    -373,  -373,  -373,  -373,  -289,  -373,   168,  -372,  -373
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -332
static const yytype_int16 yytable[] =
{
      45,    43,    92,   244,    95,   117,   282,    91,    96,   135,
     116,    92,   109,   110,   293,   177,   107,   379,   235,    96,
      97,   306,   131,   214,    92,    92,   127,   127,   219,   136,
     104,    97,   380,   225,   224,   442,   147,   113,     3,   394,
     300,   331,   133,   452,   301,   375,   332,   408,   300,   210,
     375,   335,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   234,    15,   210,    93,    16,   143,   410,
     386,    17,    18,   100,    19,    20,    21,    22,    23,    24,
      25,   119,    26,    27,    28,    29,   468,    30,   420,   111,
     387,   339,    31,    32,    33,   322,   119,   106,   277,   120,
     118,    34,   226,   173,   323,   271,   272,   200,   427,   125,
     278,   273,   279,   162,   120,   176,   100,    35,   178,    36,
      37,    38,   179,    39,   280,   274,    40,   181,     6,   324,
      31,    32,    10,   265,   266,   183,    14,   307,   308,   188,
     233,   230,   193,   216,   205,   207,   195,   197,   201,   392,
     202,   204,    23,   240,   112,   238,   209,   210,   220,    29,
     465,    30,   146,   215,   232,   221,    31,    32,    33,   402,
     227,   147,   241,   245,   283,    34,   247,   259,   290,   261,
     284,   148,   149,   150,   151,   152,   153,   291,   154,   263,
     296,    35,   311,    36,    37,    38,   238,   317,   328,   288,
      40,   351,   421,   294,   310,   298,   425,    96,   426,   299,
     389,   312,   321,   147,     6,   333,   341,   329,    10,    97,
     431,   334,    14,   337,   435,   342,   357,   359,   361,   344,
     363,   368,   366,   374,   378,   440,   382,   436,    23,   375,
     383,   234,   390,   324,   249,    29,   396,    30,   400,   404,
     447,  -331,    31,    32,    33,   449,   405,   412,   407,   423,
     422,    34,   250,   251,   430,   432,   433,   345,   438,   252,
     253,   254,   255,   317,   353,   445,   464,    35,   448,    36,
      37,    38,   458,   365,   461,   462,    40,   463,    96,   469,
     256,   444,   336,   467,   217,   373,   451,    45,   369,   393,
      97,   206,   381,   109,   376,   470,   343,   346,   347,   349,
     384,   385,     6,   348,   350,     9,    10,    11,    12,    13,
      14,   132,   457,   367,    92,   399,   127,   314,   450,   398,
      18,   471,    19,    20,    21,   397,    23,   403,    25,   270,
      26,    27,    28,    29,   352,    30,   208,     0,     0,     0,
      31,    32,    33,     0,   411,     0,     0,     0,   414,    34,
       0,     0,     0,     0,   416,     0,     0,     0,     0,    45,
     419,     0,     0,     0,     0,    35,     0,    36,    37,    38,
       0,   428,   429,     0,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   437,     0,     0,     0,     0,
       0,     0,   441,    92,     0,     0,     0,     0,   443,   190,
       6,     0,     0,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,     0,     0,   317,     0,     0,    18,     0,
      19,    20,    21,   353,    23,     0,    25,     0,    26,    27,
      28,    29,     0,    30,     0,     0,     0,     0,    31,    32,
      33,     0,     0,   441,     0,     0,     0,    34,     6,     0,
       0,    45,    10,     0,     0,     0,    14,     0,    45,   419,
       0,     0,     0,    35,     0,    36,    37,    38,     0,   415,
       6,     0,    40,     9,    10,    11,    12,    13,    14,    29,
       0,    30,     0,     0,     0,     0,    31,    32,    18,     0,
      19,    20,    21,     0,    23,    34,    25,     0,    26,    27,
      28,    29,     0,    30,     0,     0,     0,     0,    31,    32,
      33,    35,     0,    36,    37,    38,     0,    34,     0,     0,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,    36,    37,    38,     0,     0,
       0,     0,    40,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,    15,     0,     0,    16,     0,     0,     0,
      17,    18,     0,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,     0,    30,     0,     0,     0,
       0,    31,    32,    33,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,    36,    37,
      38,     0,    39,     0,     0,    40,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,    15,     0,     0,    16,
       0,     0,     0,    17,    18,     0,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,    29,     0,    30,
       0,     0,     0,     0,    31,    32,    33,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,    36,    37,    38,     0,   418,     0,     0,    40,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,    15,
       6,     0,    16,     0,    10,     0,    17,    18,    14,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,    20,    30,     0,    23,     0,     0,    31,    32,    33,
       0,    29,     0,    30,     0,     0,    34,     0,    31,    32,
      33,     0,     0,     0,     0,     6,     0,    34,     0,    10,
       0,     0,    35,    14,    36,    37,    38,     0,   472,     0,
       0,    40,     0,    35,     0,    36,    37,    38,     0,    23,
       0,     0,    40,     0,     0,     0,    29,     0,    30,     0,
       0,     0,     6,    31,    32,    33,    10,     0,     0,     0,
      14,     0,    34,     0,     0,     6,     0,     0,   134,    10,
       0,     0,     0,    14,     0,     0,    23,     0,    35,     0,
      36,    37,    38,    29,     0,    30,    20,    40,     0,    23,
      31,    32,   315,     0,     0,     0,    29,     0,    30,    34,
       0,     0,     6,    31,    32,   316,    10,     0,     0,     0,
      14,     0,    34,     0,     0,    35,     0,    36,    37,    38,
       0,     0,     0,     0,    40,     0,    23,     0,    35,     0,
      36,    37,    38,    29,     0,    30,     0,    40,     0,     0,
      31,    32,     6,     0,     0,     0,    10,     0,     0,    34,
      14,     0,     6,     0,     0,   134,    10,     0,     0,     0,
      14,     0,     0,     0,     0,    35,    23,    36,    37,    38,
       0,     0,     0,    29,    40,    30,    23,  -330,     0,     0,
      31,    32,     0,    29,     0,    30,     0,     0,     0,    34,
      31,    32,     6,     0,     0,     0,    10,     0,     0,    34,
      14,     0,     0,     0,     0,    35,     0,    36,    37,    38,
       0,     0,     0,     0,    40,    35,     0,    36,    37,    38,
       0,     0,     0,    29,    40,    30,     0,     0,     0,     0,
      31,    32,    33,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,    36,    37,    38,
       0,     0,     0,     0,    40
};

static const yytype_int16 yycheck[] =
{
       2,     2,     7,   162,     9,    23,   178,     7,    11,    34,
      22,    16,    17,    18,   185,    90,    16,   306,   157,    22,
      11,   193,    29,   130,    29,    30,    29,    30,   135,    34,
      13,    22,   307,     4,   141,   407,    49,    20,     0,   324,
      20,   212,    33,     6,    24,    17,   217,    14,    20,    28,
      17,   222,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    76,    15,    28,    70,    18,     4,   358,
      49,    22,    23,    70,    25,    26,    27,    28,    29,    30,
      31,    50,    33,    34,    35,    36,   458,    38,   373,    70,
      69,   230,    43,    44,    45,    36,    50,    40,   173,    68,
      70,    52,    73,    58,    45,    45,    46,   112,   383,    70,
      36,    51,    38,     6,    68,    72,    70,    68,    40,    70,
      71,    72,    69,    74,    50,    65,    77,    36,     5,    70,
      43,    44,     9,    81,    82,    31,    13,    40,    41,    19,
     147,   146,    40,   134,   122,   123,    19,    41,    75,   321,
      36,    11,    29,   160,    31,   160,    37,    28,    40,    36,
     449,    38,    40,    39,   147,    53,    43,    44,    45,   340,
      42,    49,    41,    32,   179,    52,    16,    78,   183,    79,
      70,    59,    60,    61,    62,    63,    64,    41,    66,    80,
      41,    68,   197,    70,    71,    72,   201,   202,   210,    67,
      77,   276,   374,    50,   195,    70,   378,   210,   380,    73,
     317,    41,    40,    49,     5,   220,   241,    41,     9,   210,
     391,    41,    13,     4,   395,    17,    70,    40,    37,   247,
      49,    70,    40,    40,    40,   406,    70,   396,    29,    17,
      40,    76,    37,    70,    29,    36,    75,    38,    41,    37,
     422,    40,    43,    44,    45,   427,    39,    41,    40,    24,
      40,    52,    47,    48,    41,    37,    41,   258,    41,    54,
      55,    56,    57,   278,   279,    76,   448,    68,    40,    70,
      71,    72,    40,   288,    40,     4,    77,    73,   291,   461,
      75,   412,   227,   452,   135,   300,   433,   299,   296,   322,
     291,   122,   308,   308,   303,   463,   245,   259,   261,   268,
     315,   316,     5,   263,   270,     8,     9,    10,    11,    12,
      13,    30,   438,   291,   329,   334,   329,   201,   430,   334,
      23,   466,    25,    26,    27,   329,    29,   342,    31,   171,
      33,    34,    35,    36,   278,    38,   125,    -1,    -1,    -1,
      43,    44,    45,    -1,   359,    -1,    -1,    -1,   363,    52,
      -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,   371,
     371,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,
      -1,   386,   387,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   400,    -1,    -1,    -1,    -1,
      -1,    -1,   407,   408,    -1,    -1,    -1,    -1,   408,     4,
       5,    -1,    -1,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,   430,    -1,    -1,    23,    -1,
      25,    26,    27,   438,    29,    -1,    31,    -1,    33,    34,
      35,    36,    -1,    38,    -1,    -1,    -1,    -1,    43,    44,
      45,    -1,    -1,   458,    -1,    -1,    -1,    52,     5,    -1,
      -1,   463,     9,    -1,    -1,    -1,    13,    -1,   470,   470,
      -1,    -1,    -1,    68,    -1,    70,    71,    72,    -1,     4,
       5,    -1,    77,     8,     9,    10,    11,    12,    13,    36,
      -1,    38,    -1,    -1,    -1,    -1,    43,    44,    23,    -1,
      25,    26,    27,    -1,    29,    52,    31,    -1,    33,    34,
      35,    36,    -1,    38,    -1,    -1,    -1,    -1,    43,    44,
      45,    68,    -1,    70,    71,    72,    -1,    52,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,
      72,    -1,    74,    -1,    -1,    77,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    -1,    -1,    18,
      -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    38,
      -1,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    77,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
       5,    -1,    18,    -1,     9,    -1,    22,    23,    13,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    26,    38,    -1,    29,    -1,    -1,    43,    44,    45,
      -1,    36,    -1,    38,    -1,    -1,    52,    -1,    43,    44,
      45,    -1,    -1,    -1,    -1,     5,    -1,    52,    -1,     9,
      -1,    -1,    68,    13,    70,    71,    72,    -1,    74,    -1,
      -1,    77,    -1,    68,    -1,    70,    71,    72,    -1,    29,
      -1,    -1,    77,    -1,    -1,    -1,    36,    -1,    38,    -1,
      -1,    -1,     5,    43,    44,    45,     9,    -1,    -1,    -1,
      13,    -1,    52,    -1,    -1,     5,    -1,    -1,    58,     9,
      -1,    -1,    -1,    13,    -1,    -1,    29,    -1,    68,    -1,
      70,    71,    72,    36,    -1,    38,    26,    77,    -1,    29,
      43,    44,    45,    -1,    -1,    -1,    36,    -1,    38,    52,
      -1,    -1,     5,    43,    44,    58,     9,    -1,    -1,    -1,
      13,    -1,    52,    -1,    -1,    68,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    29,    -1,    68,    -1,
      70,    71,    72,    36,    -1,    38,    -1,    77,    -1,    -1,
      43,    44,     5,    -1,    -1,    -1,     9,    -1,    -1,    52,
      13,    -1,     5,    -1,    -1,    58,     9,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    68,    29,    70,    71,    72,
      -1,    -1,    -1,    36,    77,    38,    29,    40,    -1,    -1,
      43,    44,    -1,    36,    -1,    38,    -1,    -1,    -1,    52,
      43,    44,     5,    -1,    -1,    -1,     9,    -1,    -1,    52,
      13,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    68,    -1,    70,    71,    72,
      -1,    -1,    -1,    36,    77,    38,    -1,    -1,    -1,    -1,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    84,    85,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    15,    18,    22,    23,    25,
      26,    27,    28,    29,    30,    31,    33,    34,    35,    36,
      38,    43,    44,    45,    52,    68,    70,    71,    72,    74,
      77,    86,    87,    96,    97,    99,   102,   103,   104,   113,
     116,   118,   119,   120,   121,   122,   123,   125,   126,   129,
     130,   131,   146,   147,   148,   149,   150,   153,   154,   155,
     160,   170,   173,   176,   179,   180,   184,   185,   188,   191,
     194,   198,   201,   205,   206,   208,   210,   213,   242,   253,
     269,   168,   170,    70,   127,   170,   184,   185,   227,   230,
      70,   138,   142,   145,   113,   124,    40,   168,   163,   170,
     170,    70,    31,   113,   254,   255,   227,   179,    70,    50,
      68,   132,   133,   134,   135,    70,   168,   184,   211,   214,
     218,   253,   214,   185,    58,   116,   170,   212,   234,   235,
     236,   237,   240,     4,    98,   100,    40,    49,    59,    60,
      61,    62,    63,    64,    66,   105,   107,   108,   109,   111,
     117,   114,     6,   171,   174,   177,   181,   186,   189,   192,
     195,   199,   202,    58,   207,   209,    72,   205,    40,    69,
     169,    36,    89,    31,   128,   228,   264,   143,    19,   261,
       4,    99,   166,    40,   161,    19,   268,    41,   266,   262,
     170,    75,    36,   243,    11,   135,   145,   135,   262,    37,
      28,   215,   216,   249,   250,    39,   185,   114,   241,   250,
      40,    53,   238,   239,   250,     4,    73,    42,   101,   271,
     170,   112,   113,   253,    76,   111,   259,   106,   170,   231,
     253,    41,   115,   258,   173,    32,   175,    16,   178,    29,
      47,    48,    54,    55,    56,    57,    75,   182,   183,    78,
     187,    79,   190,    80,   193,    81,    82,   196,   197,   200,
     269,    45,    46,    51,    65,   203,   204,   205,    36,    38,
      50,   219,   166,   170,    70,    90,    93,    94,    67,    88,
     170,    41,   229,   258,    50,   265,    41,   144,    70,    73,
      20,    24,   156,   158,   159,   164,   166,    40,    41,   162,
     185,   170,    41,   263,   231,    45,    58,   170,   220,   244,
     246,    40,    36,    45,    70,   136,   137,   139,   227,    41,
     217,   258,   258,   170,    41,   258,   103,     4,   110,   111,
     232,   116,    17,   176,   179,   185,   188,   191,   194,   198,
     201,   205,   220,   170,   221,   224,   270,    70,   151,    40,
      95,    37,    91,    49,   260,   170,    40,   230,    70,   138,
      96,   167,   165,   170,    40,    17,   159,   267,    40,   267,
     259,   163,    70,    40,   170,   170,    49,    69,   247,   250,
      37,   245,   166,   139,   261,   140,    75,   218,   170,   237,
      41,   233,   258,   170,    37,    39,   222,    40,    14,   152,
     267,   170,    41,    92,   170,     4,    99,   256,    74,    96,
     261,   166,    40,    24,   157,   166,   166,   259,   170,   170,
      41,   258,    37,    41,   141,   258,   173,   170,    41,   223,
     258,   170,   270,   168,    93,    76,   257,   166,    40,   166,
     246,   137,     6,   248,   250,   251,   252,   224,    40,   225,
     226,    40,     4,    73,   166,   267,   172,   173,   270,   166,
     167,   252,    74
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
#line 145 "punygram.y"
    {(yyval.treeptr) = alctree(1000, "file_input", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL); root = (yyval.treeptr);;}
    break;

  case 3:
#line 147 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 4:
#line 147 "punygram.y"
    {(yyval.treeptr) = alctree(1001, "zero_more_newline_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 5:
#line 149 "punygram.y"
    {(yyval.treeptr) = alctree(1002, "NEWLINE", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 6:
#line 149 "punygram.y"
    {(yyval.treeptr) = alctree(1003, "stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 7:
#line 151 "punygram.y"
    {(yyval.treeptr) = alctree(1004, "fundef", 6, (yyvsp[(1) - (6)].treeptr), (yyvsp[(2) - (6)].treeptr), (yyvsp[(3) - (6)].treeptr), (yyvsp[(4) - (6)].treeptr), (yyvsp[(5) - (6)].treeptr), (yyvsp[(6) - (6)].treeptr), NULL, NULL);;}
    break;

  case 8:
#line 152 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 9:
#line 152 "punygram.y"
    {(yyval.treeptr) = alctree(1005, "opt_rarrowtest", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 10:
#line 154 "punygram.y"
    {(yyval.treeptr) = alctree(1006, "parameters", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 11:
#line 159 "punygram.y"
    {(yyval.treeptr) = alctree(1006, "argumentstd", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 12:
#line 160 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 13:
#line 160 "punygram.y"
    {(yyval.treeptr) = alctree(1007, "zero_more_comma_argtd", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 14:
#line 161 "punygram.y"
    {(yyval.treeptr) = alctree(1008, "comma_argstd", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 15:
#line 163 "punygram.y"
    {(yyval.treeptr) = alctree(1009, "argumentd", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 16:
#line 193 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 17:
#line 193 "punygram.y"
    {(yyval.treeptr) = alctree(1011, "tfdef", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 18:
#line 194 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 19:
#line 194 "punygram.y"
    {(yyval.treeptr) = alctree(1012, "opt_col_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 20:
#line 235 "punygram.y"
    {(yyval.treeptr) = alctree(1013, "stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 21:
#line 236 "punygram.y"
    {(yyval.treeptr) = alctree(1014, "stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 22:
#line 237 "punygram.y"
    {(yyval.treeptr) = alctree(1013, "stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 23:
#line 239 "punygram.y"
    {(yyval.treeptr) = alctree(1278, "weird_buggy_thing", 1, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 24:
#line 241 "punygram.y"
    {(yyval.treeptr) = alctree(1279, "one_more_newline", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 25:
#line 242 "punygram.y"
    {(yyval.treeptr) = alctree(1279, "one_more_newline", 1, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 26:
#line 244 "punygram.y"
    {(yyval.treeptr) = alctree(1015, "simple_stmt", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 27:
#line 245 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 28:
#line 245 "punygram.y"
    {(yyval.treeptr) = alctree(1016, "zero_more_stmtms", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 29:
#line 247 "punygram.y"
    {(yyval.treeptr) = alctree(1017, "single_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 30:
#line 249 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 32:
#line 253 "punygram.y"
    {(yyval.treeptr) = alctree(1018, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 33:
#line 254 "punygram.y"
    {(yyval.treeptr) = alctree(1019, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 34:
#line 254 "punygram.y"
    {(yyval.treeptr) = alctree(1020, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 35:
#line 255 "punygram.y"
    {(yyval.treeptr) = alctree(1021, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 36:
#line 255 "punygram.y"
    {(yyval.treeptr) = alctree(1022, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 37:
#line 256 "punygram.y"
    {(yyval.treeptr) = alctree(1023, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 38:
#line 256 "punygram.y"
    {(yyval.treeptr) = alctree(1024, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 39:
#line 257 "punygram.y"
    {(yyval.treeptr) = alctree(1025, "small_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 40:
#line 260 "punygram.y"
    {(yyval.treeptr) = alctree(1026, "expr_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 41:
#line 262 "punygram.y"
    {(yyval.treeptr) = alctree(1026, "everything_in_paranthesis", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 42:
#line 263 "punygram.y"
    {(yyval.treeptr) = alctree(1027, "everything_in_paranthesis", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 43:
#line 264 "punygram.y"
    {(yyval.treeptr) = alctree(1028, "everything_in_paranthesis", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 44:
#line 267 "punygram.y"
    {(yyval.treeptr) = alctree(1029, "yield_or_testlist", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 45:
#line 268 "punygram.y"
    {(yyval.treeptr) = alctree(1030, "yield_or_testlist", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 46:
#line 270 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 47:
#line 271 "punygram.y"
    {(yyval.treeptr) = alctree(1031, "opt_eq_yield__tc", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 48:
#line 273 "punygram.y"
    {(yyval.treeptr) = alctree(1032, "one_or_more_eq_yeild_or_tlse", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 49:
#line 274 "punygram.y"
    {(yyval.treeptr) = alctree(1033, "one_or_more_eq_yield_or_tlse", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 50:
#line 276 "punygram.y"
    {(yyval.treeptr) = alctree(1034, "annassign", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 51:
#line 279 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 52:
#line 279 "punygram.y"
    {(yyval.treeptr) = alctree(1035, "opt_eq_yield_or_tlse", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 53:
#line 281 "punygram.y"
    {(yyval.treeptr) = alctree(1036, "eq_yield_or_tlse", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 54:
#line 283 "punygram.y"
    {(yyval.treeptr) = alctree(1037, "yield_or_tlse", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 55:
#line 284 "punygram.y"
    {(yyval.treeptr) = alctree(1038, "yield_or_tlse", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 56:
#line 286 "punygram.y"
    {(yyval.treeptr) = alctree(1039, "testlist_star_expr", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 57:
#line 288 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 58:
#line 289 "punygram.y"
    {(yyval.treeptr) = alctree(1039, "zero_more_comma_test_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 59:
#line 291 "punygram.y"
    {(yyval.treeptr) = alctree(1040, "comma_test_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 60:
#line 293 "punygram.y"
    {(yyval.treeptr) = alctree(1041, "test_or_se", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 61:
#line 294 "punygram.y"
    {(yyval.treeptr) = alctree(1042, "test_or_se", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 62:
#line 296 "punygram.y"
    {(yyval.treeptr) = alctree(1043, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 63:
#line 297 "punygram.y"
    {(yyval.treeptr) = alctree(1044, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 64:
#line 298 "punygram.y"
    {(yyval.treeptr) = alctree(1045, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 65:
#line 299 "punygram.y"
    {(yyval.treeptr) = alctree(1046, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 66:
#line 300 "punygram.y"
    {(yyval.treeptr) = alctree(1047, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 67:
#line 301 "punygram.y"
    {(yyval.treeptr) = alctree(1048, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 68:
#line 302 "punygram.y"
    {(yyval.treeptr) = alctree(1049, "gassign", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 69:
#line 305 "punygram.y"
    {(yyval.treeptr) = alctree(1050, "del_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 71:
#line 307 "punygram.y"
    {(yyval.treeptr) = alctree(1051, "flow_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 72:
#line 308 "punygram.y"
    {(yyval.treeptr) = alctree(1052, "flow_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 73:
#line 309 "punygram.y"
    {(yyval.treeptr) = alctree(1053, "flow_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 74:
#line 310 "punygram.y"
    {(yyval.treeptr) = alctree(1054, "flow_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 75:
#line 311 "punygram.y"
    {(yyval.treeptr) = alctree(1055, "flow_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 76:
#line 313 "punygram.y"
    {(yyval.treeptr) = alctree(1056, "break_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 77:
#line 314 "punygram.y"
    {(yyval.treeptr) = alctree(1057, "continue_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 78:
#line 315 "punygram.y"
    {(yyval.treeptr) = alctree(1058, "return_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 79:
#line 316 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 80:
#line 317 "punygram.y"
    {(yyval.treeptr) = alctree(1059, "opt_se", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 81:
#line 319 "punygram.y"
    {(yyval.treeptr) = alctree(1060, "yield_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 82:
#line 321 "punygram.y"
    {(yyval.treeptr) = alctree(1061, "raise_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 83:
#line 323 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 84:
#line 324 "punygram.y"
    {(yyval.treeptr) = alctree(1062, "opt_test_opt_from_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 85:
#line 326 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 86:
#line 327 "punygram.y"
    {(yyval.treeptr) = alctree(1063, "opt_from_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 87:
#line 329 "punygram.y"
    {(yyval.treeptr) = alctree(1064, "import_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 88:
#line 330 "punygram.y"
    {(yyval.treeptr) = alctree(1065, "import_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 89:
#line 332 "punygram.y"
    {(yyval.treeptr) = alctree(1066, "import_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 90:
#line 334 "punygram.y"
    {(yyval.treeptr) = alctree(1067, "import_from", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 91:
#line 336 "punygram.y"
    {(yyval.treeptr) = alctree(1068, "dot_ellip_dn_or_one_more_dot_ellip", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 92:
#line 337 "punygram.y"
    {(yyval.treeptr) = alctree(1069, "dot_ellip_dn_or_one_more_dot_ellip", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 93:
#line 339 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 94:
#line 340 "punygram.y"
    {(yyval.treeptr) = alctree(1070, "zero_more_dot_or_ellip", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 95:
#line 343 "punygram.y"
    {(yyval.treeptr) = alctree(1071, "one_more_dot_or_ellip", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 96:
#line 344 "punygram.y"
    {(yyval.treeptr) = alctree(1072, "one_more_dot_or_ellip", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 97:
#line 346 "punygram.y"
    {(yyval.treeptr) = alctree(1073, "dot_or_ellip", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 98:
#line 347 "punygram.y"
    {(yyval.treeptr) = alctree(1074, "dot_or_ellip", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 99:
#line 350 "punygram.y"
    {(yyval.treeptr) = alctree(1075, "star_or_names", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 100:
#line 351 "punygram.y"
    {(yyval.treeptr) = alctree(1077, "star_or_names", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 101:
#line 352 "punygram.y"
    {(yyval.treeptr) = alctree(1078, "star_or_names", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 102:
#line 354 "punygram.y"
    {(yyval.treeptr) = alctree(1079, "import_as_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 103:
#line 356 "punygram.y"
    {(yyval.treeptr) = alctree(1080, "dotted_as_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 104:
#line 357 "punygram.y"
    {(yyval.treeptr) = alctree(1081, "import_as_names", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 105:
#line 359 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 106:
#line 360 "punygram.y"
    {(yyval.treeptr) = alctree(1082, "zero_more_comma_isn", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 107:
#line 362 "punygram.y"
    {(yyval.treeptr) = alctree(1083, "comma_isn", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 108:
#line 364 "punygram.y"
    {(yyval.treeptr) = alctree(1084, "dotted_as_names", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 109:
#line 365 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 110:
#line 366 "punygram.y"
    {(yyval.treeptr) = alctree(1085, "zero_more_dsn", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 111:
#line 368 "punygram.y"
    {(yyval.treeptr) = alctree(1086, "comma_dsn", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 112:
#line 371 "punygram.y"
    {(yyval.treeptr) = alctree(1087, "dotted_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 113:
#line 372 "punygram.y"
    {(yyval.treeptr) = alctree(1088, "global_stmt", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 116:
#line 381 "punygram.y"
    {(yyval.treeptr) = alctree(1089, "compound_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 118:
#line 383 "punygram.y"
    {(yyval.treeptr) = alctree(1090, "compound_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 121:
#line 386 "punygram.y"
    {(yyval.treeptr) = alctree(1091, "compound_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 122:
#line 387 "punygram.y"
    {(yyval.treeptr) = alctree(1092, "compound_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 123:
#line 389 "punygram.y"
    {(yyval.treeptr) = alctree(1093, "if_stmt", 6, (yyvsp[(1) - (6)].treeptr), (yyvsp[(2) - (6)].treeptr), (yyvsp[(3) - (6)].treeptr), (yyvsp[(4) - (6)].treeptr), (yyvsp[(5) - (6)].treeptr), (yyvsp[(6) - (6)].treeptr), NULL, NULL);;}
    break;

  case 124:
#line 390 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 125:
#line 391 "punygram.y"
    {(yyval.treeptr) = alctree(1094, "zero_more_elif", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 126:
#line 393 "punygram.y"
    {(yyval.treeptr) = alctree(1095, "elif", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 127:
#line 395 "punygram.y"
    {(yyval.treeptr) = alctree(1096, "while_stmt", 5, (yyvsp[(1) - (5)].treeptr), (yyvsp[(2) - (5)].treeptr), (yyvsp[(3) - (5)].treeptr), (yyvsp[(4) - (5)].treeptr), (yyvsp[(5) - (5)].treeptr), NULL, NULL, NULL);;}
    break;

  case 128:
#line 397 "punygram.y"
    {(yyval.treeptr) = alctree(1097, "for_stmt", 8, (yyvsp[(1) - (8)].treeptr), (yyvsp[(2) - (8)].treeptr), (yyvsp[(3) - (8)].treeptr), (yyvsp[(4) - (8)].treeptr), (yyvsp[(5) - (8)].treeptr), (yyvsp[(6) - (8)].treeptr), (yyvsp[(7) - (8)].treeptr), (yyvsp[(8) - (8)].treeptr));;}
    break;

  case 132:
#line 403 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 138:
#line 411 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 144:
#line 419 "punygram.y"
    {(yyval.treeptr) = alctree(1098, "suite", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 145:
#line 420 "punygram.y"
    {(yyval.treeptr) = alctree(1099, "suite", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 146:
#line 422 "punygram.y"
    {(yyval.treeptr) = alctree(1100, "one_more_stmt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 147:
#line 423 "punygram.y"
    {(yyval.treeptr) = alctree(1101, "one_more_stmt", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 148:
#line 426 "punygram.y"
    {(yyval.treeptr) = alctree(1101, "namedexpr_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 149:
#line 427 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 150:
#line 428 "punygram.y"
    {(yyval.treeptr) = alctree(1102, "opt_coleq_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 151:
#line 430 "punygram.y"
    {(yyval.treeptr) = alctree(1103, "test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 152:
#line 431 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 153:
#line 432 "punygram.y"
    {(yyval.treeptr) = alctree(1104, "opt_if_else", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 154:
#line 434 "punygram.y"
    {(yyval.treeptr) = alctree(1105, "test_nocond", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 155:
#line 436 "punygram.y"
    {(yyval.treeptr) = alctree(1106, "or_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 156:
#line 437 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 157:
#line 438 "punygram.y"
    {(yyval.treeptr) = alctree(1107, "zero_more_or_and_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 158:
#line 439 "punygram.y"
    {(yyval.treeptr) = alctree(1107, "or_and_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 159:
#line 441 "punygram.y"
    {(yyval.treeptr) = alctree(1108, "and_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 160:
#line 442 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 161:
#line 443 "punygram.y"
    {(yyval.treeptr) = alctree(1109, "zero_more_and_no_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 162:
#line 444 "punygram.y"
    {(yyval.treeptr) = alctree(1107, "not_and_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 163:
#line 446 "punygram.y"
    {(yyval.treeptr) = alctree(1110, "not_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 164:
#line 447 "punygram.y"
    {(yyval.treeptr) = alctree(1111, "not_test", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 165:
#line 449 "punygram.y"
    {(yyval.treeptr) = alctree(1112, "comparison", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 166:
#line 450 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 167:
#line 451 "punygram.y"
    {(yyval.treeptr) = alctree(1113, "zero_more_comp_op_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 168:
#line 452 "punygram.y"
    {(yyval.treeptr) = alctree(1114, "comp_op_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 169:
#line 454 "punygram.y"
    {(yyval.treeptr) = alctree(1115, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 170:
#line 455 "punygram.y"
    {(yyval.treeptr) = alctree(1116, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 171:
#line 456 "punygram.y"
    {(yyval.treeptr) = alctree(1117, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 172:
#line 457 "punygram.y"
    {(yyval.treeptr) = alctree(1118, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 173:
#line 458 "punygram.y"
    {(yyval.treeptr) = alctree(1119, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 174:
#line 459 "punygram.y"
    {(yyval.treeptr) = alctree(1120, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 175:
#line 460 "punygram.y"
    {(yyval.treeptr) = alctree(1121, "comp_op", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 177:
#line 463 "punygram.y"
    {(yyval.treeptr) = alctree(1122, "star_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 178:
#line 465 "punygram.y"
    {(yyval.treeptr) = alctree(1123, "expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 179:
#line 466 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 180:
#line 467 "punygram.y"
    {(yyval.treeptr) = alctree(1124, "zero_more_or_xor_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 181:
#line 468 "punygram.y"
    {(yyval.treeptr) = alctree(1125, "or_xor_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 182:
#line 470 "punygram.y"
    {(yyval.treeptr) = alctree(1126, "xor_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 183:
#line 471 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 184:
#line 472 "punygram.y"
    {(yyval.treeptr) = alctree(1127, "zero_more_carrot_and_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 185:
#line 473 "punygram.y"
    {(yyval.treeptr) = alctree(1128, "carrot_and_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 186:
#line 475 "punygram.y"
    {(yyval.treeptr) = alctree(1130, "and_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 187:
#line 476 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 188:
#line 477 "punygram.y"
    {(yyval.treeptr) = alctree(1131, "zero_more_and_shift", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 189:
#line 478 "punygram.y"
    {(yyval.treeptr) = alctree(1132, "and_shif", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 190:
#line 480 "punygram.y"
    {(yyval.treeptr) = alctree(1133, "shift_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 191:
#line 481 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 192:
#line 482 "punygram.y"
    {(yyval.treeptr) = alctree(1134, "zero_more_double_arrow_arith", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 193:
#line 483 "punygram.y"
    {(yyval.treeptr) = alctree(1135, "double_arrow_arith", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 194:
#line 484 "punygram.y"
    {(yyval.treeptr) = alctree(1136, "left_or_right", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 195:
#line 485 "punygram.y"
    {(yyval.treeptr) = alctree(1137, "left_or_right", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 196:
#line 487 "punygram.y"
    {(yyval.treeptr) = alctree(1138, "arith_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 197:
#line 488 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 198:
#line 489 "punygram.y"
    {(yyval.treeptr) = alctree(1139, "zero_more_plus_minus_term", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 199:
#line 490 "punygram.y"
    {(yyval.treeptr) = alctree(1138, "plus_minus_term", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 200:
#line 492 "punygram.y"
    {(yyval.treeptr) = alctree(1140, "term", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 201:
#line 493 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 202:
#line 494 "punygram.y"
    {(yyval.treeptr) = alctree(1141, "zero_more_factor", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 203:
#line 495 "punygram.y"
    {(yyval.treeptr) = alctree(1142, "symbols_factor", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 204:
#line 496 "punygram.y"
    {(yyval.treeptr) = alctree(1143, "symbols_tf", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 205:
#line 497 "punygram.y"
    {(yyval.treeptr) = alctree(1144, "symbols_tf", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 206:
#line 498 "punygram.y"
    {(yyval.treeptr) = alctree(1145, "symbols_tf", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 207:
#line 499 "punygram.y"
    {(yyval.treeptr) = alctree(1146, "symbols_tf", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 208:
#line 501 "punygram.y"
    {(yyval.treeptr) = alctree(1147, "factor", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 209:
#line 502 "punygram.y"
    {(yyval.treeptr) = alctree(1148, "term", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 210:
#line 504 "punygram.y"
    {(yyval.treeptr) = alctree(1149, "power", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 211:
#line 505 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 212:
#line 506 "punygram.y"
    {(yyval.treeptr) = alctree(1150, "opt_doublestar_factor", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 213:
#line 508 "punygram.y"
    {(yyval.treeptr) = alctree(11451, "atom_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 214:
#line 509 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 215:
#line 510 "punygram.y"
    {(yyval.treeptr) = alctree(1152, "zero_more_trailer", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 216:
#line 512 "punygram.y"
    {(yyval.treeptr) = alctree(1153, "atom", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 217:
#line 513 "punygram.y"
    {(yyval.treeptr) = alctree(1154, "atom", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 218:
#line 514 "punygram.y"
    {(yyval.treeptr) = alctree(1155, "atom", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 219:
#line 515 "punygram.y"
    {(yyval.treeptr) = alctree(1156, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 220:
#line 516 "punygram.y"
    {(yyval.treeptr) = alctree(1157, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 221:
#line 517 "punygram.y"
    {(yyval.treeptr) = alctree(1158, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 222:
#line 518 "punygram.y"
    {(yyval.treeptr) = alctree(1159, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 223:
#line 519 "punygram.y"
    {(yyval.treeptr) = alctree(1160, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 224:
#line 520 "punygram.y"
    {(yyval.treeptr) = alctree(1161, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 225:
#line 521 "punygram.y"
    {(yyval.treeptr) = alctree(1162, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 226:
#line 522 "punygram.y"
    {(yyval.treeptr) = alctree(1162, "atom", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 227:
#line 524 "punygram.y"
    {(yyval.treeptr) = alctree(1163, "opt_yield_tlc", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 228:
#line 525 "punygram.y"
    {(yyval.treeptr) = alctree(1164, "opt_yield_tlc", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 229:
#line 531 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 230:
#line 532 "punygram.y"
    {(yyval.treeptr) = alctree(1165, "opt_dictsetmarker", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 231:
#line 534 "punygram.y"
    {(yyval.treeptr) = alctree(1166, "one_more_string", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 232:
#line 535 "punygram.y"
    {(yyval.treeptr) = alctree(1167, "one_more_sttring", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 233:
#line 537 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 234:
#line 537 "punygram.y"
    {(yyval.treeptr) = alctree(1169, "testlist_comp", 1, (yyvsp[(1) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 235:
#line 543 "punygram.y"
    {(yyval.treeptr) = alctree(1170, "comp_for_multiple", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 236:
#line 544 "punygram.y"
    {(yyval.treeptr) = alctree(1171, "comp_for_multiple", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 237:
#line 545 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 238:
#line 546 "punygram.y"
    {(yyval.treeptr) = alctree(1172, "zero_more_comma_nt_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 239:
#line 547 "punygram.y"
    {(yyval.treeptr) = alctree(1173, "comma_nt_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 240:
#line 549 "punygram.y"
    {(yyval.treeptr) = alctree(1174, "namedexpr_or_star_expr", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 241:
#line 550 "punygram.y"
    {(yyval.treeptr) = alctree(1175, "namedexpr_or_star_expr", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 242:
#line 552 "punygram.y"
    {(yyval.treeptr) = alctree(1175, "trailer", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 243:
#line 553 "punygram.y"
    {(yyval.treeptr) = alctree(1176, "trailer", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 244:
#line 554 "punygram.y"
    {(yyval.treeptr) = alctree(1176, "trailer", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 245:
#line 555 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 246:
#line 555 "punygram.y"
    {(yyval.treeptr) = alctree(1177, "opt_arglist", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 247:
#line 557 "punygram.y"
    {(yyval.treeptr) = alctree(1178, "subscriptlist", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 248:
#line 558 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 249:
#line 559 "punygram.y"
    {(yyval.treeptr) = alctree(1179, "zero_more_comma_sub", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 250:
#line 560 "punygram.y"
    {(yyval.treeptr) = alctree(1180, "comma_sub", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 251:
#line 562 "punygram.y"
    {(yyval.treeptr) = alctree(1181, "subscrtipt", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 252:
#line 563 "punygram.y"
    {(yyval.treeptr) = alctree(1182, "subscript", 4, (yyvsp[(1) - (4)].treeptr), (yyvsp[(2) - (4)].treeptr), (yyvsp[(3) - (4)].treeptr), (yyvsp[(4) - (4)].treeptr), NULL, NULL, NULL, NULL);;}
    break;

  case 253:
#line 564 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 254:
#line 564 "punygram.y"
    {(yyval.treeptr) = alctree(1183, "opt_slicop", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 255:
#line 566 "punygram.y"
    {(yyval.treeptr) = alctree(1184, "sliceop", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 256:
#line 568 "punygram.y"
    {(yyval.treeptr) = alctree(1185, "exprlist", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 257:
#line 569 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 258:
#line 570 "punygram.y"
    {(yyval.treeptr) = alctree(1186, "zero_more_comma_expr_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 259:
#line 571 "punygram.y"
    {(yyval.treeptr) = alctree(1187, "comma_expr_or_se", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 260:
#line 573 "punygram.y"
    {(yyval.treeptr) = alctree(1188, "expr_or_starexpr", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 261:
#line 574 "punygram.y"
    {(yyval.treeptr) = alctree(1189, "expr_or_starexpr", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 262:
#line 576 "punygram.y"
    {(yyval.treeptr) = alctree(1190, "testlist", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 263:
#line 577 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 264:
#line 578 "punygram.y"
    {(yyval.treeptr) = alctree(1191, "zero_more_comma_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 265:
#line 579 "punygram.y"
    {(yyval.treeptr) = alctree(1192, "comma_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 266:
#line 584 "punygram.y"
    {(yyval.treeptr) = alctree(1300, "dictorsetmaker", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 267:
#line 587 "punygram.y"
    {(yyval.treeptr) = alctree(1193, "dict_set_marker", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 268:
#line 588 "punygram.y"
    {(yyval.treeptr) = alctree(1194, "dict_set_marker", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 269:
#line 590 "punygram.y"
    {(yyval.treeptr) = alctree(1195, "dsm_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 270:
#line 592 "punygram.y"
    {(yyval.treeptr) = alctree(1196, "tct_or_dse", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 271:
#line 593 "punygram.y"
    {(yyval.treeptr) = alctree(1197, "tct_or_dse", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 272:
#line 595 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 273:
#line 596 "punygram.y"
    {(yyval.treeptr) = alctree(1198, "zero_more_comma_tct_or_dse", 2, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 274:
#line 598 "punygram.y"
    {(yyval.treeptr) = alctree(1199, "cf_or_comma_tct_dct", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 275:
#line 599 "punygram.y"
    {(yyval.treeptr) = alctree(1200, "cf_or_comma_tct_dct", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 276:
#line 601 "punygram.y"
    {(yyval.treeptr) = alctree(1201, "dsm_star_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 277:
#line 603 "punygram.y"
    {(yyval.treeptr) = alctree(1202, "cf_or_comma_tse", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 278:
#line 604 "punygram.y"
    {(yyval.treeptr) = alctree(1203, "cf_or_comma_tse", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 279:
#line 606 "punygram.y"
    {(yyval.treeptr) = alctree(1204, "classdef", 5, (yyvsp[(1) - (5)].treeptr), (yyvsp[(2) - (5)].treeptr), (yyvsp[(3) - (5)].treeptr), (yyvsp[(4) - (5)].treeptr), (yyvsp[(5) - (5)].treeptr), NULL, NULL, NULL);;}
    break;

  case 280:
#line 607 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 281:
#line 608 "punygram.y"
    {(yyval.treeptr) = alctree(1205, "opt_lpar_arglist_rpar", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 282:
#line 610 "punygram.y"
    {(yyval.treeptr) = alctree(1206, "arglist", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 283:
#line 611 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 284:
#line 612 "punygram.y"
    {(yyval.treeptr) = alctree(1207, "zero_more_comma_arguments", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 285:
#line 614 "punygram.y"
    {(yyval.treeptr) = alctree(1208, "argument", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 286:
#line 615 "punygram.y"
    {(yyval.treeptr) = alctree(1209, "argument", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 287:
#line 616 "punygram.y"
    {(yyval.treeptr) = alctree(1210, "argument", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 288:
#line 617 "punygram.y"
    {(yyval.treeptr) = alctree(1211, "argument", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 289:
#line 618 "punygram.y"
    {(yyval.treeptr) = alctree(1212, "argument", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 290:
#line 620 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 291:
#line 621 "punygram.y"
    {(yyval.treeptr) = alctree(1213, "opt_comp_for", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 292:
#line 623 "punygram.y"
    {(yyval.treeptr) = alctree(1214, "comp_iter", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 293:
#line 624 "punygram.y"
    {(yyval.treeptr) = alctree(1215, "comp_iter", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 294:
#line 626 "punygram.y"
    {(yyval.treeptr) = alctree(1216, "sync_comp_for", 5, (yyvsp[(1) - (5)].treeptr), (yyvsp[(2) - (5)].treeptr), (yyvsp[(3) - (5)].treeptr), (yyvsp[(4) - (5)].treeptr), (yyvsp[(5) - (5)].treeptr), NULL, NULL, NULL);;}
    break;

  case 295:
#line 628 "punygram.y"
    {(yyval.treeptr) = alctree(1217, "comp_for", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 296:
#line 629 "punygram.y"
    {(yyval.treeptr) = alctree(1218, "comp_if", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 297:
#line 630 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 298:
#line 631 "punygram.y"
    {(yyval.treeptr) = alctree(1219, "opt_comp_iter", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 300:
#line 634 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 304:
#line 638 "punygram.y"
    {(yyval.treeptr) = alctree(1220, "func_body_suite", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 305:
#line 639 "punygram.y"
    {(yyval.treeptr) = alctree(1221, "func_body_suite", 5, (yyvsp[(1) - (5)].treeptr), (yyvsp[(2) - (5)].treeptr), (yyvsp[(3) - (5)].treeptr), (yyvsp[(4) - (5)].treeptr), (yyvsp[(5) - (5)].treeptr), NULL, NULL, NULL);;}
    break;

  case 306:
#line 641 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 307:
#line 642 "punygram.y"
    {(yyval.treeptr) = alctree(1222, "opt_type_comment_newline", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 308:
#line 655 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 309:
#line 656 "punygram.y"
    {(yyval.treeptr) = alctree(1223, "opt_comma", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 310:
#line 657 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 311:
#line 658 "punygram.y"
    {(yyval.treeptr) = alctree(1224, "opt_type_comment", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 312:
#line 659 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 313:
#line 660 "punygram.y"
    {(yyval.treeptr) = alctree(1225, "opt_eq_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 314:
#line 661 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 315:
#line 662 "punygram.y"
    {(yyval.treeptr) = alctree(1226, "opt_as_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 316:
#line 663 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 317:
#line 664 "punygram.y"
    {(yyval.treeptr) = alctree(1227, "zero_more_comma_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 318:
#line 665 "punygram.y"
    {(yyval.treeptr) = alctree(1228, "comma_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 319:
#line 666 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 320:
#line 667 "punygram.y"
    {(yyval.treeptr) = alctree(1229, "zero_more_dot_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 321:
#line 668 "punygram.y"
    {(yyval.treeptr) = alctree(1230, "dot_name", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 322:
#line 669 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 323:
#line 670 "punygram.y"
    {(yyval.treeptr) = alctree(1231, "opt_comma_test", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 324:
#line 671 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 325:
#line 672 "punygram.y"
    {(yyval.treeptr) = alctree(1232, "opt_else", 3, (yyvsp[(1) - (3)].treeptr), (yyvsp[(2) - (3)].treeptr), (yyvsp[(3) - (3)].treeptr), NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 326:
#line 673 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 327:
#line 674 "punygram.y"
    {(yyval.treeptr) = alctree(1233, "opt_as_expr", 2, (yyvsp[(1) - (2)].treeptr), (yyvsp[(2) - (2)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 329:
#line 676 "punygram.y"
    {(yyval.treeptr) = alctree(1234, "plus_or_minus", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 330:
#line 677 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 331:
#line 678 "punygram.y"
    {(yyval.treeptr) = alctree(1235, "opt_test", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;

  case 332:
#line 680 "punygram.y"
    {(yyval.treeptr)=NULL;;}
    break;

  case 333:
#line 680 "punygram.y"
    {(yyval.treeptr) = alctree(1235, "opt_semi_colon", 1, (yyvsp[(1) - (1)].treeptr), NULL, NULL, NULL, NULL, NULL, NULL, NULL);;}
    break;


/* Line 1267 of yacc.c.  */
#line 3654 "punygram.tab.c"
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


#line 682 "punygram.y"


const char *yyname(int sym)
{
   return yytname[sym-ENDMARKER+3];
}
