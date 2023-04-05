/**
* @file tree.c
*
* @author Javier Reyna Adam Schmidt Nikki Sparacino
*
* @date 03/22/2023
*
* Assignment: Homework 4
*/


#include "tree.h"
#include "punygram.tab.h"
#include "symtab.h"
#include "type.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COLOR_BOLD "\e[33m"
#define COLOR_END "\e[m"
#define MAX_PARAMS 10
extern int rows;
extern char *yytext;
extern char *current_file;
extern struct sym_table *global;
char *symbol;
int atom_found = 0;
int new_scope = 0;
int global_stmt = 0;
int indent = 0;
int dedent = 0;
extern struct sym_table *tables[10];
extern struct sym_table *current;
int table_count = 1;
int opt_arglist_found = 0;
int for_found = 0;
int testlist_found = 0;
extern int serial;
int annassign_found = 0;
char *annassign_symbol;
char *func_parameter;
int weird_bug = 0;
int param_found = 0;
int weird_indent = 0;
int weird_dedent = 0;
int lineno;
int param_count = 0;
int return_found = 0;
char *return_symbol = NULL;

/* for type checking */
struct sym_entry *current_symbol;
int assignment_found = 0;
char *tmp_params[MAX_PARAMS];

int alctoken(int cat){
    yylval.treeptr = malloc(sizeof (struct tree));
    yylval.treeptr->prodrule = cat;
    yylval.treeptr->nkids = 0;
    yylval.treeptr->symbolname = strdup(yytext); 
    yylval.treeptr->id = serial++;
    yylval.treeptr->leaf = malloc(sizeof (struct token));
    yylval.treeptr->leaf->category = cat;
    yylval.treeptr->leaf->text = strdup(yytext);
    yylval.treeptr->leaf->filename = current_file;
    yylval.treeptr->leaf->lineno = rows;
    yylval.treeptr->leaf->ival = '\0';
    yylval.treeptr->leaf->dval = '\0';
    yylval.treeptr->leaf->issval = 0;
    return cat;
}


struct tree *alctree(int prodrule, char *symbol_name, int nkids, struct tree *child1, struct tree *child2,
struct tree *child3, struct tree *child4, struct tree *child5, struct tree *child6, struct tree *child7, struct tree *child8){

    struct tree *symbol_tree = malloc(sizeof (struct tree));

    if(nkids == 1){
        symbol_tree->nkids = 1;
        symbol_tree->prodrule = prodrule;
        symbol_tree->symbolname = symbol_name;
        symbol_tree->kids[0] = child1;
        symbol_tree->kids[1] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[2] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[3] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[4] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[5] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[6] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[7] = calloc(1, sizeof(struct tree));
    }


    else if(nkids == 2){
        symbol_tree->nkids = 2;
        symbol_tree->prodrule = prodrule;
        symbol_tree->symbolname = symbol_name;
        symbol_tree->kids[0] = child1;
        symbol_tree->kids[1] = child2;
        symbol_tree->kids[2] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[3] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[4] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[5] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[6] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[7] = calloc(1, sizeof(struct tree));
    }

    else if(nkids == 3){
        symbol_tree->nkids = 3;
        symbol_tree->prodrule = prodrule;
        symbol_tree->symbolname = symbol_name;
        symbol_tree->kids[0] = child1;
        symbol_tree->kids[1] = child2;
        symbol_tree->kids[2] = child3;
        symbol_tree->kids[3] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[4] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[5] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[6] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[7] = calloc(1, sizeof(struct tree));
    }

    else if(nkids == 4){
        symbol_tree->nkids = 4;
        symbol_tree->prodrule = prodrule;
        symbol_tree->symbolname = symbol_name;
        symbol_tree->kids[0] = child1;
        symbol_tree->kids[1] = child2;
        symbol_tree->kids[2] = child3;
        symbol_tree->kids[3] = child4;
        symbol_tree->kids[4] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[5] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[6] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[7] = calloc(1, sizeof(struct tree));
    }

    else if(nkids == 5){
        symbol_tree->nkids = 5;
        symbol_tree->prodrule = prodrule;
        symbol_tree->symbolname = symbol_name;
        symbol_tree->kids[0] = child1;
        symbol_tree->kids[1] = child2;
        symbol_tree->kids[2] = child3;
        symbol_tree->kids[3] = child4;
        symbol_tree->kids[4] = child5;
        symbol_tree->kids[5] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[6] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[7] = calloc(1, sizeof(struct tree));
    }

    else if(nkids == 6){
        symbol_tree->nkids = 6;
        symbol_tree->prodrule = prodrule;
        symbol_tree->symbolname = symbol_name;
        symbol_tree->kids[0] = child1;
        symbol_tree->kids[1] = child2;
        symbol_tree->kids[2] = child3;
        symbol_tree->kids[3] = child4;
        symbol_tree->kids[4] = child5;
        symbol_tree->kids[5] = child6;
        symbol_tree->kids[6] = calloc(1, sizeof(struct tree));
        symbol_tree->kids[7] = calloc(1, sizeof(struct tree));
    }

    else if(nkids == 7){
        symbol_tree->nkids = 7;
        symbol_tree->prodrule = prodrule;
        symbol_tree->symbolname = symbol_name;
        symbol_tree->kids[0] = child1;
        symbol_tree->kids[1] = child2;
        symbol_tree->kids[2] = child3;
        symbol_tree->kids[3] = child4;
        symbol_tree->kids[4] = child5;
        symbol_tree->kids[5] = child6;
        symbol_tree->kids[6] = child7;
        symbol_tree->kids[7] = calloc(1, sizeof(struct tree));
    }

        else if(nkids == 8){
        symbol_tree->nkids = 8;
        symbol_tree->prodrule = prodrule;
        symbol_tree->symbolname = symbol_name;
        symbol_tree->kids[0] = child1;
        symbol_tree->kids[1] = child2;
        symbol_tree->kids[2] = child3;
        symbol_tree->kids[3] = child4;
        symbol_tree->kids[4] = child5;
        symbol_tree->kids[5] = child6;
        symbol_tree->kids[6] = child7;
        symbol_tree->kids[7] = child8;
    }

    symbol_tree->sn = 4325345;
    symbol_tree->id = serial++;
    
    return symbol_tree;
}


struct tree *alocnull(char *symbol_name){
    struct tree *t = calloc(1, sizeof(struct tree));
    t->symbolname = symbol_name;
    t->nkids = 0;
    t->sn = 1;
    return t;
}



void printnode(struct tree *tmp){    
    if(yylval.treeptr->leaf->ival != '\0'){
        printf("%-8d \t %-12s \t\t\t    %-8d%10s \t\t   %d\n", yylval.treeptr->leaf->category, ((yylval.treeptr->leaf->text[0]!='\n')?yylval.treeptr->leaf->text:"\\n"), yylval.treeptr->leaf->lineno, yylval.treeptr->leaf->filename, yylval.treeptr->leaf->ival);
    }
    else if(yylval.treeptr->leaf->dval != '\0'){
         printf("%-8d \t %-12s \t\t\t    %-8d%10s \t\t   %f\n", yylval.treeptr->leaf->category, ((yylval.treeptr->leaf->text[0]!='\n')?yylval.treeptr->leaf->text:"\\n"), yylval.treeptr->leaf->lineno, yylval.treeptr->leaf->filename, yylval.treeptr->leaf->dval);
    }
    else if(yylval.treeptr->leaf->issval == 1){
        printf("%-8d \t %-12s \t\t\t    %-8d%10s \t\t   %s\n", yylval.treeptr->leaf->category, ((yylval.treeptr->leaf->text[0]!='\n')?yylval.treeptr->leaf->text:"\\n"), yylval.treeptr->leaf->lineno, yylval.treeptr->leaf->filename, yylval.treeptr->leaf->sval);
    }
    else{
        printf("%-8d \t %-12s \t\t\t    %-8d%10s \t\t   %s\n", yylval.treeptr->leaf->category, ((yylval.treeptr->leaf->text[0]!='\n')?yylval.treeptr->leaf->text:"\\n"), yylval.treeptr->leaf->lineno, yylval.treeptr->leaf->filename, "NA");
    }
}


void treeprint(struct tree *t, int depth)
{
    int i;
    if(t == NULL){
        return;
    }
    printf("%d: %*s %s: %d\n", t->id, depth*2, " ", humanreadable(t), t->nkids);
    // printf("%*s %s: %d\n", depth*2, " ", humanreadable(t), t->nkids);
    for(i = 0; i < t->nkids; i++){
        treeprint(t->kids[i], depth+1);
    }
}

char *humanreadable(struct tree *t){
    if(t == NULL){
        return "NULL";
    }
    else if((t->prodrule >= 258) && (t->prodrule <=332)){
        return "terminal_symbol";
    }
    else{
        return t->symbolname;
    }
}

void treetraversal(struct tree *t){
    if(t == NULL){
        return;
    }

    //finding atoms
    if(strcmp("atom_expr", humanreadable(t)) == 0){
        if(annassign_found == 1) {
            insert_symbol(current, annassign_symbol, t->kids[0]->kids[0]->symbolname, 0);
            annassign_found = 0;
            return;
        }

        if(param_found == 1){
            insert_symbol(current, func_parameter, t->kids[0]->kids[0]->symbolname, 1);
            param_found = 0;
            return;
        }

        if(t->kids[1] == NULL){
            if(t->kids[0]->kids[0]->prodrule == NUMBER){}
            else{
                symbol = strdup(t->kids[0]->kids[0]->symbolname);
                atom_found = 1;
            }
        }

        else{
            if(t->kids[0]->kids[0]->prodrule == FUNC){
            }
            else{
                if(t->kids[1]->kids[1]->kids[0]->prodrule == LSQB){
                    symbol = strdup(t->kids[0]->kids[0]->symbolname);
                    atom_found = 1;
                }
                else{
                    int func_found = 0;
                    for(int i = 0; i < 10; i++){
                        if(tables[i] == NULL){
                            continue;
                        }
                        else if(strcmp(t->kids[0]->kids[0]->symbolname, tables[i]->name) == 0){
                            func_found = 1;
                            break;
                        }
                    }
                    if(func_found == 0){
                        printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
                        printf("Uninizialized Function: \"%s\" filename: %s line number: %d\n", t->kids[0]->kids[0]->leaf->text, current_file, t->kids[0]->kids[0]->leaf->lineno);
                        exit(3);
                    }
                }
            }
        }
    }

    //finding assignments
    else if(strcmp("eq_yield_or_tlse", humanreadable(t)) == 0 && atom_found == 1){
        //enter saved atom into symbol table
        insert_symbol(current, symbol, "any", 0);
        atom_found = 0;
        opt_arglist_found = 1;
    }

    //finding new functions
    else if(strcmp("fundef", humanreadable(t)) == 0){
        //create new symbol table
        struct sym_table *new;
        new_scope = 1;
        new = init_symbol_table();
        new->name = t->kids[1]->symbolname;
        tables[table_count] = new;
        current = new;

        // for(int i = 0; i < MAX_PARAMS; i++) {
        //     tmp_params[i] = NULL;
        // }

    }
    //finding a:int
    else if(strcmp("annassign", humanreadable(t)) == 0 && atom_found == 1){
        //enter saved atom into symbol table
        annassign_symbol = strdup(symbol);
        annassign_found = 1;
        atom_found = 0;
        lineno = t->kids[0]->leaf->lineno;
    }

     else if(strcmp("tfdef", humanreadable(t)) == 0 && (new_scope == 1)){
        //symbol entry child of tfdef
        if(t->nkids > 0){
            if(t->kids[1] == NULL){
                insert_symbol(current, t->kids[0]->symbolname, "any", 1);          
            }
            else{
                func_parameter = strdup(t->kids[0]->symbolname);
                param_found = 1;
            }
        }
        tmp_params[param_count] = t->kids[0]->symbolname;
        param_count++;
    }

    else if((t->prodrule == DEDENT) && (weird_bug != 1)){
        dedent++;
    }

    else if((t->prodrule == INDENT) && (weird_bug != 1)){
        indent++;
    }


    else if((t->prodrule == DEDENT) && (weird_bug == 1)){
        weird_dedent = 1;
    }

    else if((t->prodrule == INDENT) && (weird_bug == 1)){
        weird_indent = 1;
    }

    else if((weird_indent == 1) && (weird_dedent == 1) && (weird_bug == 1)){
        weird_dedent = 0;
        weird_indent = 0;
        weird_bug = 0;
    }

    else if(strcmp("global_stmt", humanreadable(t)) == 0){
        insert_symbol(current, t->kids[1]->symbolname, "any", 0);        
        global_stmt = 1;
    }

    else if(strcmp("comma_name", humanreadable(t)) == 0 && global_stmt == 1){
        insert_symbol(current, t->kids[1]->symbolname, "any", 0);
    }

    else if((dedent == indent) && (new_scope == 1) && (dedent != 0) && (indent != 0)){
        /* if function, add func type stuff */
        // return type = NONETYPE if no return statement, otherwise type of symbol being returned
        current->type = alcfunctype(current, return_symbol, param_count, tmp_params);
        table_count++;
        new_scope = 0;
        dedent = 0;
        indent = 0;
        current = tables[0];
    }

    else if(strcmp("opt_arglist", humanreadable(t)) == 0) {
        opt_arglist_found = 1;
        atom_found = 0;
    }    

    else if((strcmp("if_stmt", humanreadable(t)) == 0 || strcmp("elif", humanreadable(t)) == 0 || strcmp("while_stmt", humanreadable(t)) == 0)) {
        opt_arglist_found = 1;
        atom_found = 0;   
    }

    else if(strcmp("for_stmt", humanreadable(t)) == 0) {
        for_found = 1;
        atom_found = 0;
    }

    else if (atom_found == 1 && strcmp("testlist", humanreadable(t)) == 0) {
        opt_arglist_found = 1;
        atom_found = 0;
    }

    else if(strcmp("weird_buggy_thing", humanreadable(t)) == 0){
        weird_bug = 1;
    }

    else if(strcmp("return_stmt", humanreadable(t)) == 0) {
        return_found = 1;   
        // opt_arglist_found = 1;
    }

    if((opt_arglist_found == 1) && (atom_found == 1) && (t->prodrule == NAME)) {
        if(!find_symbol(current, symbol)) {
            // throw error
            printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
            printf("Uninizialized Variable: \"%s\" filename: %s line number: %d\n", symbol, current_file, t->leaf->lineno);
            exit(3);            
        }
        atom_found = 0;
    }

    else if((return_found == 1) && (atom_found == 1) && (strcmp("atom_expr", humanreadable(t)) == 0)) {
        if(t->kids[0]->kids[0]->prodrule == NAME) {
            if(!find_symbol(current, symbol)) {
                // throw error
                printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
                printf("Uninizialized Variable: \"%s\" filename: %s line number: %d\n", symbol, current_file, t->kids[0]->kids[0]->leaf->lineno);
                exit(3);            
            }

            return_symbol = strdup(symbol);
        }
        return_found = 0;
        atom_found = 0;
        
    }

    if (t->prodrule == NEWLINE && opt_arglist_found == 1) {
        opt_arglist_found = 0;
    }

    for(int i = 0; i < t->nkids; i++){\
        treetraversal(t->kids[i]);
    }

}

/* checking types for:
   - functions -> when calling functions, check for correct # params, param types, and return types
   - assignments (a = b stuff)
   - operators
*/
void typecheck(struct tree *t) {
    printf("in typecheck: %s\n", humanreadable(t));
    if(t == NULL) {
        return;
    }

    if(strcmp("atom_expr", humanreadable(t)) == 0) {
        printf("atom_expr: %s\n",  t->kids[0]->kids[0]->symbolname);
        if(assignment_found == 1) {
            printf("assignment found\n");
            printf("in atom_expr. current_symbol: %s\n", current_symbol->s);
            struct sym_entry *tmp_symbol = find_symbol(current, t->kids[0]->kids[0]->symbolname);
            if(tmp_symbol != NULL) {
                printf("type a: %s\t type b: %s\n", typename(current_symbol->type), typename(tmp_symbol->type));
                // if(strcmp(typename(current_symbol->type), typename(tmp_symbol->type)) == 0) {
                if(check_types(current_symbol->type->basetype, tmp_symbol->type->basetype) == 1) {
                    printf("type a and type b are compatable!\n");
                } else {
                    incompatable_error(tmp_symbol->s);
                }
            } else {
                printf("not a symbol! %s\n", t->kids[0]->kids[0]->symbolname);
            }

        } else {
            printf("assignment NOT found, in atom_expr\n");
            // printf("symbol, prodrule: %s, %d\n", t->kids[0]->kids[0]->symbolname, t->kids[0]->kids[0]->prodrule);
            if(t->kids[0]->kids[0]->prodrule == NAME) {
                current_symbol = find_symbol(current, t->kids[0]->kids[0]->symbolname);
                if(current_symbol != NULL) {        
                    atom_found = 1;
                }
            }

            /* check function parameters */
            // if(t->kids[1] != NULL) {
            //     if(t->kids[0]->kids[0]->prodrule != FUNC) {
            //         /* find func:
            //             func->type->u.f.nparams
            //                 compare with number of parameter at function call
            //             func->type->u.f.returntype
            //                 if is an assignment, compare with type of variable on left side
            //             symbol table for func
            //                 check for param flag, compare types
            //                 !!!! have to see if order is the same*/
            //     }
            // }
        }

    }

    if(strcmp("eq_yield_or_tlse", humanreadable(t)) == 0) {
        printf("eq_yield_or_tlse typecheck\n");
        assignment_found = 1;
        // atom_found = 0
    }

    if(t->prodrule == NEWLINE) {
        assignment_found = 0;
    }

   for(int i = 0; i < t->nkids; i++){
        typecheck(t->kids[i]);
    }

}

/* check if tyoes are compatable 
    return 1 if compatable, 0 if not.
    check assuming a is priority
        i.e. if a is int, can accept float type assignment
*/
int check_types(int type1, int type2) {
    if(type1 == ANY_TYPE) {
        return 1;
    } else if(type1 == type2) {
        return 1;
    }  else if(type1 == INT_TYPE) {
        if(type2 == FLOAT_TYPE) {
            return 1;
        } else if(type2 == BOOL_TYPE) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

void incompatable_error(char *tmp) {
    printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
    printf("Incompatable Types: \"%s\", \"%s\" filename: %s line number: %d\n", current_symbol->s, tmp, current_file, rows);
    exit(3);
}