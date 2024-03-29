/**
 * symtab.c
 * Javier Reyna; Adam Schmidt; Nikki Sparacino
 * CSE423 Lab 5 
 * 
 * This program builds a symbol table for our Python compiler.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"
#include "tree.h"
#include "punygram.tab.h"

char *alloc(int n);

/* compute the hash value */
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

/* initialize a new symbol table*/
SymbolTable new_st(int nbuckets) {
    // int h; /* h not used */
    SymbolTable rv;
    rv = (SymbolTable) alloc((unsigned int) (sizeof(struct sym_table)));
    rv->tbl = (struct sym_entry **) alloc((unsigned int) (nbuckets * sizeof(struct sym_entry *)));
    rv->nBuckets = nbuckets;
    rv->nEntries = 0;
    return rv;
}

/* traverse the tree and call the printsymbol function for each node */
void printsyms(struct tree *t){
    // tree traversal to call printsymbol function
   int i;
   if(t == NULL) return;
   if(t->nkids > 0) {
      for(i = 0; i < t->nkids; i++){
         printsyms(t->kids[i]);
      }
   } else if (t->leaf) {
      if(t->leaf->category == NAME) {
         printsymbol(t->symbolname);
      }
   }  
}

/* error check calloc for NULL */
char *alloc(int n) {
   char *a = calloc(n, sizeof(char));
   if (a == NULL) {
      fprintf(stderr, "alloc(%d): out of memory\n", (int)n);
      exit(-1);
      }
   return a;
}

/* print the given symbol, s */
void printsymbol(char *s)
{
   printf("%s\n", s); fflush(stdout);
}