static char rcsid [] =
   "$Id: IdentsDrv.c,v 1.7 1995/05/09 13:53:42 grosch rel $";

# include "config.h"
# include <stdio.h>
# include "rMemory.h"
# include "Global.h"
# include "rString.h"

# if defined _MSC_VER
#  pragma warning (disable:4505 4514)
# endif

# if defined _MSC_VER & (_MSC_VER <= 800)
#  define count 6
// MSVC 1.52 restricts array size to 64 KB, contrary to memory model HUGE
# else
#  define count 32
# endif

static void stress_test ARGS ((void))
{
   char string [256];
   tIdent ident = gIdents.NoIdent;
   int i, j;
# if HAVE_WCHAR_T
   wchar_t w_string [256] = L"IDENTIFIER-";
   tWIdent w_ident = gIdents.NoWIdent;
   int k;
# endif

   for (i = 0; i < count; i ++) {
      for (j = 0; j < 1000; j ++) {
	 sprintf (string, "IDENTIFIER-%d", i * 1000 + j);
	 ident = gIdents.MakeIdent (string);
# if HAVE_WCHAR_T
	 for (k = 11;; k ++) {
	    w_string [k] = string [k];
	    if (string [k] == '\0') break;
	 }
	 w_ident = gIdents.MakeIdent (w_string);
# endif
      }
      printf (".");
   }
   printf ("\n");
   gIdents.WriteIdent (stdout, ident);
   printf ("\n");
# if HAVE_WCHAR_T
   gIdents.WriteWIdent (stdout, w_ident);
   printf ("\n");
# endif
   printf ("\nMaxIdent = %u\n", (unsigned int) gIdents.MaxIdent ());
   printf ("\n");
   for (i = 0; i < count; i ++) {
      for (j = 0; j < 1000; j ++) {
	 sprintf (string, "IDENTIFIER-%d", i * 1000 + j);
	 ident = gIdents.MakeIdent (string);
# if HAVE_WCHAR_T
	 for (k = 11;; k ++) {
	    w_string [k] = string [k];
	    if (string [k] == '\0') break;
	 }
	 w_ident = gIdents.MakeIdent (w_string);
# endif
      }
      printf (".");
   }
   printf ("\n");
   gIdents.WriteIdent (stdout, ident);
   printf ("\n");
# if HAVE_WCHAR_T
   gIdents.WriteWIdent (stdout, w_ident);
   printf ("\n");
# endif
   printf ("\nMaxIdent = %u\n", (unsigned int) gIdents.MaxIdent ());
   printf ("\n");
}

static void dialog_test (void)
{
   char string [256];
   tIdent ident;

   printf ("enter strings, one per line, - terminates\n");
   do {
      scanf ("%s", string);
      ident = gIdents.MakeIdent (string, strlen (string));
      gIdents.WriteIdent (stdout, ident);
      printf ("\n");
   } while (string [0] != '-' || string [1] != '\0');
   printf ("\n");
   gIdents.WriteIdents ();
   printf ("Memory used %ld\n", MemoryUsed);
}

int main (void)
{
   stress_test ();
   gIdents.~Idents ();
   gIdents.InitIdents ();
   stress_test ();
   gIdents.~Idents ();
   gIdents.InitIdents ();
   dialog_test ();
   gIdents.~Idents ();
   gIdents.InitIdents ();
   dialog_test ();
   gIdents.~Idents ();
   return 0;
}
