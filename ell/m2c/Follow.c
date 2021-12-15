#include "SYSTEM_.h"

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

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Types
#include "Types.h"
#endif

#ifndef DEFINITION_Follow
#include "Follow.h"
#endif


static void Z164 ARGS ((Zfb3DLQ_0 Z165));
static void Z167 ARGS ((Zq0A4_43 Z168, ZpmCQ_4 Z169));
static void Z181 ARGS ((void));
struct S_1_GlobalFollows;
static void Z184 ARGS ((void));
struct S_1 {
INTEGER A[1000 + 1];
};
static void Z190 ARGS ((struct S_1_GlobalFollows *link, Zfb3DLQ_0 Z191));
struct S_1_GlobalFollows {
Zp1Fy8_2 *Z185;
struct S_1 **Z182;
ZpmCQ_4 *Z186;
ZpmCQ_4 *Z187;
ZpmCQ_4 *Z188;
INTEGER *Z189;
};
static void Z197 ARGS ((Zq0A4_43 Z168, ZpmCQ_4 Z169));
static void Z199 ARGS ((void));

static void Z164
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z165)
# else
(Z165)
Zfb3DLQ_0 Z165;
# endif
{
ZpmCQ_4 Z166;

ZpmCQ_5(&Z166, (LONGCARD)Zqjx8B_0);
ZpmCQ_31(&Z166, (LONGCARD)Zpky9FDA_3);
Zqjx8B_9(Z165, Z166);
ZpmCQ_7(&Z166);
}

static void Z167
# ifdef HAVE_ARGS
(Zq0A4_43 Z168, ZpmCQ_4 Z169)
# else
(Z168, Z169)
Zq0A4_43 Z168;
ZpmCQ_4 Z169;
# endif
{
ZpmCQ_4 Z170;

switch (Z168->U_1.V_1.Y0) {
case Zq0A4_30:;
Z167(Z168->U_1.V_27.Y26.Y11, Z169);
break;
case Zq0A4_31:;
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
ZpmCQ_30(&Z170, Z169);
ZpmCQ_8(&Z170, Z168->U_1.V_28.Y27.Y2);
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
Z167(Z168->U_1.V_28.Y27.Y11, Z170);
ZpmCQ_7(&Z170);
break;
case Zq0A4_32:;
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
ZpmCQ_30(&Z170, Z169);
ZpmCQ_8(&Z170, Z168->U_1.V_29.Y28.Y2);
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
Z167(Z168->U_1.V_29.Y28.Y11, Z170);
ZpmCQ_7(&Z170);
break;
case Zq0A4_33:;
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
ZpmCQ_30(&Z170, Z168->U_1.V_30.Y29.Y12->U_1.V_26.Y25.Y2);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &Z170)) {
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
ZpmCQ_8(&Z170, Z168->U_1.V_30.Y29.Y11->U_1.V_26.Y25.Y2);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &Z170)) {
ZpmCQ_8(&Z170, Z168->U_1.V_30.Y29.Y12->U_1.V_26.Y25.Y2);
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
}
}
ZpmCQ_8(&Z170, Z169);
Z167(Z168->U_1.V_30.Y29.Y11, Z170);
ZpmCQ_30(&Z170, Z168->U_1.V_30.Y29.Y11->U_1.V_26.Y25.Y2);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &Z170)) {
ZpmCQ_8(&Z170, Z168->U_1.V_30.Y29.Y12->U_1.V_26.Y25.Y2);
ZpmCQ_8(&Z170, Z169);
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
}
Z167(Z168->U_1.V_30.Y29.Y12, Z170);
ZpmCQ_7(&Z170);
break;
case Zq0A4_34:;
break;
case Zq0A4_35:;
{
register Zq0A4_77 *W_1 = &Z168->U_1.V_32.Y31.Y11->U_1.V_21.Y20;

if (Zq7SFB_5(W_1->Y2)) {
Zqjx8B_9(W_1->Y2, Z169);
}
}
break;
case Zq0A4_37:;
break;
case Zq0A4_38:;
Z167(Z168->U_1.V_35.Y34.Y14, Z169);
Z167(Z168->U_1.V_35.Y34.Y13, Z169);
break;
case Zq0A4_40:;
break;
case Zq0A4_41:;
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
ZpmCQ_30(&Z170, Z168->U_1.V_38.Y37.Y11->U_1.V_26.Y25.Y2);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &Z170)) {
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
ZpmCQ_8(&Z170, Z169);
}
Z167(Z168->U_1.V_38.Y37.Y12, Z170);
ZpmCQ_7(&Z170);
Z167(Z168->U_1.V_38.Y37.Y11, Z169);
break;
}
}

static void Z181
 ARGS ((void))
{
ZpmCQ_4 Z182;
ZpmCQ_4 Z166;
Zfb3DLQ_0 Z183;

ZpmCQ_5(&Z182, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&Z166, (LONGCARD)Zqjx8B_0);
Zq7SFB_7(&Z182);
while (!ZpmCQ_26(Z182)) {
Z183 = ZpmCQ_20(&Z182);
ZpmCQ_31(&Z166, (LONGCARD)Z183);
Z167(Zqjx8B_3(Z183), Z166);
}
ZpmCQ_7(&Z182);
ZpmCQ_7(&Z166);
}

static void Z190
# ifdef HAVE_ARGS
(struct S_1_GlobalFollows *link, Zfb3DLQ_0 Z191)
# else
(link, Z191)
struct S_1_GlobalFollows *link;
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
(*link->Z182)->A[Z191] = Z192;
Zqjx8B_10(Z191, &Z195);
ZpmCQ_10(&Z195, *link->Z187);
Zqjx8B_10(Z191, &Z193);
ZpmCQ_10(&Z193, *link->Z188);
while (!ZpmCQ_26(Z193)) {
Z194 = ZpmCQ_20(&Z193);
if (ZpmCQ_25((LONGCARD)Z194, link->Z186)) {
ZpmCQ_14(link->Z186, (LONGCARD)Z194);
Z190(link, Z194);
}
if ((*link->Z182)->A[Z194] < (*link->Z182)->A[Z191]) {
(*link->Z182)->A[Z191] = (*link->Z182)->A[Z194];
}
Zqjx8B_10(Z194, &Z196);
ZpmCQ_10(&Z196, *link->Z187);
ZpmCQ_8(&Z195, Z196);
}
Zqjx8B_8(Z191, Z195);
if ((*link->Z182)->A[Z191] == Z192) {
do {
Z194 = Zp1Fy8_8(link->Z185);
(*link->Z182)->A[Z194] = *link->Z189;
Zqjx8B_8(Z194, Z195);
} while (!(Z194 == Z191));
}
ZpmCQ_7(&Z195);
ZpmCQ_7(&Z196);
ZpmCQ_7(&Z193);
}

static void Z184
 ARGS ((void))
{
Zp1Fy8_2 Z185;
struct S_1 *Z182;
ZpmCQ_4 Z186;
ZpmCQ_4 Z187, Z188;
INTEGER Z189;
LONGINT Z170;
Zfb3DLQ_0 Z191;
struct S_1_GlobalFollows frame;

frame.Z185 = &Z185;
frame.Z182 = &Z182;
frame.Z186 = &Z186;
frame.Z187 = &Z187;
frame.Z188 = &Z188;
frame.Z189 = &Z189;
Z189 = Zqjx8B_0 + 1;
Zp1Fy8_3(&Z185);
Z170 = Zqjx8B_0 + 1;
ZarQdhNDD_0((ADDRESS *)&Z182, &Z170, (LONGINT)sizeof (INTEGER));
{
SHORTCARD B_1 = 0, B_2 = Zqjx8B_0;

if (B_1 <= B_2)
for (Z191 = B_1;; Z191 += 1) {
Z182->A[Z191] = 0;
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
ZarQdhNDD_3((ADDRESS *)&Z182, &Z170, (LONGINT)sizeof (INTEGER));
Zp1Fy8_4(&Z185);
}

static void Z197
# ifdef HAVE_ARGS
(Zq0A4_43 Z168, ZpmCQ_4 Z169)
# else
(Z168, Z169)
Zq0A4_43 Z168;
ZpmCQ_4 Z169;
# endif
{
ZpmCQ_4 Z170;

ZpmCQ_5(&Z168->U_1.V_26.Y25.Y3, (LONGCARD)Zqjx8B_0);
ZpmCQ_30(&Z168->U_1.V_26.Y25.Y3, Z169);
ZpmCQ_5(&Z168->U_1.V_26.Y25.Y4, (LONGCARD)Zqjx8B_0);
ZpmCQ_30(&Z168->U_1.V_26.Y25.Y4, Z168->U_1.V_26.Y25.Y2);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &Z168->U_1.V_26.Y25.Y4)) {
ZpmCQ_14(&Z168->U_1.V_26.Y25.Y4, (LONGCARD)Zpky9FDA_2);
ZpmCQ_8(&Z168->U_1.V_26.Y25.Y4, Z168->U_1.V_26.Y25.Y3);
}
switch (Z168->U_1.V_1.Y0) {
case Zq0A4_30:;
Z197(Z168->U_1.V_27.Y26.Y11, Z169);
break;
case Zq0A4_31:;
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
ZpmCQ_30(&Z170, Z169);
ZpmCQ_8(&Z170, Z168->U_1.V_28.Y27.Y2);
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
Z197(Z168->U_1.V_28.Y27.Y11, Z170);
ZpmCQ_7(&Z170);
break;
case Zq0A4_32:;
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
ZpmCQ_30(&Z170, Z169);
ZpmCQ_8(&Z170, Z168->U_1.V_28.Y27.Y2);
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
Z197(Z168->U_1.V_29.Y28.Y11, Z170);
ZpmCQ_7(&Z170);
break;
case Zq0A4_33:;
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
ZpmCQ_30(&Z170, Z168->U_1.V_30.Y29.Y12->U_1.V_26.Y25.Y2);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &Z170)) {
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
ZpmCQ_8(&Z170, Z168->U_1.V_30.Y29.Y11->U_1.V_26.Y25.Y2);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &Z170)) {
ZpmCQ_8(&Z170, Z168->U_1.V_30.Y29.Y12->U_1.V_26.Y25.Y2);
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
}
}
ZpmCQ_8(&Z170, Z169);
Z197(Z168->U_1.V_30.Y29.Y11, Z170);
ZpmCQ_30(&Z170, Z168->U_1.V_30.Y29.Y11->U_1.V_26.Y25.Y2);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &Z170)) {
ZpmCQ_8(&Z170, Z168->U_1.V_30.Y29.Y12->U_1.V_26.Y25.Y2);
ZpmCQ_8(&Z170, Z169);
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
}
Z197(Z168->U_1.V_30.Y29.Y12, Z170);
ZpmCQ_7(&Z170);
break;
case Zq0A4_34:;
break;
case Zq0A4_35:;
break;
case Zq0A4_37:;
break;
case Zq0A4_38:;
Z197(Z168->U_1.V_35.Y34.Y14, Z169);
Z197(Z168->U_1.V_35.Y34.Y13, Z169);
break;
case Zq0A4_40:;
break;
case Zq0A4_41:;
ZpmCQ_5(&Z170, (LONGCARD)Zqjx8B_0);
ZpmCQ_30(&Z170, Z168->U_1.V_38.Y37.Y11->U_1.V_26.Y25.Y2);
if (ZpmCQ_25((LONGCARD)Zpky9FDA_2, &Z170)) {
ZpmCQ_14(&Z170, (LONGCARD)Zpky9FDA_2);
ZpmCQ_8(&Z170, Z169);
}
Z197(Z168->U_1.V_38.Y37.Y12, Z170);
ZpmCQ_7(&Z170);
Z197(Z168->U_1.V_38.Y37.Y11, Z169);
break;
}
}

static void Z199
 ARGS ((void))
{
ZpmCQ_4 Z182;
ZpmCQ_4 Z166;
Zfb3DLQ_0 Z183;

ZpmCQ_5(&Z182, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&Z166, (LONGCARD)Zqjx8B_0);
Zq7SFB_7(&Z182);
while (!ZpmCQ_26(Z182)) {
Z183 = ZpmCQ_20(&Z182);
Zqjx8B_10(Z183, &Z166);
Z197(Zqjx8B_3(Z183), Z166);
}
ZpmCQ_7(&Z182);
ZpmCQ_7(&Z166);
}

void ZcjEBEP_0
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z165)
# else
(Z165)
Zfb3DLQ_0 Z165;
# endif
{
Z164(Z165);
Z181();
Z184();
Z199();
}

void BEGIN_Follow ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_DynArray ();
BEGIN_Idents ();
BEGIN_Scanner ();
BEGIN_Sets ();
BEGIN_Stack ();
BEGIN_Table ();
BEGIN_Tree ();
BEGIN_Types ();

}
