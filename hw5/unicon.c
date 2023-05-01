
#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *unicon;
int funcfound = 0;
char *current_symbol;
int symbol_found = 0;
int assignmentfound = 0;

void start_unicon(){
    fprintf(unicon,"link puny\nprocedure main()\n");
}

void end_unicon(){
    fprintf(unicon,"end\n");
    exit(6);
}

void generate_code(struct tree *t){
    if(t == NULL){
        return;
    }

    //found a function 
    if(t->prodrule == 2056){
        fprintf(unicon, "%s(", t->kids[0]->symbolname);
        funcfound = 1;
    }
    //string found inside fuction
    if(t->prodrule == 1158 && funcfound == 1){
        fprintf(unicon, "%s)\n", t->kids[0]->kids[0]->symbolname);
        funcfound = 0;

    }
    //NAME or Variable inside function
    if(t->prodrule == 1156 && funcfound == 1){
        fprintf(unicon, "%s)\n", t->kids[0]->symbolname);
        funcfound = 0;
    }

    //finding assignments
    if(t->prodrule == 1156){
        current_symbol = strdup(t->kids[0]->symbolname);
        symbol_found = 1;
    }

    if(symbol_found == 1 && t->prodrule == 1036){
        assignmentfound = 1;
    }

    if(symbol_found == 1 && (strcmp(t->symbolname, "atom") == 0) && assignmentfound == 1){
        fprintf(unicon, "%s := %s\n", current_symbol, t->kids[0]->symbolname);
        symbol_found = 0;
        assignmentfound = 0;
    }




    for(int i = 0; i < t->nkids; i++){
        generate_code(t->kids[i]);
    }
}
