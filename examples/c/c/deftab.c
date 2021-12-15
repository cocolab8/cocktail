/* Ich, Doktor Josef Grosch, Informatiker, July 1996 */

# include "deftab.h"
# include "DynArray.h"
# include "Sets.h"
# include "Tree.h"
# include "Trafo.h"

# ifdef YYDEBUG
# include <stdio.h>
# include "Position.h"
# include "Scanner.h"
# endif

# define init_stack_size 32
# define init_set_size 1023

typedef struct { tIdent ident; tkind kind; } tdecl;
typedef	struct { unsigned short decl_count;
		 rbool is_typedef, is_struct;
		 ttype type;
		 tspecifier specifiers;
	       } tstack;

static	tSet		types_level_0	;	/* set of type names at level 0	*/
static	tSet		types_all	;	/* set of all type names */

static	unsigned long	stack_size	= init_stack_size;
static	tstack *	stack		;	/* stack of scopes	*/
static	int		stack_ptr	= 0;

static	unsigned long	decl_size	= init_stack_size;
static	tdecl *		decl		;	/* stores all redeclared type names */
static	int		decl_count	= 0;
static	tTree		no_type		;

void begin_deftab ARGS ((void))			/* initialization	*/
{
   MakeSet (& types_level_0, init_set_size);
   MakeSet (& types_all	   , init_set_size);
   MakeArray ((char * *) & stack, & stack_size, sizeof (tstack));
   MakeArray ((char * *) & decl , & decl_size , sizeof (tdecl ));
   stack [0].decl_count = 0;
   stack [0].is_typedef = rfalse;
   stack [0].is_struct  = rfalse;
   stack [0].type	= no_type = msimple_type (0);
}

void close_deftab ARGS ((void))			/* finalization		*/
{
   ReleaseSet (& types_level_0);
   ReleaseSet (& types_all);
   ReleaseArray ((char * *) & stack, & stack_size, sizeof (tstack));
   ReleaseArray ((char * *) & decl , & decl_size , sizeof (tdecl ));
}

static void resize_sets ARGS ((void))	/* resize sets of type names	*/
{
   int new_size = Size (& types_all) * 2;
   ResizeSet (& types_all, new_size);
   ResizeSet (& types_level_0, new_size);
}

void push					/* push a scope		*/
# ifdef HAVE_ARGS
   (rbool is_struct)
# else
   (is_struct) rbool is_struct;
# endif
{
   stack_ptr ++;
   if (stack_ptr == stack_size)
      ExtendArray ((char * *) & stack, & stack_size, sizeof (tstack));
   stack [stack_ptr].decl_count = decl_count;
   stack [stack_ptr].is_typedef = rfalse;
   stack [stack_ptr].is_struct = is_struct;	/* whether scope is for struct */
		/* declarators in structs do not redeclare type names	*/
}

void pop ARGS ((void))				/* pop a scope		*/
{
   decl_count = stack [stack_ptr --].decl_count;
}

void typedef_on ARGS ((void))		/* start processing a typedef statement */
{					/* declarators denote typedef names */
   stack [stack_ptr].is_typedef = rtrue;
}

void typedef_off ARGS ((void))		/* end processing a typedef statement */
{					/* declarators denote variable names */
   stack [stack_ptr].is_typedef = rfalse;
}

rbool is_typedef ARGS ((void))		/* are we processing a typedef statement ? */
{
   return stack [stack_ptr].is_typedef;
}

void store_type			/* store element type for current scope */
# ifdef HAVE_ARGS
   (tspecifier_l specifier_l)
# else
   (specifier_l) tspecifier_l specifier_l;
# endif
{
   stack [stack_ptr].type = get_type (specifier_l);
   stack [stack_ptr].specifiers = get_specifiers (specifier_l);
}

void reset_type ARGS ((void))	/* reset element type for current scope */
{
   stack [stack_ptr].type = no_type;
}

ttype current_type ARGS ((void))	/* return type for current scope */
{
   return stack [stack_ptr].type;
}

tspecifier current_specifiers ARGS ((void)) /* return specifiers for current scope */
{
   return stack [stack_ptr].specifiers;
}

static void enter_decl		/* store a declaration that redeclares a type name */
# ifdef HAVE_ARGS
   (tIdent ident, tkind kind)
# else
   (ident, kind) tIdent ident; tkind kind;
# endif
{
# ifdef YYDEBUG
   printf ("ENTER ");
   WritePosition (stdout, Attribute.Position);
   printf (" %s\n", GetCStr (ident));
# endif

   decl_count ++;
   if (decl_count == decl_size)
      ExtendArray ((char * *) & decl, & decl_size, sizeof (tdecl));
   decl [decl_count].ident = ident;
   decl [decl_count].kind  = kind;
}

void declare	/* called for every declarator that could redeclare a type name */
# ifdef HAVE_ARGS
   (tIdent ident)
# else
   (ident) tIdent ident;
# endif
{
# ifdef YYDEBUG
   printf ("DECL  ");
   WritePosition (stdout, Attribute.Position);
   printf (" %s\n", GetCStr (ident));
# endif

   if (ident > Size (& types_all)) resize_sets ();
   if (stack [stack_ptr].is_typedef) {
      Include (& types_all, ident);
      if (stack_ptr == 0)
	 Include (& types_level_0, ident);
      else
	 enter_decl (ident, k_typedef);
   } else {
      if (stack_ptr > 0 && ! stack [stack_ptr].is_struct && IsElement (ident, & types_all))
	 enter_decl (ident, k_ident);
   }
}

void declare_enum	/* called for every enumerator */
# ifdef HAVE_ARGS
   (tIdent ident)
# else
   (ident) tIdent ident;
# endif
{
# ifdef YYDEBUG
   printf ("ENUM  ");
   WritePosition (stdout, Attribute.Position);
   printf (" %s\n", GetCStr (ident));
# endif

   if (ident > Size (& types_all)) resize_sets ();
   if (stack_ptr > 0 && IsElement (ident, & types_all))
      enter_decl (ident, k_enum);
}

rbool is_type_name	/* check whether a name is a type name in the current scope */
# ifdef HAVE_ARGS
   (tIdent ident)
# else
   (ident) tIdent ident;
# endif
{
   if (ident > Size (& types_all)) resize_sets ();
   if (IsElement (ident, & types_all)) {
      register int i;
      for (i = decl_count; i > 0; i --)
         if (decl [i].ident == ident)
	    return decl [i].kind == k_typedef;
      return IsElement (ident, & types_level_0);
   }
   return rfalse;
}
