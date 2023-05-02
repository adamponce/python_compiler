
#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "punygram.tab.h"

extern FILE *unicon;
int symbol_found = 0;
int assignmentfound = 0;
int if_found = 0;
int for_here = 0;
int while_found = 0;
int function_here = 0;
int main_found = 0;
int anything_else = 0;

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
        case ENDMARKER: if(main_found == 1){
                            break;
                        }
                        else{
                            end_unicon(); break;
                        }
        case NEWLINE: fprintf(unicon, "\n"); break;
        case FALSE: break;
        case IF: fprintf(unicon, "if "); if_found = 1; break;
        case DEF: fprintf(unicon, "procedure "); function_here = 1; break;
        case RAISE: break;
        case NONE: break;
        case DEL: break;
        case IMPORT: break;
        case RETURN:fprintf(unicon, "return "); break;
        case TRUE: break;
        case ELIF: break;
        case TRY: break;
        case AND: fprintf(unicon, " & "); break;
        case ELSE: fprintf(unicon, "else "); break;
        case WHILE: fprintf(unicon, "while "); while_found = 1; break;
        case AS: break;
        case EXCEPT: break;
        case LAMBDA: break;
        case WITH: break;
        case ASSERT: break;
        case FINALLY: break;
        case NONLOCAL: break;
        case YIELD: break;
        case BREAK: fprintf(unicon, "break"); break;
        case FOR: fprintf(unicon, "every "); for_here = 1;break;
        case NOT: break;
        case CLASS: break;
        case FROM: break;
        case OR: fprintf(unicon, " | "); break;
        case CONTINUE: break;
        case GLOBAL: fprintf(unicon, "global "); break;
        case PASS: break;
        case LPAR: fprintf(unicon, "("); break;
        case RPAR: fprintf(unicon, ")"); break;
        case LSQB: fprintf(unicon, "["); break;
        case RSQB: fprintf(unicon, "]"); break;
        case COLON: if(if_found == 1){
                        fprintf(unicon, " then");
                        break;
                    }
                    else if(for_here == 1){
                        fprintf(unicon, " do");
                        break;
                    }
                    else if(while_found == 1){
                        fprintf(unicon, " do");
                        break;
                    }
                    else if(function_here == 1){
                        break;
                    }
                    else{
                        fprintf(unicon, ":"); break;
                    }
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
        case PLUSEQUAL: fprintf(unicon, "+:="); break;
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
        case NAME:  if(strcmp(t->symbolname, "main") == 0){
                        main_found = 1;
                        fprintf(unicon, "%s", t->symbolname);
                        break;
                    }
                    else{
                        anything_else = 1;
                        fprintf(unicon, "%s", t->symbolname); break;
                    }
        case NUMBER: fprintf(unicon, "%s", t->symbolname); break;
        case STRING: fprintf(unicon, "%s", t->symbolname); break;
        case INDENT: if(function_here == 1 && (while_found == 1 || for_here == 1 || if_found == 1)){
                        fprintf(unicon, "{"); break;
                    }
                    else if(function_here == 1){
                        break;
                    }
                    else{
                        fprintf(unicon, "{"); break;
                    }
        case DEDENT: if(while_found == 1){
                        while_found = 0;
                        fprintf(unicon, "}\n"); break;
                    }
                    else if(for_here == 1){
                        for_here = 0;
                        fprintf(unicon, "}\n"); break;
                    }
                    else if(if_found == 1){
                        if_found = 0;
                        fprintf(unicon, "}\n"); break;
                    }
                    else if(function_here == 1){
                        fprintf(unicon, "end\n"); function_here = 0; break;
                    }
                    else{
                        fprintf(unicon, "}\n"); break;
                    }
        case IN: fprintf(unicon, " to "); break;
        case TYPE_COMMENT: break;
        case FUNC: if(strcmp(t->symbolname, "print") == 0){
                        fprintf(unicon, "write"); break;
                    }
                    else{
                        fprintf(unicon, "%s", t->symbolname); break;
                    }
    }



    for(int i = 0; i < t->nkids; i++){
        generate_code(t->kids[i]);
    }
}
