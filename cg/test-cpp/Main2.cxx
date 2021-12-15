# include <stdlib.h>
# include "rSystem.h"
# include "rMemory.h"
# include "StringM.h"
# include "Global.h"
# include "tree.h"

rbool selector = rfalse;

void ErrorCheck (char * s, FILE * f)
{  if (f == 0) printf ("Error: %s\n", s); }

void PrintMark (ttree t)
{  printf ("%d ", t->PRE_Node.Mark); }

int main (void)
{
   ttree n, n1, n2, n3, n4, n5, Root1, Root2, Root3;
   FILE * f;
   int i;
   tree t;

   t.Configuretree ("CheckReportNoTree"	, "1"	);
   t.Configuretree ("CheckReportNodes"	, "1"	);
   t.Configuretree ("DrawBoxHeight"	, "20"	);
   t.Configuretree ("DrawBoxWidth"	, "60"	);
   t.Configuretree ("DrawDepth"		, "6"	);
   t.Configuretree ("DrawLength"	, "256"	);
   t.Configuretree ("DrawFileName"	, "g2.ast");
   t.Configuretree ("TreatTVAasChild"	, "1"	);

   n1 = t.nPRE_Node2 ();
   n2 = t.nPRE_Node2 ();
   n3 = t.nPRE_Node1 ();
   n4 = t.nPRE_Node1 ();
   n5 = t.nPRE_Node1 ();

   n1->PRE_Node.Mark = 1;
   n2->PRE_Node.Mark = 2;
   n3->PRE_Node.Mark = 3;
   n4->PRE_Node.Mark = 4;
   n5->PRE_Node.Mark = 5;

   n1->PRE_Node.Ident = gIdents.MakeIdent ("1", 1);
   n2->PRE_Node.Ident = gIdents.MakeIdent ("2", 1);
   n3->PRE_Node.Ident = gIdents.MakeIdent (" 3 3", 4);	/* white space	*/
   n4->PRE_Node.Ident = gIdents.MakeIdent ("", 0);	/* NoIdent	*/
   n5->PRE_Node.Ident = gIdents.MakeIdent ("5", 1);

   n1->PRE_Node.String = gStringM.PutString ("1", 1);
   n2->PRE_Node.String = gStringM.PutString ("2", 1);
   n3->PRE_Node.String = gStringM.PutString (" 3 3", 4);/* white space	*/
   n4->PRE_Node.String = gStringM.PutString ("", 0);	/* empty string	*/
   n5->PRE_Node.String = gStringM.PutString ("5", 1);

   n1->PRE_Node.Hex = 1;
   n2->PRE_Node.Hex = 2;
   n3->PRE_Node.Hex = 3;
   n4->PRE_Node.Hex = 4;
   n5->PRE_Node.Hex = 5;

   n = n1;
   n1->PRE_Node2.Child1 = n2;
   n1->PRE_Node2.Child2 = n2;
   n1->PRE_Node2.Child3 = t.mPRE_Node0 (0, 1, gStringM.PutString (""), 0);
   n2->PRE_Node2.Child1 = n3;
   n2->PRE_Node2.Child2 = n5;
   n2->PRE_Node2.Child3 = t.mPRE_Node0 (0, 1, gStringM.PutString (""), 0);
   n3->PRE_Node1.Child1 = n4;
   n4->PRE_Node1.Child1 = n3;
   n5->PRE_Node1.Child1 = n5;

   selector = rfalse;

   f = fopen		("a", "w");
   ErrorCheck		("fopen (a, w)", f);
   printf		("fopen (a, w)\n");
   t.Writetree		(f, n);
   fclose		(f);

   f = fopen		("a", "r");
   ErrorCheck		("fopen (a, r)", f);
   printf		("fopen (a, r)\n");
   Root1 = t.Readtree	(f);
   fclose		(f);

   f = fopen		("b", "w");
   ErrorCheck		("fopen (b, w)", f);
   printf		("fopen (b, w)\n");
   t.Puttree		(f, Root1);
   fclose		(f);

   f = fopen		("b", "r");
   ErrorCheck		("fopen (b, r)", f);
   printf		("fopen (b, r)\n");
   Root2 = t.Gettree	(f);
   fclose		(f);

   f = fopen		("aa", "w");
   ErrorCheck		("fopen (aa, w)", f);
   printf		("fopen (aa, w)\n");
   t.Writetree		(f, Root2);
   fclose		(f);

   f = fopen		("bb", "w");
   ErrorCheck		("fopen (bb, w)", f);
   printf		("fopen (bb, w)\n");
   t.Puttree		(f, Root2);
   fclose		(f);

   Root3 = t.Copytree	(Root2);
   f = fopen		("aaa", "w");
   ErrorCheck		("fopen (aaa, w)", f);
   printf		("fopen (aaa, w)\n");
   t.Writetree		(f, Root3);
   fclose		(f);

# ifndef _MSC_VER
   i = rSystem		("set -x; cmp a aa; cmp b bb; cmp a aaa");
   if (i < 0) printf	("Error: rSystem, RC: %d\n", i);
# endif

   t.TraversetreeTD	(Root2, PrintMark);
   t.TraversetreeBU	(Root2, PrintMark);
   printf		("\n");

   t.Checktree		(Root3);
   t.Drawtree		(Root3);

   t.Releasetree	(Root3);
   printf		("\n");

   f = fopen		("t.xml", "w");
   ErrorCheck		("fopen (t.xml, w)", f);
   printf		("fopen (t.xml, w)\n");
   t.WritetreeXML	(f, n);
   fclose		(f);

   t.ReleasetreeModule	();
   return 0;
}
