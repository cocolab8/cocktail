# include "Tree.h"
# include "Global.h"
# include "rSystem.h"

# ifdef _MSC_VER
#  pragma warning (disable: 4514)
# endif

using namespace Tree;

void ErrorCheck (char * s, FILE * f)
{  if (f == 0) printf ("Error: %s\n", s); }

void PrintMark (tTree t)
{  printf ("%d ", ((Node *) t)->Mark); }

int main ()
{
   Node2 * n1, * n2;
   Node1 * n3, * n4, * n5;
   tTree n, Root1, Root2, Root3;
   FILE * f;

   Begin ();

   Configure ("CheckReportNoTree", "1"	);
   Configure ("CheckReportNodes", "1"	);
   Configure ("DrawBoxHeight"	, "22"	);
   Configure ("DrawBoxWidth"	, "70"	);
   Configure ("DrawDepth"	, "8"	);
   Configure ("DrawLength"	, "25"	);
   Configure ("DrawFileName"	, "g.ast");
   Configure ("TreatTVAasChild"	, "1"	);

   n1 = new Node2 ();
   n2 = new Node2 ();
   n3 = new Node1 ();
   n4 = new Node1 ();
   n5 = new Node1 ();

   n1->Mark = 1;
   n2->Mark = 2;
   n3->Mark = 3;
   n4->Mark = 4;
   n5->Mark = 5;

   n1->Ident = gIdents.MakeIdent ("1", 1);
   n2->Ident = gIdents.MakeIdent ("2", 1);
   n3->Ident = gIdents.MakeIdent (" 3 3", 4);		/* white space	*/
   n4->Ident = gIdents.MakeIdent ("", 0);		/* NoIdent	*/
   n5->Ident = gIdents.MakeIdent ("5", 1);

   n1->String = gStringM.PutString ("1", 1);
   n2->String = gStringM.PutString ("2", 1);
   n3->String = gStringM.PutString (" 3 3", 4);		/* white space	*/
   n4->String = gStringM.PutString ("", 0);		/* empty string	*/
   n5->String = gStringM.PutString ("5", 1);

   n1->Hex = 1;
   n2->Hex = 2;
   n3->Hex = 3;
   n4->Hex = 4;
   n5->Hex = 5;

   n = n1;
   n1->Child1 = n2;
   n1->Child2 = n2;
   n1->Child3 = new Node0 (0, 1, gStringM.PutString (""), 0, 0, 0);
   n2->Child1 = n3;
   n2->Child2 = n5;
   n2->Child3 = new Node0 (0, 1, gStringM.PutString (""), 0, 0, 0);
   n3->Child1 = n4;
   n4->Child1 = n3;
   n5->Child1 = n5;

/*
   {					/ * test more than 65535 nodes * /
      tTree t = NoTree;
      long i;
      for (i = 1; i <= 70000; i ++) {
	 t = new Node1 (7, MakeIdent1 ("7"), PutString ("7", 1), NoTree, NoTree, 7, t);
      }
      n4->Child1 = t;
   }
*/

   selector = false;

   f = fopen	("a", "w");
   ErrorCheck	("fopen (a, w)", f);
   printf	("fopen (a, w)\n");
   Write	(f, n);
   fclose	(f);

   f = fopen	("a", "r");
   ErrorCheck	("fopen (a, r)", f);
   printf	("fopen (a, r)\n");
   Root1 = Read	(f);
   fclose	(f);

   f = fopen	("b", "w");
   ErrorCheck	("fopen (b, w)", f);
   printf	("fopen (b, w)\n");
   Put		(f, Root1);
   fclose	(f);

   f = fopen	("b", "r");
   ErrorCheck	("fopen (b, r)", f);
   printf	("fopen (b, r)\n");
   Root2 = Get	(f);
   fclose	(f);

   f = fopen	("aa", "w");
   ErrorCheck	("fopen (aa, w)", f);
   printf	("fopen (aa, w)\n");
   Write	(f, Root2);
   fclose	(f);

   f = fopen	("bb", "w");
   ErrorCheck	("fopen (bb, w)", f);
   printf	("fopen (bb, w)\n");
   Put		(f, Root2);
   fclose	(f);

   Root3 = Copy	(Root2);
   f = fopen	("aaa", "w");
   ErrorCheck	("fopen (aaa, w)", f);
   printf	("fopen (aaa, w)\n");
   Write	(f, Root3);
   fclose	(f);

# ifndef _MSC_VER
   int i = rSystem ("set -x; cmp a aa; cmp b bb; cmp a aaa");
   if (i < 0)	printf ("Error: rSystem, RC: %d\n", i);
# endif

   TraverseTD	(Root2, PrintMark);
   TraverseBU	(Root2, PrintMark);
   printf	("\n");

   Check	(Root3);
   Draw		(Root3);

   Release	(Root3);
   printf	("\n");

   f = fopen	("t.xml", "w");
   ErrorCheck	("fopen (t.xml, w)", f);
   printf	("fopen (t.xml, w)\n");
   WriteXML	(f, n);
   fclose	(f);

   Release	(n);	 printf ("\n");
   Release	(Root1); printf ("\n");
   Release	(Root2); printf ("\n");
   Close	();

   return 0;
}
