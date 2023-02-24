%option noyywrap
%option noinput
%option nounput
%{
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
	extern char *current_file;
	int start_token;
	#define yylex real_yylex

%}
%%
<<EOF>> {if (firsttime++ == 0){
 			return alctoken(ENDMARKER); } else{return -1;}}
\n[ \t]*	{ int il = indentlevel(yytext+1);
                rows++; column=il+1;
		  if (il > dentstack[top]) {
		    dentstack[++top] = il;
                    /* return an INDENT token, except NEWLINE first */
		    dedentcount = -1;
                    }
		  else if (il < dentstack[top]) {
                    /* return one or more DEDENT tokens */
		    dedentcount=0;
                    /* count how many */
		    while (top>0 && dentstack[top]>il) {
                       dedentcount++; top--; }
		    if (dentstack[top] != il) {
		       fprintf(stderr, "Python indent error line %d\n", rows);
		       fflush(stderr); exit(1);
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
"def"	{return alctoken(DEF);}
"if"	{return alctoken(IF);}
"raise"	{return alctoken(RAISE);}
"None"	{return alctoken(NONE);}
"del"	{return alctoken(DEL);}
"import"	{return alctoken(IMPORT);}
"return"	{return alctoken(RETURN);}
"True"	{return alctoken(TRUE);}
"elif"	{return alctoken(ELIF);}
"in"	{return alctoken(IN);}
"try"	{return alctoken(TRY);}
"and"	{return alctoken(AND);}
"else"	{return alctoken(ELSE);}
"is"	{printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1);}
"while"	{return alctoken(WHILE);}
"as"	{return alctoken(AS);}
"except"	{return alctoken(EXCEPT);}
"lambda"	{return alctoken(LAMBDA);}
"with"	{return alctoken(WITH);}
"assert"	{return alctoken(ASSERT);}
"finally"	{return alctoken(FINALLY);}
"nonlocal"	{return alctoken(NONLOCAL);}
"yield"	{return alctoken(YIELD);}
"break"	{return alctoken(BREAK);}
"for"	{return alctoken(FOR);}
"not"	{return alctoken(NOT);}
"class"	{return alctoken(CLASS);}
"from"	{return alctoken(FROM);}
"or"	{return alctoken(OR);}
"continue"	{return alctoken(CONTINUE);}
"global"	{return alctoken(GLOBAL);}
"pass"	{return alctoken(PASS);}
"print"	{return alctoken(NAME);}
"input"	{return alctoken(NAME);}
"int"	{return alctoken(NAME);}
"str"	{return alctoken(NAME);}
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
"~"|"<<"|">>"|"&="|"|="|"^="|">>="|"<<="|"&"|"|"|"^"	{printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1);}
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
"@"|"`"|"$" {printf("\"%s\" this Python feature is not in PunY in file \"%s\" in line %d\n", yytext, current_file, rows);exit(1);}
(\"{3}([^\"]|\"\")*\"{3})	{return alctoken(STRING);}
(\'{3}([^\']|\'\')*\'{3})	{return alctoken(STRING);}
(\"([^\"]|\"\")*\") {int cat = alctoken(STRING); mksval(yytext); yylval.treeptr->leaf->issval = 1; return cat;}
(\'([^\']|\'\')*\') {int cat = alctoken(STRING); mksval(yytext); yylval.treeptr->leaf->issval = 1; return cat;}
-?[0-9]+	{column += strlen(yytext); int cat = alctoken(NUMBER); yylval.treeptr->leaf->ival = atoi(yytext); return cat;}
-?[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)? {column += strlen(yytext); int cat = alctoken(NUMBER); yylval.treeptr->leaf->dval = atof(yytext); return cat;}
[a-zA-Z_][a-zA-Z0-9_]*	{column += strlen(yytext); return alctoken(NAME);}
"#".*   { }
" "	{ }
.		{column++; printf("Lexical Error: %s in file \"%s\" line number: %d\n", yytext, current_file, rows); exit(1);}
%%

int indentlevel(char *s)
{      
   int column = 1;
   while(*s != '\0') {
      if (*s == '\t') {
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
   return real_yylex();
}