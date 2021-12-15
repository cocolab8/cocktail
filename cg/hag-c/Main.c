# include "Tree.h"
# include "Eval.h"

int main ARGS ((void))
{
   tTree t;
   int i;

   do {
      scanf ("%d", & i);
      t = mR (mP1 (), i);
      Eval (t);
      printf ("%d\n", t->R.r);
   } while (t->R.n != 0);
   return 0;
}
