/**
* @file symtab.h
*
* @author Javier Reyna Adam Schmidt Nikki Sparacino
*
* @date 03/22/2023
*
* Assignment: Homework 4
*/

#ifndef SYMTAB_H
#define SYMTAB_H
#define MAX_SIZE 10

struct sym_table{
   int nBuckets;
   int nEntries;
   char *name;		
   struct sym_entry *tbl[MAX_SIZE];
};

struct sym_entry{
   struct sym_table *table;
   char *s;				/* string */
   struct typeinfo *type;
   struct sym_entry *next;
};

int hash(int size, char *s);
void insert_symbol(struct sym_table *st, char *name, char *type);
struct sym_table *init_symbol_table();
struct sym_entry *find_symbol(struct sym_table *st, char *name);
void printSymbolTable(struct sym_table *st);

#endif