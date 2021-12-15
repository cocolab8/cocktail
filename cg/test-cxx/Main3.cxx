# include "Global.h"
# include "Position.h"
# include "tree3.h"

using namespace tree3;

void p (ttree3 t) {
   if (t->Kind == kintnode) {
      intnode * q = (intnode *) t;
      printf ("%d ", q->value);
   } else printf ("? ");
}

int main (void)
{
   Begin ();
   Configure ("CheckReportNoTree", "1"	);
   Configure ("CheckReportNodes", "1"	);
   Configure ("DrawBoxHeight"	, "20"	);
   Configure ("DrawBoxWidth"	, "60"	);
   Configure ("DrawDepth"	, "6"	);
   Configure ("DrawLength"	, "256"	);
   Configure ("DrawFileName"	, "t3.ast");
   Configure ("TreatTVAasChild"	, "1"	);
   lists * n = new intnode (new nolist (), NoPosition, 1);
   n = new intnode (n, NoPosition, 2);
   n = new intnode (n, NoPosition, 3);
   printf ("%d %d\n", n->IsType (kintnode), n->IsType (knolist));
   node * t = (node *) Make (kintnode);
   ttree3 t2 = new intnode ();
   Root = t2;
   t->Kind = kintnode;
   t->next = Notree3;
   ((intnode *) t)->value = 0;
   n->Forall (p); printf ("\n");
   n = n->Reverse ();
   Forall (n, p); printf ("\n");
   n = (lists *) Reverse (n);
   printf ("%d %d\n", n->IsEqual (t), IsEqual (n, t));
   n = new typenode (n, NoPosition, gIdents.MakeIdent ("ident"),
      gStringM.PutString ("string"), 17, t);
   n->WriteNode (stdout);
   WriteNode (stdout, n);
   printf ("%d %d\n", n->Check (), Check (n));
   printf ("%d %d\n", (new intnode (Notree3, NoPosition, 0))->Check (),
      Check (Notree3));
   printf ("%d\n", (new childnode (new nolist, NoPosition,
      (tptypenode) new intnode (new nolist, NoPosition, 0)))->Check ());
   lists * m = n->Copy (), * m2 = (lists *) Copy (n);
   m->Forall (p); printf ("\n");
   printf ("%d %d\n", n->IsEqual (m), IsEqual (n, m));
   m->TraverseTD (p); printf ("\n");
   TraverseTD (m, p); printf ("\n");
   m->TraverseBU (p); printf ("\n");
   TraverseBU (m, p); printf ("\n");
   m->Query (); printf ("\n");
   Query (m); printf ("\n");
   SetDepth (8);
   SetBox (80,16);
   m->Draw (); Draw (m);
   m->Write (stdout);
   FILE * f = fopen ("a", "w"); Write (f, m); fclose (f);
   f = fopen ("a", "r"); lists * m3 = (lists *) Read (f); fclose (f);
   printf ("%d %d\n", m->IsEqual (m3), IsEqual (m, m3));
   f = fopen ("b", "w"); m3->Put (f); fclose (f);
   f = fopen ("b", "r"); lists * m4 = (lists *) Get (f); fclose (f);
   printf ("%d %d\n", m->IsEqual (m4), IsEqual (m, m4));
   m4->WriteXML (stdout); WriteXML (stdout, m4);
   n->Release (); m->Release (); Release (m2); Release (m3); Release (m4);
   t->Release (); t2->Release ();
   Close ();
   return 0;
}
