/**
* @file main.c
*
* @author Javier Reyna Adam Schmidt Nikki Sparacino
*
* @date 03/22/2023
*
* Assignment: Homework 4
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "symtab.h"
#include "dot.h"
#include "type.h"
#include "unicon.h"

#define COLOR_BOLD "\e[33m"
#define COLOR_END "\e[m"
#define ARRAY_SIZE 10


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
extern int name_counter;
struct sym_table *global;
struct sym_table *current;
struct sym_table *tables[ARRAY_SIZE];
extern int table_count;
extern int dedent;
extern int indent;
extern int def_first;
extern int anything_before_def;
FILE *unicon;


int main(int argc, char *argv[]){
    //Beginning Stuff
    if(argc < 2){
        printf("Usage: puny [-symtab] [-dot] <filename 1> <filename 2> ... <filename n>");
        exit(1);
    }

    // check for optional -symtab command line argument
    int symtab_flag = 0, dot_flag = 0;
    if(strcmp(argv[1], "-symtab") == 0) {
        symtab_flag = 1;
        if (strcmp(argv[2], "-dot") == 0) {
            dot_flag = 1;
        }
    } else {
        if (strcmp(argv[1], "-dot") == 0) {
            dot_flag = 1;
            if (strcmp(argv[2], "-symtab") == 0) {
                symtab_flag = 1;
            }
        }
    }
    // int cat = 0;
    int flags = symtab_flag + dot_flag;
    //Goes through all of the command line arguments
    for(int i = flags + 1; i < argc; i++){

        //Checks for .py extension
        char *ext = strrchr(argv[i], '.');
        if(!ext){
            char *extension = ".py";
            strcat(argv[i], extension);
        }
        else if(strcmp(ext + 1, "py") != 0){
            printf("Incorrect file type: Needed .py\n");
            exit(-1);
        }

        //Opens file to add new line at the end
        current_file = argv[i];
        if ((yyin = fopen(argv[i], "a+")) == NULL) {
            fprintf(stderr, "Can't open %s\n", argv[i]); fflush(stderr);
            exit(-1);
        }
        char lastChar;
        fseek(yyin, -1, SEEK_END);
        lastChar = fgetc(yyin);

        if (lastChar != '\n') {
            fprintf(yyin,"\n");
        }
        fclose(yyin);

        if ((yyin = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "Can't open %s\n", argv[i]); fflush(stderr);
            exit(-1);
        }
        if(strchr(current_file, '/') != NULL) {
            current_file = strrchr(current_file, '/') + 1;
        }
        //Begins analysis
        printf("FILE: %s\n", current_file);
        printf("----------------------\n");

        char *unicon_file = strdup(current_file);
        char *pyext = ".py";
        char *uniext = ".icn";
        char *a, *b, *c;
        if (*pyext && (b = c = strstr(unicon_file, pyext)) != NULL) {
            size_t len = strlen(pyext);
            while ((c = strstr(a = c + len, pyext)) != NULL) {
                memmove(b, a, c - a);
                b += c - a;
            }
            memmove(b, a, strlen(a) + 1);
        }
        strcat(unicon_file, uniext);

        unicon = fopen(unicon_file, "w");
        yydebug = 0;
        /*
        while ((cat = yylex()) > 0){
            printf("%d\t %s\n", cat, yytext);
        }
        */
        int r = yyparse();
        global = init_symbol_table();
        global->name = "Global";
        global->type = alctype(NONE_TYPE);
        tables[0] = global;
        current = global;
        insert_symbol(current, "__name__", "str");
        if(r == 0){
            //treeprint(root, 1);
            treetraversal(root);
            indent = 0;
            dedent = 0;
            typecheck(root);
            look_for_beginning(root);
            fprintf(unicon, "link puny\n");
            if(def_first == 1){
                generate_code(root);
            }
            else if(anything_before_def == 1){
                start_unicon();
                generate_code(root);
            }
            fclose(unicon);
            char command[50] = "unicon -c -s ";
            strcat(command, unicon_file);
            //printf("%s", command);
            system("unicon -c -s puny.icn");
            char *ucode_file = strdup(unicon_file);
            char *ucodeext = ".u";
            char *uniext = ".icn";
            char *a, *b, *c;
            if (*uniext && (b = c = strstr(ucode_file, uniext)) != NULL) {
                size_t len = strlen(uniext);
                while ((c = strstr(a = c + len, uniext)) != NULL) {
                    memmove(b, a, c - a);
                    b += c - a;
                }
                memmove(b, a, strlen(a) + 1);
            }
            strcat(ucode_file, ucodeext);
            system(command);
            char command_2[50] = "unicon ";
            char command_3[50] = " puny.u";
            strcat(command_2, ucode_file);
            strcat(command_2, command_3);
            system(command_2);

            if(symtab_flag == 0){
                printf("No Errors Detected. Use -symtab to see symbol table");
            }
            for(int j = 0; j < ARRAY_SIZE; j++){
                if(tables[j] == NULL){
                    break;
                }
                // only print if symtab true
                if(symtab_flag == 1) {
                    printSymbolTable(tables[j]);
                }
            }
            if(dot_flag == 1) {
                char *dot_file = current_file;
                strcat(dot_file, ".dot");
                print_graph(root, dot_file);
            }
        }
        for(int m = 0; m < ARRAY_SIZE; m++){
            tables[m] = NULL;
        }
        table_count = 1;
        firsttime = 0;
        rows = 1;
        printf("\n");
        fclose(yyin);
    }
    return 0;
}



int yyerror(char *s){
    if(strcmp(s, "colon") == 0){
       printf(COLOR_BOLD "SYNTAX ERROR: " COLOR_END);
        printf("MISSING \":\" filename: %s line number: %d\n", current_file, rows-1);
        exit(2); 
    }
    else{
        printf(COLOR_BOLD "SYNTAX ERROR: " COLOR_END);
        printf("\"%s\" filename: %s line number: %d\n", yytext, current_file, rows);
        exit(2);
    }
}