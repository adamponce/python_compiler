#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.h"
#include "symtab.h"
#include "tree.h"
#include "symtab.h"
#include "punygram.tab.h"

#define COLOR_BOLD "\e[33m"
#define COLOR_END "\e[m"

extern char* current_file;
extern int rows;
struct sym_entry *symbol;

struct typeinfo none_type = { NONE_TYPE };
struct typeinfo integer_type = { INT_TYPE };
struct typeinfo list_type = { LIST_TYPE };
struct typeinfo float_type = { FLOAT_TYPE };
struct typeinfo func_type = { FUNC_TYPE };
struct typeinfo dict_type = { DICT_TYPE };
struct typeinfo bool_type = { BOOL_TYPE };
struct typeinfo string_type = { STRING_TYPE };
struct typeinfo package_type = { PACKAGE_TYPE };
struct typeinfo any_type = { ANY_TYPE };


typeptr none_typeptr = &none_type;
typeptr integer_typeptr = &integer_type;
typeptr list_typeptr = &list_type;
typeptr float_typeptr = &float_type;
typeptr func_typeptr = &func_type;
typeptr dict_typeptr = &dict_type;
typeptr bool_typeptr = &bool_type;
typeptr string_typeptr = &string_type;
typeptr package_typeptr = &package_type;
typeptr any_typeptr = &any_type;

char *typenam[] =  {"none", "int", "list", "float", "func", 
                     "dict", "bool", "string", "package", "any"};

typeptr alctype(int base)
{
   if (base == NONE_TYPE) return none_typeptr;
   else if (base == INT_TYPE) return integer_typeptr;
   else if (base == LIST_TYPE) return list_typeptr;
   else if (base == FLOAT_TYPE) return float_typeptr;
   else if (base == FUNC_TYPE) return func_typeptr;
   else if (base == DICT_TYPE) return dict_typeptr;
   else if (base == BOOL_TYPE) return bool_typeptr;
   else if (base == STRING_TYPE) return string_typeptr;
   else if (base == PACKAGE_TYPE) return package_typeptr;
   else if (base == ANY_TYPE) return any_typeptr;

   /* if none of the above matched, create unique type */
   typeptr rv;
   rv = (typeptr) calloc(1, sizeof(struct typeinfo));
   if (rv == NULL) return rv;
   rv->basetype = base;
   return rv;
}

/* in order for this to make any sense, you have to pass in the subtrees
 * for the return type (r) and the parameter list (p), but the calls to
 * to this function in the example are just passing NULL at present!
 */
typeptr alcfunctype(struct sym_table *st, char *return_symbol, int nparams, char *tmp_params[])
{
    typeptr rv = alctype(FUNC_TYPE);
    if (rv == NULL) return NULL;
    if(return_symbol == NULL) {
        /* return type is NONE_TYPE */
        rv->u.f.returntype = alctype(NONE_TYPE);
    } else {
        struct sym_entry *symbol = find_symbol(st, return_symbol);
        rv->u.f.returntype = symbol->type;
    }

    rv->u.f.nparams = nparams;

    if (nparams > 0) {
        struct param *head = NULL;
        // struct type_info *tmp_type = alctype(ANY_TYPE);

        for(int i = 0; i < nparams; i++) {
            struct param *new_param = (paramlist) malloc(sizeof(struct param));
            new_param->name = tmp_params[i];
            new_param->type = find_symbol(st, tmp_params[i])->type;

            new_param->next = head;
            head = new_param;
        }
        rv->u.f.parameters = head;

        paramlist curr = head;
        while (curr != NULL) {
            curr = curr->next;
        }
    } else {
        rv->u.f.parameters = NULL;
    }

    return rv;
}


typeptr return_type(char *type) {
   if(strcmp(type, "none") == 0) {
        return alctype(NONE_TYPE);

    } else if(strcmp(type, "int") == 0) {
        return alctype(INT_TYPE);

    } else if(strcmp(type, "list") == 0) {
        return alctype(LIST_TYPE);

    } else if(strcmp(type, "float") == 0) {
        return alctype(FLOAT_TYPE);

    } else if(strcmp(type, "func") == 0) {
        return alctype(FUNC_TYPE);
        
    } else if(strcmp(type, "dict") == 0) {
        return alctype(DICT_TYPE);
        
    } else if(strcmp(type, "bool") == 0) {
        return alctype(BOOL_TYPE);
        
    } else if((strcmp(type, "str") == 0)) {
        return alctype(STRING_TYPE);
        
    } else if(strcmp(type, "package") == 0) {
        return alctype(PACKAGE_TYPE);
        
    } else if(strcmp(type, "any") == 0) {
        return alctype(ANY_TYPE);
    } else {
        printf(COLOR_BOLD "SEMANTIC ERROR: " COLOR_END);
        printf("Invalid Type: \"%s\" filename: %s line number: %d\n", type, current_file, rows);
        exit(3);
    }
}

/* return the typename of a given type as a string */
char *typename(typeptr t)
{
   if(!t) {
      return "(NULL)";
   } else if (t->basetype < FIRST_TYPE || t->basetype > LAST_TYPE) {
      return "(BOGUS)";
   } else {
      return typenam[t->basetype-1000000];
   } 
}