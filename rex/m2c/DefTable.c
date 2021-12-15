#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_DefTable
#include "DefTable.h"
#endif

Zae5ojx8B_1 Zae5ojx8B_3;

#define Z122	32
typedef struct S_1 {
Zfb3DLQ_0 Y0;
Zae5ojx8B_2 Y1;
union {
struct {
Zq0A4_11 Y2;
} V_1;
struct {
LONGCARD Y3;
} V_2;
} U_1;
} Z123;
typedef struct S_2 {
Z123 A[100000 + 1];
} Z114;
static Z114 *Z130;
static LONGINT Z131;

void Zae5ojx8B_4
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z133, Zq0A4_11 Z134)
# else
(Z133, Z134)
Zfb3DLQ_0 Z133;
Zq0A4_11 Z134;
# endif
{
INC(Zae5ojx8B_3);
if (Zae5ojx8B_3 == Z131) {
ZarQdhNDD_2((ADDRESS *)&Z130, &Z131, (LONGINT)sizeof (Z123));
}
{
register Z123 *W_1 = &Z130->A[Zae5ojx8B_3];

W_1->Y0 = Z133;
W_1->Y1 = Zae5ojx8B_11;
W_1->U_1.V_1.Y2 = Z134;
}
}

void Zae5ojx8B_5
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z133, LONGCARD Z137)
# else
(Z133, Z137)
Zfb3DLQ_0 Z133;
LONGCARD Z137;
# endif
{
INC(Zae5ojx8B_3);
if (Zae5ojx8B_3 == Z131) {
ZarQdhNDD_2((ADDRESS *)&Z130, &Z131, (LONGINT)sizeof (Z123));
}
{
register Z123 *W_2 = &Z130->A[Zae5ojx8B_3];

W_2->Y0 = Z133;
W_2->Y1 = Zae5ojx8B_12;
W_2->U_1.V_2.Y3 = Z137;
}
}

Zae5ojx8B_1 Zae5ojx8B_6
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z133, Zae5ojx8B_2 Z139)
# else
(Z133, Z139)
Zfb3DLQ_0 Z133;
Zae5ojx8B_2 Z139;
# endif
{
Zae5ojx8B_1 Z141;

{
LONGINT B_1 = 1, B_2 = Zae5ojx8B_3;

if (B_1 <= B_2)
for (Z141 = B_1;; Z141 += 1) {
{
register Z123 *W_3 = &Z130->A[Z141];

if (W_3->Y0 == Z133 && W_3->Y1 == Z139) {
return Z141;
}
}
if (Z141 >= B_2) break;
}
}
return Zae5ojx8B_0;
}

Zae5ojx8B_2 Zae5ojx8B_7
# ifdef HAVE_ARGS
(Zae5ojx8B_1 Z144)
# else
(Z144)
Zae5ojx8B_1 Z144;
# endif
{
return Z130->A[Z144].Y1;
}

void Zae5ojx8B_8
# ifdef HAVE_ARGS
(Zae5ojx8B_1 Z144, Zfb3DLQ_0 *Z133, Zq0A4_11 *Z134)
# else
(Z144, Z133, Z134)
Zae5ojx8B_1 Z144;
Zfb3DLQ_0 *Z133;
Zq0A4_11 *Z134;
# endif
{
{
register Z123 *W_4 = &Z130->A[Z144];

*Z133 = W_4->Y0;
*Z134 = W_4->U_1.V_1.Y2;
}
}

void Zae5ojx8B_9
# ifdef HAVE_ARGS
(Zae5ojx8B_1 Z144, Zfb3DLQ_0 *Z133, LONGCARD *Z137)
# else
(Z144, Z133, Z137)
Zae5ojx8B_1 Z144;
Zfb3DLQ_0 *Z133;
LONGCARD *Z137;
# endif
{
{
register Z123 *W_5 = &Z130->A[Z144];

*Z133 = W_5->Y0;
*Z137 = W_5->U_1.V_2.Y3;
}
}

void BEGIN_DefTable ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_Tree ();
BEGIN_DynArray ();
BEGIN_Idents ();
BEGIN_Tree ();

Z131 = Z122;
ZarQdhNDD_0((ADDRESS *)&Z130, &Z131, (LONGINT)sizeof (Z123));
Zae5ojx8B_3 = 0;
}
