#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_DefTable
#include "DefTable.h"
#endif

Zae5ojx8B_1 Zae5ojx8B_3;

#define Z120	16
typedef struct S_1 {
Zfb3DLQ_0 Y0;
Zae5ojx8B_2 Y1;
} Z121;
typedef struct S_2 {
Z121 A[100000 + 1];
} Z114;
static Z114 *Z125;
static LONGINT Z126;

void Zae5ojx8B_4
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z128)
# else
(Z128)
Zfb3DLQ_0 Z128;
# endif
{
INC(Zae5ojx8B_3);
if (Zae5ojx8B_3 == Z126) {
ZarQdhNDD_2((ADDRESS *)&Z125, &Z126, (LONGINT)sizeof (Z121));
}
{
register Z121 *W_1 = &Z125->A[Zae5ojx8B_3];

W_1->Y0 = Z128;
W_1->Y1 = Zae5ojx8B_9;
}
}

void Zae5ojx8B_5
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z128)
# else
(Z128)
Zfb3DLQ_0 Z128;
# endif
{
INC(Zae5ojx8B_3);
if (Zae5ojx8B_3 == Z126) {
ZarQdhNDD_2((ADDRESS *)&Z125, &Z126, (LONGINT)sizeof (Z121));
}
{
register Z121 *W_2 = &Z125->A[Zae5ojx8B_3];

W_2->Y0 = Z128;
W_2->Y1 = Zae5ojx8B_10;
}
}

Zae5ojx8B_1 Zae5ojx8B_6
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z128)
# else
(Z128)
Zfb3DLQ_0 Z128;
# endif
{
Zae5ojx8B_1 Z135;

{
LONGINT B_1 = 1, B_2 = Zae5ojx8B_3;

if (B_1 <= B_2)
for (Z135 = B_1;; Z135 += 1) {
if (Z125->A[Z135].Y0 == Z128) {
return Z135;
}
if (Z135 >= B_2) break;
}
}
return Zae5ojx8B_0;
}

Zae5ojx8B_2 Zae5ojx8B_7
# ifdef HAVE_ARGS
(Zae5ojx8B_1 Z138)
# else
(Z138)
Zae5ojx8B_1 Z138;
# endif
{
return Z125->A[Z138].Y1;
}

void BEGIN_DefTable ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_DynArray ();
BEGIN_Idents ();

Z126 = Z120;
ZarQdhNDD_0((ADDRESS *)&Z125, &Z126, (LONGINT)sizeof (Z121));
Zae5ojx8B_3 = 0;
}
