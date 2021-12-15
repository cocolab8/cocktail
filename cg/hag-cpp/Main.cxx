# include "Tree.h"
# include "Eval.h"

extern Tree t;

int main ()
{
   Eval EvalObj;
   tTree p;
   int i;

   do {
      scanf ("%d", & i);
      p = t.mR (t.mP1 (), i);
      EvalObj.Evaluate (p);
      printf ("%d\n", p->R.r);
   } while (p->R.n != 0);
   return 0;
}
