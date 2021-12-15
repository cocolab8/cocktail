# include "Tree.h"
# include "Eval.h"

using namespace Tree;

int main ()
{
   tpR t;
   int i;

   do {
      scanf ("%d", & i);
      t = new R (new P1 (), i);
      Eval (t);
      printf ("%d\n", t->r);
   } while (t->n != 0);
   return 0;
}
