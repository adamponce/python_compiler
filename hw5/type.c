#include <stdio.h>
#include <stdlib.h>
#include "type.h"
#include "symtab.h"
#include "tree.h"
#include "symtab.h"
#include "punygram.tab.h"
   
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
typeptr alcfunctype(struct tree *r, struct tree *p, struct sym_table *st)
{
   typeptr rv = alctype(FUNC_TYPE);
   if (rv == NULL) return NULL;
   // rv->u.f.st = st;
   // rv->u.f.name = 
   /* defined: prototype=0; not prototype=1 */
   // rv->u.f.defined = 0;
   // rv->u.f.returntype = 
   /* fill in return type and paramlist by traversing subtrees */
   /* rf->u.f.returntype = ... */
   return rv;
}

/* maybe list size determination from a tree noteptr is still reasonable? */
// typeptr alclist(typeptr etype, struct tree *sz)
// {
//    typeptr rv = alctype(LIST_TYPE);
//    rv->u.l.elemtype = etype;
//    // if (sz != NULL && sz->nkids==0 && sz->leaf->category==ICON) {
//    if (sz != NULL && sz->nkids==0) {
//       rv->u.l.size = sz->leaf->ival;
//    }
//    else
//       rv->u.l.size = 0;
//    return rv;
// }

typeptr alcdicttype() {
   typeptr rv = alctype(DICT_TYPE);

   return rv;
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

/* checking types for:
   - functions -> when calling functions, check for correct # params, param types, and return types
   - assignments (a = b stuff)
   - operators
*/
void typecheck(struct tree *t) {
   if(t == NULL){
      return;
   }



   for(int i = 0; i < t->nkids; i++){
        typecheck(t->kids[i]);
    }

}