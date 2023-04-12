#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "punygram.tab.h"

extern char *yyname(int);
int serial;

/* add a \ before leading and trailing double quotes */
char *escape(char *s) {
    char *s2 = malloc(strlen(s)+4);
    int len = strlen(s);
    int j = 0;
    for(int i = 0; i < len; i++) {
        if(s[i] == '\"') {
            if (s[len-1] != '\"') {
                fprintf(stderr, "What is it?!\n");
            }
            s2[j] = '\\';
            j++;
            s2[j] = '\"';
            j++;
        } else {
            s2[j] = s[i];
            j++; 
        }
    }
    return s2;
}

char *pretty_print_name(struct tree *t) {
    char *s2 = malloc(40);
    if (t->leaf == NULL) {
        sprintf(s2, "%s#%d", t->symbolname, t->prodrule%10);
        return s2;
    }
    else {
        sprintf(s2,"%s:%d", escape(t->leaf->text), t->leaf->category);
        return s2;
    }
}

void print_branch(struct tree *t, FILE *f) {
    fprintf(f, "N%d [shape=box label=\"%s\"];\n", t->id, pretty_print_name(t));
}

void print_leaf(struct tree *t, FILE *f) {
    char * s = yyname(t->leaf->category);
    // print_branch(t, f);
    fprintf(f, "N%d [shape=box style=dotted label=\" %s \\n ", t->id, s);
    fprintf(f, "text = %s \\l lineno = %d \\l\"];\n", escape(t->leaf->text), t->leaf->lineno);
}

void print_graph2(struct tree *t, FILE *f) {
    int i;
    /* if a leaf, print leaf */
    if (t->leaf != NULL) {
        print_leaf(t, f);
        return;
    }
    /* not a leaf ==> internal node */
    print_branch(t, f);
    for(i=0; i < t->nkids; i++) {
        if (t->kids[i] != NULL) {
            fprintf(f, "N%d -> N%d;\n", t->id, t->kids[i]->id);
            print_graph2(t->kids[i], f);
        }
        else { /* NULL kid, epsilon production or something */
            fprintf(f, "N%d -> N%d%d;\n", t->id, t->id, serial);
            fprintf(f, "N%d%d [label=\"%s\"];\n", t->id, serial, "Empty rule");
            // fprintf(f, "N%d%d [label=\"Empty rule: %s\"];\n", t->id, serial, t->symbolname);
            serial++;
        }
    }
}

/**
 * print the graph and write to filename
 * filename should end in the .dot extension.
 */
void print_graph(struct tree *t, char *filename) {
    FILE *f = fopen(filename, "w"); /* should check for NULL */
    if (f == NULL) {
        fprintf(stderr, "Can't open %s\n", filename);
        fflush(stderr);
        exit(-1);
    }
    fprintf(f, "digraph {\n");
    print_graph2(t, f);
    fprintf(f,"}\n");
    fclose(f);
}

