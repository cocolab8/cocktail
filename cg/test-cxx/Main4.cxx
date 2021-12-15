# include "Tree.h"
# include "Global.h"
# include "rSystem.h"

using namespace Tree;

void ErrorCheck (char * s, FILE * f)
{  if (f == 0) printf ("Error: %s\n", s); }

void PrintMark (tTree t)
{  printf ("%d ", ((Node *) t)->Mark); }

int main ()
{
   tTree n;
   FILE * f;
   int i;

   Begin ();

   Configure ("CheckReportNoTree", "1"	);
   Configure ("CheckReportNodes", "1"	);
   Configure ("DrawBoxHeight"	, "22"	);
   Configure ("DrawBoxWidth"	, "70"	);
   Configure ("DrawDepth"	, "8"	);
   Configure ("DrawLength"	, "25"	);
   Configure ("DrawFileName"	, "g.ast");
   Configure ("TreatTVAasChild"	, "1"	);

   try {
      f = fopen	("a", "r");
      ErrorCheck ("fopen (a, r)", f);
      printf	("fopen (a, r)\n");
      n = Read	(f);
      fclose	(f);
   } catch (char * c) {
      fclose	(f);
      printf	("Read failed: %s\n", c);
      n = NoTree;
   }

   n->Draw ();

   try {
      f = fopen	("b", "r");
      ErrorCheck ("fopen (b, r)", f);
      printf	("fopen (b, r)\n");
      n = Get	(f);
      fclose	(f);
   } catch (char * c) {
      fclose	(f);
      printf	("Get failed: %s\n", c);
      n = NoTree;
   }

   n->Draw ();

   Close	();

   return 0;
}
