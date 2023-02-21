#include "tree.h"
#include "punygrammar.tab.h"
#include <stdio.h>
#include <stdlib.h>
extern int rows;
extern char *yytext;
extern char *current_file;


int alctoken(int cat){
    yylval.treeptr = malloc(sizeof (struct tree));
    yylval.treeptr->prodrule = cat;
    yylval.treeptr->nkids = 0;
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