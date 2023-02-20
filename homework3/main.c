#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();
int yyparse();
int yyerror(char *s);
char *current_file;
extern FILE *yyin;
extern char *yytext;
extern int firsttime;
extern int rows;



int main(int argc, char *argv[]){
        if(argc < 2){
        printf("Usage: wc file");
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
        if ((yyin = fopen(argv[i],"r")) == NULL) {
            fprintf(stderr, "Can't open %s\n", argv[i]); fflush(stderr);
            exit(-1);
        }
        printf("Category \t Text \t\t\t        Lineno \t      Filename \t                 Ival/Sval\n");
        printf("----------------------------------------------------------------------------------------------------------------\n");
        printf("yyparse returns %d\n", yyparse());
        firsttime = 0;
        rows = 1;
        fclose(yyin);
    }
    return 0;
}

int yyerror(char *s){
    fprintf(stderr, "%s\n", s); exit(1);
}