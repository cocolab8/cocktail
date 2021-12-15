# include <stdio.h>
# include "ratc.h"
# include "rMemory.h"
# include "Errors.h"
# include "Scanner.h"
# include "Parser.h"
# include "Tree.h"
# include "Semantic.h"
# include "Types.h"
# include "Defs.h"
# include "ICode.h"
# include "ICodeInt.h"

int main
# ifdef HAVE_ARGS
   (int argc, char * argv [])
# else
   (argc, argv) int argc; char * argv [];
# endif
{
   int ErrorCount;

   StoreMessages (rtrue);
   if (argc > 1) BeginFile (argv [1]);
   ErrorCount = Parser ();

   fprintf (stderr, "Memory%8ld", MemoryUsed);
   fprintf (stderr, "  Tree%8ld", Tree_HeapUsed);
   fprintf (stderr, "  Defs%8ld\n", Defs_HeapUsed);

   BeginTypes ();
   BeginDefs ();
   BeginSemantic ();
   Semantic (TreeRoot);

   fprintf (stderr, "Memory%8ld", MemoryUsed);
   fprintf (stderr, "  Tree%8ld", Tree_HeapUsed);
   fprintf (stderr, "  Defs%8ld\n", Defs_HeapUsed);

   if (ErrorCount == 0) {
      Code (TreeRoot);
/*    WriteCode (); */
      Interpret ();
   }
   WriteMessages (stderr);
   return 0;
}
