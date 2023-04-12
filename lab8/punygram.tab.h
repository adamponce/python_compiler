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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "punygram.y"
{
    struct tree *treeptr;
}
/* Line 1529 of yacc.c.  */
#line 207 "punygram.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

