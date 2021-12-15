#include "SYSTEM_.h"

#ifndef DEFINITION_Derivabl
#include "Derivabl.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Stack
#include "Stack.h"
#endif

#ifndef DEFINITION_Table
#include "Table.h"
#endif

#ifndef DEFINITION_Types
#include "Types.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_First
#include "First.h"
#endif


static ZpmCQ_4 Z166;
static void Z167 ARGS ((Zq0A4_43 Z168, ZpmCQ_4 *Z169));
static void Z180 ARGS ((void));
struct S_1_GlobalFirsts;
static void Z184 ARGS ((void));
struct S_1 {
INTEGER A[1000 + 1];
};
static void Z190 ARGS ((struct S_1_GlobalFirsts *link, Zfb3DLQ_0 Z191));
struct S_1_GlobalFirsts {
Zp1Fy8_2 *Z185;
struct S_1 **Z181;
ZpmCQ_4 *Z186;
ZpmCQ_4 *Z187;
ZpmCQ_4 *Z188;
INTEGER *Z189;
};
static void Z200 ARGS ((Zq0A4_43 Z168));
static void Z201 ARGS ((void));

static void Z167
# ifdef HAVE_ARGS
(Zq0A4_43 Z168, ZpmCQ_4 *Z169)
# else
(Z168, Z169)
Zq0A4_43 Z168;
ZpmCQ_4 *Z169;
# endif
{
ZpmCQ_4 Z170;

switch (Z168->U_1.V_1.Y0) {
case Zq0A4_30:;
Z167(Z168->U_1.V_27.Y26.Y11, Z169);
ZpmCQ_13(Z169, (LONGCARD)Zpky9FDA_2);
break;
case Zq0A4_31:;
Z167(Z168->U_1.V_28.Y27.Y11, Z169);
ZpmCQ_13(Z169, (LONGCARD)Zpky9FDA_2);
break;
case Zq0A4_32:;
Z167(Z168->U_1.V_29.Y28.Y11, Z169);
break;
case Zq0A4_33:;
Z167(Z168->U_1.V_30.Y29.Y11, Z169);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, Z169)) {
ZpmCQ_14(Z169, (LONGCARD)Zpky9FDA_2);
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
Z167(Z168->U_1.V_30.Y29.Y12, &Z170);
ZpmCQ_8(Z169, Z170);
ZpmCQ_7(&Z170);
}
break;
case Zq0A4_34:;
ZpmCQ_31(Z169, (LONGCARD)Zpky9FDA_2);
break;
case Zq0A4_35:;
ZpmCQ_31(Z169, (LONGCARD)Z168->U_1.V_32.Y31.Y11->U_1.V_21.Y20.Y2);
if (ZaeAEIAx8_2(Z168->U_1.V_32.Y31.Y11->U_1.V_21.Y20.Y2)) {
ZpmCQ_13(Z169, (LONGCARD)Zpky9FDA_2);
}
break;
case Zq0A4_37:;
ZpmCQ_32(Z169);
break;
case Zq0A4_38:;
Z167(Z168->U_1.V_35.Y34.Y14, Z169);
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
Z167(Z168->U_1.V_35.Y34.Y13, &Z170);
ZpmCQ_8(Z169, Z170);
ZpmCQ_7(&Z170);
break;
case Zq0A4_40:;
ZpmCQ_31(Z169, (LONGCARD)Zpky9FDA_2);
break;
case Zq0A4_41:;
Z167(Z168->U_1.V_38.Y37.Y12, Z169);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, Z169)) {
ZpmCQ_14(Z169, (LONGCARD)Zpky9FDA_2);
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
Z167(Z168->U_1.V_38.Y37.Y11, &Z170);
ZpmCQ_8(Z169, Z170);
ZpmCQ_7(&Z170);
}
break;
}
}

static void Z180
 ARGS ((void))
{
ZpmCQ_4 Z181, Z182;
Zfb3DLQ_0 Z183;

ZpmCQ_5(&Z181, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&Z182, (LONGCARD)Zqjx8B_0);
Zq7SFB_7(&Z181);
while (!ZpmCQ_26(Z181)) {
Z183 = ZpmCQ_20(&Z181);
Z167(Zqjx8B_3(Z183), &Z182);
Zqjx8B_6(Z183, Z182);
}
ZpmCQ_7(&Z182);
ZpmCQ_7(&Z181);
}

static void Z190
# ifdef HAVE_ARGS
(struct S_1_GlobalFirsts *link, Zfb3DLQ_0 Z191)
# else
(link, Z191)
struct S_1_GlobalFirsts *link;
Zfb3DLQ_0 Z191;
# endif
{
INTEGER Z192;
ZpmCQ_4 Z193;
Zfb3DLQ_0 Z194;
ZpmCQ_4 Z195, Z196;

ZpmCQ_5(&Z195, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&Z196, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&Z193, (LONGCARD)Zqjx8B_0);
Zp1Fy8_7(link->Z185, Z191);
Z192 = Zp1Fy8_10(*link->Z185);
(*link->Z181)->A[Z191] = Z192;
Zqjx8B_7(Z191, &Z195);
ZpmCQ_10(&Z195, *link->Z187);
Zqjx8B_7(Z191, &Z193);
ZpmCQ_10(&Z193, *link->Z188);
while (!ZpmCQ_26(Z193)) {
Z194 = ZpmCQ_20(&Z193);
if (Z194 == Z191) {
ZpmCQ_13(&Z166, (LONGCARD)Z194);
} else if (ZpmCQ_25((LONGCARD)Z194, link->Z186)) {
ZpmCQ_14(link->Z186, (LONGCARD)Z194);
Z190(link, Z194);
}
if ((*link->Z181)->A[Z194] < (*link->Z181)->A[Z191]) {
(*link->Z181)->A[Z191] = (*link->Z181)->A[Z194];
}
Zqjx8B_7(Z194, &Z196);
ZpmCQ_10(&Z196, *link->Z187);
ZpmCQ_14(&Z196, (LONGCARD)Zpky9FDA_2);
ZpmCQ_8(&Z195, Z196);
}
Zqjx8B_6(Z191, Z195);
if ((*link->Z181)->A[Z191] == Z192) {
if (Zp1Fy8_9(link->Z185) == Z191) {
Z194 = Zp1Fy8_8(link->Z185);
(*link->Z181)->A[Z194] = *link->Z189;
} else {
do {
Z194 = Zp1Fy8_8(link->Z185);
(*link->Z181)->A[Z194] = *link->Z189;
Zqjx8B_6(Z194, Z195);
ZpmCQ_13(&Z166, (LONGCARD)Z194);
} while (!(Z194 == Z191));
}
}
ZpmCQ_7(&Z193);
ZpmCQ_7(&Z195);
ZpmCQ_7(&Z196);
}

static void Z184
 ARGS ((void))
{
Zp1Fy8_2 Z185;
struct S_1 *Z181;
ZpmCQ_4 Z186;
ZpmCQ_4 Z187;
ZpmCQ_4 Z188;
INTEGER Z189;
LONGINT Z197;
Zfb3DLQ_0 Z191;
struct S_1_GlobalFirsts frame;

frame.Z185 = &Z185;
frame.Z181 = &Z181;
frame.Z186 = &Z186;
frame.Z187 = &Z187;
frame.Z188 = &Z188;
frame.Z189 = &Z189;
ZpmCQ_5(&Z166, (LONGCARD)Zqjx8B_0);
Z189 = Zqjx8B_0 + 1;
Zp1Fy8_3(&Z185);
Z197 = Zqjx8B_0 + 1;
ZarQdhNDD_0((ADDRESS *)&Z181, &Z197, (LONGINT)sizeof (INTEGER));
{
SHORTCARD B_1 = 0, B_2 = Zqjx8B_0;

if (B_1 <= B_2)
for (Z191 = B_1;; Z191 += 1) {
Z181->A[Z191] = 0;
if (Z191 >= B_2) break;
}
}
ZpmCQ_5(&Z187, (LONGCARD)Zqjx8B_0);
Zq7SFB_6(&Z187);
ZpmCQ_5(&Z188, (LONGCARD)Zqjx8B_0);
Zq7SFB_7(&Z188);
ZpmCQ_5(&Z186, (LONGCARD)Zqjx8B_0);
Zq7SFB_7(&Z186);
while (!ZpmCQ_26(Z186)) {
Z191 = ZpmCQ_20(&Z186);
Z190(&frame, Z191);
}
ZpmCQ_7(&Z187);
ZpmCQ_7(&Z188);
ZpmCQ_7(&Z186);
ZarQdhNDD_3((ADDRESS *)&Z181, &Z197, (LONGINT)sizeof (INTEGER));
Zp1Fy8_4(&Z185);
}

BOOLEAN ZcdEOQ_1
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z199)
# else
(Z199)
Zfb3DLQ_0 Z199;
# endif
{
return ZpmCQ_25((LONGCARD)Z199, &Z166);
}

static void Z200
# ifdef HAVE_ARGS
(Zq0A4_43 Z168)
# else
(Z168)
Zq0A4_43 Z168;
# endif
{
ZpmCQ_5(&Z168->U_1.V_26.Y25.Y2, (LONGCARD)Zqjx8B_0);
switch (Z168->U_1.V_1.Y0) {
case Zq0A4_30:;
{
register Zq0A4_83 *W_1 = &Z168->U_1.V_27.Y26;

Z200(W_1->Y11);
ZpmCQ_30(&W_1->Y2, W_1->Y11->U_1.V_26.Y25.Y2);
ZpmCQ_13(&W_1->Y2, (LONGCARD)Zpky9FDA_2);
}
break;
case Zq0A4_31:;
{
register Zq0A4_84 *W_2 = &Z168->U_1.V_28.Y27;

Z200(W_2->Y11);
ZpmCQ_30(&W_2->Y2, W_2->Y11->U_1.V_26.Y25.Y2);
ZpmCQ_13(&W_2->Y2, (LONGCARD)Zpky9FDA_2);
}
break;
case Zq0A4_32:;
{
register Zq0A4_85 *W_3 = &Z168->U_1.V_29.Y28;

Z200(W_3->Y11);
ZpmCQ_30(&W_3->Y2, W_3->Y11->U_1.V_26.Y25.Y2);
}
break;
case Zq0A4_33:;
{
register Zq0A4_86 *W_4 = &Z168->U_1.V_30.Y29;

Z200(W_4->Y11);
ZpmCQ_30(&W_4->Y2, W_4->Y11->U_1.V_26.Y25.Y2);
Z200(W_4->Y12);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &W_4->Y2)) {
ZpmCQ_14(&W_4->Y2, (LONGCARD)Zpky9FDA_2);
ZpmCQ_8(&W_4->Y2, W_4->Y12->U_1.V_26.Y25.Y2);
}
}
break;
case Zq0A4_34:;
{
register Zq0A4_87 *W_5 = &Z168->U_1.V_31.Y30;

ZpmCQ_31(&W_5->Y2, (LONGCARD)Zpky9FDA_2);
}
break;
case Zq0A4_35:;
{
register Zq0A4_88 *W_6 = &Z168->U_1.V_32.Y31;

Zqjx8B_7(W_6->Y11->U_1.V_21.Y20.Y2, &W_6->Y2);
}
break;
case Zq0A4_37:;
{
register Zq0A4_90 *W_7 = &Z168->U_1.V_34.Y33;

ZpmCQ_32(&W_7->Y2);
}
break;
case Zq0A4_38:;
{
register Zq0A4_91 *W_8 = &Z168->U_1.V_35.Y34;

Z200(W_8->Y14);
ZpmCQ_30(&W_8->Y2, W_8->Y14->U_1.V_26.Y25.Y2);
Z200(W_8->Y13);
ZpmCQ_8(&W_8->Y2, W_8->Y13->U_1.V_26.Y25.Y2);
}
break;
case Zq0A4_40:;
{
register Zq0A4_93 *W_9 = &Z168->U_1.V_37.Y36;

ZpmCQ_31(&W_9->Y2, (LONGCARD)Zpky9FDA_2);
}
break;
case Zq0A4_41:;
{
register Zq0A4_94 *W_10 = &Z168->U_1.V_38.Y37;

Z200(W_10->Y12);
ZpmCQ_30(&W_10->Y2, W_10->Y12->U_1.V_26.Y25.Y2);
Z200(W_10->Y11);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &W_10->Y2)) {
ZpmCQ_14(&W_10->Y2, (LONGCARD)Zpky9FDA_2);
ZpmCQ_8(&W_10->Y2, W_10->Y11->U_1.V_26.Y25.Y2);
}
}
break;
}
}

static void Z201
 ARGS ((void))
{
ZpmCQ_4 Z181;
Zfb3DLQ_0 Z183;

ZpmCQ_5(&Z181, (LONGCARD)Zqjx8B_0);
Zq7SFB_7(&Z181);
while (!ZpmCQ_26(Z181)) {
Z183 = ZpmCQ_20(&Z181);
Z200(Zqjx8B_3(Z183));
}
ZpmCQ_7(&Z181);
}

void ZcdEOQ_0
 ARGS ((void))
{
Z180();
Z184();
Z201();
}

void BEGIN_First ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_Derivabl ();
BEGIN_DynArray ();
BEGIN_Idents ();
BEGIN_Scanner ();
BEGIN_Sets ();
BEGIN_Stack ();
BEGIN_Table ();
BEGIN_Types ();
BEGIN_Tree ();

}
