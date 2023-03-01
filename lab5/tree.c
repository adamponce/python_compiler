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
#include <stdio.h>
#include <stdlib.h>
extern int rows;
extern char *yytext;
extern char *current_file;


int alctoken(int cat){
    yylval.treeptr = malloc(sizeof (struct tree));
    yylval.treeptr->prodrule = cat;
    yylval.treeptr->nkids = 0;
    yylval.treeptr->symbolname = yytext; 
    yylval.treeptr->leaf = malloc(sizeof (struct token));
    yylval.treeptr->leaf->category = cat;
    yylval.treeptr->leaf->text = yytext;
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
