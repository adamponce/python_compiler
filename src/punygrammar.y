%{
    #include "tree.h"
    #include <stdio.h>
    int yylex();
    int yyerror(char *);
%}

%union{
    struct tree *treeptr;
}

%token <treeptr> ENDMARKER NEWLINE ';' compound_stmt small_stmt FALSE 
IF
DEF
RAISE
NONE
DEL
IMPORT
RETURN
TRUE
ELIF
TRY
AND
ELSE
WHILE
AS
EXCEPT
LAMBDA
WITH
ASSERT
FINALLY
NONLOCAL
YIELD
BREAK
FOR
NOT
CLASS
FROM
OR
CONTINUE
GLOBAL
PASS
LPAR
RPAR
LSQB
RSQB
COLON
COMMA
SEMI
PLUS
MINUS
STAR
SLASH
LESS
GREATER
EQUAL
DOT
PERCENT
LBRACE
RBRACE
EQEQUAL
NOTEQUAL
LESSEQUAL
GREATEREQUAL
DOUBLESTAR
PLUSEQUAL
MINEQUAL
STAREQUAL 
SLASHEQUAL
PERCENTEQUAL
DOUBLESTAREQUAL
DOUBLESLASH
DOUBLESLASHEQUAL
RARROW
FUNCTION
ELLIPSIS
COLONEQUAL
NAME
NUMBER
STRING
INDENT
DEDENT
%type <treeptr> assignment expression value 

%%

/* Example for grammar:
assignment: NAME{printnode($1);} EQUAL{printnode($1);} expression ENDMARKER{printnode($1);};

expression: value | NAME{printnode($1);};

value: NUMBER{printnode($1);} | STRING{printnode($1);};
*/




/*
%type <treeptr> file_input
%type <treeptr> file_input_prime
%type <treeptr> stmt
%type <treeptr> simple_stmt
%type <treeptr> small_stmts
%type <treeptr> optional_semicolon



file_input: ENDMARKER ;
file_input: file_input_prime ENDMARKER;
file_input_prime : file_input_prime NEWLINE ;
file_input_prime : file_input_prime stmt ;
file_input_prime : ;
stmt: simple_stmt | compound_stmt ;
simple_stmt: small_stmt small_stmts optional_semicolon NEWLINE ;
small_stmts : small_stmts ';' small_stmt
small_stmts : ;
optional_semicolon: ';' | ;
*/

%%