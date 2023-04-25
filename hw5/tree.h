#ifndef TREE_H
#define TREE_H

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

struct addr {
  int region;
  union {
  int offset;
  char *name;
  } u;
};


struct tree {
   int prodrule;
   char *symbolname;
   int nkids;
   struct token *leaf;   /* if nkids == 0; NULL for ε productions */
   struct tree *kids[8]; /*Max number of children in the production rules in the grammar *//* if nkids >0 */
   int sn;
   int id;     /* unique identifier for Dot */
   int first;
   int follow;
   int onTrue;
   int onFalse;
   struct addr label;
};

int alctoken(int cat);
void printnode(struct tree *tmp);
struct tree *alctree(int prodrule, char *symbol_name, int nkids, struct tree *child1, struct tree *child2,
struct tree *child3, struct tree *child4, struct tree *child5, struct tree *child6, struct tree *child7, struct tree *child8);
void treeprint(struct tree *t, int depth);
struct tree *alocnull(char *symbol_name);
char *humanreadable(struct tree *t);
void treetraversal(struct tree *t);
void typecheck(struct tree *t);
int check_types(int type1, int type2);
void incompatable_error(char *tmp);

#endif
