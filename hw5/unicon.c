
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
int else_here = 0;
int print_found = 0;
int to_string_found = 0;
int func_range = 0;
int for_variable = 0;
int name_found = 0;
int iterations = 0;
int name_interations = 0;
int elseif_found = 0;
int number_of_elifs = 0;
int comparison_found = 0;
int current_position;
int eqq_position; 
int rigth_arrow_found = 0;


void start_unicon(){
    fprintf(unicon,"procedure main()\n");
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
        case NEWLINE: if(print_found == 1){
                            print_found = 0;
                            fprintf(unicon, "\n");
                            break;
                        }   
                        else{fprintf(unicon, "\n"); break;}
        case FALSE: break;
        case IF: fprintf(unicon, "if "); if_found = 1; break;
        case DEF: fprintf(unicon, "procedure "); function_here = 1; break;
        case RAISE: break;
        case NONE: break;
        case DEL: break;
        case IMPORT: break;
        case RETURN:fprintf(unicon, "return "); break;
        case TRUE: break;
        case ELIF: fprintf(unicon, "else{ if "); elseif_found = 1; number_of_elifs++; break;
        case TRY: break;
        case AND: fprintf(unicon, " & "); break;
        case ELSE: fprintf(unicon, "else "); else_here = 1; break;
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
        case FOR: fprintf(unicon, "every "); for_here = 1; for_variable = 1; break;
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
        case COLON: if(if_found == 1 && else_here == 0 && elseif_found == 0){
                        fprintf(unicon, " then");
                        comparison_found = 0;
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
                    else if(else_here == 1){
                        comparison_found = 0;
                        break;
                    }
                    else if(function_here == 1){
                        break;
                    }
                    else if(elseif_found == 1){
                        comparison_found = 0;
                        fprintf(unicon, " then");
                        break;
                    }
                    else{
                        fprintf(unicon, ":"); break;
                    }
        case COMMA: fprintf(unicon, ","); break;
        case SEMI: fprintf(unicon, ";"); break;
        case PLUS: if(print_found == 1){
                        fprintf(unicon, ", ");
                        break;
                    }
                    else{
                        fprintf(unicon, "+"); break;
                    }
        case MINUS: fprintf(unicon, "-"); break;
        case STAR: fprintf(unicon, "*");break;
        case SLASH: fprintf(unicon, "/"); break;
        case LESS: fprintf(unicon, "<"); break;
        case GREATER: fprintf(unicon, ">"); break;
        case EQUAL: fprintf(unicon, ":="); break;
        case DOT: break;
        case PERCENT: fprintf(unicon, "%%"); break;
        case LBRACE: fprintf(unicon, "{"); break;
        case RBRACE: fprintf(unicon, "}"); break;
        case EQEQUAL: eqq_position = ftell(unicon); fprintf(unicon, "="); comparison_found = 1; break;
        case NOTEQUAL: fprintf(unicon, "~="); break;
        case LESSEQUAL: fprintf(unicon, "<="); break;
        case GREATEREQUAL: fprintf(unicon, ">="); break;
        case DOUBLESTAR: fprintf(unicon, "^"); break;
        case PLUSEQUAL: fprintf(unicon, "+:="); break;
        case MINEQUAL: fprintf(unicon, "-:="); break;
        case STAREQUAL: fprintf(unicon, "*:="); break;
        case SLASHEQUAL: fprintf(unicon, "/:="); break;
        case PERCENTEQUAL: fprintf(unicon, "%%:="); break;
        case DOUBLESTAREQUAL: break;
        case DOUBLESLASH: break;
        case DOUBLESLASHEQUAL: break;
        case RARROW: rigth_arrow_found = 1; break;
        case ELLIPSIS: break;
        case COLONEQUAL: break;
        case NAME:  if(strcmp(t->symbolname, "main") == 0){
                        main_found = 1;
                        fprintf(unicon, "%s", t->symbolname);
                        break;
                    }
                    else if(to_string_found == 1){
                        fprintf(unicon, "%s", t->symbolname);
                        break;
                    }
                    else if(for_here == 1 && for_variable == 1){
                        fprintf(unicon, "%s := 1", t->symbolname);
                        for_variable = 0;
                        break;
                    }
                    else{
                        anything_else = 1;
                        name_found = 1;
                        fprintf(unicon, "%s", t->symbolname); break;
                    }
        case NUMBER: fprintf(unicon, "%s", t->symbolname); break;
        case STRING:    if(comparison_found == 1){
                            comparison_found = 0;
                            current_position = ftell(unicon);
                            fseek(unicon, eqq_position, current_position);
                            fputs("=", unicon);
                        }
                    fprintf(unicon, "%s", t->symbolname); break;
        case INDENT: if(function_here == 1 && (while_found == 1 || for_here == 1 || if_found == 1 || else_here == 1)){
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
                    else if(else_here == 1 && elseif_found == 1){
                        elseif_found = 0;
                        else_here = 0;
                        for(int i = 1; i <= number_of_elifs; i++){
                            fprintf(unicon, "}\n");
                        }
                        number_of_elifs = 0;
                        fprintf(unicon, "}\n"); break;
                    }
                    else if(else_here == 1 && elseif_found == 0){
                        else_here = 0;
                        fprintf(unicon, "}\n"); break;
                    }
                    else if(elseif_found == 1){
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
                        fprintf(unicon, "%s", t->symbolname);
                        print_found = 1;
                        break;
                    }
                    else if(strcmp(t->symbolname, "str") == 0){
                        to_string_found = 1;
                        break;
                    }
                    else if(strcmp(t->symbolname, "range") == 0){
                        break;
                    }
                    else if(rigth_arrow_found == 1){
                        rigth_arrow_found = 0;
                        break;
                    }
                    else{
                        fprintf(unicon, "%s", t->symbolname); break;
                    }
    }

    for(int i = 0; i < t->nkids; i++){
        generate_code(t->kids[i]);
    }
}
