%{
    #include "tree.h"
    #include <stdio.h>
    int yylex();
    int yyerror(char *);
%}

%union{
    struct tree *treeptr;
}

%token <treeptr> ENDMARKER NEWLINE ';'
FALSE 
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
%type <treeptr> file_input statements stament interactive statement_newline eval
expressions opt_newline func_type opt_type_expressions fstring
compound_stmt simple_stmts type_expression star_expressions expression 
simple_stmt opt_simple_stmt opt_semicolon assignment return_stmt import_stmt
raise_stmt del_stmt yield_stmt assert_stmt global_stmt nonlocal_stmt function_def
if_stmt class_def with_stmt for_stmt try_stmt while_stmt match_stmt 
single_target_expression single_target augassign
single_subscript_attribute_target opt_name del_targets yield_expr opt_expressions opt_expression
import_name import_from



%%
// STARTING RULES
// =================
file_input: statements ENDMARKER;
interactive: statement_newline;
eval: expressions opt_newline ENDMARKER;
func_type: LPAR opt_type_expressions RPAR RARROW expression ENDMARKER;
opt_type_expressions: {$$=NULL} | type_expression;
fstring: star_expressions;
opt_newline: {$$=NULL} | NEWLINE;
type_expression: {$$=NULL};
expressions: {$$=NULL};
star_expressions:  {$$=NULL};
expression: {$$=NULL};

// GENERAL STATEMENTS
//====================
statements: {$$=NULL}| stament | statements stament;
stament: compound_stmt | simple_stmts;
statement_newline: {$$=NULL} | compound_stmt NEWLINE | simple_stmts | NEWLINE | ENDMARKER; 
simple_stmts: {$$=NULL} | simple_stmt NEWLINE | simple_stmt opt_simple_stmt;
opt_simple_stmt: {$$=NULL} | opt_simple_stmt opt_semicolon;
opt_semicolon: SEMI simple_stmt;
simple_stmt: {$$=NULL} | assignment | star_expressions | return_stmt | import_stmt | raise_stmt
    | PASS
    | del_stmt
    | yield_stmt
    | assert_stmt
    | BREAK
    | CONTINUE 
    | global_stmt
    | nonlocal_stmt;
compound_stmt:  {$$=NULL} | function_def | if_stmt | class_def | with_stmt | for_stmt | try_stmt
    | while_stmt
    | match_stmt;

// SIMPLE STATEMENTS
// =================

assignment: {$$=NULL} | NAME COLON expression
    | single_target_expression COLON expression
    | single_target augassign;

single_target_expression: LPAR single_target RPAR | single_subscript_attribute_target;
augassign: {$$=NULL} | PLUSEQUAL | LESSEQUAL;
return_stmt: {$$=NULL} | RETURN;
raise_stmt: {$$=NULL} | RAISE expression | RAISE;
global_stmt: GLOBAL opt_name;
nonlocal_stmt: NONLOCAL opt_name;
del_stmt: {$$=NULL} | DEL del_targets
yield_stmt: yield_expr
assert_stmt: ASSERT expression opt_expressions;
opt_expressions: {$$=NULL} | opt_expressions opt_expression 
opt_expression: COMMA expression;
import_stmt: import_name | import_from;

// IMPORT STATEMENTS
// ===================


%%