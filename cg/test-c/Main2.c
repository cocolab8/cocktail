# include "tree.h"
# include "treeE.h"
# include "treeF.h"
# include "treeN.h"
# include "treeR.h"
# include "treeb.h"
# include "treee.h"
# include "treef.h"
# include "treeg.h"
# include "treek.h"
# include "treem.h"
# include "treen.h"
# include "treeo.h"
# include "treep.h"
# include "treeq.h"
# include "treer.h"
# include "treet.h"
# include "treew.h"
# include "treey.h"
# include "treeX.h"

# include "ratc.h"
# include "rSystem.h"
# include "rMemory.h"
# include "StringM.h"
# include "Idents.h"

rbool selector = rfalse;

void ErrorCheck
# ifdef HAVE_ARGS
(char * s, FILE * f)
# else
(s, f) char * s; FILE * f;
# endif
{  if (f == NULL) printf ("Error: %s\n", s); }

void PrintMark
# ifdef HAVE_ARGS
(ttree t)
# else
(t) ttree t;
# endif
{  printf ("%d ", t->PRE_Node.Mark); }

int main ARGS ((void))
{
   ttree n, n1, n2, n3, n4, n5, Root1, Root2, Root3;
   FILE * f;
   int i;

   InitrMemory		();
   InitStringMemory	();
   InitIdents		();
   Begintree		();

   Configuretree ("CheckReportNoTree"	, "1"	);
   Configuretree ("CheckReportNodes"	, "1"	);
   Configuretree ("DrawBoxHeight"	, "20"	);
   Configuretree ("DrawBoxWidth"	, "60"	);
   Configuretree ("DrawDepth"		, "6"	);
   Configuretree ("DrawLength"		, "256"	);
   Configuretree ("DrawFileName"	, "g2.ast");
   Configuretree ("TreatTVAasChild"	, "1"	);

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
   n1->PRE_Node2.Child3 = mPRE_Node0 (0, 1, PutString ("", 0), 0);
   n2->PRE_Node2.Child1 = n3;
   n2->PRE_Node2.Child2 = n5;
   n2->PRE_Node2.Child3 = mPRE_Node0 (0, 1, PutString ("", 0), 0);
   n3->PRE_Node1.Child1 = n4;
   n4->PRE_Node1.Child1 = n3;
   n5->PRE_Node1.Child1 = n5;

   selector = rfalse;

   f = fopen		("a", "w");
   ErrorCheck		("fopen (a, w)", f);
   printf		("fopen (a, w)\n");
   Writetree		(f, n);
   fclose		(f);

   f = fopen		("a", "r");
   ErrorCheck		("fopen (a, r)", f);
   printf		("fopen (a, r)\n");
   Root1 = Readtree	(f);
   fclose		(f);

   f = fopen		("b", "w");
   ErrorCheck		("fopen (b, w)", f);
   printf		("fopen (b, w)\n");
   Puttree		(f, Root1);
   fclose		(f);

   f = fopen		("b", "r");
   ErrorCheck		("fopen (b, r)", f);
   printf		("fopen (b, r)\n");
   Root2 = Gettree	(f);
   fclose		(f);

   f = fopen		("aa", "w");
   ErrorCheck		("fopen (aa, w)", f);
   printf		("fopen (aa, w)\n");
   Writetree		(f, Root2);
   fclose		(f);

   f = fopen		("bb", "w");
   ErrorCheck		("fopen (bb, w)", f);
   printf		("fopen (bb, w)\n");
   Puttree		(f, Root2);
   fclose		(f);

   Root3 = Copytree	(Root2);
   f = fopen		("aaa", "w");
   ErrorCheck		("fopen (aaa, w)", f);
   printf		("fopen (aaa, w)\n");
   Writetree		(f, Root3);
   fclose		(f);

# ifndef _MSC_VER
   i = rSystem		("set -x; cmp a aa; cmp b bb; cmp a aaa");
   if (i < 0)		printf ("Error: rSystem, RC: %d\n", i);
# endif

   TraversetreeTD	(Root2, PrintMark);
   TraversetreeBU	(Root2, PrintMark);
   printf		("\n");

   Checktree		(Root3);
   Drawtree		(Root3);

   Releasetree		(Root3);
   printf		("\n");

   f = fopen		("t.xml", "w");
   ErrorCheck		("fopen (t.xml, w)", f);
   printf		("fopen (t.xml, w)\n");
   WritetreeXML		(f, n);
   fclose		(f);

   ReleasetreeModule	();
   Closetree		();

   return 0;
}
