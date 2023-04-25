/*
 * Three Address Code - skeleton for CS 423
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tac.h"
#include "tree.h"

char *regionnames[] = {"global","loc", "class", "lab", "const", "", "none"};
char *regionname(int i) { return regionnames[i-R_GLOBAL]; }
char *opcodenames[] = {
   "ADD","SUB", "MUL", "DIV", "NEG", "ASN", "ADDR", "LCONT", "SCONT", "GOTO",
   "BLT", "BLE", "BGT", "BGE", "BEQ", "BNE", "BIF", "BNIF", "PARM", "CALL",
   "RETURN"
   };
char *opcodename(int i) { return opcodenames[i-O_ADD]; }
char *pseudonames[] = {
   "glob","proc", "loc", "lab", "end", "prot"
   };
char *pseudoname(int i) { return pseudonames[i-D_GLOB]; }

int counter;


struct addr genlabel(){
    struct addr a;
    a.region = R_LABEL;
    a.u.offset = counter++;
    return a;
}

void assign_first(struct tree *t){
    int i;
    for(i = 0; i < t->nkids; i++){
        if(t->kids[i] == NULL){
            return;
        }
        assign_first(t->kids[i]);
    }
    switch(t->prodrule){
        //while loops
        case 1096:
            t->label = genlabel();
            t->first = 1;
            break;
        //for loops
        case 1097:
            t->label = genlabel();
            t->first = 1;
            break;
        //if
        case 1093:
            t->label = genlabel();
            t->first = 1;
            break;
        //function call
        case 1004:
            t->label = genlabel();
            t->first = 1;
            break;
    }
}


void assign_follow(struct tree *t){
    int i;
    switch(t->prodrule){
        //else
        case 1232:
            t->label = genlabel();
            t->follow = 1;
            break;
        //break
        case 1056:
            t->label = genlabel();
            t->follow = 1;
            break;
        //continue
        case 1057:
            t->label = genlabel();
            t->follow = 1;
            break;
        //return
            t->label = genlabel();
            t->follow = 1;
            break;
    }

    for(i=0; i < t->nkids; i++){
        if(t->kids[i] == NULL){
            return;
        }
        assign_follow(t->kids[i]);
    }
}


void assign_ontrue_onfalse(struct tree *t){
    int i;
    switch(t->prodrule){
        //and
        case 2001:
            t->label = genlabel();
            t->onTrue = 1;
            t->onFalse = 1;
            break;
        //or
        case 2000:
            t->label = genlabel();
            t->onTrue = 1;
            t->onFalse = 1;
            break;
        //<
        case 1115:
            t->label = genlabel();
            t->onTrue = 1;
            t->onFalse = 1;
            break;
        //>
        case 1116:
            t->label = genlabel();
            t->onTrue = 1;
            t->onFalse = 1;
            break;
        //==
        case 1117:
            t->label = genlabel();
            t->onTrue = 1;
            t->onFalse = 1;
            break;
        //<=
        case 1118:
            t->label = genlabel();
            t->onTrue = 1;
            t->onFalse = 1;
            break;
        //>=
        case 1119:
            t->label = genlabel();
            t->onTrue = 1;
            t->onFalse = 1;
            break;
        //!=
        case 1120:
            t->label = genlabel();
            t->onTrue = 1;
            t->onFalse = 1;
            break;
        //not
        case 1121:
            t->label = genlabel();
            t->onTrue = 1;
            t->onFalse = 1;
            break;
    }
    for(i=0; i < t->nkids; i++){
        if(t->kids[i] == NULL){
            return;
        }
        assign_ontrue_onfalse(t->kids[i]);
    }

}

void call_func(struct tree *t){
    assign_first(t);
    assign_follow(t);
    assign_ontrue_onfalse(t);
}

void print_code_flow(struct tree *t){
    for(int i = 0; i < t->nkids; i++){
        if(t->kids[i] == NULL){
            return;
        }
        if(t->first == 1){
            printf("%d\n", t->prodrule);
        }
        else if(t->follow == 1){
            printf("%d\n", t->prodrule);
        }
        print_code_flow(t->kids[i]);
    }
}


