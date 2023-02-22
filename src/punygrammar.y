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
IN
%type <treeptr> file_input statements stament interactive statement_newline eval
expressions opt_newline func_type opt_type_expressions fstring
compound_stmt simple_stmts star_expressions expression 
simple_stmt opt_simple_stmt opt_semicolon assignment return_stmt import_stmt
raise_stmt del_stmt yield_stmt assert_stmt global_stmt nonlocal_stmt
if_stmt with_stmt for_stmt try_stmt while_stmt match_stmt 
single_target_expression single_target augassign
single_subscript_attribute_target opt_name del_targets yield_expr opt_expressions opt_expression
import_name import_from dotted_as_names ellip_or_dot_any dotted_name import_from_targets
ellip_or_dot_one ellip_or_dot import_from_names import_from_as_name import_from_as_name_or_coma
import_from_as_name_or_comas opt_as_name dotted_as_name_commas dotted_as_name_comma dotted_as_name_opt_as
dotted_as_name opt_names opt_name_comma block class_def 
class_def_raw function_def function_def_raw function_def_raw_exp params
parameters star_etc_opt slash_no_default slash_with_default star_etc
kwds kwds_opt param_no_default_zero_more param_no_default_one_more
param_with_default_zero_more param_with_default_one_more
param_maybe_default_zero_more param_maybe_default_one_more
param_no_default param_no_default_star_annotation param_with_default
param_maybe_default param param_star_annotation annotation star_annotation
default type_comment_opt default_opt annotation_opt named_expression "@" elif_stmt else_block opt_else_block
star_targets type_expressions comparison bitwise_or one_or_more_compare_op_bitwise_or_pair compare_op_bitwise_or_pair
eq_bitwise_or noteq_bitwise_or lte_bitwise_or lt_bitwise_or gte_bitwise_or gt_bitwise_or '|' '^' bitwise_and '&' '<<'
'>>' shift_expr

%%
// STARTING RULES
// =================
file_input: statements ENDMARKER;
interactive: statement_newline;
eval: expressions opt_newline ENDMARKER;
func_type: LPAR opt_type_expressions RPAR RARROW expression ENDMARKER;
opt_type_expressions: {$$=NULL} | type_expressions;
fstring: star_expressions;
opt_newline: {$$=NULL} | opt_newline NEWLINE | NEWLINE;


// GENERAL STATEMENTS
//====================
statements: stament | statements stament;
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
global_stmt: GLOBAL opt_names;
nonlocal_stmt: NONLOCAL opt_names;
opt_names: NAME opt_name;
opt_name: {$$=NULL} | opt_name opt_name_comma;
opt_name_comma: COMMA NAME;
del_stmt: {$$=NULL} | DEL del_targets
yield_stmt: yield_expr
assert_stmt: ASSERT expression opt_expressions;
opt_expressions: {$$=NULL} | opt_expressions opt_expression 
opt_expression: COMMA expression;
import_stmt: import_name | import_from;

// IMPORT STATEMENTS s.e+ = (e (s e)*)
// ===================

import_name: IMPORT dotted_as_names;
import_from: {$$=NULL} | FROM ellip_or_dot_any dotted_name IMPORT import_from_targets
    | FROM ellip_or_dot_one IMPORT import_from_targets;
ellip_or_dot_any: {$$=NULL} | ellip_or_dot_any ellip_or_dot;
ellip_or_dot_one: ellip_or_dot | ellip_or_dot_any ellip_or_dot;
ellip_or_dot: DOT | ELLIPSIS;
import_from_targets: {$$=NULL} | LPAR import_from_names coma_one_or_more RPAR | import_from_names | STAR;
coma_one_or_more: COMMA | coma_one_or_more COMMA;
import_from_names: {$$=NULL} | import_from_as_name import_from_as_name_or_comas;
import_from_as_name_or_comas: {$$=NULL} | import_from_as_name_or_comas import_from_as_name_or_coma;
import_from_as_name_or_coma: COMMA import_from_as_name;
import_from_as_name: {$$=NULL} | NAME opt_as_name;
opt_as_name: {$$=NULL} | AS NAME;
dotted_as_names: {$$=NULL} | dotted_as_name dotted_as_name_commas;
dotted_as_name_commas: {$$=NULL} | dotted_as_name_commas dotted_as_name_comma;
dotted_as_name_comma: COMMA dotted_as_name;
dotted_as_name: {$$=NULL} | dotted_as_name dotted_as_name_opt_as;
dotted_as_name_opt_as: {$$=NULL} | AS NAME;
dotted_name: {$$=NULL} | dotted_name DOT NAME | NAME;

// COMPOUND STATEMENTS
// ===================

//Common elements
//====================
block: {$$=NULL}
    | NEWLINE INDENT statements DEDENT 
    | simple_stmts;

// Class definitions
// ==================

class_def: {$$=NULL}
    | class_def_raw;

class_def_raw: {$$=NULL}
    | CLASS NAME class_def_raw SEMI block;
class_def_raw: {$$=NULL} | LPAR arguments RPAR;

// Function definitions
//==================

function_def: {$$=NULL}
    | function_def_raw;

function_def_raw: {$$=NULL}
    | DEF NAME LPAR params RPAR function_def_raw_exp COLON func_type_comment block 
function_def_raw_exp: {$$=NULL} | RARROW expression;

// Function parameters
// ==================

params: {$$=NULL}
    | parameters;

parameters: {$$=NULL}
    | slash_no_default param_no_default_zero_more param_with_default_zero_more star_etc_opt 
    | slash_with_default param_with_default_zero_more star_etc_opt
    | param_no_default_one_more param_with_default_zero_more star_etc_opt
    | param_with_default_one_more star_etc_opt
    | star_etc;

star_etc_opt: {$$=NULL} | star_etc;

// Some duplication here because we can't write (',' | &')'),
// which is because we don't support empty alternatives (yet).

slash_no_default: {$$=NULL}
    | param_no_default_one_more SLASH COMMA 
    // | param_no_default_one_more SLASH &')'; // don't know how to deal with lookahead
    | param_no_default_one_more SLASH RPAR;
slash_with_default: {$$=NULL}
    | param_no_default_zero_more param_with_default_one_more SLASH COMMA
    // | param_no_default_zero_more param_with_default_one_more '/' &')' 
    | param_no_default_zero_more param_with_default_one_more SLASH RPAR;

star_etc: {$$=NULL}
    | STAR param_no_default param_maybe_default_zero_more kwds_opt 
    | STAR param_no_default_star_annotation param_maybe_default_zero_more kwds_opt 
    | STAR COMMA param_maybe_default_one_more kwds_opt 
    | kwds;

kwds: {$$=NULL}
    | DOUBLESTAR param_no_default;
kwds_opt: {$$=NULL} | kwds;

param_no_default_zero_more: {$$=NULL} | param_no_default;
param_no_default_one_more: param_no_default | param_no_default param_no_default_one_more;
param_with_default_zero_more: {$$=NULL} | param_with_default;
param_with_default_one_more: param_with_default | param_with_default param_with_default_one_more;
param_maybe_default_zero_more: {$$=NULL} | param_maybe_default;
param_maybe_default_one_more: param_maybe_default | param_maybe_default param_maybe_default_one_more;

// IF STATEMENTS
// ==============

if_stmt: {$$=NULL} | IF named_expression COLON block elif_stmt | IF named_expression block opt_else_block;
elif_stmt: {$$=NULL} | ELIF named_expression COLON block elif_stmt | ELIF named_expression COLON opt_else_block;
else_block: {$$=NULL} | ELSE COLON block;
opt_else_block: {$$=NULL} | else_block;

// WHILE STATEMENTS
// ==================

while_stmt: {$$=NULL} | WHILE named_expression COLON block opt_else_block;

// FOR STATEMENTS
// ==================
for_stmt: {$$=NULL};





// COMPARISON OPERATORS
// ====================

comparison: {$$=NULL} | bitwise_or one_or_more_compare_op_bitwise_or_pair | bitwise_or;

one_or_more_compare_op_bitwise_or_pair: compare_op_bitwise_or_pair | one_or_more_compare_op_bitwise_or_pair compare_op_bitwise_or_pair;


compare_op_bitwise_or_pair: {$$=NULL}
    | eq_bitwise_or
    | noteq_bitwise_or
    | lte_bitwise_or
    | lt_bitwise_or
    | gte_bitwise_or
    | gt_bitwise_or;

eq_bitwise_or: EQEQUAL bitwise_or;
noteq_bitwise_or: {$$=NULL} | NOTEQUAL bitwise_or;
lte_bitwise_or: LESSEQUAL bitwise_or;
lt_bitwise_or: LESS bitwise_or;
gte_bitwise_or: GREATEREQUAL bitwise_or;
gt_bitwise_or: GREATER bitwise_or;

// BITWISE OPERATORS
// ===================

bitwise_or: {$$=NULL} | bitwise_or '|' bitwise_xor | bitwise_xor;

bitwise_xor: {$$=NULL} | bitwise_xor '^' bitwise_and | bitwise_and;

bitwise_and: {$$=NULL}| bitwise_and '&' shift_expr | shift_expr;

shift_expr: {$$=NULL} | shift_expr '<<' sum | shift_expr '>>' sum | sum;







%%