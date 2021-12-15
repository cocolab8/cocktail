static char rcsid [] =
   "$Id: IdentsDr.c,v 1.17 2008/09/12 14:13:00 grosch rel $";

# include "config.h"
# include <stdio.h>
# include "Idents.h"
# include "rMemory.h"

# define count 32

static void stress_test ARGS ((void))
{
   char string [256];
   tIdent ident = NoIdent;
   int i, j;
# if HAVE_WCHAR_T
   wchar_t w_string [256] = L"IDENTIFIER-";
   tWIdent w_ident = NoWIdent;
   int k;
# endif

   for (i = 0; i < count; i ++) {
      for (j = 0; j < 1000; j ++) {
	 sprintf (string, "IDENTIFIER-%d", i * 1000 + j);
	 ident = MakeIdent1 (string);
# if HAVE_WCHAR_T
	 for (k = 11;; k ++) {
	    w_string [k] = string [k];
	    if (string [k] == '\0') break;
	 }
	 w_ident = MakeWIdent1 (w_string);
# endif
      }
      printf (".");
   }
   printf ("\n");
   WriteIdent (stdout, ident);
   printf ("\n");
# if HAVE_WCHAR_T
   WriteWIdent (stdout, w_ident);
   printf ("\n");
# endif
   printf ("\nMaxIdent = %u\n", (unsigned int) MaxIdent ());
   printf ("\n");
   for (i = 0; i < count; i ++) {
      for (j = 0; j < 1000; j ++) {
	 sprintf (string, "IDENTIFIER-%d", i * 1000 + j);
	 ident = MakeIdent1 (string);
# if HAVE_WCHAR_T
	 for (k = 11;; k ++) {
	    w_string [k] = string [k];
	    if (string [k] == '\0') break;
	 }
	 w_ident = MakeWIdent1 (w_string);
# endif
      }
      printf (".");
   }
   printf ("\n");
   WriteIdent (stdout, ident);
   printf ("\n");
# if HAVE_WCHAR_T
   WriteWIdent (stdout, w_ident);
   printf ("\n");
# endif
   printf ("\nMaxIdent = %u\n", (unsigned int) MaxIdent ());
   printf ("\n");
}

static void dialog_test ARGS ((void))
{
   char string [256];
   tIdent ident;

   printf ("enter strings, one per line, - terminates\n");
   do {
      scanf ("%s", string);
      ident = MakeIdent1 (string);
      WriteIdent (stdout, ident);
      printf ("\n");
   } while (string [0] != '-' || string [1] != '\0');
   printf ("\n");
   WriteIdents ();
   printf ("Memory used %ld\n", MemoryUsed);
}

int main ARGS ((void))
{
   stress_test ();
   CloseIdents ();
   BeginIdents ();
   stress_test ();
   CloseIdents ();
   BeginIdents ();
   dialog_test ();
   CloseIdents ();
   BeginIdents ();
   dialog_test ();
   CloseIdents ();
   return 0;
}
