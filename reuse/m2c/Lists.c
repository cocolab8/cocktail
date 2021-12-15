#include "SYSTEM_.h"

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif



void ZijFQQ_5
# ifdef HAVE_ARGS
(ZijFQQ_3 *Z120)
# else
(Z120)
ZijFQQ_3 *Z120;
# endif
{
Z120->Y0 = NIL;
Z120->Y1 = NIL;
}

void ZijFQQ_6
# ifdef HAVE_ARGS
(ZijFQQ_3 *Z120, ZijFQQ_0 Z125)
# else
(Z120, Z125)
ZijFQQ_3 *Z120;
ZijFQQ_0 Z125;
# endif
{
ZijFQQ_1 Z127;

Z127 = (ZijFQQ_1)ZDtgCFKU_1((LONGINT)sizeof (ZijFQQ_2));
Z127->Y0 = NIL;
Z127->Y1 = Z125;
if (Z120->Y0 == NIL) {
Z120->Y1 = Z127;
} else {
Z127->Y0 = Z120->Y0;
}
Z120->Y0 = Z127;
}

void ZijFQQ_7
# ifdef HAVE_ARGS
(ZijFQQ_3 *Z120, ZijFQQ_0 Z125)
# else
(Z120, Z125)
ZijFQQ_3 *Z120;
ZijFQQ_0 Z125;
# endif
{
ZijFQQ_1 Z127;

Z127 = (ZijFQQ_1)ZDtgCFKU_1((LONGINT)sizeof (ZijFQQ_2));
Z127->Y0 = NIL;
Z127->Y1 = Z125;
if (Z120->Y0 == NIL) {
Z120->Y0 = Z127;
} else {
Z120->Y1->Y0 = Z127;
}
Z120->Y1 = Z127;
}

ZijFQQ_0 ZijFQQ_8
# ifdef HAVE_ARGS
(ZijFQQ_3 Z120)
# else
(Z120)
ZijFQQ_3 Z120;
# endif
{
return Z120.Y0->Y1;
}

void ZijFQQ_9
# ifdef HAVE_ARGS
(ZijFQQ_3 *Z120)
# else
(Z120)
ZijFQQ_3 *Z120;
# endif
{
Z120->Y0 = Z120->Y0->Y0;
}

ZijFQQ_0 ZijFQQ_10
# ifdef HAVE_ARGS
(ZijFQQ_3 Z120)
# else
(Z120)
ZijFQQ_3 Z120;
# endif
{
return Z120.Y1->Y1;
}

void ZijFQQ_11
# ifdef HAVE_ARGS
(ZijFQQ_3 *Z120)
# else
(Z120)
ZijFQQ_3 *Z120;
# endif
{
}

BOOLEAN ZijFQQ_12
# ifdef HAVE_ARGS
(ZijFQQ_3 Z120)
# else
(Z120)
ZijFQQ_3 Z120;
# endif
{
return Z120.Y0 == NIL;
}

CARDINAL ZijFQQ_13
# ifdef HAVE_ARGS
(ZijFQQ_3 Z120)
# else
(Z120)
ZijFQQ_3 Z120;
# endif
{
CARDINAL Z138;

Z138 = 0;
while (Z120.Y0 != NIL) {
INC(Z138);
Z120.Y0 = Z120.Y0->Y0;
}
return Z138;
}

void ZijFQQ_14
# ifdef HAVE_ARGS
(ZfM_3 Z140, ZijFQQ_3 Z120, ZijFQQ_4 Z141)
# else
(Z140, Z120, Z141)
ZfM_3 Z140;
ZijFQQ_3 Z120;
ZijFQQ_4 Z141;
# endif
{
while (!ZijFQQ_12(Z120)) {
(*Z141)(Z140, ZijFQQ_8(Z120));
ZijFQQ_9(&Z120);
}
}

void BEGIN_Lists ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_rMemory ();
BEGIN_IO ();

}
