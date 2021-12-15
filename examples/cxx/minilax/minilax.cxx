# include <stdio.h>
# include "Global.h"
# include "Scanner.h"
# include "Parser.h"
# include "Tree.h"
# include "Defs.h"
# include "Semantic.h"
# include "Types.h"
# include "ICode.h"
# include "ICodeInt.h"

int main (int argc, char * argv [])
{
   class myScanner : public Scanner {
      int my_scanner_extension;
   };

   Parser ParserObj (new Scanner);

   gErrors.StoreMessages (rtrue);
   if (argc > 1) ParserObj.ScannerObj->BeginFile (argv [1]);
   int ErrorCount = ParserObj.Parse ();
   delete ParserObj.ScannerObj;
   BeginTypes		();
   Defs::Begin		();
   BeginSemantic	();
// Draw			(Tree::Root);
   Semantic		(Tree::Root);

   if (ErrorCount == 0) {
      Code		(Tree::Root);
/*    WriteCode		(); */
      Interpret		();
   }
   gErrors.WriteMessages (stderr);
   return 0;
}
