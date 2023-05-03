%{
    #define YYDEBUG 1
    #include "tree.h"
    #include <stdio.h>
    int yylex();
    int yyerror(char *);
    struct tree *root;

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
%token <treeptr> ELLIPSIS
%token <treeptr> COLONEQUAL
%token <treeptr> NAME
%token <treeptr> NUMBER
%token <treeptr> STRING
%token <treeptr> INDENT
%token <treeptr> DEDENT
%token <treeptr> IN
%token <treeptr> TYPE_COMMENT
%token <treeptr> FUNC

%start file_input
%type <treeptr> file_input

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
everything_in_parenthesis comma_test_or_se comma_isn comma_dsn comma_sub dict_set_maker opt_semi_colon
small_or_null one_more_newline
%%
/*
Removed:
opt_tfdef
*/

//STARTING RULES
//================
//single_input: NEWLINE ENDMARKER | simple_stmt ENDMARKER | compound_stmt NEWLINE ENDMARKER;

file_input: zero_more_newline_stmt ENDMARKER{$$ = alctree(1000, "file_input", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL); root = $$;};

zero_more_newline_stmt: {$$=NULL;} | zero_more_newline_stmt newline_stmt{$$ = alctree(1001, "zero_more_newline_stmt", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

newline_stmt: NEWLINE{$$ = alctree(1002, "NEWLINE", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}| stmt{$$ = alctree(1003, "stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

funcdef: DEF NAME parameters opt_rarrowtest COLON func_body_suite{$$ = alctree(1004, "fundef", 6, $1, $2, $3, $4, $5, $6, NULL, NULL);}
    | DEF NAME parameters opt_rarrowtest NEWLINE{yyerror("colon");};


opt_rarrowtest: {$$=NULL;} | RARROW test{$$ = alctree(1005, "opt_rarrowtest", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

parameters: LPAR argumentstd RPAR{$$ = alctree(1006, "parameters", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};
//opt_typedargslist: {$$=alocnull();} | typedargslist;

//typedargslist rules
//===================
argumentstd: argumenttd zero_more_comma_argtd{$$ = alctree(1006, "argumentstd", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_comma_argtd: {$$=NULL;} | zero_more_comma_argtd comma_argstd{$$ = alctree(1007, "zero_more_comma_argtd", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
comma_argstd: COMMA argumenttd{$$ = alctree(1008, "comma_argstd", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

argumenttd: tfdef opt_eq_test{$$ = alctree(1009, "argumentd", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

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

otp_comma_tc_tdnp: {$$=alocnull();} | COMMA opt_tc_tdnp;
opt_tc_tdnp: {$$=alocnull();} | opt_type_comment typedargslist_no_posonly;
opt_args_kwonly_kwargs: {$$=alocnull();} | args_kwonly_kwargstd;
opt_kwardstd: {$$=alocnull();} | kwargstd;
*/
// opt_tfdef: {$$=alocnull();} | tfdef;


tfdef: {$$=NULL;}| NAME opt_col_test{$$ = alctree(1011, "tfdef", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_col_test: {$$=NULL;} | COLON test{$$ = alctree(1012, "opt_col_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

//varargslist rules
//===================

/*
argumentsvg: argumentvg zero_more_comma_argvg;

argumentvg: vfpdef opt_eq_test;

kwargsvg: DOUBLESTAR vfpdef opt_comma;

argsvg: STAR opt_vdpdef;
opt_vdpdef: {$$=alocnull();} | vfpdef;

kwonly_kwargsvg: zero_more_comma_argvg opt_comma_kwargsvg;

opt_comma_kwargsvg: {$$=alocnull();} | COMMA opt_kwardsvg;
opt_kwardsvg: {$$=alocnull();} | kwargsvg;
zero_more_comma_argvg: {$$=alocnull();} | zero_more_comma_argvg comma_argvg;

args_kwonly_kwargsgv: argsvg kwonly_kwargsvg | kwargsvg;
comma_argvg: COMMA argumentsvg;


poskeyword_args_kwonly_kwargsvg: argumentsvg opt_comma_args_kwonly_kwargsgv;
opt_comma_args_kwonly_kwargsgv: {$$=alocnull();} | COMMA opt_args_kwonly_kwargsgv;
opt_args_kwonly_kwargsgv: {$$=alocnull();} | args_kwonly_kwargsgv;

vararglist_no_posonlyvg: poskeyword_args_kwonly_kwargsvg | args_kwonly_kwargsgv;

varargslist: argumentsvg COMMA SLASH opt_comma_vararglist_no_posonlyvg | vararglist_no_posonlyvg;

opt_comma_vararglist_no_posonlyvg: {$$=alocnull();} | COMMA opt_varlst;
opt_varlst: {$$=alocnull();} | varargslist;

vfpdef: NAME;
*/

//SIMPLE STATEMENTS
//===========
stmt: simple_stmt{$$ = alctree(1013, "stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | compound_stmt{$$ = alctree(1014, "stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    //| weird_buggy_thing{$$ = alctree(1013, "stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

//weird_buggy_thing: DEDENT one_more_newline INDENT {$$ = alctree(1278, "weird_buggy_thing", 1, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};

one_more_newline: NEWLINE{$$ = alctree(1279, "one_more_newline", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | one_more_newline NEWLINE{$$ = alctree(1279, "one_more_newline", 1, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

simple_stmt: small_or_null zero_more_stmts opt_semi_colon NEWLINE{$$ = alctree(1015, "simple_stmt", 4, $1, $2, $3, $4, NULL, NULL, NULL, NULL);};
zero_more_stmts: {$$=NULL;} | zero_more_stmts single_stmt{$$ = alctree(1016, "zero_more_stmtms", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

single_stmt: SEMI small_stmt{$$ = alctree(1017, "single_stmt", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

small_or_null: {$$=NULL;} | small_stmt;



small_stmt: expr_stmt{$$ = alctree(1018, "small_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | del_stmt{$$ = alctree(1019, "small_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    | pass_stmt{$$ = alctree(1020, "small_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | flow_stmt {$$ = alctree(1021, "small_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    | import_stmt {$$ = alctree(1022, "small_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | global_stmt {$$ = alctree(1023, "small_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    | nonlocal_stmt {$$ = alctree(1024, "small_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | assert_stmt{$$ = alctree(1025, "small_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}


expr_stmt: testlist_star_expr everything_in_parenthesis{$$ = alctree(1026, "expr_stmt", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

everything_in_parenthesis: annassign{$$ = alctree(1026, "everything_in_paranthesis", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | augassign yield_or_testlist{$$ = alctree(1027, "everything_in_paranthesis", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | opt_eq_yeild__tc{$$ = alctree(1028, "everything_in_paranthesis", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};


yield_or_testlist: yield_expr {$$ = alctree(1029, "yield_or_testlist", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | testlist{$$ = alctree(1030, "yield_or_testlist", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

opt_eq_yeild__tc: {$$=NULL;} 
    | one_or_more_eq_yield_or_tlse opt_type_comment{$$ = alctree(1031, "opt_eq_yield__tc", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

one_or_more_eq_yield_or_tlse: eq_yield_or_tlse{$$ = alctree(1032, "one_or_more_eq_yeild_or_tlse", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | one_or_more_eq_yield_or_tlse eq_yield_or_tlse{$$ = alctree(1033, "one_or_more_eq_yield_or_tlse", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

annassign: COLON test opt_eq_yeild_or_tlse{$$ = alctree(1034, "annassign", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};


opt_eq_yeild_or_tlse: {$$=NULL;} | eq_yield_or_tlse{$$ = alctree(1035, "opt_eq_yield_or_tlse", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

eq_yield_or_tlse: EQUAL yield_or_tlse{$$ = alctree(1036, "eq_yield_or_tlse", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

yield_or_tlse: yield_expr{$$ = alctree(1037, "yield_or_tlse", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | testlist_star_expr{$$ = alctree(1038, "yield_or_tlse", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

testlist_star_expr: test_or_se zero_more_comma_test_or_se opt_comma{$$ = alctree(1039, "testlist_star_expr", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};

zero_more_comma_test_or_se: {$$=NULL;} 
    | zero_more_comma_test_or_se comma_test_or_se{$$ = alctree(1039, "zero_more_comma_test_or_se", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

comma_test_or_se: COMMA test_or_se {$$ = alctree(1040, "comma_test_or_se", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

test_or_se: test{$$ = alctree(1041, "test_or_se", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | star_expr{$$ = alctree(1042, "test_or_se", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

augassign: PLUSEQUAL{$$ = alctree(1043, "gassign", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | MINEQUAL{$$ = alctree(1044, "gassign", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | STAREQUAL {$$ = alctree(1045, "gassign", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | SLASHEQUAL{$$ = alctree(1046, "gassign", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | PERCENTEQUAL{$$ = alctree(1047, "gassign", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | DOUBLESLASHEQUAL{$$ = alctree(1048, "gassign", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | DOUBLESTAREQUAL{$$ = alctree(1049, "gassign", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};


del_stmt: DEL exprlist{$$ = alctree(1050, "del_stmt", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
pass_stmt: PASS;
flow_stmt: break_stmt{$$ = alctree(1051, "flow_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | continue_stmt{$$ = alctree(1052, "flow_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | return_stmt{$$ = alctree(1053, "flow_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | raise_stmt{$$ = alctree(1054, "flow_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | yield_stmt{$$ = alctree(1055, "flow_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

break_stmt: BREAK{$$ = alctree(1056, "break_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};
continue_stmt: CONTINUE{$$ = alctree(1057, "continue_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};
return_stmt: RETURN opt_tse{$$ = alctree(1058, "return_stmt", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_tse: {$$=NULL;} 
    | testlist_star_expr{$$ = alctree(1059, "opt_se", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

yield_stmt: yield_expr{$$ = alctree(1060, "yield_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

raise_stmt: RAISE opt_test_opt_from_test{$$ = alctree(1061, "raise_stmt", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

opt_test_opt_from_test: {$$=NULL;} 
    | test opt_from_test{$$ = alctree(1062, "opt_test_opt_from_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

opt_from_test: {$$=NULL;} 
    | FROM test{$$ = alctree(1063, "opt_from_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

import_stmt: import_name{$$ = alctree(1064, "import_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | import_from{$$ = alctree(1065, "import_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

import_name: IMPORT dotted_as_names{$$ = alctree(1066, "import_name", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

import_from: FROM dot_ellip_dn_or_one_more_dot_ellip IMPORT star_or_names{$$ = alctree(1067, "import_from", 4, $1, $2, $3, $4, NULL, NULL, NULL, NULL);};

dot_ellip_dn_or_one_more_dot_ellip: zero_more_dot_or_ellip dotted_name{$$ = alctree(1068, "dot_ellip_dn_or_one_more_dot_ellip", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | one_more_dot_or_ellip{$$ = alctree(1069, "dot_ellip_dn_or_one_more_dot_ellip", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

zero_more_dot_or_ellip: {$$=NULL;} 
    |  zero_more_dot_or_ellip dot_or_ellip{$$ = alctree(1070, "zero_more_dot_or_ellip", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

    
one_more_dot_or_ellip: dot_or_ellip{$$ = alctree(1071, "one_more_dot_or_ellip", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | one_more_dot_or_ellip dot_or_ellip{$$ = alctree(1072, "one_more_dot_or_ellip", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

dot_or_ellip: DOT{$$ = alctree(1073, "dot_or_ellip", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}    
    | ELLIPSIS{$$ = alctree(1074, "dot_or_ellip", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};


star_or_names: STAR{$$ = alctree(1075, "star_or_names", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | LPAR import_as_names RPAR{$$ = alctree(1077, "star_or_names", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);}
    | import_as_names{$$ = alctree(1078, "star_or_names", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

import_as_name: NAME opt_as_name{$$ = alctree(1079, "import_as_name", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

dotted_as_name: dotted_name opt_as_name{$$ = alctree(1080, "dotted_as_name", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
import_as_names: import_as_name zero_more_comma_isn opt_comma{$$ = alctree(1081, "import_as_names", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};

zero_more_comma_isn: {$$=NULL;} 
    | zero_more_comma_isn comma_isn{$$ = alctree(1082, "zero_more_comma_isn", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

comma_isn: COMMA import_as_name{$$ = alctree(1083, "comma_isn", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

dotted_as_names: dotted_as_name zero_more_dsn{$$ = alctree(1084, "dotted_as_names", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_dsn: {$$=NULL;} 
    | zero_more_dsn comma_dsn{$$ = alctree(1085, "zero_more_dsn", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

comma_dsn: COMMA dotted_as_name{$$ = alctree(1086, "comma_dsn", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};


dotted_name: NAME zero_more_dot_name{$$ = alctree(1087, "dotted_name", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
global_stmt: GLOBAL NAME zero_more_comma_name{$$ = alctree(1088, "global_stmt", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};
nonlocal_stmt: NONLOCAL NAME zero_more_comma_name
assert_stmt: ASSERT test opt_comma_test;




//COMPOUND STEMENTS
//=================
compound_stmt: if_stmt{$$ = alctree(1089, "compound_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | while_stmt 
    | for_stmt{$$ = alctree(1090, "compound_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | try_stmt 
    | with_stmt 
    | funcdef{$$ = alctree(1091, "compound_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}  
    | classdef{$$ = alctree(1092, "compound_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

if_stmt: IF namedexpr_test COLON suite zero_more_elif opt_else{$$ = alctree(1093, "if_stmt", 6, $1, $2, $3, $4, $5, $6, NULL, NULL);};
zero_more_elif: {$$=NULL;} 
    | zero_more_elif elif{$$ = alctree(1094, "zero_more_elif", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

elif: ELIF namedexpr_test COLON suite{$$ = alctree(1095, "elif", 4, $1, $2, $3, $4, NULL, NULL, NULL, NULL);};

while_stmt: WHILE namedexpr_test COLON suite opt_else{$$ = alctree(1096, "while_stmt", 5, $1, $2, $3, $4, $5, NULL, NULL, NULL);};

for_stmt: FOR exprlist IN testlist COLON opt_type_comment suite opt_else{$$ = alctree(1097, "for_stmt", 8, $1, $2, $3, $4, $5, $6, $7, $8);};

try_stmt: TRY COLON suite except_else_or_finally;

except_else_or_finally: one_more_except opt_else opt_finally
    | FINALLY COLON suite;
opt_finally: {$$=NULL;} | FINALLY COLON suite;


one_more_except: except_stmt
    | one_more_except except_stmt;
except_stmt: except_clause COLON suite;

with_stmt: WITH with_item zero_more_comma_with_item COLON opt_type_comment suite;
zero_more_comma_with_item: {$$=NULL;} | zero_more_comma_with_item comma_with_item;
comma_with_item: COMMA with_item;

with_item: test opt_as_expr;

except_clause: EXCEPT opt_test_as_name;
opt_test_as_name: test opt_as_name;

suite: simple_stmt{$$ = alctree(1098, "suite", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | NEWLINE INDENT one_more_stmt DEDENT{$$ = alctree(1099, "suite", 4, $1, $2, $3, $4, NULL, NULL, NULL, NULL);};

one_more_stmt: stmt{$$ = alctree(1100, "one_more_stmt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | one_more_stmt stmt{$$ = alctree(1101, "one_more_stmt", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};


namedexpr_test: test opt_coleq_test{$$ = alctree(1101, "namedexpr_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_coleq_test: {$$=NULL;} 
    | COLONEQUAL test{$$ = alctree(1102, "opt_coleq_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

test: or_test opt_if_else{$$ = alctree(1103, "test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_if_else: {$$=NULL;} 
    | IF or_test ELSE test{$$ = alctree(1104, "opt_if_else", 4, $1, $2, $3, $4, NULL, NULL, NULL, NULL);};

test_nocond: or_test{$$ = alctree(1105, "test_nocond", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

or_test: and_test zero_more_or_and_test{$$ = alctree(1106, "or_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_or_and_test: {$$=NULL;} 
    | zero_more_or_and_test or_and_test{$$ = alctree(1107, "zero_more_or_and_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

or_and_test: OR and_test{$$ = alctree(2000, "or_and_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

and_test: not_test zero_more_and_not_test{$$ = alctree(1108, "and_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_and_not_test: {$$=NULL;} 
    | zero_more_and_not_test not_and_test{$$ = alctree(1109, "zero_more_and_no_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
not_and_test: AND not_test{$$ = alctree(2001, "not_and_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

not_test: NOT not_test{$$ = alctree(1110, "not_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);}
    | comparison{$$ = alctree(1111, "not_test", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

comparison: expr zero_more_comp_op_expr{$$ = alctree(1112, "comparison", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_comp_op_expr: {$$=NULL;} 
    | zero_more_comp_op_expr comp_op_expr{$$ = alctree(1113, "zero_more_comp_op_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
comp_op_expr: comp_op expr{$$ = alctree(1114, "comp_op_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

comp_op: LESS{$$ = alctree(1115, "comp_op", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | GREATER{$$ = alctree(1116, "comp_op", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | EQEQUAL{$$ = alctree(1117, "comp_op", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | LESSEQUAL{$$ = alctree(1118, "comp_op", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | GREATEREQUAL{$$ = alctree(1119, "comp_op", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | NOTEQUAL{$$ = alctree(1120, "comp_op", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | NOT{$$ = alctree(1121, "comp_op", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | IN/*this would be an error*/;

star_expr: STAR expr{$$ = alctree(1122, "star_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

expr: xor_expr zero_more_or_xor_expr{$$ = alctree(1123, "expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_or_xor_expr: {$$=NULL;}  
    | zero_more_or_xor_expr or_xor_expr{$$ = alctree(1124, "zero_more_or_xor_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
or_xor_expr: "|" xor_expr{$$ = alctree(1125, "or_xor_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

xor_expr: and_expr zero_more_carrot_and_expr{$$ = alctree(1126, "xor_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_carrot_and_expr: {$$=NULL;} 
    | zero_more_carrot_and_expr carrot_and_expr{$$ = alctree(1127, "zero_more_carrot_and_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
carrot_and_expr: "^" and_expr{$$ = alctree(1128, "carrot_and_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

and_expr: shift_expr zero_more_and_shift{$$ = alctree(1130, "and_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_and_shift: {$$=NULL;} 
    | zero_more_and_shift and_shift{$$ = alctree(1131, "zero_more_and_shift", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
and_shift: "$" shift_expr{$$ = alctree(1132, "and_shif", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

shift_expr: arith_expr zero_more_double_arrow_arith{$$ = alctree(1133, "shift_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_double_arrow_arith: {$$=NULL;} 
    | zero_more_double_arrow_arith double_arrow_arith{$$ = alctree(1134, "zero_more_double_arrow_arith", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
double_arrow_arith: left_or_right arith_expr{$$ = alctree(1135, "double_arrow_arith", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
left_or_right: "<<"{$$ = alctree(1136, "left_or_right", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | ">>"{$$ = alctree(1137, "left_or_right", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

arith_expr: term zero_more_plus_minus_term{$$ = alctree(1138, "arith_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_plus_minus_term: {$$=NULL;} 
    | zero_more_plus_minus_term plus_minus_term{$$ = alctree(1139, "zero_more_plus_minus_term", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
plus_minus_term: plus_or_minus term{$$ = alctree(1138, "plus_minus_term", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

term: factor zero_more_factor{$$ = alctree(1140, "term", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_factor: {$$=NULL;} 
    | zero_more_factor symbols_factor{$$ = alctree(1141, "zero_more_factor", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
symbols_factor: symbols_f factor{$$ = alctree(1142, "symbols_factor", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
symbols_f: STAR{$$ = alctree(1143, "symbols_tf", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | SLASH{$$ = alctree(1144, "symbols_tf", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | PERCENT{$$ = alctree(1145, "symbols_tf", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}  
    | DOUBLESLASH{$$ = alctree(1146, "symbols_tf", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} ;

factor: plus_or_minus factor{$$ = alctree(1147, "factor", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);}
    | power{$$ = alctree(1148, "term", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

power: atom_expr opt_doublestar_factor{$$ = alctree(1149, "power", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_doublestar_factor: {$$=NULL;} 
    | DOUBLESTAR factor{$$ = alctree(1150, "opt_doublestar_factor", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

atom_expr: atom zero_more_trailer{$$ = alctree(11451, "atom_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_trailer: {$$=NULL;} 
    | zero_more_trailer trailer{$$ = alctree(1152, "zero_more_trailer", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

atom: LPAR opt_yield_tlc RPAR{$$ = alctree(1153, "atom", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);} 
    | LSQB testlist_comp RSQB{$$ = alctree(1154, "atom", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);} 
    | LBRACE opt_dictsetmarker RBRACE{$$ = alctree(1155, "atom", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);} 
    | NAME{$$ = alctree(1156, "atom", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}  
    | NUMBER{$$ = alctree(1157, "atom", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | one_more_string{$$ = alctree(1158, "atom", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}  
    | ELLIPSIS{$$ = alctree(1159, "atom", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}  
    | NONE{$$ = alctree(1160, "atom", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}  
    | TRUE{$$ = alctree(1161, "atom", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}  
    | FALSE{$$ = alctree(1162, "atom", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | FUNC{$$ = alctree(2056, "atom", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

opt_yield_tlc: testlist_comp {$$ = alctree(1163, "opt_yield_tlc", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
| yield_expr{$$ = alctree(1164, "opt_yield_tlc", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} ;
// opt_yield_tlc: {$$=alocnull();} | yield_or_tlc;
// yield_or_tlc: yield_expr | testlist_comp;

//opt_tlc: /*{$$=alocnull();} | */testlist_comp;

opt_dictsetmarker: {$$=NULL;} 
    | dictorsetmarker{$$ = alctree(1165, "opt_dictsetmarker", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} ;

one_more_string: STRING{$$ = alctree(1166, "one_more_string", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}  
    | one_more_string STRING{$$ = alctree(1167, "one_more_sttring", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);} ;

testlist_comp: {$$=NULL;}| namedexpr_or_star_expr comp_for_multiple{$$ = alctree(1169, "testlist_comp", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);} ;


// {$$ = alctree(1168, "testlist_comp", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
//{$$ = alctree(1169, "testlist_comp", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}

comp_for_multiple: comp_for{$$ = alctree(1170, "comp_for_multiple", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | zero_more_comma_nt_or_se opt_comma{$$ = alctree(1171, "comp_for_multiple", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);} ;
zero_more_comma_nt_or_se: {$$=NULL;} 
    | zero_more_comma_nt_or_se comma_nt_or_se{$$ = alctree(1172, "zero_more_comma_nt_or_se", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
comma_nt_or_se: COMMA namedexpr_or_star_expr{$$ = alctree(1173, "comma_nt_or_se", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

namedexpr_or_star_expr: namedexpr_test{$$ = alctree(1174, "namedexpr_or_star_expr", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | star_expr{$$ = alctree(1175, "namedexpr_or_star_expr", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

trailer: LPAR opt_arglist RPAR{$$ = alctree(1175, "trailer", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);} 
    | LSQB subscriptlist RSQB{$$ = alctree(1176, "trailer", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);} 
    | DOT NAME{$$ = alctree(1176, "trailer", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_arglist: {$$=NULL;} | arglist{$$ = alctree(1177, "opt_arglist", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

subscriptlist: subscript zero_more_comma_sub opt_comma{$$ = alctree(1178, "subscriptlist", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};
zero_more_comma_sub: {$$=NULL;} 
    | zero_more_comma_sub comma_sub{$$ = alctree(1179, "zero_more_comma_sub", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
comma_sub: COMMA subscript{$$ = alctree(1180, "comma_sub", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

subscript: test{$$ = alctree(1181, "subscrtipt", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | opt_test COLON opt_test opt_slicop{$$ = alctree(1182, "subscript", 4, $1, $2, $3, $4, NULL, NULL, NULL, NULL);};
opt_slicop: {$$=NULL;} | sliceop{$$ = alctree(1183, "opt_slicop", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

sliceop: COLON opt_test{$$ = alctree(1184, "sliceop", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

exprlist: expr_or_starexpr zero_more_comma_expr_or_se opt_comma{$$ = alctree(1185, "exprlist", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};
zero_more_comma_expr_or_se: {$$=NULL;} 
    | zero_more_comma_expr_or_se comma_expr_or_se{$$ = alctree(1186, "zero_more_comma_expr_or_se", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
comma_expr_or_se: COMMA expr_or_starexpr{$$ = alctree(1187, "comma_expr_or_se", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

expr_or_starexpr: expr{$$ = alctree(1188, "expr_or_starexpr", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | star_expr{$$ = alctree(1189, "expr_or_starexpr", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

testlist: test zero_more_comma_test opt_comma{$$ = alctree(1190, "testlist", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};
zero_more_comma_test: {$$=NULL;} 
    | zero_more_comma_test comma_test{$$ = alctree(1191, "zero_more_comma_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
comma_test: COMMA test{$$ = alctree(1192, "comma_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

/*dictormarker*/
// dictorsetmaker: ((test ':' test | '**' expr) (comp_for | (',' (test ':' test | '**' expr))* [','])) |
//                   ((test | star_expr) (comp_for | (',' (test | star_expr))* [',']))
dictorsetmarker: dict_set_maker{$$ = alctree(1300, "dictorsetmaker", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} ;


dict_set_maker: dsm_expr{$$ = alctree(1193, "dict_set_marker", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | dsm_star_expr{$$ = alctree(1194, "dict_set_marker", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

dsm_expr: tct_or_dse cf_or_comma_tct_dct{$$ = alctree(1195, "dsm_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

tct_or_dse: test COLON test{$$ = alctree(1196, "tct_or_dse", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);}
    | DOUBLESTAR expr{$$ = alctree(1197, "tct_or_dse", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

zero_more_comma_tct_or_dse: {$$=NULL;} 
    | zero_more_comma_tct_or_dse COMMA tct_or_dse{$$ = alctree(1198, "zero_more_comma_tct_or_dse", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

cf_or_comma_tct_dct: comp_for{$$ = alctree(1199, "cf_or_comma_tct_dct", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);}
    | zero_more_comma_tct_or_dse opt_comma{$$ = alctree(1200, "cf_or_comma_tct_dct", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

dsm_star_expr: test_or_se cf_or_comma_tse{$$ = alctree(1201, "dsm_star_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

cf_or_comma_tse: comp_for{$$ = alctree(1202, "cf_or_comma_tse", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | zero_more_comma_test_or_se opt_comma{$$ = alctree(1203, "cf_or_comma_tse", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

classdef: CLASS NAME opt_lpar_arglist_rpar COLON suite{$$ = alctree(1204, "classdef", 5, $1, $2, $3, $4, $5, NULL, NULL, NULL);};
opt_lpar_arglist_rpar: {$$=NULL;} 
    | LPAR opt_arglist RPAR{$$ = alctree(1205, "opt_lpar_arglist_rpar", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};

arglist: argument zero_more_comma_arguments opt_comma{$$ = alctree(1206, "arglist", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};
zero_more_comma_arguments: {$$=NULL;} 
    | zero_more_comma_arguments COMMA argument{$$ = alctree(1207, "zero_more_comma_arguments", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};

argument: test opt_comp_for {$$ = alctree(1208, "argument", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);}
    | test COLONEQUAL test{$$ = alctree(1209, "argument", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);} 
    | test EQUAL test{$$ = alctree(1210, "argument", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);} 
    | DOUBLESTAR test{$$ = alctree(1211, "argument", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | STAR test{$$ = alctree(1212, "argument", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};

opt_comp_for: {$$=NULL;} 
    | comp_for{$$ = alctree(1213, "opt_comp_for", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

comp_iter: comp_for{$$ = alctree(1214, "comp_iter", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | comp_if{$$ = alctree(1215, "comp_iter", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} ;

sync_comp_for: FOR exprlist IN or_test opt_comp_iter{$$ = alctree(1216, "sync_comp_for", 5, $1, $2, $3, $4, $5, NULL, NULL, NULL);} ;

comp_for: sync_comp_for{$$ = alctree(1217, "comp_for", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} ;
comp_if: IF test_nocond opt_comp_iter{$$ = alctree(1218, "comp_if", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);} ;
opt_comp_iter: {$$=NULL;} 
    | comp_iter{$$ = alctree(1219, "opt_comp_iter", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} ;

yield_expr: YIELD opt_yield_args;
opt_yield_args: {$$=NULL;} | yield_args;

yield_args: FROM test | testlist_star_expr;

//MAKE NEWLINE zero or more.

func_body_suite: simple_stmt{$$ = alctree(1220, "func_body_suite", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);} 
    | one_more_newline opt_type_comment_newline INDENT one_more_stmt DEDENT{$$ = alctree(1221, "func_body_suite", 5, $1, $2, $3, $4, $5, NULL, NULL, NULL);};

opt_type_comment_newline: {$$=NULL;} 
    | TYPE_COMMENT NEWLINE{$$ = alctree(1222, "opt_type_comment_newline", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};


//func_type_input: func_type zero_more_newline ENDMARKER;
//zero_more_newline: {$$=NULL;} | zero_more_newline NEWLINE;



//func_type: LPAR opt_typelist RPAR RARROW test;
//opt_typelist: {$$=alocnull();} | opt_typelist;

/*type_list*/


//GLOBAL OPT
//==============
opt_comma: {$$=NULL;} 
    | COMMA{$$ = alctree(1223, "opt_comma", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_type_comment: {$$=NULL;} 
    | TYPE_COMMENT{$$ = alctree(1224, "opt_type_comment", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_eq_test: {$$=NULL;} 
    | EQUAL test{$$ = alctree(1225, "opt_eq_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_as_name: {$$=NULL;} 
    | AS NAME{$$ = alctree(1226, "opt_as_name", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);}; 
zero_more_comma_name: {$$=NULL;} 
    | zero_more_comma_name comma_name{$$ = alctree(1227, "zero_more_comma_name", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
comma_name: COMMA NAME{$$ = alctree(1228, "comma_name", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
zero_more_dot_name: {$$=NULL;} 
    | zero_more_dot_name dot_name{$$ = alctree(1229, "zero_more_dot_name", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
dot_name: DOT NAME{$$ = alctree(1230, "dot_name", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_comma_test: {$$=NULL;} 
    | COMMA test{$$ = alctree(1231, "opt_comma_test", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_else: {$$=NULL;} 
    | ELSE COLON suite{$$ = alctree(1232, "opt_else", 3, $1, $2, $3, NULL, NULL, NULL, NULL, NULL);};
opt_as_expr: {$$=NULL;} 
    | AS expr{$$ = alctree(1233, "opt_as_expr", 2, $1, $2, NULL, NULL, NULL, NULL, NULL, NULL);};
plus_or_minus: PLUS 
    | MINUS{$$ = alctree(1234, "plus_or_minus", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};
opt_test: {$$=NULL;} 
    | test{$$ = alctree(1235, "opt_test", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};

opt_semi_colon: {$$=NULL;} | SEMI{$$ = alctree(1235, "opt_semi_colon", 1, $1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);};


%%

const char *yyname(int sym)
{
   return yytname[sym-ENDMARKER+3];
}