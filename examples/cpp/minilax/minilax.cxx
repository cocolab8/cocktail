# include <stdio.h>
# include "rMemory.h"
# include "Global.h"
# include "Scanner.h"
# include "Parser.h"
# include "Tree.h"
# include "ExtTree.h"
# include "Semantic.h"
# include "Types.h"
# include "Defs.h"
# include "ExtDefs.h"
# include "ICode.h"
# include "ICodeInt.h"

int main (int argc, char * argv [])
{
   class myScanner : public Scanner {
      int my_scanner_extension;
   };

   Parser ParserObj (new Scanner);
   Semantic SemanticObj;

   gErrors.StoreMessages (rtrue);
   if (argc > 1) ParserObj.ScannerObj->BeginFile (argv [1]);
   int ErrorCount = ParserObj.Parse ();
   delete ParserObj.ScannerObj;

   fprintf (stderr, "Memory%8ld", MemoryUsed);
   fprintf (stderr, "  Tree%8ld", Tree_PREFIX Tree_HeapUsed);
   fprintf (stderr, "  Defs%8ld\n", Defs_PREFIX Defs_HeapUsed);

   BeginTypes ();
   SemanticObj.Evaluate (Tree_PREFIX TreeRoot);

   fprintf (stderr, "Memory%8ld", MemoryUsed);
   fprintf (stderr, "  Tree%8ld", Tree_PREFIX Tree_HeapUsed);
   fprintf (stderr, "  Defs%8ld\n", Defs_PREFIX Defs_HeapUsed);

   if (ErrorCount == 0) {
      Code (Tree_PREFIX TreeRoot);
/*    WriteCode (); */
      Interpret ();
   }
   gErrors.WriteMessages (stderr);
   return 0;
}
