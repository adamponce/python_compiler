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
int opt_rarrowtest_found = 0;
char *return_symbol = NULL;
int import_stmt = 0;
int anything_before_def = 0;
int def_first = 0;

/* for type checking */
struct sym_entry *current_symbol;
int assignment_found = 0;
char *tmp_params[MAX_PARAMS];
int func_found = 0;
int func_i = 0;
int func_call_param_count[MAX_PARAMS];
int func_call_param_i = 0;
int built_in_found = 0;
struct param *curr_param = NULL;
int operation_count = 0;
int operation_type = 0;
int type_func_check = 0;

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
            insert_symbol(current, annassign_symbol, t->kids[0]->kids[0]->symbolname);
            annassign_found = 0;
            return;
        }

        if(param_found == 1){
            insert_symbol(current, func_parameter, t->kids[0]->kids[0]->symbolname);
            param_found = 0;
            return;
        }

        if(for_found == 1){
            insert_symbol(current, strdup(t->kids[0]->kids[0]->symbolname), "any");
            for_found = 0;
            return;
        }

        if(opt_rarrowtest_found == 1) {
            return_symbol = strdup(t->kids[0]->kids[0]->symbolname);
            opt_rarrowtest_found = 0;
            return;
        }

        if(t->kids[1] == NULL){
            if(t->kids[0]->kids[0]->prodrule == NUMBER){}
            else{
                if(strcmp("one_more_string", humanreadable(t->kids[0]->kids[0])) != 0) {
                    symbol = strdup(t->kids[0]->kids[0]->symbolname);
                }
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
                else if(t->kids[1]->kids[0] != NULL){
                    if(t->kids[1]->kids[0]->kids[1]->prodrule == 2900){
                    }
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
                        printf("Uninitialized Function: \"%s\" filename: %s line number: %d\n", t->kids[0]->kids[0]->leaf->text, current_file, t->kids[0]->kids[0]->leaf->lineno);
                        exit(3);
                    }
                }
            }
        }
    }

    //finding assignments
    else if(strcmp("eq_yield_or_tlse", humanreadable(t)) == 0 && atom_found == 1){
        //enter saved atom into symbol table
        insert_symbol(current, symbol, "any");
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
                insert_symbol(current, t->kids[0]->symbolname, "any");          
            }
            else{
                func_parameter = strdup(t->kids[0]->symbolname);
                param_found = 1;
            }
        }
        tmp_params[param_count] = strdup(t->kids[0]->symbolname);
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
        insert_symbol(current, t->kids[1]->symbolname, "any");        
        global_stmt = 1;
    }

    else if(strcmp("comma_name", humanreadable(t)) == 0 && global_stmt == 1){
        insert_symbol(current, t->kids[1]->symbolname, "any");
    }

    else if((dedent == indent) && (new_scope == 1) && (dedent != 0) && (indent != 0)){
        /* if function, add func type stuff */
        // return type = NONETYPE if no return statement, otherwise type of symbol being returned
        // current->type = alcfunctype(current, return_symbol, param_count, tmp_params);
        // struct typeinfo *tmp_type = alcfunctype(current, return_symbol, param_count, tmp_params);
        alcfunctype(current, return_symbol, param_count, tmp_params);
        for(int i = 0; i < param_count; i++) {
            tmp_params[param_count] = NULL;
        }
        return_symbol = NULL;
        param_count = 0;
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
    }

    else if(strcmp("opt_rarrowtest", humanreadable(t)) == 0) {
        opt_rarrowtest_found = 1;   
    }

    if((opt_arglist_found == 1) && (atom_found == 1) && (t->prodrule == NAME)) {
        if(!find_symbol(current, symbol)) {
            // throw error
            printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
            printf("Uninitialized Variable: \"%s\" filename: %s line number: %d\n", symbol, current_file, t->leaf->lineno);
            exit(3);            
        }
        atom_found = 0;
    }

    /* catch undeclared variable at return statement */
    else if((return_found == 1) && (atom_found == 1) && (strcmp("atom_expr", humanreadable(t)) == 0)) {
        // printf("1st loop return type: %s\n", t->kids[0]->kids[0]->symbolname);
        if(t->kids[0]->kids[0]->prodrule == NAME) {
            if(!find_symbol(current, symbol)) {
                // throw error
                printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
                printf("Uninitialized Variable: \"%s\" filename: %s line number: %d\n", symbol, current_file, t->kids[0]->kids[0]->leaf->lineno);
                exit(3);            
            }
        }
        return_found = 0;
        atom_found = 0;
        
    }

    if (t->prodrule == NEWLINE && opt_arglist_found == 1) {
        opt_arglist_found = 0;
    }

    //inserting library functions into symbol table
    if(t->prodrule == 332){
        insert_symbol(current, t->symbolname, "func");
    }

    //Inseting Import stmts into symbol table
    if(t->prodrule == 1066){
        import_stmt = 1;
        insert_symbol(current, t->kids[1]->kids[0]->kids[0]->kids[0]->symbolname, "package");
    }
    //continued.
    if((t->prodrule == 1086) && import_stmt == 1){
        insert_symbol(current, t->kids[1]->kids[0]->kids[0]->symbolname, "package");
    }

    for(int i = 0; i < t->nkids; i++){
        treetraversal(t->kids[i]);
    }

}



/* checking types for:
   - functions -> when calling functions, check for correct # params, param types, and return types
   - assignments (a = b stuff)
   - operators
*/
void typecheck(struct tree *t) {
    if(t == NULL) {
        return;
    }

    // printf("in typecheck: %s\n", humanreadable(t));

    if(strcmp("terminal_symbol", humanreadable(t)) == 0) {
        /* if RPAR --> means end of function */
        if(t->prodrule == RPAR && func_found == 1) {
            /* check nparams first */
            if(built_in_found == 1) { /* built-in function -> do nothing */
                built_in_found = 0;
            } else { /* user defined function -> type check */
                /* check nparams */
                if(func_call_param_count[func_call_param_i] != tables[func_i]->type->u.f.nparams) {
                    printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
                    printf("Incorrect number of parameters: \"%s\" filename: %s line number: %d\n", tables[func_i]->name, current_file, rows);
                    exit(3);
                }

                /* func_call_param_i will be greater than 0 if nested func calls
                    if func_call_param_i == 0, then do nothing
                */
                if(func_call_param_i != 0) {
                    func_call_param_count[func_call_param_i] = 0;
                    func_call_param_i--;
                    tmp_params[func_call_param_count[func_call_param_i]] = typename(tables[func_i]->type->u.f.returntype);
                    func_call_param_count[func_call_param_i]++;
                }
            }   
        }
    }

    if(strcmp("atom_expr", humanreadable(t)) == 0) {
        // printf("atom_expr: %s\n",  t->kids[0]->kids[0]->symbolname);

        /* type checking right-hand-side if an operation exists */
        // if(operation_count > 0) {
        //     // printf("current_symbol is: %s\n", typename(current_symbol->type));
        //     if(operation_type == 0) {
        //         /* set operation_type differently depending on if number, string, or variable in symbol table. */
        //         printf("set operation type:\n");
        //         // operation_type = get_type(t->kids[0]->kids[0]);
        //         // struct sym_entry *tmp_symbol = find_symbol(current, t->kids[0]->kids[0]->symbolname);
        //         // if(tmp_symbol != NULL) {
        //         //     /* operand is in symbol table */
        //         //     /* if type is any, check contents (ival, dval, sval) to see if num or string */

        //         // } else if(t->kids[0]->kids[0]->kids[0] != NULL) {
        //         //     /* operand is a string */
        //         //     operation_type = STRING_TYPE;
        //         // } else if(t->kids[0]->kids[0]->prodrule == NUMBER) {
        //         //     /* operand is int or float */
        //         //     if(t->kids[0]->kids[0]->leaf->ival != '\0') {
        //         //         operation_type = INT_TYPE;
        //         //     } else if(t->kids[0]->kids[0]->leaf->dval != '\0') {
        //         //         operation_type = FLOAT_TYPE;
        //         //     } else {
        //         //         printf("Weird error -- number but not int or float.\n");
        //         //         exit(2);
        //         //     }

        //         // } else if((t->kids[0]->kids[0]->prodrule == TRUE) || (t->kids[0]->kids[0]->prodrule == FALSE)) {
        //         //     /* operand is bool -> treat as int
        //         //         True = 1; False = 0 */
        //         //     operation_type = INT_TYPE;
        //         // } else if(t->kids[0]->kids[0]->prodrule == LSQB) {
        //         //     /* operand is list */
        //         //     operation_type = LIST_TYPE;
        //         // } else {
        //         //     /* else - throw error -> unsupported type for (operation) */

        //         //     /* if dict -> throw error 
        //         //             TypeError: unsupported operand type(s) for +: 'dict' and 'dict' */
        //         //     printf("need to specify for: %s (%d)\n", t->kids[0]->kids[0]->symbolname, t->kids[0]->kids[0]->prodrule);
        //         // }
        //         // operation_type = t->kids[0]->kids[0]-> ???
        //     } else {
        //         // switch(operation_type) {
        //         // case INT_TYPE:
        //         //     // if()
        //         //     break;
        //         // case FLOAT_TYPE:
        //         //     break;
        //         // case LIST_TYPE:
        //         //     break;
        //         // case STRING_TYPE:
        //         //     break;
        //         // default:
        //         //     printf("type is %d\n", operation_type);
        //         // }
        //     }


        //     operation_count--;
        //     if(operation_count == 0) {
        //         /* check if issue with funal operation type and type of symbol*/ 
        //         if(current_symbol != NULL) {
        //             if((current_symbol->type->basetype != ANY_TYPE) && (current_symbol->type->basetype != operation_type)) {
        //                 incompatable_error(typenam[operation_type-1000000], t->kids[0]->kids[0]->leaf->lineno);
        //             }
        //         }
        //         operation_type = 0;
        //     }
        // }

        /* func_found: set only if there is a function call, not declaration */
        if(func_found == 1) {
            /* param_count:  NOT for function declarations, just count params for func calls*/
            /* tmp_params[] --> save either symbol name if in symbol table or type if not in symbol table */
            struct sym_entry *tmp_symbol = find_symbol(current, t->kids[0]->kids[0]->symbolname);
            if (curr_param == NULL) {
                curr_param = tables[func_i]->type->u.f.parameters;
            }

            if(tmp_symbol != NULL) {
                /* is in the symbol table */
                // tmp_params[func_call_param_count[func_call_param_i]] = strdup(t->kids[0]->kids[0]->symbolname);
                if(check_types(curr_param->type->basetype, tmp_symbol->type->basetype) == 0) {
                    printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
                    printf("Incompatable Type in Function Call: \"%s\" filename: %s line number: %d\n", curr_param->name, current_file, rows);
                    exit(3);
                }
                func_call_param_count[func_call_param_i]++;
                curr_param = curr_param->next;
            } else {
                /* isn't a symbol */
                switch (t->kids[0]->kids[0]->prodrule) {
                case NUMBER:
                    // tmp_params[func_call_param_count[func_call_param_i]] = "number";
                    if(curr_param->type->basetype != INT_TYPE && curr_param->type->basetype != FLOAT_TYPE && curr_param->type->basetype != ANY_TYPE) {
                        printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
                        printf("Incompatable Type in Function Call: \"%s\" filename: %s line number: %d\n", curr_param->name, current_file, rows);
                        exit(3);
                    }
                    func_call_param_count[func_call_param_i]++;
                    break;
                case NAME:
                    /* is a nested function call
                        --> have array of param_counts
                        --> look for opening and closing parens*/
                    tmp_params[func_call_param_count[func_call_param_i]] = "name";
                    func_call_param_i++;
                    func_call_param_count[func_call_param_i] = 0;
                    break;
                case FUNC:
                    built_in_found = 1;
                    break;
                default:
                    if(strcmp("one_more_string", humanreadable(t->kids[0]->kids[0])) == 0) {
                        if(curr_param->type->basetype != STRING_TYPE && curr_param->type->basetype != ANY_TYPE) {
                            printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
                            printf("Incompatable Type in Function Call: \"%s\" filename: %s line number: %d\n", curr_param->name, current_file, rows);
                            exit(3);
                        }
                    } else {
                        printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
                        printf("Incompatable Type in Function Call: \"%s\" filename: %s line number: %d\n", curr_param->name, current_file, rows);
                        exit(3);
                    }
                    func_call_param_count[func_call_param_i]++;
                }
                curr_param = curr_param->next;
            }
        }

        if(assignment_found == 1) {
            struct sym_entry *tmp_symbol = find_symbol(current, t->kids[0]->kids[0]->symbolname);
            if(tmp_symbol != NULL) {
                if(type_func_check == 1) {
                    type_func_check = 0;
                } else {
                    if(check_types(current_symbol->type->basetype, tmp_symbol->type->basetype) != 1) {
                        incompatable_error(tmp_symbol->s, t->kids[0]->kids[0]->leaf->lineno);
                    }
                }
            }
            
            else {
                if(t->kids[1] != NULL) { /* is a function */
                    /* t->kids[1] = zero_more_trailer: LPAR opt_arglist RPAR */
                    if(t->kids[0]->kids[0]->prodrule != FUNC) {       
                        /* if not a FUNC type, then is a user defined func 
                            -> search table for func and save index of func
                            -> set func_found flag to know to save all next atoms as func params until newline*/                
                        for(int i = 0; i < 10; i++){
                            if(tables[i] == NULL){
                                break;
                            }
                            else if(strcmp(t->kids[0]->kids[0]->symbolname, tables[i]->name) == 0){
                                func_i = i;
                                func_found = 1;
                                break;
                            }
                        }
                    } else {
                        /* built in funcs for type stuff:
                            int
                            str
                            bool
                            dict
                            float
                            list
                            */
                        if(current_symbol->type->basetype != ANY_TYPE) {
                            if(strcmp("int", t->kids[0]->kids[0]->symbolname) == 0) {
                                if(current_symbol->type->basetype == INT_TYPE) {
                                    type_func_check = 1;
                                }
                            } else if(strcmp("str", t->kids[0]->kids[0]->symbolname) == 0) {
                                if(current_symbol->type->basetype == STRING_TYPE) {
                                    type_func_check = 1;
                                }
                            } else if(strcmp("bool", t->kids[0]->kids[0]->symbolname) == 0) {
                                if(current_symbol->type->basetype == BOOL_TYPE) {
                                    type_func_check = 1;
                                }
                            } else if(strcmp("dict", t->kids[0]->kids[0]->symbolname) == 0) {
                                if(current_symbol->type->basetype == DICT_TYPE) {
                                    type_func_check = 1;
                                }
                            } else if(strcmp("float", t->kids[0]->kids[0]->symbolname) == 0) {
                                if(current_symbol->type->basetype == FLOAT_TYPE) {
                                    type_func_check = 1;
                                }
                            } else if(strcmp("list", t->kids[0]->kids[0]->symbolname) == 0) {
                                if(current_symbol->type->basetype == LIST_TYPE) {
                                    type_func_check = 1;
                                }
                            }
                        }
                    }
                } else {
                    if(type_func_check == 1) {
                        type_func_check = 0;
                    } else {
                        if(current_symbol->type->basetype != ANY_TYPE) {
                            if((t->kids[0]->kids[0]->kids[0] != NULL) && (current_symbol->type->basetype != STRING_TYPE)) {
                                incompatable_error(t->kids[0]->kids[0]->kids[0]->symbolname, t->kids[0]->kids[0]->kids[0]->leaf->lineno);
                            } else {
                                if((t->kids[0]->kids[0]->leaf->ival != '\0') && (current_symbol->type->basetype != INT_TYPE)) {
                                    incompatable_error(t->kids[0]->kids[0]->symbolname, t->kids[0]->kids[0]->leaf->lineno);
                                }
                                else if((t->kids[0]->kids[0]->leaf->dval != '\0') && (current_symbol->type->basetype != FLOAT_TYPE)) {
                                    incompatable_error(t->kids[0]->kids[0]->symbolname, t->kids[0]->kids[0]->leaf->lineno);
                                }
                                else if(((t->kids[0]->kids[0]->prodrule == TRUE) || (t->kids[0]->kids[0]->prodrule == FALSE)) && (current_symbol->type->basetype != BOOL_TYPE)) {
                                    incompatable_error(t->kids[0]->kids[0]->symbolname, t->kids[0]->kids[0]->leaf->lineno);
                                }
                                else if((t->kids[0]->kids[0]->prodrule == LSQB) && (current_symbol->type->basetype != LIST_TYPE)) {
                                    incompatable_error("[]", t->kids[0]->kids[0]->leaf->lineno);
                                }
                            }
                        }
                    }
                }
            }

        } else {
            if(t->kids[0]->kids[0]->prodrule == NAME) {
                current_symbol = find_symbol(current, t->kids[0]->kids[0]->symbolname);
                if(current_symbol != NULL) {        
                    atom_found = 1;
                }
            }

            /* check function parameters */
            if(t->kids[1] != NULL) {
                /* t->kids[1] = zero_more_trailer: LPAR opt_arglist RPAR */
                if(t->kids[0]->kids[0]->prodrule != FUNC) {
                    /* if not a FUNC type, then is a user defined func 
                            -> search table for func and save index of func
                            -> set func_found flag to know to save all next atoms as func params until newline*/
                    for(int i = 0; i < 10; i++){
                        if(tables[i] == NULL){
                            break;
                        }
                        else if(strcmp(t->kids[0]->kids[0]->symbolname, tables[i]->name) == 0){
                            func_i = i;
                            func_found = 1;
                            break;
                        }
                    }
                }
            }
        }

    } /* end of if atom_expr*/

    /* if enters a function, switch symbol table */
    else if(strcmp("fundef", humanreadable(t)) == 0){
        for(int i = 0; i < 10; i++){
            if(tables[i] == NULL){
                continue;
            }
            else if(strcmp(t->kids[1]->symbolname, tables[i]->name) == 0){
                current = tables[i];
                new_scope = 1;
            }
        }
        
    }

    else if(strcmp("eq_yield_or_tlse", humanreadable(t)) == 0) {
        assignment_found = 1;
    }

    else if((t->prodrule == DEDENT) && (weird_bug != 1)){
        dedent++;
    }

    else if((t->prodrule == INDENT) && (weird_bug != 1)){
        indent++;
    }

    else if((dedent == indent) && (new_scope == 1) && (dedent != 0) && (indent != 0)){
        new_scope = 0;
        dedent = 0;
        indent = 0;
        current = tables[0];
    }
    
    else if((strcmp("zero_more_plus_minus_term", humanreadable(t)) == 0) || (strcmp("zero_more_factor", humanreadable(t)) == 0)) {
        // printf("\t is operation\n");
        operation_count++;
    }

    else if((strcmp("arith_expr", humanreadable(t)) == 0) && t->kids[1] != NULL) {
        // printf("\tis operation\n");
        operation_count++;
    }
 
    if(t->prodrule == NEWLINE) {
        assignment_found = 0;
        func_found = 0;
        func_call_param_count[func_call_param_i] = 0;
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
    if((type1 == ANY_TYPE) || (type1 == type2)) {
        return 1;
    } else {
        return 0;
    }
}

// int get_type(struct tree t) {
//     struct sym_entry *tmp_symbol = find_symbol(current, t->symbolname);
//     if(tmp_symbol != NULL) {
//         /* operand is in symbol table */
//         /* if type is any, check contents (ival, dval, sval) to see if num or string */

//     } else if(t->kids[0]->kids[0]->kids[0] != NULL) {
//         /* operand is a string */
//         operation_type = STRING_TYPE;
//     } else if(t->kids[0]->kids[0]->prodrule == NUMBER) {
//         /* operand is int or float */
//         if(t->kids[0]->kids[0]->leaf->ival != '\0') {
//             operation_type = INT_TYPE;
//         } else if(t->kids[0]->kids[0]->leaf->dval != '\0') {
//             operation_type = FLOAT_TYPE;
//         } else {
//             printf("Weird error -- number but not int or float.\n");
//             exit(2);
//         }

//     } else if((t->kids[0]->kids[0]->prodrule == TRUE) || (t->kids[0]->kids[0]->prodrule == FALSE)) {
//         /* operand is bool -> treat as int
//             True = 1; False = 0 */
//         operation_type = INT_TYPE;
//     } else if(t->kids[0]->kids[0]->prodrule == LSQB) {
//         /* operand is list */
//         operation_type = LIST_TYPE;
//     } else {
//         /* else - throw error -> unsupported type for (operation) */

//         /* if dict -> throw error 
//                 TypeError: unsupported operand type(s) for +: 'dict' and 'dict' */
//         printf("need to specify for: %s (%d)\n", t->kids[0]->kids[0]->symbolname, t->kids[0]->kids[0]->prodrule);
//     }
    
// }

void incompatable_error(char *tmp, int line) {
    printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
    printf("Incompatable Types: %s, %s filename: %s line number: %d\n", current_symbol->s, tmp, current_file, line);
    exit(3);
}



void look_for_beginning(struct tree *t){
    if(t == NULL){
        return;
    }
    switch(t->prodrule){
        case NAME: if(def_first == 1){
                        return;
                    }
                    else{
                        anything_before_def = 1;
                        return;
                    }
        case WHILE: if(def_first == 1){
                        return;
                    }
                    else{
                        anything_before_def = 1;
                        return;
                    }
        case IF: if(def_first == 1){
                        return;
                    }
                    else{
                        anything_before_def = 1;
                        return;
                    }
        case FOR: if(def_first == 1){
                        return;
                    }
                    else{
                        anything_before_def = 1;
                        return;
                    }
        case FUNC: if(def_first == 1){
                        return;
                    }
                    else{
                        anything_before_def = 1;
                        return;
                    }
        case DEF: if(anything_before_def == 1){
                    return;
                }
                else{
                    def_first = 1;
                    return;
                }
    }
}

// void operand_error(char *tmp, int line) {
//     printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
//     printf("");
//     exit(3);
// }