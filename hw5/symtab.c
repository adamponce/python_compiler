/**
* @file symtab.c
*
* @author Javier Reyna Adam Schmidt Nikki Sparacino
*
* @date 03/22/2023
*
* Assignment: Homework 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"
#include "tree.h"
#include "type.h"
#include "punygram.tab.h"

#define COLOR_BOLD "\e[33m"
#define COLOR_END "\e[m"

extern char* current_file;
extern int rows;

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

void insert_symbol(struct sym_table *st, char *name, char *type){
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
    /* type comparisons here */
    if(strcmp(type, "none") == 0) {
        new_entry->type = alctype(NONE_TYPE);

    } else if(strcmp(type, "int") == 0) {
        new_entry->type = alctype(INT_TYPE);

    } else if(strcmp(type, "class") == 0) {
        new_entry->type = alctype(CLASS_TYPE);

    } else if(strcmp(type, "list") == 0) {
        new_entry->type = alctype(LIST_TYPE);

    } else if(strcmp(type, "float") == 0) {
        new_entry->type = alctype(FLOAT_TYPE);

    } else if(strcmp(type, "func") == 0) {
        new_entry->type = alctype(FUNC_TYPE);
        
    } else if(strcmp(type, "dict") == 0) {
        new_entry->type = alctype(DICT_TYPE);
        
    } else if(strcmp(type, "bool") == 0) {
        new_entry->type = alctype(BOOL_TYPE);
        
    } else if((strcmp(type, "string") == 0)) {
        new_entry->type = alctype(STRING_TYPE);
        
    } else if(strcmp(type, "package") == 0) {
        new_entry->type = alctype(PACKAGE_TYPE);
        
    } else if(strcmp(type, "any") == 0) {
        new_entry->type = alctype(ANY_TYPE);
        
    } else {
        printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
        printf("Invalid Type: \"%s\" filename: %s line number: %d\n", type, current_file, rows);
        exit(3);
    }
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
    printf("---symbol table for: %s---\n", st->name);
    for(int i = 0; i < st->nBuckets; i++){
        head = st->tbl[i];
        while(head != NULL){
            // printf("\t%s\n", head->s);
            printf("\t%s\t%s\n", typename(head->type), head->s);
            head = head->next;
        }
    } 
}

