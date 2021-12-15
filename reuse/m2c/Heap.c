#include "SYSTEM_.h"

#ifndef DEFINITION_Pointers
#include "Pointers.h"
#endif

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_Heap
#include "Heap.h"
#endif

LONGCARD Zeb0B_0;

#define Z121	10240
typedef struct S_1 *Z122;
typedef struct S_1 {
Z122 Y0;
struct S_2 {
CHAR A[Z121 - 1 + 1];
} Y1;
} Z123;
static Z122 Z126;
static ADDRESS Z127;
static ADDRESS Z128;

ADDRESS Zeb0B_1
# ifdef HAVE_ARGS
(LONGINT Z130)
# else
(Z130)
LONGINT Z130;
# endif
{
Z122 Z131;
ADDRESS Z132;

Z130 = (LONGINT)((BITSET)(Z130 + ZdaDDAD7_1 - 1) & ZdaDDAD7_2);
if (PTRDIFF(Z128, Z127) < Z130) {
Z131 = Z126;
Z126 = (Z122)ZDtgCFKU_1((LONGINT)sizeof (Z123));
Z126->Y0 = Z131;
Z127 = ADR (Z126->Y1);
Z128 = Z127 + Z121;
INC1(Zeb0B_0, Z121);
}
Z132 = Z127;
INC1(Z127, (CARDINAL)Z130);
return Z132;
}

void Zeb0B_2
 ARGS ((void))
{
Z122 Z131;

while (Z126 != NIL) {
Z131 = Z126;
Z126 = Z126->Y0;
ZDtgCFKU_2((LONGINT)sizeof (Z123), (ADDRESS)Z131);
}
Z127 = (ADDRESS)NIL;
Z128 = (ADDRESS)NIL;
Zeb0B_0 = 0;
}

void BEGIN_Heap ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Pointers ();
BEGIN_General ();
BEGIN_rMemory ();

Z126 = NIL;
Zeb0B_2();
}
