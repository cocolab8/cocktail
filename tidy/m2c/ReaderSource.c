#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_ReaderSource
#include "ReaderSource.h"
#endif


#define Z126	' '
struct S_1 {
CHAR A[30000 + 1];
};

ZDz6VQCC_4 Zol0z3AzwNQF2_0
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
{
ZDz6VQCC_4 R_1 = OpenInput(Z121, O_1);

FREE_OPEN_ARRAYS
return R_1;
}
}

INTEGER Zol0z3AzwNQF2_1
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z123, ADDRESS Z124, CARDINAL Z125)
# else
(Z123, Z124, Z125)
ZDz6VQCC_4 Z123;
ADDRESS Z124;
CARDINAL Z125;
# endif
{
INTEGER Z127;
struct S_1 *Z128;

return rRead(Z123, Z124, (LONGINT)Z125);
}

void Zol0z3AzwNQF2_2
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z123)
# else
(Z123)
ZDz6VQCC_4 Z123;
# endif
{
rClose(Z123);
}

void BEGIN_ReaderSource ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_rSystem ();
BEGIN_rSystem ();

}
