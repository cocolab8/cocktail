# include "Tree.h"
# include "rSystem.h"
# include "rMemory.h"
# include "StringM.h"
# include "Idents.h"

void ErrorCheck
# ifdef HAVE_ARGS
(char * s, FILE * f)
# else
(s, f) char * s; FILE * f;
# endif
{  if (f == NULL) printf ("Error: %s\n", s); }

void PrintMark
# ifdef HAVE_ARGS
(tTree t)
# else
(t) tTree t;
# endif
{  printf ("%d ", t->PRE_Node.Mark); }

int main ARGS ((void))
{
   tTree n, n1, n2, n3, n4, n5, Root1, Root2, Root3;
   FILE * f;
   int i;

   InitrMemory		();
   InitStringMemory	();
   InitIdents		();
   BeginTree		();

   ConfigureTree ("CheckReportNoTree"	, "1"	);
   ConfigureTree ("CheckReportNodes"	, "1"	);
   ConfigureTree ("DrawBoxHeight"	, "22"	);
   ConfigureTree ("DrawBoxWidth"	, "70"	);
   ConfigureTree ("DrawDepth"		, "8"	);
   ConfigureTree ("DrawLength"		, "25"	);
   ConfigureTree ("DrawFileName"	, "g.ast");
   ConfigureTree ("TreatTVAasChild"	, "1"	);

   n1 = nPRE_Node2 ();
   n2 = nPRE_Node2 ();
   n3 = nPRE_Node1 ();
   n4 = nPRE_Node1 ();
   n5 = nPRE_Node1 ();

   n1->PRE_Node.Mark = 1;
   n2->PRE_Node.Mark = 2;
   n3->PRE_Node.Mark = 3;
   n4->PRE_Node.Mark = 4;
   n5->PRE_Node.Mark = 5;

   n1->PRE_Node.Ident = MakeIdent ("1", 1);
   n2->PRE_Node.Ident = MakeIdent ("2", 1);
   n3->PRE_Node.Ident = MakeIdent (" 3 3", 4);	/* white space	*/
   n4->PRE_Node.Ident = MakeIdent ("", 0);	/* NoIdent	*/
   n5->PRE_Node.Ident = MakeIdent ("5", 1);

   n1->PRE_Node.String = PutString ("1", 1);
   n2->PRE_Node.String = PutString ("2", 1);
   n3->PRE_Node.String = PutString (" 3 3", 4);	/* white space	*/
   n4->PRE_Node.String = PutString ("", 0);	/* empty string	*/
   n5->PRE_Node.String = PutString ("5", 1);

   n1->PRE_Node.Hex = 1;
   n2->PRE_Node.Hex = 2;
   n3->PRE_Node.Hex = 3;
   n4->PRE_Node.Hex = 4;
   n5->PRE_Node.Hex = 5;

   n = n1;
   n1->PRE_Node2.Child1 = n2;
   n1->PRE_Node2.Child2 = n2;
   n1->PRE_Node2.Child3 = mPRE_Node0 (0, 1, PutString ("", 0), 0, 0, 0);
   n2->PRE_Node2.Child1 = n3;
   n2->PRE_Node2.Child2 = n5;
   n2->PRE_Node2.Child3 = mPRE_Node0 (0, 1, PutString ("", 0), 0, 0, 0);
   n3->PRE_Node1.Child1 = n4;
   n4->PRE_Node1.Child1 = n3;
   n5->PRE_Node1.Child1 = n5;

/*
   {					/ * test more than 65535 nodes * /
      tTree t = NoTree;
      long i;
      for (i = 1; i <= 70000; i ++) {
	 t = mPRE_Node1 (7, MakeIdent1 ("7"), PutString ("7", 1), NoTree, NoTree, 7, t);
      }
      n4->PRE_Node1.Child1 = t;
   }
*/

   selector = rfalse;

   f = fopen		("a", "w");
   ErrorCheck		("fopen (a, w)", f);
   printf		("fopen (a, w)\n");
   WriteTree		(f, n);
   fclose		(f);

   f = fopen		("a", "r");
   ErrorCheck		("fopen (a, r)", f);
   printf		("fopen (a, r)\n");
   Root1 = ReadTree	(f);
   fclose		(f);

   f = fopen		("b", "w");
   ErrorCheck		("fopen (b, w)", f);
   printf		("fopen (b, w)\n");
   PutTree		(f, Root1);
   fclose		(f);

   f = fopen		("b", "r");
   ErrorCheck		("fopen (b, r)", f);
   printf		("fopen (b, r)\n");
   Root2 = GetTree	(f);
   fclose		(f);

   f = fopen		("aa", "w");
   ErrorCheck		("fopen (aa, w)", f);
   printf		("fopen (aa, w)\n");
   WriteTree		(f, Root2);
   fclose		(f);

   f = fopen		("bb", "w");
   ErrorCheck		("fopen (bb, w)", f);
   printf		("fopen (bb, w)\n");
   PutTree		(f, Root2);
   fclose		(f);

   Root3 = CopyTree	(Root2);
   f = fopen		("aaa", "w");
   ErrorCheck		("fopen (aaa, w)", f);
   printf		("fopen (aaa, w)\n");
   WriteTree		(f, Root3);
   fclose		(f);

# ifndef _MSC_VER
   i = rSystem		("set -x; cmp a aa; cmp b bb; cmp a aaa");
   if (i < 0)		printf ("Error: rSystem, RC: %d\n", i);
# endif

   TraverseTreeTD	(Root2, PrintMark);
   TraverseTreeBU	(Root2, PrintMark);
   printf		("\n");

   CheckTree		(Root3);
   DrawTree		(Root3);

   ReleaseTree		(Root3);
   printf		("\n");

   f = fopen		("t.xml", "w");
   ErrorCheck		("fopen (t.xml, w)", f);
   printf		("fopen (t.xml, w)\n");
   WriteTreeXML		(f, n);
   fclose		(f);

   ReleaseTreeModule	();
   CloseTree		();

   return 0;
}
