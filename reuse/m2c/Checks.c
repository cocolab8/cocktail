#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_Checks
#include "Checks.h"
#endif



void Zgg728H_0
# ifdef HAVE_ARGS
(CHAR Z123[], LONGCARD O_1, INTEGER Z124)
# else
(Z123, O_1, Z124)
CHAR Z123[];
LONGCARD O_1;
INTEGER Z124;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z123, O_1, CHAR)
if (Z124 < 0) {
ZfM_29((ZDz6VQCC_4)ZfM_2, Z123, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" : ", 3L);
ZfM_25((ZDz6VQCC_4)ZfM_2, Z124, 2L);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)", errno	= ", 10L);
ZfM_25((ZDz6VQCC_4)ZfM_2, rErrNo(), 2L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
FREE_OPEN_ARRAYS
}

void BEGIN_Checks ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_rSystem ();

}
