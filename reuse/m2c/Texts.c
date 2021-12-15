#include "SYSTEM_.h"

#ifndef DEFINITION_Pointers
#include "Pointers.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif



void ZqnGVQ_1
# ifdef HAVE_ARGS
(ZqnGVQ_0 *Z132)
# else
(Z132)
ZqnGVQ_0 *Z132;
# endif
{
ZijFQQ_5(Z132);
}

void ZqnGVQ_2
# ifdef HAVE_ARGS
(ZqnGVQ_0 *Z132, Zp1PEAFD_2 *Z135)
# else
(Z132, Z135)
ZqnGVQ_0 *Z132;
Zp1PEAFD_2 *Z135;
# endif
{
ZijFQQ_7(Z132, INTPTR((LONGCARD)Zp1PEAFi_2(Z135)));
}

void ZqnGVQ_3
# ifdef HAVE_ARGS
(ZqnGVQ_0 *Z132, Zp1PEAFD_2 *Z135)
# else
(Z132, Z135)
ZqnGVQ_0 *Z132;
Zp1PEAFD_2 *Z135;
# endif
{
ZijFQQ_6(Z132, INTPTR((LONGCARD)Zp1PEAFi_2(Z135)));
}

BOOLEAN ZqnGVQ_4
# ifdef HAVE_ARGS
(ZqnGVQ_0 *Z132)
# else
(Z132)
ZqnGVQ_0 *Z132;
# endif
{
return ZijFQQ_12(*Z132);
}

void ZqnGVQ_5
# ifdef HAVE_ARGS
(ZfM_3 Z139, ZqnGVQ_0 Z132)
# else
(Z139, Z132)
ZfM_3 Z139;
ZqnGVQ_0 Z132;
# endif
{
Zp1PEAFD_2 Z135;

while (!ZijFQQ_12(Z132)) {
Zp1PEAFi_3((Zp1PEAFi_1)PTRINT(ZijFQQ_8(Z132)), &Z135);
Zp1PEAFD_22(Z139, &Z135);
ZijFQQ_9(&Z132);
}
}

void BEGIN_Texts ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Lists ();
BEGIN_Strings ();
BEGIN_Pointers ();
BEGIN_IO ();
BEGIN_Lists ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Lists ();

}
