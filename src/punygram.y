%{
    #define YYDEBUG 1
    #include "tree.h"
    #include <stdio.h>
    int yylex();
    int yyerror(char *);
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
%token <treeptr> TYPE_COMMENT

%start file_input

%type <treeptr> zero_more_newline_stmt newline_stmt
%type <treeptr> parameters suite opt_test argumentstd comma_argstd
%type <treeptr> argumenttd opt_eq_test test opt_comma opt_type_comment
%type <treeptr> opt_col_test
%type <treeptr> simple_stmt compound_stmt zero_more_stmts single_stmt
%type <treeptr> expr_stmt del_stmt pass_stmt flow_stmt global_stmt nonlocal_stmt assert_stmt testlist_star_expr
opt_eq_yeild__tc annassign yield_or_testlist opt_rarrowtest eq_yield_or_tlse one_or_more_eq_yield_or_tlse
yield_or_tlse test_or_se zero_more_comma_test_or_se break_stmt continue_stmt return_stmt raise_stmt yield_stmt opt_tse opt_test_opt_from_test
dotted_as_names import_from import_name import_stmt opt_from_test
dot_ellip_dn_or_one_more_dot_ellip zero_more_dot_or_ellip dotted_name one_more_dot_or_ellip dot_or_ellip
star_or_names import_as_names import_as_name zero_more_comma_isn dotted_as_name zero_more_dsn
zero_more_dot_name dot_name zero_more_comma_name comma_name
if_stmt while_stmt for_stmt try_stmt with_stmt funcdef classdef namedexpr_test elif zero_more_elif
except_else_or_finally except_stmt zero_more_comma_with_item with_item opt_as_expr
opt_test_as_name one_more_stmt stmt opt_coleq_test opt_if_else test_nocond or_test
zero_more_or_and_test or_and_test and_test zero_more_and_not_test not_and_test not_test comparison
zero_more_comp_op_expr comp_op_expr comp_op star_expr expr zero_more_or_xor_expr or_xor_expr "|"
"^" xor_expr zero_more_carrot_and_expr carrot_and_expr and_expr
zero_more_and_shift and_shift shift_expr zero_more_double_arrow_arith double_arrow_arith left_or_right
arith_expr zero_more_plus_minus_term plus_minus_term term
zero_more_factor symbols_factor symbols_f factor power opt_doublestar_factor atom_expr zero_more_trailer
atom opt_yield_tlc
one_more_string testlist_comp
comp_for_multiple zero_more_comma_nt_or_se
comma_nt_or_se
namedexpr_or_star_expr
trailer opt_slicop
opt_arglist
subscriptlist sliceop exprlist zero_more_comma_expr_or_se comma_expr_or_se
expr_or_starexpr
testlist zero_more_comma_test comma_test
opt_lpar_arglist_rpar
arglist zero_more_comma_arguments
argument opt_comp_for
comp_iter sync_comp_for comp_for comp_if
opt_comp_iter yield_expr opt_yield_args yield_args func_body_suite opt_type_comment_newline
"$" "<<" ">>" opt_eq_yeild_or_tlse
zero_more_comma_sub opt_as_name opt_comma_test opt_else tfdef small_stmt augassign one_more_except except_clause plus_or_minus
subscript opt_finally zero_more_comma_argtd
dictorsetmarker dsm_expr tct_or_dse zero_more_comma_tct_or_dse cf_or_comma_tct_dct dsm_star_expr cf_or_comma_tse opt_dictsetmarker
%%
/*
Removed:
opt_tfdef
*/

//STARTING RULES
//================
//single_input: NEWLINE ENDMARKER | simple_stmt ENDMARKER | compound_stmt NEWLINE ENDMARKER;

file_input: zero_more_newline_stmt ENDMARKER;

zero_more_newline_stmt: {$$=NULL;} | zero_more_newline_stmt newline_stmt;

newline_stmt: NEWLINE | stmt;

funcdef: DEF NAME parameters opt_rarrowtest COLON func_body_suite;
opt_rarrowtest: {$$=NULL;} | RARROW test;

parameters: LPAR argumentstd RPAR;
//opt_typedargslist: {$$=NULL;} | typedargslist;

//typedargslist rules
//===================
argumentstd: argumenttd zero_more_comma_argtd;
zero_more_comma_argtd: {$$=NULL;} | zero_more_comma_argtd comma_argstd;
comma_argstd: COMMA argumenttd;

argumenttd: tfdef opt_eq_test;

/*
zero_more_comma_argvg comma_argvg vfpdef kwargstd

kwargstd: DOUBLESTAR tfdef opt_comma opt_type_comment;
// argstd: STAR opt_tfdef;
argstd: STAR tfdef;
kwonly_kwargstd: zero_more_comma_argtd type_comment_or_opt_comma_type_comment_kwargs;
type_comment_or_opt_comma_type_comment_kwargs: TYPE_COMMENT | opt_comma_type_comment_kwargs;
opt_comma_type_comment_kwargs: opt_type_comment opt_kwardstd;

args_kwonly_kwargstd: argstd kwonly_kwargstd | kwargstd;
poskeyword_args_kwonly_kwargstd: argumentstd type_comment_or_opt_comma_type_comment_args_kwonly_kwargs;

type_comment_or_opt_comma_type_comment_args_kwonly_kwargs: TYPE_COMMENT | opt_comma_type_comment_args_kwonly_kwargs;
opt_comma_type_comment_args_kwonly_kwargs: COMMA opt_type_comment opt_args_kwonly_kwargs;

typedargslist_no_posonly: poskeyword_args_kwonly_kwargstd | args_kwonly_kwargstd;

typedargslist: argumenttd COMMA opt_type_comment SLASH otp_comma_tc_tdnp | typedargslist_no_posonly;

otp_comma_tc_tdnp: {$$=NULL;} | COMMA opt_tc_tdnp;
opt_tc_tdnp: {$$=NULL;} | opt_type_comment typedargslist_no_posonly;
opt_args_kwonly_kwargs: {$$=NULL;} | args_kwonly_kwargstd;
opt_kwardstd: {$$=NULL;} | kwargstd;
*/
// opt_tfdef: {$$=NULL;} | tfdef;


tfdef: NAME | opt_col_test;
opt_col_test: {$$=NULL;} | COLON test;

//varargslist rules
//===================

/*
argumentsvg: argumentvg zero_more_comma_argvg;

argumentvg: vfpdef opt_eq_test;

kwargsvg: DOUBLESTAR vfpdef opt_comma;

argsvg: STAR opt_vdpdef;
opt_vdpdef: {$$=NULL;} | vfpdef;

kwonly_kwargsvg: zero_more_comma_argvg opt_comma_kwargsvg;

opt_comma_kwargsvg: {$$=NULL;} | COMMA opt_kwardsvg;
opt_kwardsvg: {$$=NULL;} | kwargsvg;
zero_more_comma_argvg: {$$=NULL;} | zero_more_comma_argvg comma_argvg;

args_kwonly_kwargsgv: argsvg kwonly_kwargsvg | kwargsvg;
comma_argvg: COMMA argumentsvg;


poskeyword_args_kwonly_kwargsvg: argumentsvg opt_comma_args_kwonly_kwargsgv;
opt_comma_args_kwonly_kwargsgv: {$$=NULL;} | COMMA opt_args_kwonly_kwargsgv;
opt_args_kwonly_kwargsgv: {$$=NULL;} | args_kwonly_kwargsgv;

vararglist_no_posonlyvg: poskeyword_args_kwonly_kwargsvg | args_kwonly_kwargsgv;

varargslist: argumentsvg COMMA SLASH opt_comma_vararglist_no_posonlyvg | vararglist_no_posonlyvg;

opt_comma_vararglist_no_posonlyvg: {$$=NULL;} | COMMA opt_varlst;
opt_varlst: {$$=NULL;} | varargslist;

vfpdef: NAME;
*/

//SIMPLE STATEMENTS
//===========
stmt: simple_stmt | compound_stmt;

simple_stmt: small_stmt zero_more_stmts opt_comma NEWLINE;
zero_more_stmts: {$$=NULL;} | zero_more_stmts single_stmt;
single_stmt: COMMA small_stmt;

small_stmt: expr_stmt | del_stmt | pass_stmt | flow_stmt | import_stmt | global_stmt | nonlocal_stmt | assert_stmt;

expr_stmt: testlist_star_expr everything_in_parenthesis;

everything_in_parenthesis: annassign | augassign yield_or_testlist | opt_eq_yeild__tc;
yield_or_testlist: yield_expr | testlist;

opt_eq_yeild__tc: {$$=NULL;} | one_or_more_eq_yield_or_tlse opt_type_comment;
one_or_more_eq_yield_or_tlse: eq_yield_or_tlse | one_or_more_eq_yield_or_tlse eq_yield_or_tlse;

annassign: COLON test opt_eq_yeild_or_tlse;
opt_eq_yeild_or_tlse: {$$=NULL;} | eq_yield_or_tlse;

eq_yield_or_tlse: EQUAL yield_or_tlse;
yield_or_tlse: yield_expr | testlist_star_expr;

testlist_star_expr: test_or_se zero_more_comma_test_or_se opt_comma;

zero_more_comma_test_or_se: {$$=NULL;} | zero_more_comma_test_or_se comma_test_or_se;

comma_test_or_se: COMMA test_or_se;

test_or_se: test | star_expr;

augassign: PLUSEQUAL | MINEQUAL | STAREQUAL | SLASHEQUAL | PERCENTEQUAL | DOUBLESLASHEQUAL | DOUBLESTAREQUAL;


del_stmt: DEL exprlist;
pass_stmt: PASS;
flow_stmt: break_stmt | continue_stmt | return_stmt | raise_stmt | yield_stmt;

break_stmt: BREAK;
continue_stmt: CONTINUE;
return_stmt: RETURN opt_tse;
opt_tse: {$$=NULL;;} | testlist_star_expr;
yield_stmt: yield_expr;
raise_stmt: RAISE opt_test_opt_from_test;
opt_test_opt_from_test: {$$=NULL;} | test opt_from_test;
opt_from_test: {$$=NULL;} | FROM test;

import_stmt: import_name | import_from;
import_name: IMPORT dotted_as_names;

import_from: FROM dot_ellip_dn_or_one_more_dot_ellip IMPORT star_or_names;

dot_ellip_dn_or_one_more_dot_ellip: zero_more_dot_or_ellip dotted_name | one_more_dot_or_ellip;

zero_more_dot_or_ellip: {$$=NULL;} |  zero_more_dot_or_ellip dot_or_ellip;
one_more_dot_or_ellip: dot_or_ellip | one_more_dot_or_ellip dot_or_ellip;

dot_or_ellip: DOT | ELLIPSIS;
star_or_names: STAR | LPAR import_as_names RPAR | import_as_names;

import_as_name: NAME opt_as_name;
dotted_as_name: dotted_name opt_as_name;
import_as_names: import_as_name zero_more_comma_isn opt_comma;

zero_more_comma_isn: {$$=NULL;} | zero_more_comma_isn comma_isn;

comma_isn: COMMA import_as_name;

dotted_as_names: dotted_as_name zero_more_dsn;
zero_more_dsn: {$$=NULL;} | zero_more_dsn comma_dsn;

comma_dsn: COMMA dotted_as_name;


dotted_name: NAME zero_more_dot_name;
global_stmt: GLOBAL NAME zero_more_comma_name;
nonlocal_stmt: NONLOCAL NAME zero_more_comma_name;
assert_stmt: ASSERT test opt_comma_test;




//COMPOUND STEMENTS
//=================
compound_stmt: if_stmt | while_stmt | for_stmt | try_stmt | with_stmt | funcdef | classdef;

if_stmt: IF namedexpr_test COLON suite zero_more_elif opt_else;
zero_more_elif: {$$=NULL;} | zero_more_elif elif;
elif: ELIF namedexpr_test COLON suite;

while_stmt: WHILE namedexpr_test COLON suite opt_else;

for_stmt: FOR exprlist IN testlist COLON opt_type_comment suite opt_else;

try_stmt: TRY COLON suite except_else_or_finally;

except_else_or_finally: one_more_except opt_else opt_finally | FINALLY COLON suite;
opt_finally: {$$=NULL;} | FINALLY COLON suite;

one_more_except: except_stmt | one_more_except except_stmt;
except_stmt: except_clause COLON suite;

with_stmt: WITH with_item zero_more_comma_with_item COLON opt_type_comment suite;
zero_more_comma_with_item: {$$=NULL;} | zero_more_comma_with_item comma_with_item;
comma_with_item: COMMA with_item;

with_item: test opt_as_expr;

except_clause: EXCEPT opt_test_as_name;
opt_test_as_name: test opt_as_name;

suite: simple_stmt | NEWLINE INDENT one_more_stmt DEDENT;
one_more_stmt: stmt | one_more_stmt stmt;


namedexpr_test: test opt_coleq_test;
opt_coleq_test: {$$=NULL;} | COLONEQUAL test;

test: or_test opt_if_else;
opt_if_else: {$$=NULL;} | IF or_test ELSE test;

test_nocond: or_test;

or_test: and_test zero_more_or_and_test;
zero_more_or_and_test: {$$=NULL;} | zero_more_or_and_test or_and_test;
or_and_test: OR and_test;

and_test: not_test zero_more_and_not_test;
zero_more_and_not_test: {$$=NULL;} | zero_more_and_not_test not_and_test;
not_and_test: AND not_test;

not_test: NOT not_test | comparison;

comparison: expr zero_more_comp_op_expr;
zero_more_comp_op_expr: {$$=NULL;} | zero_more_comp_op_expr comp_op_expr;
comp_op_expr: comp_op expr;

comp_op: LESS | GREATER | EQEQUAL | LESSEQUAL | GREATEREQUAL | NOTEQUAL | NOT | IN/*this would be an error*/;

star_expr: STAR expr;

expr: xor_expr zero_more_or_xor_expr;
zero_more_or_xor_expr: {$$=NULL;} | zero_more_or_xor_expr or_xor_expr;
or_xor_expr: "|" xor_expr;

xor_expr: and_expr zero_more_carrot_and_expr;
zero_more_carrot_and_expr: {$$=NULL;} | zero_more_carrot_and_expr carrot_and_expr;
carrot_and_expr: "^" and_expr;

and_expr: shift_expr zero_more_and_shift;
zero_more_and_shift: {$$=NULL;} | zero_more_and_shift and_shift;
and_shift: "$" shift_expr;

shift_expr: arith_expr zero_more_double_arrow_arith;
zero_more_double_arrow_arith: {$$=NULL;} | zero_more_double_arrow_arith double_arrow_arith;
double_arrow_arith: left_or_right arith_expr;
left_or_right: "<<" | ">>";

arith_expr: term zero_more_plus_minus_term;
zero_more_plus_minus_term: {$$=NULL;} | zero_more_plus_minus_term plus_minus_term;
plus_minus_term: plus_or_minus term;

term: factor zero_more_factor;
zero_more_factor: {$$=NULL;} | zero_more_factor symbols_factor;
symbols_factor: symbols_f factor;
symbols_f: STAR | SLASH | PERCENT | DOUBLESLASH;

factor: plus_or_minus factor | power;

power: atom_expr opt_doublestar_factor;
opt_doublestar_factor: {$$=NULL;} | DOUBLESTAR factor;

atom_expr: atom zero_more_trailer;
zero_more_trailer: {$$=NULL;} | zero_more_trailer trailer;

atom: LPAR opt_yield_tlc RPAR | LSQB testlist_comp RSQB 
    | LBRACE opt_dictsetmarker RBRACE | NAME | NUMBER 
    | one_more_string | ELLIPSIS | NONE | TRUE | FALSE;

opt_yield_tlc: testlist_comp | yield_expr;
// opt_yield_tlc: {$$=NULL;} | yield_or_tlc;
// yield_or_tlc: yield_expr | testlist_comp;

//opt_tlc: /*{$$=NULL;} | */testlist_comp;

opt_dictsetmarker: {$$=NULL;} | dictorsetmarker;

one_more_string: STRING | one_more_string STRING;

testlist_comp: namedexpr_or_star_expr | comp_for_multiple;

comp_for_multiple: comp_for | zero_more_comma_nt_or_se opt_comma;
zero_more_comma_nt_or_se: {$$=NULL;} | zero_more_comma_nt_or_se comma_nt_or_se;
comma_nt_or_se: COMMA namedexpr_or_star_expr;

namedexpr_or_star_expr: namedexpr_test | star_expr;

trailer: LPAR opt_arglist RPAR | LSQB subscriptlist RSQB | DOT NAME;
opt_arglist: {$$=NULL;} | arglist;

subscriptlist: subscript zero_more_comma_sub opt_comma;
zero_more_comma_sub: {$$=NULL;} | zero_more_comma_sub comma_sub;
comma_sub: COMMA subscript;

subscript: test | opt_test COLON opt_test opt_slicop;
opt_slicop: {$$=NULL;} | sliceop;

sliceop: COLON opt_test;

exprlist: expr_or_starexpr zero_more_comma_expr_or_se opt_comma;
zero_more_comma_expr_or_se: {$$=NULL;} | zero_more_comma_expr_or_se comma_expr_or_se;
comma_expr_or_se: COMMA expr_or_starexpr;

expr_or_starexpr: expr | star_expr;

testlist: test zero_more_comma_test opt_comma;
zero_more_comma_test: {$$=NULL;} | zero_more_comma_test comma_test;
comma_test: COMMA test;

/*dictormarker*/
// dictorsetmaker: ((test ':' test | '**' expr) (comp_for | (',' (test ':' test | '**' expr))* [','])) |
//                   ((test | star_expr) (comp_for | (',' (test | star_expr))* [',']))
dictorsetmarker: dsm_expr | dsm_star_expr;

dsm_expr: tct_or_dse cf_or_comma_tct_dct
tct_or_dse: test COLON test | DOUBLESTAR expr;
zero_more_comma_tct_or_dse: {$$=NULL;} | zero_more_comma_tct_or_dse tct_or_dse;
cf_or_comma_tct_dct: comp_for | zero_more_comma_tct_or_dse opt_comma;

dsm_star_expr: test_or_se cf_or_comma_tse;
cf_or_comma_tse: comp_for | zero_more_comma_test_or_se opt_comma;

classdef: CLASS NAME opt_lpar_arglist_rpar COLON suite;
opt_lpar_arglist_rpar: {$$=NULL;} | LPAR opt_arglist RPAR;

arglist: argument zero_more_comma_arguments opt_comma;
zero_more_comma_arguments: {$$=NULL;} | zero_more_comma_arguments COMMA argument;

argument: test opt_comp_for | test COLONEQUAL test | test EQUAL test | DOUBLESTAR test | STAR test;
opt_comp_for: {$$=NULL;} | comp_for;

comp_iter: comp_for | comp_if;

sync_comp_for: FOR exprlist IN or_test opt_comp_iter;

comp_for: sync_comp_for;
comp_if: IF test_nocond opt_comp_iter;
opt_comp_iter: {$$=NULL;} | comp_iter;

yield_expr: YIELD opt_yield_args;
opt_yield_args: {$$=NULL;} | yield_args;

yield_args: FROM test | testlist_star_expr;

func_body_suite: simple_stmt | NEWLINE opt_type_comment_newline INDENT one_more_stmt DEDENT;

opt_type_comment_newline: {$$=NULL;} | TYPE_COMMENT NEWLINE;

//func_type_input: func_type zero_more_newline ENDMARKER;
//zero_more_newline: {$$=NULL;} | zero_more_newline NEWLINE;

//func_type: LPAR opt_typelist RPAR RARROW test;
//opt_typelist: {$$=NULL;} | opt_typelist;

/*type_list*/


//GLOBAL OPT
//==============
opt_comma: {$$=NULL;} | COMMA;
opt_type_comment: {$$=NULL;} | TYPE_COMMENT;
opt_eq_test: {$$=NULL;} | EQUAL test;
opt_as_name: {$$=NULL;} | AS NAME; 
zero_more_comma_name: {$$=NULL;} | zero_more_comma_name comma_name;
comma_name: COMMA NAME;
zero_more_dot_name: {$$=NULL;} | zero_more_dot_name dot_name;
dot_name: DOT NAME;
opt_comma_test: {$$=NULL;} | COMMA test;
opt_else: {$$=NULL;} | ELSE COLON suite;
opt_as_expr: {$$=NULL;} | AS expr;
plus_or_minus: PLUS | MINUS;
opt_test: {$$=NULL;} | test;


%%