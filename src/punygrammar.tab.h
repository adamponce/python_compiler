/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENDMARKER = 258,
     NEWLINE = 259,
     compound_stmt = 260,
     small_stmt = 261,
     FALSE = 262,
     IF = 263,
     DEF = 264,
     RAISE = 265,
     NONE = 266,
     DEL = 267,
     IMPORT = 268,
     RETURN = 269,
     TRUE = 270,
     ELIF = 271,
     TRY = 272,
     AND = 273,
     ELSE = 274,
     WHILE = 275,
     AS = 276,
     EXCEPT = 277,
     LAMBDA = 278,
     WITH = 279,
     ASSERT = 280,
     FINALLY = 281,
     NONLOCAL = 282,
     YIELD = 283,
     BREAK = 284,
     FOR = 285,
     NOT = 286,
     CLASS = 287,
     FROM = 288,
     OR = 289,
     CONTINUE = 290,
     GLOBAL = 291,
     PASS = 292,
     LPAR = 293,
     RPAR = 294,
     LSQB = 295,
     RSQB = 296,
     COLON = 297,
     COMMA = 298,
     SEMI = 299,
     PLUS = 300,
     MINUS = 301,
     STAR = 302,
     SLASH = 303,
     LESS = 304,
     GREATER = 305,
     EQUAL = 306,
     DOT = 307,
     PERCENT = 308,
     LBRACE = 309,
     RBRACE = 310,
     EQEQUAL = 311,
     NOTEQUAL = 312,
     LESSEQUAL = 313,
     GREATEREQUAL = 314,
     DOUBLESTAR = 315,
     PLUSEQUAL = 316,
     MINEQUAL = 317,
     STAREQUAL = 318,
     SLASHEQUAL = 319,
     PERCENTEQUAL = 320,
     DOUBLESTAREQUAL = 321,
     DOUBLESLASH = 322,
     DOUBLESLASHEQUAL = 323,
     RARROW = 324,
     FUNCTION = 325,
     ELLIPSIS = 326,
     COLONEQUAL = 327,
     NAME = 328,
     NUMBER = 329,
     STRING = 330,
     INDENT = 331,
     DEDENT = 332
   };
#endif
/* Tokens.  */
#define ENDMARKER 258
#define NEWLINE 259
#define compound_stmt 260
#define small_stmt 261
#define FALSE 262
#define IF 263
#define DEF 264
#define RAISE 265
#define NONE 266
#define DEL 267
#define IMPORT 268
#define RETURN 269
#define TRUE 270
#define ELIF 271
#define TRY 272
#define AND 273
#define ELSE 274
#define WHILE 275
#define AS 276
#define EXCEPT 277
#define LAMBDA 278
#define WITH 279
#define ASSERT 280
#define FINALLY 281
#define NONLOCAL 282
#define YIELD 283
#define BREAK 284
#define FOR 285
#define NOT 286
#define CLASS 287
#define FROM 288
#define OR 289
#define CONTINUE 290
#define GLOBAL 291
#define PASS 292
#define LPAR 293
#define RPAR 294
#define LSQB 295
#define RSQB 296
#define COLON 297
#define COMMA 298
#define SEMI 299
#define PLUS 300
#define MINUS 301
#define STAR 302
#define SLASH 303
#define LESS 304
#define GREATER 305
#define EQUAL 306
#define DOT 307
#define PERCENT 308
#define LBRACE 309
#define RBRACE 310
#define EQEQUAL 311
#define NOTEQUAL 312
#define LESSEQUAL 313
#define GREATEREQUAL 314
#define DOUBLESTAR 315
#define PLUSEQUAL 316
#define MINEQUAL 317
#define STAREQUAL 318
#define SLASHEQUAL 319
#define PERCENTEQUAL 320
#define DOUBLESTAREQUAL 321
#define DOUBLESLASH 322
#define DOUBLESLASHEQUAL 323
#define RARROW 324
#define FUNCTION 325
#define ELLIPSIS 326
#define COLONEQUAL 327
#define NAME 328
#define NUMBER 329
#define STRING 330
#define INDENT 331
#define DEDENT 332




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 8 "punygrammar.y"
{
    struct tree *treeptr;
}
/* Line 1529 of yacc.c.  */
#line 207 "punygrammar.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

