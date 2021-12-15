#include "SYSTEM_.h"

#ifndef DEFINITION_Dfa
#include "Dfa.h"
#endif

#ifndef DEFINITION_GenTabs
#include "GenTabs.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Traces
#include "Traces.h"
#endif


#define Z124	16
typedef struct S_1 *Z125;
typedef struct S_1 {
Zaf1_6 Y0;
Zaf1_6 Y1;
Z125 Y2;
} Z126;
typedef struct S_2 {
Z126 A[100000 + 1];
} Z130;
typedef struct S_3 {
Z125 A[100000 + 1];
} Z131;
static Z130 *Z132;
static LONGINT Z133;
static Z131 *Z134;
static LONGINT Z135;
static INTEGER Z136;

void Zq0Dy2B_0
 ARGS ((void))
{
Z135 = Z124;
ZarQdhNDD_0((ADDRESS *)&Z134, &Z135, (LONGINT)sizeof (Z125));
Z133 = (SHORTINT)ZdaDwjxF_9 * Z135;
ZarQdhNDD_0((ADDRESS *)&Z132, &Z133, (LONGINT)sizeof (Z126));
}

void Zq0Dy2B_1
# ifdef HAVE_ARGS
(INTEGER Z139)
# else
(Z139)
INTEGER Z139;
# endif
{
INTEGER Z140;

while (Z135 <= Z139) {
ZarQdhNDD_2((ADDRESS *)&Z134, &Z135, (LONGINT)sizeof (Z125));
}
while (Z133 <= (SHORTINT)ZdaDwjxF_9 * Z139) {
ZarQdhNDD_2((ADDRESS *)&Z132, &Z133, (LONGINT)sizeof (Z126));
}
Z136 = 0;
{
LONGINT B_1 = 1, B_2 = Z139;

if (B_1 <= B_2)
for (Z140 = B_1;; Z140 += 1) {
Z134->A[Z140] = NIL;
if (Z140 >= B_2) break;
}
}
}

void Zq0Dy2B_2
# ifdef HAVE_ARGS
(SHORTCARD Z142, Zaf1_6 Z143, Zaf1_6 Z144)
# else
(Z142, Z143, Z144)
SHORTCARD Z142;
Zaf1_6 Z143, Z144;
# endif
{
INC(Z136);
{
register Z126 *W_1 = &Z132->A[Z136];

W_1->Y0 = Z143;
W_1->Y1 = Z144;
W_1->Y2 = Z134->A[Z142];
}
Z134->A[Z142] = (Z125)ADR (Z132->A[Z136]);
}

Zaf1_6 Zq0Dy2B_3
# ifdef HAVE_ARGS
(SHORTCARD Z142, Zaf1_6 Z143)
# else
(Z142, Z143)
SHORTCARD Z142;
Zaf1_6 Z143;
# endif
{
Z125 Z146;

Z146 = Z134->A[Z142];
while (Z146 != NIL) {
if (Z146->Y0 == Z143) {
return Z146->Y1;
}
Z146 = Z146->Y2;
}
return Zaf1_0;
}

void Zq0Dy2B_4
 ARGS ((void))
{
ZarQdhNDD_3((ADDRESS *)&Z132, &Z133, (LONGINT)sizeof (Z126));
ZarQdhNDD_3((ADDRESS *)&Z134, &Z135, (LONGINT)sizeof (Z125));
}

void BEGIN_Traces ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Dfa ();
BEGIN_Dfa ();
BEGIN_GenTabs ();
BEGIN_DynArray ();

}
