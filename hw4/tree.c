/**
* @file tree.c
*
* @author Javier Reyna Adam Schmidt Nikki Sparacino
*
* @date 02/25/2023
*
* Assignment: Homework 3
*/


#include "tree.h"
#include "punygram.tab.h"
#include "symtab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int alctoken(int cat){
    yylval.treeptr = malloc(sizeof (struct tree));
    yylval.treeptr->prodrule = cat;
    yylval.treeptr->nkids = 0;
    yylval.treeptr->symbolname = strdup(yytext); 
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

    printf("%*s %s: %d\n", depth*2, " ", humanreadable(t), t->nkids);
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
    if(strcmp("atom", humanreadable(t)) == 0){
        symbol = strdup(t->kids[0]->symbolname);
        atom_found = 1;
    }

    //finding assignments
    else if(strcmp("eq_yield_or_tlse", humanreadable(t)) == 0 && atom_found == 1){
        //enter saved atom into symbol table
        insert_symbol(current, symbol, "any");
        atom_found = 0;
    }

    //finding new functions
    else if(strcmp("fundef", humanreadable(t)) == 0){
        //create new symbol table
        struct sym_table *new;
        new_scope = 1;
        new = init_symbol_table();
        tables[table_count] = new;
        current = new;
    }
    //finding a:int
    else if(strcmp("annassign", humanreadable(t)) == 0 && atom_found == 1){
        //enter saved atom into symbol table
        insert_symbol(current, symbol, "any");
        atom_found = 0;
    }

    else if(strcmp("tfdef", humanreadable(t)) == 0 && (new_scope == 1)){
        //symbol entry child of tfdef
        if(strcmp("opt_col_test", t->kids[0]->symbolname) != 0){
            insert_symbol(current, t->kids[0]->symbolname, "any");
        }
    }

    else if(t->prodrule == 330){
        dedent++;
    }

    else if(strcmp("global_stmt", humanreadable(t)) == 0){
        insert_symbol(current, t->kids[1]->symbolname, "any");        
        global_stmt = 1;
    }

    else if(strcmp("comma_name", humanreadable(t)) == 0 && global_stmt == 1){
        insert_symbol(current, t->kids[1]->symbolname, "any");
    }

    else if(t->prodrule == 329){
        indent++;
        //printf("indent: %d\n", indent);
    }

    else if((dedent == indent) && (new_scope == 1) && (dedent != 0) && (indent != 0)){
        //return to old scope
        //memcpy(tables[table_count], current, sizeof(struct sym_table));
        table_count++;
        new_scope = 0;
        dedent = 0;
        indent = 0;
        current = tables[0];
    }

    for(int i = 0; i < t->nkids; i++){\
        treetraversal(t->kids[i]);
    }

}
