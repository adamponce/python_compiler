#ifndef TOKEN_H
#define TOKEN_H

struct token{
   int category;
   char *text;
   int lineno;
   char *filename;
   int ival;
   double dval;
   char *sval;
   int issval;
};

struct tree {
   int prodrule;
   char *symbolname;
   int nkids;
   struct token *leaf;   /* if nkids == 0; NULL for ε productions */
   struct tree *kids[1]; /*Max number of children in the production rules in the grammar *//* if nkids >0 */
};

int alctoken(int cat);
void printnode(struct tree *tmp);
#endif