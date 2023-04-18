%option noyywrap
%option noinput
%option nounput
%{
	#define COLOR_BOLD "\e[33m"
	#define COLOR_END "\e[m"
    #include "punygram.tab.h"
	#include "tree.h"
	#include <stdio.h>
	#include <stdlib.h>	
	#include <string.h>
	void mksval(char *text);
	int dentstack[100] = {0};
	int indentlevel(char *s);
	int top = 0;
	int dedentcount;
	int firsttime, rows = 1, words = 0, column = 1;
	int pendingdedent = 0;
	int eolflag = 0;
	extern char *current_file;
	int start_token;
	int name_counter = 0;
	#define yylex real_yylex

%}
%%
<<EOF>> {if (firsttime == 0){
			firsttime++;
			dedentcount = 0;
			int il = 0;
			while(top > 0 && dentstack[top] > il){
				dedentcount++;
				top--;
			}
			if (dentstack[top] != il) {
		       fprintf(stderr, "Python indent error line %d\n", rows);
		       fflush(stderr); exit(1);
		    }
			return alctoken(NEWLINE);}
			else if(firsttime == 1){
				firsttime++;
				eolflag = 1;
				return alctoken(NEWLINE);
			}
			else{return -1;}}
\\\n		{column=1;}
\n[ \t]*	{ int il = indentlevel(yytext+1);
                rows++; column=il+1;
		  if (il > dentstack[top]) {
		    dentstack[++top] = il;
                    /* return an INDENT token, except NEWLINE first */
		    dedentcount = -1;
                    }
		  else if (il < dentstack[top]) {
                    /* return one or more DEDENT tokens */
			if(pendingdedent > 1){
		    	dedentcount=0;
                    /* count how many */
		    while (top>0 && dentstack[top]>il) {
                       dedentcount++; top--; }
		    if (dentstack[top] != il) {
		       fprintf(stderr, "Python indent error line %d\n", rows);
		       fflush(stderr); exit(1);
		       }
			}
			else if(pendingdedent > 1){
				pendingdedent--;
			}
		    /* need to dedent by dedentcount, but returning NEWLINE */
                    }
		  else {
                    /* still at ILEVEL il, no INDENT or DEDENT */
                }
				rows++; column++;
				rows--;
				return alctoken(NEWLINE);}
"False"	{return alctoken(FALSE);}
"def"	{pendingdedent++; return alctoken(DEF);}
"if"	{pendingdedent++; return alctoken(IF);}
"raise"	{return alctoken(RAISE);}
"None"	{return alctoken(NONE);}
"del"	{return alctoken(DEL);}
"import"	{return alctoken(IMPORT);}
"return"	{return alctoken(RETURN);}
"True"	{return alctoken(TRUE);}
"elif"	{pendingdedent++;return alctoken(ELIF);}
"in"	{return alctoken(IN);}
"try"	{return alctoken(TRY);}
"and"	{return alctoken(AND);}
"else"	{pendingdedent++;return alctoken(ELSE);}
"is"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"while"	{pendingdedent++;return alctoken(WHILE);}
"as"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"except"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"lambda"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"with"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"assert"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"finally"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"nonlocal"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"yield"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"break"	{return alctoken(BREAK);}
"for"	{pendingdedent++; return alctoken(FOR);}
"not"	{return alctoken(NOT);}
"class"	{return alctoken(CLASS);}
"from"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"or"	{return alctoken(OR);}
"continue"	{return alctoken(CONTINUE);}
"global"	{return alctoken(GLOBAL);}
"pass"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"print"	{name_counter++; return alctoken(FUNC);}
"input"	{name_counter++; return alctoken(FUNC);}
"int"	{name_counter++; return alctoken(FUNC);}
"str"	{name_counter++; return alctoken(FUNC);}
"abs"	{name_counter++; return alctoken(FUNC);}
"bool"	{name_counter++; return alctoken(FUNC);}
"chr"	{name_counter++; return alctoken(FUNC);}
"dict" {name_counter++; return alctoken(FUNC);}
"float" {name_counter++; return alctoken(FUNC);}
"len"	{name_counter++; return alctoken(FUNC);}
"list"	{name_counter++; return alctoken(FUNC);}
"max"	{name_counter++; return alctoken(FUNC);}
"min"	{name_counter++; return alctoken(FUNC);}
"open"	{name_counter++; return alctoken(FUNC);}
"ord"	{name_counter++; return alctoken(FUNC);}
"pow"	{name_counter++; return alctoken(FUNC);}
"range"	{name_counter++; return alctoken(FUNC);}
"round"	{name_counter++; return alctoken(FUNC);}
"type"	{name_counter++; return alctoken(FUNC);}
"."	{return alctoken(DOT);}
"="	{return alctoken(EQUAL);}
"+"	{return alctoken(PLUS);}
"-"	{return alctoken(MINUS);}
"*"	{return alctoken(STAR);}
"/"	{return alctoken(SLASH);}
"+="	{return alctoken(PLUSEQUAL);}
"-="	{return alctoken(MINEQUAL);}
"**"	{return alctoken(DOUBLESTAR);}
"//"	{return alctoken(DOUBLESLASH);}
"%" {return alctoken(PERCENT);}
"=="	{return alctoken(EQEQUAL);}
"!="	{return alctoken(NOTEQUAL);}
">"	{return alctoken(GREATER);}
"<"	{return alctoken(LESS);}
">="	{return alctoken(GREATEREQUAL);}
"<="	{return alctoken(LESSEQUAL);}
"~"|"<<"|">>"|"&="|"|="|"^="|">>="|"<<="|"&"|"|"|"^"	{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
"\["	{return alctoken(LSQB);}
"\]"	{return alctoken(RSQB);}
"("	{return alctoken(LPAR);}
")"	{return alctoken(RPAR);}
"," {return alctoken(COMMA);}
";"	{return alctoken(SEMI);}
"{"	{return alctoken(LBRACE);}
"}"	{return alctoken(RBRACE);}
":"	{return alctoken(COLON);}
"..." {return alctoken(ELLIPSIS);}
"->" {return alctoken(RARROW);}
"@"|"`"|"$" {printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1); }
(\"{3}([^\"]|\"\")*\"{3})	{return alctoken(STRING);}
(\'{3}([^\']|\'\')*\'{3})	{return alctoken(STRING);}
(\"([^\"]|\"\")*\") {int cat = alctoken(STRING); mksval(yytext); yylval.treeptr->leaf->issval = 1; return cat;}
(\'([^\']|\'\')*\') {int cat = alctoken(STRING); mksval(yytext); yylval.treeptr->leaf->issval = 1; return cat;}
-?[0-9]+	{int cat = alctoken(NUMBER); yylval.treeptr->leaf->ival = atoi(yytext); return cat;}
-?[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)? {int cat = alctoken(NUMBER); yylval.treeptr->leaf->dval = atof(yytext); return cat;}
[a-zA-Z_][a-zA-Z0-9_]*	{name_counter++; return alctoken(NAME);}
"#".*   {}
" "	{}
.		{printf(COLOR_BOLD "LEXICAL ERROR: " COLOR_END); printf("%s in file \"%s\" line number: %d\n", yytext, current_file, rows); exit(1);}
%%

int indentlevel(char *s)
{      
   int column = 1;
   while(*s != '\0') {
      if (*s == '\t') {
		column++;
        while ((column % 8) != 0) column++;
      }
      else if (*s == ' ') column++;
      else { column++; printf("but wtf is %c\n", *s);}
      s++;
   }
   return column-1;
}

void mksval(char *text){
	yylval.treeptr->leaf->sval = calloc(1, strlen(yytext)+1);
	int svalindex = 0;
	for(int i = 0; i < strlen(text); i++){
		if ('\"' == text[i]){
			continue;
		}
		else if('\'' == text[i]){
			continue;
		}
		else if('\\' == text[i]){
			i++;
			if(text[i] == 't'){
				for(int j = 0; j <= 4; j++){
				yylval.treeptr->leaf->sval[svalindex] = ' ';
				svalindex++;
				}
			}
			else if(text[i] == 'n'){
				continue;
			}
		}
		else{
			yylval.treeptr->leaf->sval[svalindex] = text[i];
			svalindex++;
		}
	}
}

#undef yylex

int yylex() {
   if (dedentcount<0) {
     dedentcount++;
	 return alctoken(INDENT);
    }
   if(dedentcount>0) {
     dedentcount--;
	 return alctoken(DEDENT);
    }
	if(eolflag == 1){
	 eolflag=0;
	 printf("firsttime: %d\n", firsttime);
     return alctoken(ENDMARKER);
   }
   return real_yylex();
}