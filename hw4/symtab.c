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

int hash(int size, char *s)
{
    register int h = 0;
    register char c;
    while ((c = *s++)) {
        h += c & 0377;
        h *= 37;
    }
    if (h < 0) h = -h;
    return h % size;
}

struct sym_table * init_symbol_table(){
    struct sym_table * rv = (struct sym_table *) malloc(sizeof(struct sym_table));
    rv -> nBuckets = MAX_SIZE;
    rv -> nEntries = 0;
    return rv;
}

void insert_symbol(struct sym_table * st, char *name, char *type){
    int hash_value = hash(MAX_SIZE, name);
    struct sym_entry * head = st->tbl[hash_value];

    while(head != NULL){
        if(strcmp(head->s, name) == 0){
            return;
        }
        head = head->next;
    }

    struct sym_entry * new_entry = (struct sym_entry *) malloc(sizeof(struct sym_entry));
    new_entry->s = name;
    new_entry->type = type;
    new_entry->table = st;
    new_entry->next = st->tbl[hash_value];
    st->tbl[hash_value] = new_entry;
}


struct sym_entry * find_symbol(struct sym_table * st, char *name){
    int hash_value = hash(MAX_SIZE, name);
    struct sym_entry * head = st->tbl[hash_value];

    while(head != NULL){
        if(strcmp(head->s, name) == 0){
            return head;
        }
        head = head->next;
    }

    return NULL;
}

void printSymbolTable(struct sym_table *st){
    struct sym_entry * head;
    printf("Printing Symbol Table: \n");
    for(int i = 0; i < st->nBuckets; i++){
        head = st->tbl[i];
        while(head != NULL){
            printf("%s\n", head->s);
            head = head->next;
        }
    } 
}

