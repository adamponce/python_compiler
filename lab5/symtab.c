#include <stdio.h>
// #include <stdlib.h>
#include "symtab.h"
#include "tree.h"
#include "punygram.tab.h"

int hash(SymbolTable st, char *s){
   register int h = 0;
   register char c;
   while ((c = *s++)) {
      h += c & 0377;
      h *= 37;
      }
   if (h < 0) h = -h;
   return h % st->nBuckets;
}

SymbolTable new_st(int nbuckets) {
    int h;
    SymbolTable rv;
    rv = (SymbolTable) alloc(sizeof(struct sym_table));
    rv->tbl = (struct sym_entry **) alloc((unsigned int) (nbuckets * sizeof(struct sym_entry *)));
    rv->nBuckets = nbuckets;
    rv->nEntries = 0;
    return rv;
}

void printsyms(struct tree *t){
    // tree traversal to call printsymbol function
    int i;
    printsymbol(t->symbolname);
    for(i = 0; i < t->nkids; i++){
        // treeprint(t->kids[i], depth+1);
        printsyms(t->kids[i]);
    }
}

/* Jeffery's version -- gives seg fault */
// void printsyms(struct tree *t)
// {
//     if (t == NULL) return;
//     if (t->nkids > 0) {
//         int i;
//         for(i=0;i<t->nkids; i++) printsyms(t->kids[i]);
//     }
//     /* else you are a leaf, but are you an identifier? */
//     else {
//         if(t->leaf->category == NAME) printsymbol(t->leaf->text);
//     }
// }

void printsymbol(char *s)
{
   printf("%s\n", s); fflush(stdout);
}