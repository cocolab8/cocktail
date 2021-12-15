#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Times
#include "Times.h"
#endif


static LONGINT Z122;

LONGINT ZqrGCB_0
 ARGS ((void))
{
return rTime();
}

LONGINT ZqrGCB_1
 ARGS ((void))
{
LONGINT Z125;
LONGINT Z126;

Z125 = ZqrGCB_0();
Z126 = Z125 - Z122;
Z122 = Z125;
return Z126;
}

void ZqrGCB_2
# ifdef HAVE_ARGS
(CHAR Z128[], LONGCARD O_1)
# else
(Z128, O_1)
CHAR Z128[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z128, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_1, Z128, O_1);
ZfM_25((ZDz6VQCC_4)ZfM_1, ZqrGCB_1(), 5L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
FREE_OPEN_ARRAYS
}

void BEGIN_Times ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_rSystem ();
BEGIN_IO ();

Z122 = 0;
}
