#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Types
#include "Types.h"
#endif

#ifndef DEFINITION_Table
#include "Table.h"
#endif

Zfb3DLQ_0 Zqjx8B_0;

typedef struct S_3 *Z135;
typedef struct S_1 {
char dummy;
} Z137;
typedef struct S_2 {
Zq0A4_43 Y0;
ZpmCQ_4 Y1;
ZpmCQ_4 Y2;
ZpmCQ_4 Y3;
INTEGER Y4;
} Z138;
typedef struct S_3 {
union {
struct {
Z137 Y0;
} V_1;
struct {
Z138 Y1;
} V_2;
} U_1;
} Z136;
static struct S_4 {
Z135 A[1000 + 1];
} *Z146;
static LONGINT Z147;
static INTEGER Z148;

void Zqjx8B_1
 ARGS ((void))
{
Zfb3DLQ_0 Z150;

Z147 = Zqjx8B_0 + 1;
ZarQdhNDD_0((ADDRESS *)&Z146, &Z147, (LONGINT)sizeof (Z135));
{
SHORTCARD B_1 = 1, B_2 = Zqjx8B_0;

if (B_1 <= B_2)
for (Z150 = B_1;; Z150 += 1) {
if (Zq7SFB_5(Z150)) {
Z146->A[Z150] = (Z135)ZDtgCFKU_1((LONGINT)sizeof (Z138));
{
register Z138 *W_1 = &Z146->A[Z150]->U_1.V_2.Y1;

W_1->Y0 = NIL;
ZpmCQ_5(&W_1->Y1, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&W_1->Y2, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&W_1->Y3, (LONGCARD)Zqjx8B_0);
W_1->Y4 = Z148;
}
} else if (Zq7SFB_4(Z150)) {
} else {
Z146->A[Z150] = NIL;
}
if (Z150 >= B_2) break;
}
}
}

void Zqjx8B_2
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z153, Zq0A4_43 Z154)
# else
(Z153, Z154)
Zfb3DLQ_0 Z153;
Zq0A4_43 Z154;
# endif
{
if (Zq7SFB_5(Z153)) {
Z146->A[Z153]->U_1.V_2.Y1.Y0 = Z154;
}
}

Zq0A4_43 Zqjx8B_3
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z153)
# else
(Z153)
Zfb3DLQ_0 Z153;
# endif
{
return Z146->A[Z153]->U_1.V_2.Y1.Y0;
}

void Zqjx8B_4
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z153, Zfb3DLQ_0 Z156)
# else
(Z153, Z156)
Zfb3DLQ_0 Z153;
Zfb3DLQ_0 Z156;
# endif
{
if (Zq7SFB_5(Z153)) {
ZpmCQ_13(&Z146->A[Z153]->U_1.V_2.Y1.Y1, (LONGCARD)Z156);
}
}

void Zqjx8B_5
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z153, ZpmCQ_4 *Z157)
# else
(Z153, Z157)
Zfb3DLQ_0 Z153;
ZpmCQ_4 *Z157;
# endif
{
ZpmCQ_30(Z157, Z146->A[Z153]->U_1.V_2.Y1.Y1);
}

void Zqjx8B_6
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z153, ZpmCQ_4 Z159)
# else
(Z153, Z159)
Zfb3DLQ_0 Z153;
ZpmCQ_4 Z159;
# endif
{
if (Zq7SFB_5(Z153)) {
ZpmCQ_30(&Z146->A[Z153]->U_1.V_2.Y1.Y2, Z159);
}
}

void Zqjx8B_7
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z150, ZpmCQ_4 *Z159)
# else
(Z150, Z159)
Zfb3DLQ_0 Z150;
ZpmCQ_4 *Z159;
# endif
{
if (Zq7SFB_5(Z150)) {
ZpmCQ_30(Z159, Z146->A[Z150]->U_1.V_2.Y1.Y2);
} else if (Zq7SFB_4(Z150)) {
ZpmCQ_31(Z159, (LONGCARD)Z150);
} else {
ZpmCQ_32(Z159);
}
}

void Zqjx8B_8
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z153, ZpmCQ_4 Z161)
# else
(Z153, Z161)
Zfb3DLQ_0 Z153;
ZpmCQ_4 Z161;
# endif
{
if (Zq7SFB_5(Z153)) {
ZpmCQ_30(&Z146->A[Z153]->U_1.V_2.Y1.Y3, Z161);
}
}

void Zqjx8B_9
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z153, ZpmCQ_4 Z161)
# else
(Z153, Z161)
Zfb3DLQ_0 Z153;
ZpmCQ_4 Z161;
# endif
{
if (Zq7SFB_5(Z153)) {
ZpmCQ_8(&Z146->A[Z153]->U_1.V_2.Y1.Y3, Z161);
}
}

void Zqjx8B_10
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z153, ZpmCQ_4 *Z161)
# else
(Z153, Z161)
Zfb3DLQ_0 Z153;
ZpmCQ_4 *Z161;
# endif
{
if (Zq7SFB_5(Z153)) {
ZpmCQ_30(Z161, Z146->A[Z153]->U_1.V_2.Y1.Y3);
} else {
ZpmCQ_32(Z161);
}
}

void Zqjx8B_11
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z153, INTEGER Z164)
# else
(Z153, Z164)
Zfb3DLQ_0 Z153;
INTEGER Z164;
# endif
{
if (Zq7SFB_5(Z153)) {
Z146->A[Z153]->U_1.V_2.Y1.Y4 = Z164;
}
}

INTEGER Zqjx8B_12
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z153)
# else
(Z153)
Zfb3DLQ_0 Z153;
# endif
{
if (Zq7SFB_5(Z153)) {
return Z146->A[Z153]->U_1.V_2.Y1.Y4;
} else {
return 1;
}
}

void BEGIN_Table ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_DynArray ();
BEGIN_Idents ();
BEGIN_rMemory ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_Types ();

Z148 = MAX_LONGINT / 2;
}
