#include "SYSTEM_.h"

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Oper
#include "Oper.h"
#endif


#define Z151	25
#define Z152	26
#define Z153	40
#define Z154	35
typedef struct S_1 *Z155;
typedef struct S_2 *Z157;
typedef struct S_1 {
ZltFA_0 Y0;
ZqxDADwjx_7 Y1;
Z157 Y2;
ZijFQQ_3 Y3;
ZqxDADwjx_7 Y4;
Z155 Y5;
} Z156;
typedef struct S_2 {
ZqxDADwjx_10 Y0;
ZqxDADwjx_7 Y1;
Z157 Y2;
} Z158;
static struct S_3 {
ZqxDADwjx_7 Y0;
ZijFQQ_3 Y1;
ZqxDADwjx_7 Y2;
} Z168;
static BOOLEAN Z170;
static Z155 Z171;
static Z155 Z172;
static Z155 Z173;
static BOOLEAN Z174;
static ZqxDADwjx_12 Z175;
static Z157 Z176, Z177;
static BOOLEAN Z178;
static BOOLEAN Z179;
static void Z183 ARGS ((CHAR Z200[], LONGCARD O_1));

void ZltFA_1
# ifdef HAVE_ARGS
(ZltFA_0 Z159, ZqxDADwjx_7 Z181)
# else
(Z159, Z181)
ZltFA_0 Z159;
ZqxDADwjx_7 Z181;
# endif
{
Z155 Z182;

if (Z179) {
Z183((STRING)"MakePriority : Do not write now ", 32L);
}
Z170 = TRUE;
Z182 = (Z155)ZDtgCFKU_1((LONGINT)sizeof (Z156));
if (Z182 == NIL) {
Z183((STRING)"MakePriority : Heap overflow", 28L);
}
Z182->Y0 = Z159;
Z182->Y1 = Z181;
Z182->Y2 = NIL;
Z176 = NIL;
Z182->Y5 = NIL;
ZijFQQ_5(&Z182->Y3);
Z182->Y4.Y0 = 0;
Z182->Y4.Y1 = 0;
if (Z171 != NIL) {
Z171->Y5 = Z182;
} else {
Z172 = Z182;
}
Z171 = Z182;
INC(Z175);
}

void ZltFA_2
# ifdef HAVE_ARGS
(ZijFQQ_3 Z163, ZqxDADwjx_7 Z164)
# else
(Z163, Z164)
ZijFQQ_3 Z163;
ZqxDADwjx_7 Z164;
# endif
{
if (!Z170) {
Z183((STRING)"CompletePriority : Wrong use of procedure", 41L);
}
if (Z179) {
Z183((STRING)"CompletePriority : Do not write now", 35L);
}
Z171->Y3 = Z163;
Z171->Y4 = Z164;
Z170 = FALSE;
}

void ZltFA_3
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z166, ZqxDADwjx_7 Z167)
# else
(Z166, Z167)
Zfb3DLQ_0 Z166;
ZqxDADwjx_7 Z167;
# endif
{
Z157 Z188;
ZqxDADwjx_10 Z189;
ZqxDADwjx_13 Z190;
ZqxDADwjx_11 Z191;

if (!Z170) {
Z183((STRING)"makeOperator : Wrong use of procedure", 37L);
}
Z189 = ZqxDADwjx_20(Z166, &Z190);
if (Z190 == ZqxDADwjx_30) {
Z189 = ZqxDADwjx_5 + 1;
if (Z189 > ZqxDADwjx_1) {
ZblNKKO_52((LONGCARD)Z152, (LONGCARD)ZblNKKO_41, Z167);
}
Z191 = Z189;
ZqxDADwjx_14(Z166, &Z191, &Z190, Z167);
if (Z190 == ZqxDADwjx_29) {
ZblNKKO_52((LONGCARD)Z152, (LONGCARD)ZblNKKO_41, Z167);
}
} else if (Z190 == ZqxDADwjx_31) {
ZblNKKO_53((LONGCARD)Z151, (LONGCARD)ZblNKKO_40, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_38, ADR (Z166));
}
if (ZqxDADwjx_19(Z189) != ZqxDADwjx_33) {
ZblNKKO_53((LONGCARD)Z153, (LONGCARD)ZblNKKO_42, Z167, (LONGCARD)ZblNKKO_38, ADR (Z166));
} else if (ZqxDADwjx_24(Z189) != 0) {
ZblNKKO_53((LONGCARD)Z154, (LONGCARD)ZblNKKO_42, Z167, (LONGCARD)ZblNKKO_38, ADR (Z166));
} else {
ZqxDADwjx_23(ZqxDADwjx_20(Z166, &Z190), Z175);
Z188 = (Z157)ZDtgCFKU_1((LONGINT)sizeof (Z158));
if (Z188 == NIL) {
Z183((STRING)"MakeOperator : Heap Overflow", 28L);
}
Z188->Y0 = ZqxDADwjx_20(Z166, &Z190);
Z188->Y1 = Z167;
Z188->Y2 = NIL;
if (Z176 != NIL) {
Z176->Y2 = Z188;
} else {
Z171->Y2 = Z188;
}
Z176 = Z188;
}
}

void ZltFA_4
# ifdef HAVE_ARGS
(ZqxDADwjx_7 Z169, ZijFQQ_3 Z163, ZqxDADwjx_7 Z164)
# else
(Z169, Z163, Z164)
ZqxDADwjx_7 Z169;
ZijFQQ_3 Z163;
ZqxDADwjx_7 Z164;
# endif
{
Z168.Y0 = Z169;
Z168.Y1 = Z163;
Z168.Y2 = Z164;
Z174 = TRUE;
}

void ZltFA_5
 ARGS ((void))
{
Z179 = TRUE;
Z173 = Z172;
}

BOOLEAN ZltFA_6
# ifdef HAVE_ARGS
(ZqxDADwjx_7 *Z169, ZijFQQ_3 *Z163, ZqxDADwjx_7 *Z164)
# else
(Z169, Z163, Z164)
ZqxDADwjx_7 *Z169;
ZijFQQ_3 *Z163;
ZqxDADwjx_7 *Z164;
# endif
{
if (Z174) {
*Z169 = Z168.Y0;
*Z163 = Z168.Y1;
*Z164 = Z168.Y2;
} else {
Z169->Y0 = 0;
Z169->Y1 = 0;
ZijFQQ_5(Z163);
Z164->Y0 = 0;
Z164->Y1 = 0;
}
return Z174;
}

BOOLEAN ZltFA_7
# ifdef HAVE_ARGS
(ZltFA_0 *Z159, ZqxDADwjx_7 *Z181, ZijFQQ_3 *Z163, ZqxDADwjx_7 *Z164)
# else
(Z159, Z181, Z163, Z164)
ZltFA_0 *Z159;
ZqxDADwjx_7 *Z181;
ZijFQQ_3 *Z163;
ZqxDADwjx_7 *Z164;
# endif
{
if (!Z179) {
Z183((STRING)"GetPriority : You must not read now", 35L);
}
if (Z173 == NIL) {
Z178 = FALSE;
return FALSE;
} else {
*Z159 = Z173->Y0;
*Z181 = Z173->Y1;
*Z163 = Z173->Y3;
*Z164 = Z173->Y4;
Z177 = Z173->Y2;
Z173 = Z173->Y5;
Z178 = TRUE;
return TRUE;
}
}

BOOLEAN ZltFA_8
# ifdef HAVE_ARGS
(ZqxDADwjx_10 *Z166, ZqxDADwjx_7 *Z167)
# else
(Z166, Z167)
ZqxDADwjx_10 *Z166;
ZqxDADwjx_7 *Z167;
# endif
{
if (!Z178) {
Z183((STRING)"GetOperator : Wrong use of procedure", 36L);
}
if (Z177 == NIL) {
return FALSE;
} else {
*Z166 = Z177->Y0;
*Z167 = Z177->Y1;
Z177 = Z177->Y2;
return TRUE;
}
}

static void Z183
# ifdef HAVE_ARGS
(CHAR Z200[], LONGCARD O_1)
# else
(Z200, O_1)
CHAR Z200[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z201;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z200, O_1, CHAR)
Zp1PEAFD_13(Z200, O_1, &Z201);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_35, ADR (Z201));
FREE_OPEN_ARRAYS
}

void BEGIN_Oper ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Lists ();
BEGIN_TokenTab ();
BEGIN_Idents ();
BEGIN_Lists ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_rMemory ();
BEGIN_Position ();
BEGIN_TokenTab ();
BEGIN_Errors ();

Z172 = NIL;
Z171 = NIL;
Z173 = NIL;
Z174 = FALSE;
Z170 = FALSE;
Z176 = NIL;
Z177 = NIL;
Z179 = FALSE;
Z178 = FALSE;
Z175 = 0;
}
