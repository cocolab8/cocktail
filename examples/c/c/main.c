# include <sys/stat.h>
# include "rString.h"
# include "rMemory.h"
# include "Idents.h"
# include "Errors.h"
# include "Scanner.h"
# include "Parser.h"
# include "Tree.h"
# include "Trafo.h"
# include "deftab.h"

	int	error_count	= 0;

static	rbool	draw_tree	= rfalse;

static void compile
# ifdef HAVE_ARGS
   (char * input_file)
# else
   (input_file) char * input_file;
# endif
{
   InitStringMemory	();
   InitIdents		();
   BeginErrors		();
   begin_deftab		();
   BeginScanner		();
   Attribute.Position.FileName = NoIdent;

   if (input_file [0]) {
      struct stat buf;

      if (stat (input_file, & buf) < 0) {
	 MessageI ("cannot access file", xxError, NoPosition, xxString, input_file);
	 goto end;
      }
      MessageI ("parsing", xxInformation, NoPosition, xxString, input_file);
      Attribute.Position.FileName = MakeIdent (input_file, strlen (input_file));
      BeginFile (input_file);		/* select the input file	*/
   }

   StoreMessages	(rtrue);
   error_count += Parser ();
   CheckTree		(TreeRoot);	/* to be removed when tree is stable */
   name_analysis	(TreeRoot, NoTree);
/* the following can be defined if tcl + tk are available */
# ifdef DRAWTREE
   if (draw_tree) DrawTree (TreeRoot);
# endif

end:
   WriteMessages	(stderr);
   StoreMessages	(rtrue);	/* clear error store		*/
   StoreMessages	(rfalse);
   ReleaseTreeModule	();
   close_deftab		();
   CloseIdents		();
   CloseStringMemory	();
}

int main
# ifdef HAVE_ARGS
   (int argc, char * argv [])
# else
   (argc, argv) int argc; char * argv [];
# endif
{
   rbool	file_arg	= rfalse;

   while (argc > 1) {
      char * arg = argv [1];
      if (arg [0] == '-') {
         for (arg ++; * arg; arg ++) {
	    switch (arg [0]) {
	    case 'g': draw_tree = rtrue; break;
	    case 'h':
	       (void) printf ("\nusage: main [-h] [-g] [<source file>]\n\n");
	       (void) printf (" source file: C source program (default: standard input)\n");
# ifdef DRAWTREE
	       (void) printf (" g          : graphical visualization of the syntax tree\n");
# endif
	       (void) printf (" h          : help\n");
	       return 0;
	    }
	 }
      } else {
	 file_arg = rtrue;
	 compile (arg);
      }
      argc --;
      argv ++;
   }

   if (! file_arg) compile ("");
   CloserMemory ();
   return error_count;
}
