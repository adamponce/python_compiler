/**
* @file main.c
*
* @author Javier Reyna Adam Schmidt Nikki Sparacino
*
* @date 02/25/2023
*
* Assignment: Homework 3
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "symtab.h"
#define COLOR_BOLD "\e[33m"
#define COLOR_END "\e[m"


int yylex();
int yyparse();
int yyerror(char *s);
char *current_file;
extern FILE *yyin;
extern char *yytext;
extern int firsttime;
extern int rows;
extern int yydebug;
extern struct tree *root;



int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Usage: file");
        exit(1);
    }
    for(int i = 1; i < argc; i++){
        char *ext = strrchr(argv[i], '.');
        if(!ext){
            char *extension = ".py";
            strcat(argv[i], extension);
        }
        else if(strcmp(ext + 1, "py") != 0){
            printf("Incorrect file type: Needed .py\n");
            exit(-1);
        }
        current_file = argv[i];
        if ((yyin = fopen(argv[i], "a")) == NULL) {
            fprintf(stderr, "Can't open %s\n", argv[i]); fflush(stderr);
            exit(-1);
        }
        fprintf(yyin,"\n");
        fclose(yyin);
        if ((yyin = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "Can't open %s\n", argv[i]); fflush(stderr);
            exit(-1);
        }
        printf("PRINTING TREE: \n");
        printf("-------------------------------------------------\n");
        yydebug = 0;
        int r = yyparse();
        if(r == 0){
            // treeprint(root, 1);
            printsyms(root);
        }
        firsttime = 0;
        rows = 1;
        fclose(yyin);
    }
    return 0;
}



int yyerror(char *s){
    printf(COLOR_BOLD "SYNTAX ERROR: " COLOR_END);
    printf("\"%s\" filename: %s line number: %d\n", yytext, current_file, rows);
    exit(2);
}