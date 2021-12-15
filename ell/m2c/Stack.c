#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Stack
#include "Stack.h"
#endif


#define Z119	50

void Zp1Fy8_3
# ifdef HAVE_ARGS
(Zp1Fy8_2 *Z121)
# else
(Z121)
Zp1Fy8_2 *Z121;
# endif
{
Z121->Y0 = 0;
Z121->Y1 = Z119;
ZarQdhNDD_0((ADDRESS *)&Z121->Y2, &Z121->Y1, (LONGINT)sizeof (Zp1Fy8_1));
}

void Zp1Fy8_4
# ifdef HAVE_ARGS
(Zp1Fy8_2 *Z121)
# else
(Z121)
Zp1Fy8_2 *Z121;
# endif
{
ZarQdhNDD_3((ADDRESS *)&Z121->Y2, &Z121->Y1, (LONGINT)sizeof (Zp1Fy8_1));
Z121->Y2 = NIL;
Z121->Y1 = -1;
}

void Zp1Fy8_5
# ifdef HAVE_ARGS
(Zp1Fy8_2 *Z121)
# else
(Z121)
Zp1Fy8_2 *Z121;
# endif
{
Z121->Y0 = 0;
}

BOOLEAN Zp1Fy8_6
# ifdef HAVE_ARGS
(Zp1Fy8_2 Z121)
# else
(Z121)
Zp1Fy8_2 Z121;
# endif
{
return Z121.Y0 == 0;
}

void Zp1Fy8_7
# ifdef HAVE_ARGS
(Zp1Fy8_2 *Z121, Zp1Fy8_1 Z131)
# else
(Z121, Z131)
Zp1Fy8_2 *Z121;
Zp1Fy8_1 Z131;
# endif
{
INC(Z121->Y0);
if (Z121->Y0 >= Z121->Y1) {
ZarQdhNDD_2((ADDRESS *)&Z121->Y2, &Z121->Y1, (LONGINT)sizeof (Zp1Fy8_1));
}
Z121->Y2->A[Z121->Y0] = Z131;
}

Zp1Fy8_1 Zp1Fy8_8
# ifdef HAVE_ARGS
(Zp1Fy8_2 *Z121)
# else
(Z121)
Zp1Fy8_2 *Z121;
# endif
{
Zp1Fy8_1 Z131;

Z131 = Zp1Fy8_9(Z121);
DEC(Z121->Y0);
return Z131;
}

Zp1Fy8_1 Zp1Fy8_9
# ifdef HAVE_ARGS
(Zp1Fy8_2 *Z121)
# else
(Z121)
Zp1Fy8_2 *Z121;
# endif
{
return Z121->Y2->A[Z121->Y0];
}

INTEGER Zp1Fy8_10
# ifdef HAVE_ARGS
(Zp1Fy8_2 Z121)
# else
(Z121)
Zp1Fy8_2 Z121;
# endif
{
return Z121.Y0;
}

void Zp1Fy8_11
# ifdef HAVE_ARGS
(Zp1Fy8_2 *Z136, Zp1Fy8_2 Z137)
# else
(Z136, Z137)
Zp1Fy8_2 *Z136;
Zp1Fy8_2 Z137;
# endif
{
INTEGER Z138;

Zp1Fy8_5(Z136);
{
LONGINT B_1 = 1, B_2 = Zp1Fy8_10(Z137);

if (B_1 <= B_2)
for (Z138 = B_1;; Z138 += 1) {
Zp1Fy8_7(Z136, Z137.Y2->A[Z138]);
if (Z138 >= B_2) break;
}
}
}

void BEGIN_Stack ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_DynArray ();

}
