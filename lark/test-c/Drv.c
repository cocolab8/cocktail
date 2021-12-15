# include "Position.h"
# include "Idents.h"
# include "Scanner.h"
# include "Parser.h"

int main
# ifdef HAVE_ARGS
   (int argc, char * argv [])
# else
   (argc, argv) int argc; char * argv [];
# endif
{
   if (argc > 1) {
# ifndef NO_FILE_NAME
      Attribute.Position.FileName = MakeIdent1 (argv [1]);
# endif
      BeginFile (argv [1]);
   } else {
# ifndef NO_FILE_NAME
      Attribute.Position.FileName = NoIdent;
# endif
   }
   Attribute.Position.Column = 1;
   (void) Parser ();
   CloseParser ();
   return 0;
}
