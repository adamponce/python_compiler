#ifndef TYPE_H
#define TYPE_H

#include "tree.h"

typedef struct param {
   char *name;
   struct typeinfo *type;
   struct param *next;
} *paramlist;

struct field {			/* members (fields) of structs */
   char *name;
   struct type *elemtype;
};

/* base types. How many more base types do we need? */
#define FIRST_TYPE   1000000

#define NONE_TYPE    1000000
#define INT_TYPE     1000001
#define LIST_TYPE    1000002
#define FLOAT_TYPE   1000003
#define FUNC_TYPE    1000004
#define DICT_TYPE    1000005
#define BOOL_TYPE    1000006
#define STRING_TYPE  1000007
#define PACKAGE_TYPE 1000008
#define ANY_TYPE     1000009

#define LAST_TYPE    1000009

typedef struct typeinfo {
   int basetype;
   union {
      struct funcinfo {
         struct typeinfo *returntype;
         int nparams;
         struct param *parameters;
      }f;
      struct listinfo {
         int size;
         struct typeinfo *elemtype;
      }l;
      struct dictinfo {
         struct sym_table *st;
      }d;
   } u;
} *typeptr;

/* add constructors for other types as needed */
typeptr alctype(int);
void alcfunctype(struct sym_table *st, char *return_symbol, int nparams, char *tmp_params[]);
void add_to_list(struct param **head, char *name, struct typeinfo *tmp_type);
char *typename(typeptr t);
typeptr return_type(char *type);

extern struct sym_table *global_table;
extern typeptr none_typeptr;
extern typeptr integer_typeptr;
extern typeptr list_typeptr;
extern typeptr float_typeptr;
extern typeptr func_typeptr;
extern typeptr dict_typeptr;
extern typeptr bool_typeptr;
extern typeptr string_typeptr;
extern typeptr package_typeptr;
extern typeptr any_typeptr;

extern char *typenam[];

#endif