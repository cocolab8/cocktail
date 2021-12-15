# include <stdio.h>
# include "ratc.h"
# include "rMemory.h"
# include "Errors.h"
# include "Scanner.h"
# include "Parser.h"
# include "Tree.h"
# include "Semantic.h"
# include "Types.h"
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
   fprintf (stderr, "  Tree%8ld\n", Tree_HeapUsed);

   BeginTypes ();
   BeginSemantic ();
   Semantic (TreeRoot);

   fprintf (stderr, "Memory%8ld", MemoryUsed);
   fprintf (stderr, "  Tree%8ld\n", Tree_HeapUsed);

   if (ErrorCount == 0) {
      Code (TreeRoot);
      ResolveLabels ();
/*    WriteCode (); */
      Interpret ();
   }
   WriteMessages (stderr);
   return 0;
}
