#include "tree.h"

/*Symbol table that uses an array of linked lists*/
typedef struct sym_table {
   int nBuckets;			/* # of buckets */
   int nEntries;			/* # of symbols in the table */
//   struct sym_table *parent;		/* enclosing scope, superclass etc. */
   struct sym_entry **tbl;
   /* more per-scope/per-symbol-table attributes go here */
   } *SymbolTable;

typedef struct sym_entry {
   SymbolTable table;			/* what symbol table do we belong to*/
   char *s;				/* string */
   char *type;       /*type name*/
   /* more symbol attributes go here for code generation */
   struct sym_entry *next;
   } *SymbolTableEntry;

int hash(SymbolTable st, char *s);
void printsyms(struct tree *t);
void printsymbol(char *s);