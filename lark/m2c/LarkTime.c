#include "SYSTEM_.h"

#ifndef DEFINITION_Times
#include "Times.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_LarkTime
#include "LarkTime.h"
#endif



void ZibDGtrGC_0
# ifdef HAVE_ARGS
(CHAR Z121[], LONGCARD O_1)
# else
(Z121, O_1)
CHAR Z121[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z121, O_1, CHAR)
if (ZpmCQ_25(ORD('R'), &Zq0A4_61)) {
ZqrGCB_2(Z121, O_1);
}
FREE_OPEN_ARRAYS
}

void BEGIN_LarkTime ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Times ();
BEGIN_Sets ();
BEGIN_Tree ();

}
