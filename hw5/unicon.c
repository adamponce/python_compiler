
#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "punygram.tab.h"

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
}

void generate_code(struct tree *t){
    if(t == NULL){
        return;
    }

    switch(t->prodrule){
        case ENDMARKER: end_unicon(); break;
        case NEWLINE: fprintf(unicon, "\n"); break;
        case FALSE: break;
        case IF: fprintf(unicon, "if"); break;
        case DEF: fprintf(unicon, "procedure"); break;
        case RAISE: break;
        case NONE: break;
        case DEL: break;
        case IMPORT: break;
        case RETURN:fprintf(unicon, "return"); break;
        case TRUE: break;
        case ELIF: break;
        case TRY: break;
        case AND: break;
        case ELSE: fprintf(unicon, "else"); break;
        case WHILE: fprintf(unicon, "while"); break;
        case AS: break;
        case EXCEPT: break;
        case LAMBDA: break;
        case WITH: break;
        case ASSERT: break;
        case FINALLY: break;
        case NONLOCAL: break;
        case YIELD: break;
        case BREAK: fprintf(unicon, "break"); break;
        case FOR: fprintf(unicon, "for"); break;
        case NOT: break;
        case CLASS: break;
        case FROM: break;
        case OR: break;
        case CONTINUE: break;
        case GLOBAL: break;
        case PASS: break;
        case LPAR: fprintf(unicon, "("); break;
        case RPAR: fprintf(unicon, ")"); break;
        case LSQB: fprintf(unicon, "["); break;
        case RSQB: fprintf(unicon, "]"); break;
        case COLON: fprintf(unicon, ":"); break;
        case COMMA: fprintf(unicon, ","); break;
        case SEMI: fprintf(unicon, ";"); break;
        case PLUS: fprintf(unicon, "+"); break;
        case MINUS: fprintf(unicon, "-"); break;
        case STAR: break;
        case SLASH: break;
        case LESS: fprintf(unicon, "<"); break;
        case GREATER: fprintf(unicon, ">"); break;
        case EQUAL: fprintf(unicon, ":="); break;
        case DOT: break;
        case PERCENT:break;
        case LBRACE: fprintf(unicon, "{"); break;
        case RBRACE: fprintf(unicon, "}"); break;
        case EQEQUAL: fprintf(unicon, "="); break;
        case NOTEQUAL: fprintf(unicon, "~="); break;
        case LESSEQUAL: fprintf(unicon, "<="); break;
        case GREATEREQUAL: fprintf(unicon, ">="); break;
        case DOUBLESTAR: break;
        case PLUSEQUAL: break;
        case MINEQUAL: break;
        case STAREQUAL: break;
        case SLASHEQUAL: break;
        case PERCENTEQUAL: break;
        case DOUBLESTAREQUAL: break;
        case DOUBLESLASH: break;
        case DOUBLESLASHEQUAL: break;
        case RARROW: break;
        case ELLIPSIS: break;
        case COLONEQUAL: break;
        case NAME: fprintf(unicon, "%s", t->symbolname); break;
        case NUMBER: fprintf(unicon, "%s", t->symbolname); break;
        case STRING: fprintf(unicon, "%s", t->symbolname); break;
        case INDENT: fprintf(unicon, "{"); break;
        case DEDENT: fprintf(unicon, "}"); break;
        case IN: break;
        case TYPE_COMMENT: break;
        case FUNC: if(strcmp(t->symbolname, "print") == 0){
                        fprintf(unicon, "write"); break;
                    }
                    else{
                        fprintf(unicon, "%s", t->symbolname); break;
                    }
    }




    /*
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
    }*/




    for(int i = 0; i < t->nkids; i++){
        generate_code(t->kids[i]);
    }
}
