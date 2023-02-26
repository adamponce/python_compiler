%{
    #define YYDEBUG 1
    #include "tree.h"
    #include <stdio.h>
    int yylex();
    int yyerror(char *);
    if (start_token){
      int t = start_token;
      start_token = 0;
      return t;
    }
%}

%union{
    struct tree *treeptr;
}

%token <treeptr> ENDMARKER 
%token <treeptr> NEWLINE 
%token <treeptr> FALSE 
%token <treeptr> IF
%token <treeptr> DEF
%token <treeptr> RAISE
%token <treeptr> NONE
%token <treeptr> DEL
%token <treeptr> IMPORT
%token <treeptr> RETURN
%token <treeptr> TRUE
%token <treeptr> ELIF
%token <treeptr> TRY
%token <treeptr> AND
%token <treeptr> ELSE
%token <treeptr> WHILE
%token <treeptr> AS
%token <treeptr> EXCEPT
%token <treeptr> LAMBDA
%token <treeptr> WITH
%token <treeptr> ASSERT
%token <treeptr> FINALLY
%token <treeptr> NONLOCAL
%token <treeptr> YIELD
%token <treeptr> BREAK
%token <treeptr> FOR
%token <treeptr> NOT
%token <treeptr> CLASS
%token <treeptr> FROM
%token <treeptr> OR
%token <treeptr> CONTINUE
%token <treeptr> GLOBAL
%token <treeptr> PASS
%token <treeptr> LPAR
%token <treeptr> RPAR
%token <treeptr> LSQB
%token <treeptr> RSQB
%token <treeptr> COLON
%token <treeptr> COMMA
%token <treeptr> SEMI
%token <treeptr> PLUS
%token <treeptr> MINUS
%token <treeptr> STAR
%token <treeptr> SLASH
%token <treeptr> LESS
%token <treeptr> GREATER
%token <treeptr> EQUAL
%token <treeptr> DOT
%token <treeptr> PERCENT
%token <treeptr> LBRACE
%token <treeptr> RBRACE
%token <treeptr> EQEQUAL
%token <treeptr> NOTEQUAL
%token <treeptr> LESSEQUAL
%token <treeptr> GREATEREQUAL
%token <treeptr> DOUBLESTAR
%token <treeptr> PLUSEQUAL
%token <treeptr> MINEQUAL
%token <treeptr> STAREQUAL 
%token <treeptr> SLASHEQUAL
%token <treeptr> PERCENTEQUAL
%token <treeptr> DOUBLESTAREQUAL
%token <treeptr> DOUBLESLASH
%token <treeptr> DOUBLESLASHEQUAL
%token <treeptr> RARROW
%token <treeptr> FUNCTION
%token <treeptr> ELLIPSIS
%token <treeptr> COLONEQUAL
%token <treeptr> NAME
%token <treeptr> NUMBER
%token <treeptr> STRING
%token <treeptr> INDENT
%token <treeptr> DEDENT
%token <treeptr> IN
%token <treeptr> FILE_START EVAL_START INTERACTIVE_START FUNC_TYPE_START FSTRING_START

%start start

%type <treeptr> statements stament
compound_stmt simple_stmts star_expressions expression 
simple_stmt opt_simple_stmt opt_semicolon assignment return_stmt import_stmt
raise_stmt del_stmt yield_stmt assert_stmt global_stmt nonlocal_stmt
if_stmt with_stmt for_stmt try_stmt while_stmt match_stmt 
single_target augassign
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
default named_expression "@" elif_stmt else_block opt_else_block
star_targets comparison bitwise_or one_or_more_compare_op_bitwise_or_pair compare_op_bitwise_or_pair
eq_bitwise_or noteq_bitwise_or lte_bitwise_or lt_bitwise_or gte_bitwise_or gt_bitwise_or "|" "^" bitwise_and "&" "<<"
">>" shift_expr sum term factor power primary opt_arguments slices slices_dot_expr
slices_grp_one slices_grp_two opt_comma slice opt_expressions_1 opt_col_expr atom
atom_grp_one atom_grp_two atom_grp_three group group_grp_one
strings list opt_star_named_expressions tuple tuple_grp_one set dict
opt_double_starred_kvpairs double_starred_kvpairs double_starred_kvpair_star
double_starred_kvpair kvpair for_if_clauses for_if_clause_plus for_if_clause
if_disjunction_star listcomp setcomp genexp dictcomp arguments
args args_dot args_grp_one args_dot_star opt_comma_kwargs kwargs kwargs_dot_one
kwargs_dot_one_star kwargs_dot_two kwargs_dot_two_star starred_expression
kwarg_or_starred kwarg_or_double_starred star_targets_star
star_targets_list_seq star_targets_list_seq_dot star_targets_list_seq_dot_star
star_targets_tuple_seq star_target_comma_plus star_target target_with_star_atom
star_atom opt_star_targets_tuple_seq opt_star_targets_list_seq
t_primary t_lookahead bitwise_xor star_named_expressions
del_target_star del_t_atom opt_del_targets star_named_expression "~" assignment_expression del_target with_item
except_block
except_block_one
except_star_block
except_star_block_one
finally_block
opt_finally_block
subject_expr
star_named_expressions_opt
case_block
case_block_one
gaurd
gaurd_opt
patterns
as_pattern
or_pattern
closed_pattern
closed_pattern_many
literal_pattern
literal_expr
complex_number
signed_number
signed_real_number
real_number
imaginary_number
capture_pattern
pattern_capture_target
wildcard_pattern
value_pattern
attr
group_pattern
sequence_pattern
maybe_sequence_pattern
maybe_sequence_pattern_opt
open_sequence_pattern
open_sequence_pattern_opt
maybe_star_pattern
maybe_star_pattern_many
star_pattern
mapping_pattern
items_pattern
key_value_pattern
key_value_pattern_many
double_star_pattern
class_pattern
positional_patterns
pattern_many
keyword_patterns
keyword_pattern
keyword_pattern_many
star_expression
star_expression_one
opt_star_expressions
star_named_expression_many
disjunction
or_conjunction_one
conjunction
and_inversion_one
inversion
comma_with_item_many
pattern
name_or_attr
literal_expr_or_attr
"match"
opt_default
class_def_raw_opt
opt_annotation
"case"
"_"
eval
interactive
comma_expression_one
fstring
opt_newline
statement_newline
expressions
type_expressions
opt_type_expressions
func_type


%%
/*Came back as useless rules
eval
interactive
comma_expression_one
fstring
otp_newline
statement_newline
expressions
type_expressions
opt_type_expressions
func_type
*/



// STARTING RULES
// =================
start: FILE_START file_input | EVAL_START eval | INTERACTIVE_START interactive | FUNC_TYPE_START func_type | FSTRING_START fstring;

file_input: statements ENDMARKER;
interactive: statement_newline;
eval: expressions opt_newline ENDMARKER;
func_type: LPAR opt_type_expressions RPAR RARROW expression ENDMARKER;
opt_type_expressions: {$$=NULL;} | type_expressions;
fstring: star_expressions;
opt_newline: {$$=NULL;} | opt_newline NEWLINE | NEWLINE;





// GENERAL STATEMENTS
//====================
statements: stament | statements stament;
stament: compound_stmt | simple_stmts;
statement_newline: {$$=NULL;} | compound_stmt NEWLINE | simple_stmts | NEWLINE | ENDMARKER; 
simple_stmts: /*{$$=NULL;} |*/ simple_stmt NEWLINE | simple_stmt opt_simple_stmt;
opt_simple_stmt: {$$=NULL;} | opt_simple_stmt opt_semicolon;
opt_semicolon: SEMI simple_stmt;
simple_stmt: /*{$$=NULL;} |*/ assignment | star_expressions | return_stmt | import_stmt | raise_stmt
    | PASS
    | del_stmt
    | yield_stmt
    | assert_stmt
    | BREAK
    | CONTINUE 
    | global_stmt
    | nonlocal_stmt;
compound_stmt:  /*{$$=NULL;} |*/ function_def | if_stmt | class_def | with_stmt | for_stmt | try_stmt
    | while_stmt
    | match_stmt;

// SIMPLE STATEMENTS
// =================

assignment: /*{$$=NULL;} |*/  NAME EQUAL expression
    | single_target EQUAL expression
    | single_target augassign;

augassign: {$$=NULL;} | PLUSEQUAL | LESSEQUAL;
return_stmt: /*{$$=NULL;}|*/ RETURN;
raise_stmt: /*{$$=NULL;}|*/ RAISE expression | RAISE;
global_stmt: GLOBAL opt_names;
nonlocal_stmt: NONLOCAL opt_names;
opt_names: NAME opt_name;
opt_name: {$$=NULL;} | opt_name opt_name_comma;
opt_name_comma: COMMA NAME;
del_stmt: /*{$$=NULL;} |*/ DEL del_targets;
yield_stmt: yield_expr;
assert_stmt: ASSERT expression opt_expressions;
opt_expressions: {$$=NULL;} | opt_expressions opt_expression;
opt_expression: COMMA expression;
import_stmt: import_name | import_from;

// IMPORT STATEMENTS s.e+ = (e (s e)*)
// ===================

import_name: IMPORT dotted_as_names;
import_from: /*{$$=NULL;} |*/ FROM ellip_or_dot_any dotted_name IMPORT import_from_targets
    | FROM ellip_or_dot_one IMPORT import_from_targets;
ellip_or_dot_any: {$$=NULL;} | ellip_or_dot_any ellip_or_dot;
ellip_or_dot_one: ellip_or_dot | ellip_or_dot_one ellip_or_dot;
ellip_or_dot: DOT | ELLIPSIS;
import_from_targets: /*{$$=NULL;} |*/ LPAR import_from_names coma_one_or_more RPAR | import_from_names | STAR;
coma_one_or_more: COMMA | coma_one_or_more COMMA;
import_from_names: /*{$$=NULL;} |*/ import_from_as_name import_from_as_name_or_comas;
import_from_as_name_or_comas: {$$=NULL;} | import_from_as_name_or_comas import_from_as_name_or_coma;
import_from_as_name_or_coma: COMMA import_from_as_name;
import_from_as_name: /*{$$=NULL;} |*/ NAME opt_as_name;
dotted_as_names: {$$=NULL;} | dotted_as_name dotted_as_name_commas;
dotted_as_name_commas: {$$=NULL;} | dotted_as_name_commas dotted_as_name_comma;
dotted_as_name_comma: COMMA dotted_as_name;
dotted_as_name: /*{$$=NULL;} |*/ dotted_as_name dotted_as_name_opt_as;
dotted_as_name_opt_as: {$$=NULL;} | AS NAME;
dotted_name: {$$=NULL;} | dotted_name DOT NAME | NAME;

// COMPOUND STATEMENTS
// ===================

//Common elements
//====================
block: /*{$$=NULL;} |*/
    NEWLINE INDENT statements DEDENT 
    | simple_stmts;

// Class definitions
// ==================

class_def: /*{$$=NULL;} |*/
    class_def_raw;

class_def_raw: /*{$$=NULL;} |*/ CLASS NAME class_def_raw_opt SEMI block;
class_def_raw_opt: {$$=NULL;} | LPAR arguments RPAR;

// Function definitions
//==================

function_def: /*{$$=NULL;} |*/ function_def_raw;

function_def_raw: /*{$$=NULL;} |*/ DEF NAME LPAR params RPAR function_def_raw_exp COLON block 
function_def_raw_exp: {$$=NULL;} | RARROW expression;

// Function parameters
// ==================

params: /*{$$=NULL;} |*/ parameters;

parameters: /*{$$=NULL;} |*/ slash_no_default param_no_default_zero_more param_with_default_zero_more star_etc_opt 
    | slash_with_default param_with_default_zero_more star_etc_opt
    | param_no_default_one_more param_with_default_zero_more star_etc_opt
    | param_with_default_one_more star_etc_opt
    | star_etc;

star_etc_opt: {$$=NULL;} | star_etc;

// Some duplication here because we can't write (',' | &')'),
// which is because we don't support empty alternatives (yet).

slash_no_default:/*{$$=NULL;} |*/ param_no_default_one_more SLASH COMMA 
    // | param_no_default_one_more SLASH &')'; // don't know how to deal with lookahead
    | param_no_default_one_more SLASH RPAR;
slash_with_default: /*{$$=NULL;} |*/ param_no_default_zero_more param_with_default_one_more SLASH COMMA
    // | param_no_default_zero_more param_with_default_one_more '/' &')' 
    | param_no_default_zero_more param_with_default_one_more SLASH RPAR;

star_etc: /*{$$=NULL;} |*/ STAR param_no_default param_maybe_default_zero_more kwds_opt 
    | STAR param_no_default_star_annotation param_maybe_default_zero_more kwds_opt 
    | STAR COMMA param_maybe_default_one_more kwds_opt 
    | kwds;

kwds: /*{$$=NULL;} |*/ DOUBLESTAR param_no_default;
kwds_opt: {$$=NULL;} | kwds;

param_no_default_zero_more: {$$=NULL;} | param_no_default_one_more;
param_no_default_one_more: param_no_default | param_no_default param_no_default_one_more;
param_with_default_zero_more: {$$=NULL;} | param_with_default;
param_with_default_one_more: param_with_default | param_with_default param_with_default_one_more;
param_maybe_default_zero_more: {$$=NULL;} | param_maybe_default;
param_maybe_default_one_more: param_maybe_default | param_maybe_default param_maybe_default_one_more;


param_no_default: /*{$$=NULL;} |*/ param COMMA 
    // | param type_comment_opt &')';
    | param RPAR;
param_no_default_star_annotation: /*{$$=NULL;} |*/ param_star_annotation COMMA  
    // | param_star_annotation type_comment_opt &')';
    | param_star_annotation RPAR;
param_with_default: /*{$$=NULL;} |*/ param default COMMA 
    // | param default type_comment_opt &')';
    | param default RPAR;
param_maybe_default:/*{$$=NULL;} |*/ param opt_default COMMA 
    // | param default? type_comment_opt &')';
    | param opt_default RPAR;

param: NAME opt_annotation; 
param_star_annotation: NAME star_annotation;
annotation: COLON expression;
star_annotation: COLON star_expression;
// default: EQUAL expression  | invalid_default;
default: EQUAL expression;

// type_comment_opt: {$$=NULL;} | TYPE_COMMENT;
opt_default: {$$=NULL;} | default;
opt_annotation: {$$=NULL;} | annotation;

/* 
if statement: 
-------------
*/
if_stmt: /*{$$=NULL;} |*/ IF named_expression COLON block elif_stmt 
    | IF named_expression COLON block opt_else_block;

elif_stmt: /*{$$=NULL;} |*/ ELIF named_expression COLON block elif_stmt 
    | ELIF named_expression COLON block opt_else_block;

else_block: /*{$$=NULL;} |*/ ELSE COLON block;

/* While statement: */
while_stmt: /*{$$=NULL;} |*/ WHILE named_expression COLON block opt_else_block;

/* 
For statement: 
--------------
This has ASYNC on the final argument but I didn't inlcude it
*/
for_stmt: /*{$$=NULL;} |*/ FOR star_targets IN star_expressions COLON block opt_else_block;

/*for_stmt: {$$=NULL;} | FOR star_targets 
for_stmt:
    | 'for' star_targets 'in' ~ star_expressions ':' [TYPE_COMMENT] block [else_block] 
    | ASYNC 'for' star_targets 'in' ~ star_expressions ':' [TYPE_COMMENT] block [else_block] 
*/

/* 
With statement:
---------------
This has multiple odd things such as the . in front of with_item_one and deletion of ASYNC 
*/
with_stmt: /*{$$=NULL;} |*/ WITH LPAR with_item comma_with_item_many opt_comma RPAR COLON block
    | WITH with_item comma_with_item_many COLON block;

with_item: /*{$$=NULL;} |*/ expression AS star_target comma_rpar_colon; //| expression;

comma_rpar_colon: COMMA | RPAR | COLON;

comma_with_item_many: {$$=NULL;} 
    | comma_with_item_many COMMA with_item;

/*
Try Statement:
--------------
*/
try_stmt: /*{$$=NULL;} |*/ TRY COLON block finally_block 
    | TRY COLON block except_block_one opt_else_block opt_finally_block 
    | TRY COLON block except_star_block_one opt_else_block opt_finally_block;

/*
Except statement: 
-----------------
*/
except_block: /*{$$=NULL;} |*/ EXCEPT expression opt_as_name COLON block
    | EXCEPT COLON block;

except_block_one: except_block 
    | except_block_one except_block;

except_star_block: /*{$$=NULL;} |*/ EXCEPT starred_expression opt_as_name COLON block;

except_star_block_one: except_star_block 
    | except_star_block_one except_star_block;

finally_block: FINALLY COLON block;

opt_as_name: {$$=NULL;} 
    | AS NAME;

opt_else_block: {$$=NULL;} 
    | else_block;

opt_finally_block: {$$=NULL;} 
    | finally_block;

/*
Match Statement:
----------------
This deals with double quotes
*/
match_stmt: /*{$$=NULL;} |*/  "match" subject_expr COLON NEWLINE INDENT case_block_one DEDENT;

subject_expr: {$$=NULL;} 
    | star_named_expression COMMA star_named_expressions_opt
    | named_expression;

star_named_expressions_opt: {$$=NULL;} 
    | star_named_expressions;

case_block: {$$=NULL;} 
    | "case" patterns gaurd_opt COLON block;

case_block_one: case_block 
    | case_block_one case_block;

gaurd: IF named_expression;

gaurd_opt: {$$=NULL;} 
    | gaurd;

patterns: {$$=NULL;} 
    | open_sequence_pattern 
    | pattern;

pattern: /*{$$=NULL;} |*/ as_pattern | or_pattern;

as_pattern:/*{$$=NULL;} |*/ or_pattern AS pattern_capture_target;

or_pattern: /*{$$=NULL;} |*/ closed_pattern closed_pattern_many;

closed_pattern: /*{$$=NULL;} |*/ literal_pattern
    | capture_pattern
    | wildcard_pattern
    | value_pattern
    | group_pattern
    | sequence_pattern
    | mapping_pattern
    | class_pattern;

/*This deals with '|' which is a lexical error */
closed_pattern_many: {$$=NULL;}
    | closed_pattern_many '|' closed_pattern;

/*
Literal Patterns:
-----------------
Literal patterns are used for equality and identity constraints
*/
// signed number has ! but i did not include it because of lex
literal_pattern: /*{$$=NULL;} |*/ signed_number 
    | complex_number
    | strings
    | NONE
    | TRUE
    | FALSE;


/*
Literal Expressions:
--------------------
Literal expressions are used to restrict permitted mapping pattern keys
*/
literal_expr: /*{$$=NULL;} |*/ signed_number 
    | complex_number
    | strings
    | NONE
    | TRUE
    | FALSE;

complex_number: /*{$$=NULL;} |*/ signed_real_number PLUS imaginary_number
    | signed_real_number MINUS imaginary_number;

signed_number: /*{$$=NULL;} |*/ NUMBER
    | MINUS NUMBER;

signed_real_number: /*{$$=NULL;} |*/real_number
    | MINUS real_number;

real_number: /*{$$=NULL;} |*/NUMBER;

imaginary_number: /*{$$=NULL;} |*/NUMBER;

capture_pattern:/*{$$=NULL;} |*/ pattern_capture_target;
    
/*THis deals with ! but i didn't implement it*/
pattern_capture_target: /*{$$=NULL;} |*/ NAME;

wildcard_pattern: /*{$$=NULL;} |*/ "_";

value_pattern: /*{$$=NULL;} |*/ attr;

attr: /*{$$=NULL;} |*/ name_or_attr DOT NAME;

name_or_attr: /*{$$=NULL;} |*/attr
    | NAME;

group_pattern: /*{$$=NULL;} |*/LPAR pattern RPAR;

sequence_pattern:/*{$$=NULL;} |*/LSQB maybe_sequence_pattern_opt RSQB
    | LPAR open_sequence_pattern_opt RPAR;

maybe_sequence_pattern: /*{$$=NULL;} |*/ maybe_star_pattern maybe_star_pattern_many opt_comma;

open_sequence_pattern: /*{$$=NULL;} |*/maybe_star_pattern COMMA maybe_sequence_pattern_opt;

maybe_sequence_pattern_opt: {$$=NULL;}
    | maybe_sequence_pattern;

open_sequence_pattern_opt: {$$=NULL;}
    | open_sequence_pattern;

maybe_star_pattern: /*{$$=NULL;}|*/ star_pattern
    | pattern;

maybe_star_pattern_many: {$$=NULL;}
    | maybe_star_pattern_many COMMA maybe_star_pattern;

star_pattern: /*{$$=NULL;} |*/STAR pattern_capture_target
    | STAR wildcard_pattern;

mapping_pattern: /*{$$=NULL;} |*/LBRACE RBRACE
    | LBRACE double_star_pattern opt_comma RBRACE
    | LBRACE items_pattern COMMA double_star_pattern opt_comma RBRACE
    | LBRACE items_pattern opt_comma RBRACE;

items_pattern: /*{$$=NULL;} |*/ key_value_pattern key_value_pattern_many;

key_value_pattern: /*{$$=NULL;} |*/ literal_expr_or_attr COLON pattern;

literal_expr_or_attr: literal_expr | attr;

key_value_pattern_many: {$$=NULL;} 
    | key_value_pattern_many COMMA key_value_pattern;

double_star_pattern: /*{$$=NULL;} |*/  DOUBLESTAR pattern_capture_target;

class_pattern: /*{$$=NULL;} |*/ name_or_attr LPAR RPAR
    | name_or_attr LPAR positional_patterns opt_comma RPAR
    | name_or_attr LPAR keyword_patterns opt_comma RPAR
    | name_or_attr LPAR positional_patterns COMMA keyword_patterns opt_comma RPAR;

positional_patterns:/*{$$=NULL;} |*/ pattern pattern_many;

pattern_many: {$$=NULL;}
    | pattern_many COMMA pattern;

keyword_patterns: /*{$$=NULL;} |*/ keyword_pattern keyword_pattern_many;

keyword_pattern: /*{$$=NULL;} |*/ NAME EQUAL pattern;

keyword_pattern_many: {$$=NULL;}
    | keyword_pattern_many COMMA key_value_pattern;



//Expressions:
//------------

expressions: {$$=NULL;}
    | expression comma_expression_one opt_comma;
    | expression COMMA
    | expression;


comma_expression_one: COMMA expression 
    | comma_expression_one COMMA expression;

expression: /*{$$=NULL;} |*/ disjunction IF disjunction ELSE expression
    | disjunction;

yield_expr: /*{$$=NULL;} |*/ YIELD FROM expression
    | YIELD opt_star_expressions;

star_expressions: /*{$$=NULL;} |*/ star_expression star_expression_one opt_comma
    //| star_expression COMMA
    | star_expression;

star_expression: /*{$$=NULL;} |*/ STAR bitwise_or;
    //| expression;

star_expression_one: COMMA star_expression
    | star_expression_one COMMA star_expression;

opt_star_expressions: {$$=NULL;} 
    | star_expressions;

star_named_expressions: star_named_expression star_named_expression_many opt_comma;

star_named_expression_many: {$$=NULL;} 
    | star_named_expression_many COMMA star_named_expression;

star_named_expression: /*{$$=NULL;} |*/ STAR bitwise_or
    | named_expression;

assignment_expression:/*{$$=NULL;} |*/ NAME COLONEQUAL expression;

/*This had !':=' but did not include because of !*/
named_expression: /*{$$=NULL;} |*/ assignment_expression
    | expression;

disjunction: /*{$$=NULL;} |*/ conjunction or_conjunction_one
    | conjunction;

or_conjunction_one: OR conjunction
    | or_conjunction_one OR conjunction;

conjunction: /*{$$=NULL;} |*/inversion and_inversion_one
    | inversion;

and_inversion_one: AND inversion 
    | and_inversion_one AND inversion;

inversion: /*{$$=NULL;} |*/ NOT inversion 
    | comparison;





// COMPARISON OPERATORS
// ====================

comparison: /*{$$=NULL;} |*/ bitwise_or one_or_more_compare_op_bitwise_or_pair | bitwise_or;

one_or_more_compare_op_bitwise_or_pair: compare_op_bitwise_or_pair | one_or_more_compare_op_bitwise_or_pair compare_op_bitwise_or_pair;


compare_op_bitwise_or_pair: /*{$$=NULL;} |*/eq_bitwise_or
    | noteq_bitwise_or
    | lte_bitwise_or
    | lt_bitwise_or
    | gte_bitwise_or
    | gt_bitwise_or;

eq_bitwise_or: EQEQUAL bitwise_or;
noteq_bitwise_or: /*{$$=NULL;} |*/ NOTEQUAL bitwise_or;
lte_bitwise_or: LESSEQUAL bitwise_or;
lt_bitwise_or: LESS bitwise_or;
gte_bitwise_or: GREATEREQUAL bitwise_or;
gt_bitwise_or: GREATER bitwise_or;

// BITWISE OPERATORS
// ===================

bitwise_or: /*{$$=NULL;} |*/ bitwise_or "|" bitwise_xor | bitwise_xor;

bitwise_xor: /*{$$=NULL;} |*/ bitwise_xor "^" bitwise_and | bitwise_and;

bitwise_and: /*{$$=NULL;} |*/ bitwise_and "&" shift_expr | shift_expr;

shift_expr: /*{$$=NULL;} |*/ shift_expr "<<" sum | shift_expr ">>" sum | sum;

// Arithmetic operators
// --------------------

sum: /*{$$=NULL;} |*/ sum PLUS term 
    | sum MINUS term 
    | term;

term: /*{$$=NULL;} |*/term STAR factor 
    | term SLASH factor 
    | term DOUBLESLASH factor 
    | term PERCENT factor 
    //| term '@' factor 
    | factor;

factor: /*{$$=NULL;} |*/PLUS factor 
    | MINUS factor 
    //| '~' factor 
    | power;


power: /*{$$=NULL;} |*/primary DOUBLESTAR factor 
    | primary;


// Primary elements
// ----------------

// Primary elements are things like "obj.something.something", "obj[something]", "obj(something)", "obj" ...

// await_primary: {$$=NULL;}
//     | AWAIT primary 
//     | primary;

primary: /*{$$=NULL;}|*/ primary DOT NAME 
    | primary genexp 
    | primary LPAR opt_arguments RPAR 
    | primary LSQB slices RSQB 
    | atom;


slices: /*{$$=NULL;} |*/slice 
    | slices_dot_expr opt_comma;
    
slices_dot_expr: slices_grp_one slices_grp_two;
slices_grp_one: starred_expression;
slices_grp_two: {$$=NULL;} | slices_grp_two COMMA slices_grp_one;
opt_comma: {$$=NULL;} | COMMA;

slice: /*{$$=NULL;} |*/opt_expressions_1 COLON opt_expressions_1 opt_col_expr 
    | named_expression;

opt_col_expr: {$$=NULL;} | COLON opt_expressions_1;

opt_expressions_1: /*{$$=NULL;} |*/ expression;

atom: /*{$$=NULL;} |*/ NAME
    | TRUE 
    | FALSE
    | NONE
    | strings
    | NUMBER
    | atom_grp_one
    | atom_grp_two
    | atom_grp_three
    | ELLIPSIS; 
atom_grp_one: tuple | group | genexp;
atom_grp_two: list | listcomp;
atom_grp_three: dict | set | dictcomp | setcomp;

group: /*{$$=NULL;} |*/ LPAR group_grp_one RPAR;
group_grp_one: yield_expr | named_expression;


// LITERALS
// ========

strings: STRING | STRING strings;

list:/*{$$=NULL;} |*/LSQB opt_star_named_expressions RSQB;

tuple: /*{$$=NULL;} |*/ LPAR tuple_grp_one RPAR;
tuple_grp_one: /*{$$=NULL;} |*/ star_named_expression COMMA opt_star_named_expressions;

set: LBRACE star_named_expressions RBRACE;

opt_star_named_expressions: /*{$$=NULL;} |*/ star_named_expressions;


// Dicts
// -----

dict: /*{$$=NULL;} |*/LBRACE opt_double_starred_kvpairs RBRACE 
opt_double_starred_kvpairs: {$$=NULL;} | double_starred_kvpairs;

double_starred_kvpairs: double_starred_kvpair double_starred_kvpair_star opt_comma;
double_starred_kvpair_star: {$$=NULL;} | double_starred_kvpair_star COMMA double_starred_kvpair;

double_starred_kvpair: /*{$$=NULL;} |*/ DOUBLESTAR bitwise_or 
    | kvpair;

kvpair: expression COLON expression;

// Comprehensions & Generators
// ---------------------------

for_if_clauses: /*{$$=NULL;} |*/for_if_clause_plus;
for_if_clause_plus: for_if_clause | for_if_clause for_if_clause_plus;

for_if_clause: /*{$$=NULL;} |*/
    // | ASYNC 'for' star_targets 'in' ~ disjunction ('if' disjunction )* 
    FOR star_targets IN disjunction if_disjunction_star;

if_disjunction_star: {$$=NULL;} | if_disjunction_star IF disjunction;

listcomp: /*{$$=NULL;} |*/LSQB named_expression for_if_clauses RSQB;

setcomp: /*{$$=NULL;} |*/LBRACE named_expression for_if_clauses RBRACE;

genexp: /*{$$=NULL;} |*/ LPAR named_expression for_if_clauses RPAR;

dictcomp: /*{$$=NULL;} |*/ LBRACE kvpair for_if_clauses RBRACE;

// FUNCTION CALL ARGUMENTS
// =======================

arguments: /*{$$=NULL;} |*/ args opt_comma RPAR; 

args: /*{$$=NULL;} |*/ args_dot opt_comma_kwargs 
    | kwargs;
args_dot: args_grp_one args_dot_star;
args_grp_one: starred_expression | assignment_expression | expression;
args_dot_star: {$$=NULL;} | args_dot_star COMMA args_grp_one;
opt_comma_kwargs: {$$=NULL;} | COMMA kwargs;

// s.e+ = (e (s e)*)
kwargs: /*{$$=NULL;} |*/ kwargs_dot_one COMMA kwargs_dot_two
    | kwargs_dot_one
    | kwargs_dot_two;
kwargs_dot_one: kwarg_or_starred kwargs_dot_one_star;
kwargs_dot_one_star: /*{$$=NULL;} |*/ COMMA kwarg_or_starred kwargs_dot_one_star;
kwargs_dot_two: kwarg_or_double_starred kwargs_dot_two_star;
kwargs_dot_two_star: {$$=NULL;} | COMMA kwarg_or_double_starred kwargs_dot_two_star;

starred_expression: /*{$$=NULL;} |*/ STAR expression;

kwarg_or_starred: /*{$$=NULL;} |*/ NAME EQUAL expression 
    | starred_expression;

kwarg_or_double_starred: /*{$$=NULL;} |*/ NAME EQUAL expression 
    | DOUBLESTAR expression;

// ASSIGNMENT TARGETS
// ==================

// Generic targets
// ---------------

// NOTE: star_targets may contain *bitwise_or, targets may not.
star_targets: /*{$$=NULL;} |*/ star_target star_targets_star opt_comma;

star_targets_star: {$$=NULL;} | COMMA star_target star_targets_star;

star_targets_list_seq: star_targets_list_seq_dot opt_comma
star_targets_list_seq_dot: star_target star_targets_list_seq_dot_star
star_targets_list_seq_dot_star: {$$=NULL;} | COMMA star_target star_targets_list_seq_dot_star;

star_targets_tuple_seq: /*{$$=NULL;} |*/ star_target star_target_comma_plus opt_comma
    | star_target COMMA;
star_target_comma_plus: COMMA star_target | COMMA star_target star_target_comma_plus;

star_target: /*{$$=NULL;} |*/ STAR star_target 
    | target_with_star_atom;

target_with_star_atom: /*{$$=NULL;} |*/ t_primary DOT NAME  
    | t_primary LSQB slices RSQB 
    | star_atom;

star_atom: /*{$$=NULL;} |*/ //NAME 
    /*|*/ LPAR target_with_star_atom RPAR
    //| LPAR opt_star_targets_tuple_seq RPAR 
    | LSQB opt_star_targets_list_seq RSQB;
opt_star_targets_tuple_seq: /*{$$=NULL;} |*/ star_targets_tuple_seq;
opt_star_targets_list_seq: /*{$$=NULL;} |*/ star_targets_list_seq;

single_target: /*{$$=NULL;} |*/ single_subscript_attribute_target
    //| NAME
    | LPAR single_target RPAR;

single_subscript_attribute_target: /*{$$=NULL;} |*/t_primary DOT NAME 
    | t_primary LSQB slices RSQB;

t_primary: /*{$$=NULL;} |*/ t_primary DOT NAME t_lookahead 
    | t_primary LSQB slices RSQB t_lookahead 
    | t_primary genexp t_lookahead 
    | t_primary LPAR opt_arguments RPAR t_lookahead 
    | atom t_lookahead;

opt_arguments: /*{$$=NULL;} |*/ arguments;

t_lookahead: LPAR | LSQB | DOT;

// Targets for del statements
// --------------------------

del_targets: del_target del_target_star opt_comma;
del_target_star: {$$=NULL;} | COMMA del_target del_target_star;

del_target: /*{$$=NULL;} |*/ t_primary DOT NAME 
    | t_primary LSQB slices RSQB 
    | del_t_atom;

del_t_atom: /*{$$=NULL;} |*/ //NAME 
    /*|*/ LPAR del_target RPAR
    | LPAR opt_del_targets RPAR 
    | LSQB opt_del_targets RSQB
opt_del_targets: /*{$$=NULL;} |*/ del_targets;

// TYPING ELEMENTS
// ================

type_expressions: {$$=NULL;} | STAR expression | DOUBLESTAR expression | STAR expression COMMA DOUBLESTAR expression;

%%