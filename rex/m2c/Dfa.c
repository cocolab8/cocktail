#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Layout
#include "Layout.h"
#endif

#ifndef DEFINITION_GenTabs
#include "GenTabs.h"
#endif

#ifndef DEFINITION_Classes
#include "Classes.h"
#endif

#ifndef DEFINITION_UniCode
#include "UniCode.h"
#endif

#ifndef DEFINITION_Dfa
#include "Dfa.h"
#endif

ZrxAagD3_3 Zaf1_7;
Zaf1_6 Zaf1_8;
Zaf1_6 Zaf1_9;
Zaf1_6 Zaf1_10;
ZpmCQ_4 Zaf1_11;
ZpmCQ_4 Zaf1_12;
Zaf1_6 Zaf1_13;
INTEGER Zaf1_14;
INTEGER Zaf1_15;

#define Z165	256
typedef struct S_10 {
Zaf1_6 A[Zgd7EPBB_0 + 1];
} *Z166;
typedef struct S_1 {
Z166 Y0;
ZpmCQ_4 Y1;
Zaf1_6 Y2;
ZpmCQ_4 Y3;
Zaf1_6 Y4;
Zgd7EPBB_1 Y5;
Zgd7EPBB_1 Y6;
} Z168;
typedef struct S_2 {
Z168 A[100000 + 1];
} Z176;
typedef struct S_3 {
ZpmCQ_4 A[100000 + 1];
} Z177;
static Z176 *Z178;
static LONGINT Z179;
static Z177 *Z180;
static LONGINT Z181;
static void Z188 ARGS ((Zaf1_6 Z189));
typedef Zaf1_6 Z207;
typedef struct S_4 {
Zaf1_6 Y0;
SHORTCARD Y1;
ZpmCQ_4 Y2;
BOOLEAN Y3;
Z207 Y4;
Z207 Y5;
Z207 Y6;
Zaf1_6 Y7;
Zaf1_6 Y8;
} Y2_208;
typedef struct S_5 {
Y2_208 A[100000 + 1];
} Y3_216;
typedef struct S_6 {
CARDINAL A[100000 + 1];
} Z238;
typedef struct S_7 {
ZpmCQ_4 A[100000 + 1];
} Y1_249;
struct S_1_ComputeDefaults;
typedef struct S_8 {
ZpmCQ_4 Y0;
ZpmCQ_4 Y1;
ZpmCQ_4 Y2;
SHORTCARD Y3;
SHORTCARD Y4;
SHORTCARD Y5;
} Z208;
typedef struct S_9 {
Z208 A[100000 + 1];
} Z216;
static void Z279 ARGS ((struct S_1_ComputeDefaults *link, Zaf1_6 Z189));
struct S_1_ComputeDefaults {
Zaf1_6 *Z263;
Zaf1_6 *Z264;
Z216 **Z217;
ZpmCQ_4 *Z274;
ZpmCQ_4 *Z258;
SHORTCARD *Z269;
};

Zaf1_6 Zaf1_16
 ARGS ((void))
{
Zgd7EPBB_1 Z183;
LONGINT Z184;

INC(Zaf1_8);
if ((SHORTINT)Zaf1_8 == Z179) {
ZarQdhNDD_2((ADDRESS *)&Z178, &Z179, (LONGINT)sizeof (Z168));
}
{
register Z168 *W_1 = &Z178->A[Zaf1_8];

Z184 = Zgd7EPBB_4 + 1;
ZarQdhNDD_0((ADDRESS *)&W_1->Y0, &Z184, (LONGINT)sizeof (Zaf1_6));
{
Zgd7EPBB_1 B_1 = 0, B_2 = Zgd7EPBB_4;

if (B_1 <= B_2)
for (Z183 = B_1;; Z183 += 1) {
W_1->Y0->A[Z183] = Zaf1_0;
if (Z183 >= B_2) break;
}
}
ZpmCQ_5(&W_1->Y1, (LONGCARD)ZdaDwjxF_11);
W_1->Y2 = Zaf1_0;
ZpmCQ_5(&W_1->Y3, (LONGCARD)ZdaDwjxF_9);
W_1->Y4 = Zaf1_0;
W_1->Y5 = Zgd7EPBB_4;
W_1->Y6 = Zaf1_1;
}
return Zaf1_8;
}

static void Z188
# ifdef HAVE_ARGS
(Zaf1_6 Z189)
# else
(Z189)
Zaf1_6 Z189;
# endif
{
LONGINT Z184;

DEC(Zaf1_8);
Z184 = Zgd7EPBB_4 + 1;
ZarQdhNDD_3((ADDRESS *)&Z178->A[Z189].Y0, &Z184, (LONGINT)sizeof (Zaf1_6));
ZpmCQ_7(&Z178->A[Z189].Y1);
ZpmCQ_7(&Z178->A[Z189].Y3);
}

Zaf1_6 Zaf1_28
# ifdef HAVE_ARGS
(Zaf1_6 Z189)
# else
(Z189)
Zaf1_6 Z189;
# endif
{
return Z178->A[Z189].Y4;
}

Zaf1_6 Zaf1_17
# ifdef HAVE_ARGS
(Zaf1_6 Z189)
# else
(Z189)
Zaf1_6 Z189;
# endif
{
return Z178->A[Z189].Y2;
}

void Zaf1_18
# ifdef HAVE_ARGS
(Zaf1_6 Z189, Zaf1_6 Z193)
# else
(Z189, Z193)
Zaf1_6 Z189, Z193;
# endif
{
Z178->A[Z189].Y2 = Z193;
}

void Zaf1_19
# ifdef HAVE_ARGS
(Zaf1_6 Z189, ZpmCQ_4 *Z170)
# else
(Z189, Z170)
Zaf1_6 Z189;
ZpmCQ_4 *Z170;
# endif
{
ZpmCQ_30(Z170, Z178->A[Z189].Y1);
}

void Zaf1_20
# ifdef HAVE_ARGS
(Zaf1_6 Z189, ZpmCQ_4 Z170)
# else
(Z189, Z170)
Zaf1_6 Z189;
ZpmCQ_4 Z170;
# endif
{
ZpmCQ_30(&Z178->A[Z189].Y1, Z170);
}

void Zaf1_21
# ifdef HAVE_ARGS
(Zaf1_6 Z189, ZpmCQ_4 *Z172)
# else
(Z189, Z172)
Zaf1_6 Z189;
ZpmCQ_4 *Z172;
# endif
{
ZpmCQ_30(Z172, Z178->A[Z189].Y3);
}

void Zaf1_22
# ifdef HAVE_ARGS
(Zaf1_6 Z189, ZpmCQ_4 Z172)
# else
(Z189, Z172)
Zaf1_6 Z189;
ZpmCQ_4 Z172;
# endif
{
ZpmCQ_30(&Z178->A[Z189].Y3, Z172);
}

Zaf1_6 Zaf1_23
# ifdef HAVE_ARGS
(Zaf1_6 Z189, Zgd7EPBB_1 Z183)
# else
(Z189, Z183)
Zaf1_6 Z189;
Zgd7EPBB_1 Z183;
# endif
{
Zaf1_6 Z199;

do {
Z199 = Z178->A[Z189].Y0->A[Z183];
if (Z199 != Zaf1_0) {
return Z199;
}
Z189 = Z178->A[Z189].Y2;
} while (!(Z189 == Zaf1_0));
return Zaf1_0;
}

void Zaf1_24
# ifdef HAVE_ARGS
(Zaf1_6 Z189, Zgd7EPBB_1 Z183, Zaf1_6 Z199)
# else
(Z189, Z183, Z199)
Zaf1_6 Z189;
Zgd7EPBB_1 Z183;
Zaf1_6 Z199;
# endif
{
{
register Z168 *W_2 = &Z178->A[Z189];

W_2->Y0->A[Z183] = Z199;
if (Z199 != Zaf1_0) {
if (Z183 < W_2->Y5) {
W_2->Y5 = Z183;
}
if (Z183 > W_2->Y6) {
W_2->Y6 = Z183;
}
} else {
if (Z183 == W_2->Y5 && Z183 < Zgd7EPBB_4) {
INC(W_2->Y5);
}
if (Z183 == W_2->Y6 && Z183 > Zaf1_1) {
DEC(W_2->Y6);
}
}
}
}

Zaf1_6 Zaf1_25
# ifdef HAVE_ARGS
(Zaf1_6 Z189, Zgd7EPBB_1 Z183)
# else
(Z189, Z183)
Zaf1_6 Z189;
Zgd7EPBB_1 Z183;
# endif
{
return Z178->A[Z189].Y0->A[Z183];
}

Zgd7EPBB_1 Zaf1_26
# ifdef HAVE_ARGS
(Zaf1_6 Z189)
# else
(Z189)
Zaf1_6 Z189;
# endif
{
return Z178->A[Z189].Y5;
}

Zgd7EPBB_1 Zaf1_27
# ifdef HAVE_ARGS
(Zaf1_6 Z189)
# else
(Z189)
Zaf1_6 Z189;
# endif
{
return Z178->A[Z189].Y6;
}

void Zaf1_36
 ARGS ((void))
{
Zaf1_6 Z189;
Zgd7EPBB_1 Z183;
INTEGER Z205;

ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"DFA :", 5L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
{
SHORTCARD B_3 = 1, B_4 = Zaf1_8;

if (B_3 <= B_4)
for (Z189 = B_3;; Z189 += 1) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"State, Default, EobTrans, Semantics, StartSet =", 47L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z189, 5L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z178->A[Z189].Y2, 5L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z178->A[Z189].Y4, 5L);
ZibDRNS_1((ZDz6VQCC_4)ZfM_1);
ZpmCQ_35((ZDz6VQCC_4)ZfM_1, Z178->A[Z189].Y1);
ZibDRNS_1((ZDz6VQCC_4)ZfM_1);
ZpmCQ_35((ZDz6VQCC_4)ZfM_1, Z178->A[Z189].Y3);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z205 = 0;
{
Zgd7EPBB_1 B_5 = Zaf1_26(Z189), B_6 = Zaf1_27(Z189);

if (B_5 <= B_6)
for (Z183 = B_5;; Z183 += 1) {
if (Zaf1_25(Z189, Z183) != Zaf1_0) {
if (Z205 == 10) {
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z205 = 0;
}
INC(Z205);
ZrxAagD3_4((ZDz6VQCC_4)ZfM_1, Z183);
ZibDRNS_1((ZDz6VQCC_4)ZfM_1);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zaf1_23(Z189, Z183), 1L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ',');
ZibDRNS_1((ZDz6VQCC_4)ZfM_1);
}
if (Z183 >= B_6) break;
}
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
if (Z189 >= B_4) break;
}
}
}

void Zaf1_29
 ARGS ((void))
{
Y3_216 *Z217;
LONGINT Z218;
Z207 Z219;
Z207 Z220;
Z207 Z221;
Z207 Z222;
Z207 Z223;
Z207 Z224;
Z207 Z225;
Z207 Z226;
Z207 Z227;
ZpmCQ_4 Z228;
ZpmCQ_4 Z229;
Zaf1_6 Z189;
Zaf1_6 Z199;
Zgd7EPBB_1 Z183;
SHORTCARD Z230;
ZpmCQ_4 Z231;
Z166 Z232;

Z218 = Zaf1_8 + 2;
ZarQdhNDD_0((ADDRESS *)&Z217, &Z218, (LONGINT)sizeof (Y2_208));
ZpmCQ_5(&Z229, (LONGCARD)ZdaDwjxF_11);
ZpmCQ_5(&Z231, (LONGCARD)Zaf1_8);
Z217->A[Zaf1_0].Y5 = 0;
{
SHORTCARD B_7 = 1, B_8 = ZdaDwjxF_9;

if (B_7 <= B_8)
for (Z189 = B_7;; Z189 += 1) {
Z221 = Z189;
Z217->A[Z221].Y0 = Z189;
Z217->A[Z221].Y1 = 1;
Z217->A[Z189].Y7 = Zaf1_0;
Z217->A[Z189].Y5 = Z221;
if (Z189 >= B_8) break;
}
}
Z219 = ZdaDwjxF_9;
{
SHORTCARD B_9 = ZdaDwjxF_9 + 1, B_10 = Zaf1_8;

if (B_9 <= B_10)
for (Z189 = B_9;; Z189 += 1) {
Z221 = ZdaDwjxF_9 + 1;
for (;;) {
if (Z221 > Z219) {
INC(Z219);
Z221 = Z219;
Z217->A[Z221].Y0 = Zaf1_0;
Z217->A[Z221].Y1 = 0;
ZpmCQ_5(&Z217->A[Z221].Y2, (LONGCARD)ZdaDwjxF_11);
Zaf1_19(Z189, &Z217->A[Z221].Y2);
goto EXIT_1;
}
Zaf1_19(Z189, &Z229);
if (ZpmCQ_26(Z229) && ZpmCQ_26(Z217->A[Z221].Y2) || !ZpmCQ_26(Z229) && !ZpmCQ_26(Z217->A[Z221].Y2) && ZpmCQ_17(&Z229) == ZpmCQ_17(&Z217->A[Z221].Y2)) {
goto EXIT_1;
}
INC(Z221);
} EXIT_1:;
Z217->A[Z189].Y7 = Z217->A[Z221].Y0;
Z217->A[Z221].Y0 = Z189;
INC(Z217->A[Z221].Y1);
Z217->A[Z189].Y5 = Z221;
if (Z189 >= B_10) break;
}
}
{
SHORTCARD B_11 = ZdaDwjxF_9 + 1, B_12 = Z219;

if (B_11 <= B_12)
for (Z221 = B_11;; Z221 += 1) {
ZpmCQ_7(&Z217->A[Z221].Y2);
if (Z221 >= B_12) break;
}
}
do {
Z220 = Z219;
Z221 = ZdaDwjxF_9 + 1;
while (Z221 <= Z219) {
if (Z217->A[Z221].Y1 > 1) {
{
Zgd7EPBB_1 B_13 = Zaf1_1, B_14 = Zgd7EPBB_4;

if (B_13 <= B_14)
for (Z183 = B_13;; Z183 += 1) {
Z223 = 0;
{
SHORTCARD B_15 = 0, B_16 = Z219;

if (B_15 <= B_16)
for (Z224 = B_15;; Z224 += 1) {
Z217->A[Z224].Y3 = FALSE;
if (Z224 >= B_16) break;
}
}
Z189 = Z217->A[Z221].Y0;
while (Z189 != Zaf1_0) {
Z222 = Z217->A[Zaf1_25(Z189, Z183)].Y5;
if (!Z217->A[Z222].Y3) {
if (Z223 == 0) {
Z217->A[Z222].Y4 = Z221;
} else {
INC(Z219);
Z217->A[Z219].Y0 = Zaf1_0;
Z217->A[Z219].Y1 = 0;
Z217->A[Z222].Y4 = Z219;
}
Z217->A[Z222].Y3 = TRUE;
INC(Z223);
}
Z217->A[Z189].Y6 = Z217->A[Z222].Y4;
Z189 = Z217->A[Z189].Y7;
}
if (Z223 > 1) {
Z189 = Z217->A[Z221].Y0;
Z217->A[Z221].Y0 = Zaf1_0;
Z217->A[Z221].Y1 = 0;
while (Z189 != Zaf1_0) {
Z199 = Z217->A[Z189].Y7;
Z222 = Z217->A[Z189].Y6;
Z217->A[Z189].Y7 = Z217->A[Z222].Y0;
Z217->A[Z222].Y0 = Z189;
INC(Z217->A[Z222].Y1);
Z217->A[Z189].Y5 = Z222;
Z189 = Z199;
}
}
if (Z183 >= B_14) break;
}
}
}
INC(Z221);
}
} while (!(Z220 == Z219));
{
SHORTCARD B_17 = 1, B_18 = Z219;

if (B_17 <= B_18)
for (Z221 = B_17;; Z221 += 1) {
Z189 = Z217->A[Z221].Y0;
{
Zgd7EPBB_1 B_19 = Zaf1_26(Z189), B_20 = Zaf1_27(Z189);

if (B_19 <= B_20)
for (Z183 = B_19;; Z183 += 1) {
Z199 = Zaf1_25(Z189, Z183);
if (Z199 != Zaf1_0) {
Zaf1_24(Z189, Z183, Z217->A[Z199].Y5);
}
if (Z183 >= B_20) break;
}
}
if (Z221 >= B_18) break;
}
}
ZpmCQ_5(&Z228, (LONGCARD)Z219);
ZpmCQ_12(&Z228);
ZpmCQ_14(&Z228, (LONGCARD)Zaf1_0);
{
SHORTCARD B_21 = 1, B_22 = Zaf1_8;

if (B_21 <= B_22)
for (Z189 = B_21;; Z189 += 1) {
Z217->A[Z189].Y8 = Z189;
if (Z189 >= B_22) break;
}
}
Z226 = Zaf1_16();
Z232 = Z178->A[Z226].Y0;
while (!ZpmCQ_26(Z228)) {
Z221 = ZpmCQ_20(&Z228);
if (Z221 != Z217->A[Z221].Y0) {
Z178->A[Z226].Y0 = Z178->A[Z221].Y0;
Z178->A[Z226].Y5 = Z178->A[Z221].Y5;
Z178->A[Z226].Y6 = Z178->A[Z221].Y6;
Zaf1_19(Z221, &Z229);
Zaf1_20(Z226, Z229);
Z217->A[Z221].Y8 = Z226;
Z225 = Z221;
do {
Z227 = Z217->A[Z217->A[Z225].Y0].Y8;
Z178->A[Z225].Y0 = Z178->A[Z227].Y0;
Z178->A[Z225].Y5 = Z178->A[Z227].Y5;
Z178->A[Z225].Y6 = Z178->A[Z227].Y6;
Zaf1_19(Z227, &Z229);
Zaf1_20(Z225, Z229);
ZpmCQ_14(&Z228, (LONGCARD)Z225);
Z225 = Z227;
} while (!(Z225 > Z219));
Z226 = Z225;
}
}
Z178->A[Z226].Y0 = Z232;
{
SHORTCARD B_23 = 1, B_24 = ZdaDwjxF_11 - 2;

if (B_23 <= B_24)
for (Z230 = B_23;; Z230 += 1) {
if (ZdaDwjxF_17->A[Z230].Y2 == ZdaDwjxF_1) {
ZpmCQ_30(&Z231, ZdaDwjxF_17->A[Z230].Y4);
ZpmCQ_32(&ZdaDwjxF_17->A[Z230].Y4);
while (!ZpmCQ_26(Z231)) {
Z189 = Z217->A[ZpmCQ_20(&Z231)].Y5;
ZpmCQ_13(&ZdaDwjxF_17->A[Z230].Y4, (LONGCARD)Z189);
}
}
if (Z230 >= B_24) break;
}
}
Zaf1_14 = Zaf1_8 - Z219;
ZpmCQ_7(&Z228);
ZpmCQ_7(&Z229);
ZpmCQ_7(&Z231);
{
SHORTCARD B_25 = Zaf1_8, B_26 = Z219 + 1;

if (B_25 >= B_26)
for (Z189 = B_25;; Z189 += -1) {
Z188(Z189);
if (Z189 <= B_26) break;
}
}
ZarQdhNDD_3((ADDRESS *)&Z217, &Z218, (LONGINT)sizeof (Y2_208));
}

void Zaf1_30
 ARGS ((void))
{
Zaf1_6 Z189;
Zaf1_6 Z199;
Zgd7EPBB_1 Z183;

Z181 = Zaf1_8 + 1;
ZarQdhNDD_0((ADDRESS *)&Z180, &Z181, (LONGINT)sizeof (ZpmCQ_4));
{
SHORTCARD B_27 = 1, B_28 = Zaf1_8;

if (B_27 <= B_28)
for (Z189 = B_27;; Z189 += 1) {
ZpmCQ_5(&Z180->A[Z189], (LONGCARD)Zaf1_8);
{
Zgd7EPBB_1 B_29 = Zaf1_26(Z189), B_30 = Zaf1_27(Z189);

if (B_29 <= B_30)
for (Z183 = B_29;; Z183 += 1) {
Z199 = Zaf1_25(Z189, Z183);
if (Z199 != Zaf1_0) {
ZpmCQ_13(&Z180->A[Z189], (LONGCARD)Z199);
}
if (Z183 >= B_30) break;
}
}
if (Z189 >= B_28) break;
}
}
}

void Zaf1_31
 ARGS ((void))
{
Z238 *Z239;
LONGINT Z240;
Z238 *Z241;
LONGINT Z242;
Zaf1_6 Z189, Z243;
Zaf1_6 Z244;
ZpmCQ_4 Z245;
Zgd7EPBB_1 Z183;

Z240 = Zaf1_8 + 1;
ZarQdhNDD_0((ADDRESS *)&Z239, &Z240, (LONGINT)sizeof (CARDINAL));
Z242 = Zaf1_8 + 1;
ZarQdhNDD_0((ADDRESS *)&Z241, &Z242, (LONGINT)sizeof (CARDINAL));
Zaf1_13 = Zaf1_8;
ZpmCQ_5(&Z245, (LONGCARD)Zaf1_13);
ZpmCQ_5(&Zaf1_11, (LONGCARD)Zaf1_13);
{
SHORTCARD B_31 = 0, B_32 = Zaf1_8;

if (B_31 <= B_32)
for (Z189 = B_31;; Z189 += 1) {
Z239->A[Z189] = 0;
if (Z189 >= B_32) break;
}
}
{
SHORTCARD B_33 = 1, B_34 = ZdaDwjxF_9;

if (B_33 <= B_34)
for (Z189 = B_33;; Z189 += 1) {
{
SHORTCARD B_35 = 0, B_36 = Zaf1_8;

if (B_35 <= B_36)
for (Z243 = B_35;; Z243 += 1) {
Z241->A[Z243] = 0;
if (Z243 >= B_36) break;
}
}
{
Zgd7EPBB_1 B_37 = Zaf1_26(Z189), B_38 = Zaf1_27(Z189);

if (B_37 <= B_38)
for (Z183 = B_37;; Z183 += 1) {
Z244 = Zaf1_25(Z189, Z183);
if (Z244 != Zaf1_0) {
INC(Z241->A[Z244]);
}
if (Z183 >= B_38) break;
}
}
{
SHORTCARD B_39 = 0, B_40 = Zaf1_8;

if (B_39 <= B_40)
for (Z243 = B_39;; Z243 += 1) {
Z239->A[Z243] = ZdaDDAD7_4((LONGINT)Z239->A[Z243], (LONGINT)Z241->A[Z243]);
if (Z243 >= B_40) break;
}
}
if (Z189 >= B_34) break;
}
}
{
SHORTCARD B_41 = ZdaDwjxF_9 + 1, B_42 = Zaf1_8;

if (B_41 <= B_42)
for (Z189 = B_41;; Z189 += 1) {
{
Zgd7EPBB_1 B_43 = Zaf1_26(Z189), B_44 = Zaf1_27(Z189);

if (B_43 <= B_44)
for (Z183 = B_43;; Z183 += 1) {
Z244 = Zaf1_25(Z189, Z183);
if (Z244 != Zaf1_0) {
INC(Z239->A[Z244]);
}
if (Z183 >= B_44) break;
}
}
if (Z189 >= B_42) break;
}
}
{
SHORTCARD B_45 = 1, B_46 = ZdaDwjxF_9;

if (B_45 <= B_46)
for (Z189 = B_45;; Z189 += 1) {
ZpmCQ_13(&Z245, (LONGCARD)Z189);
if (Z189 >= B_46) break;
}
}
ZpmCQ_12(&Zaf1_11);
ZpmCQ_14(&Zaf1_11, (LONGCARD)Zaf1_0);
while (!ZpmCQ_26(Z245)) {
Z189 = ZpmCQ_20(&Z245);
ZpmCQ_14(&Zaf1_11, (LONGCARD)Z189);
{
SHORTCARD B_47 = 1, B_48 = Zaf1_8;

if (B_47 <= B_48)
for (Z244 = B_47;; Z244 += 1) {
if (ZpmCQ_25((LONGCARD)Z244, &Z180->A[Z189])) {
if (Z239->A[Z244] == 1) {
ZpmCQ_13(&Z245, (LONGCARD)Z244);
}
}
if (Z244 >= B_48) break;
}
}
}
ZpmCQ_7(&Z245);
ZarQdhNDD_3((ADDRESS *)&Z239, &Z240, (LONGINT)sizeof (CARDINAL));
ZarQdhNDD_3((ADDRESS *)&Z241, &Z242, (LONGINT)sizeof (CARDINAL));
}

void Zaf1_32
 ARGS ((void))
{
Y1_249 *Z250;
LONGINT Z251;
Zaf1_6 Z189;
Zaf1_6 Z224, Z252;

Z251 = Zaf1_8 + 1;
ZarQdhNDD_0((ADDRESS *)&Z250, &Z251, (LONGINT)sizeof (ZpmCQ_4));
{
SHORTCARD B_49 = 1, B_50 = Zaf1_8;

if (B_49 <= B_50)
for (Z189 = B_49;; Z189 += 1) {
ZpmCQ_5(&Z250->A[Z189], (LONGCARD)Zaf1_8);
ZpmCQ_30(&Z250->A[Z189], Z180->A[Z189]);
if (Z189 >= B_50) break;
}
}
{
SHORTCARD B_51 = 1, B_52 = Zaf1_8;

if (B_51 <= B_52)
for (Z252 = B_51;; Z252 += 1) {
{
SHORTCARD B_53 = 1, B_54 = Zaf1_8;

if (B_53 <= B_54)
for (Z224 = B_53;; Z224 += 1) {
if (ZpmCQ_25((LONGCARD)Z252, &Z250->A[Z224])) {
ZpmCQ_8(&Z250->A[Z224], Z250->A[Z252]);
}
if (Z224 >= B_54) break;
}
}
if (Z252 >= B_52) break;
}
}
ZpmCQ_5(&Zaf1_12, (LONGCARD)Zaf1_8);
{
SHORTCARD B_55 = 1, B_56 = Zaf1_8;

if (B_55 <= B_56)
for (Z189 = B_55;; Z189 += 1) {
if (ZpmCQ_25((LONGCARD)Z189, &Z250->A[Z189])) {
ZpmCQ_13(&Zaf1_12, (LONGCARD)Z189);
}
ZpmCQ_7(&Z250->A[Z189]);
if (Z189 >= B_56) break;
}
}
ZarQdhNDD_3((ADDRESS *)&Z250, &Z251, (LONGINT)sizeof (ZpmCQ_4));
}

void Zaf1_33
 ARGS ((void))
{
Zaf1_6 Z255, Z243;
ZpmCQ_4 Z256, Z257, Z258;

ZpmCQ_5(&Z256, (LONGCARD)ZdaDwjxF_9);
ZpmCQ_5(&Z257, (LONGCARD)ZdaDwjxF_9);
ZpmCQ_5(&Z258, (LONGCARD)Zaf1_8);
{
SHORTCARD B_57 = 1, B_58 = ZdaDwjxF_9;

if (B_57 <= B_58)
for (Z255 = B_57;; Z255 += 1) {
{
SHORTCARD B_59 = 1, B_60 = Zaf1_8;

if (B_59 <= B_60)
for (Z243 = B_59;; Z243 += 1) {
if (ZpmCQ_25((LONGCARD)Z243, &Z180->A[Z255])) {
Zaf1_21(Z243, &Z257);
ZpmCQ_13(&Z257, (LONGCARD)Z255);
Zaf1_22(Z243, Z257);
}
if (Z243 >= B_60) break;
}
}
ZpmCQ_8(&Z258, Z180->A[Z255]);
if (Z255 >= B_58) break;
}
}
while (!ZpmCQ_26(Z258)) {
Z255 = ZpmCQ_20(&Z258);
Zaf1_21(Z255, &Z256);
{
SHORTCARD B_61 = 1, B_62 = Zaf1_8;

if (B_61 <= B_62)
for (Z243 = B_61;; Z243 += 1) {
if (ZpmCQ_25((LONGCARD)Z243, &Z180->A[Z255])) {
Zaf1_21(Z243, &Z257);
if (!ZpmCQ_21(Z256, Z257)) {
ZpmCQ_8(&Z257, Z256);
Zaf1_22(Z243, Z257);
ZpmCQ_13(&Z258, (LONGCARD)Z243);
}
}
if (Z243 >= B_62) break;
}
}
}
ZpmCQ_7(&Z256);
ZpmCQ_7(&Z257);
ZpmCQ_7(&Z258);
}

void Zaf1_34
 ARGS ((void))
{
Zaf1_6 Z189;

{
SHORTCARD B_63 = 1, B_64 = Zaf1_8;

if (B_63 <= B_64)
for (Z189 = B_63;; Z189 += 1) {
Z178->A[Z189].Y4 = Zaf1_23(Z189, Zgd7EPBB_23((ZrxAagD3_3)Zaf1_5));
if (Z189 >= B_64) break;
}
}
{
SHORTCARD B_65 = 1, B_66 = Zaf1_13;

if (B_65 <= B_66)
for (Z189 = B_65;; Z189 += 1) {
Zaf1_24(Z189, Zgd7EPBB_23((ZrxAagD3_3)Zaf1_5), Zaf1_9);
if (Z189 >= B_66) break;
}
}
{
SHORTCARD B_67 = Zaf1_13 + 1, B_68 = Zaf1_8;

if (B_67 <= B_68)
for (Z189 = B_67;; Z189 += 1) {
Zaf1_24(Z189, Zgd7EPBB_23((ZrxAagD3_3)Zaf1_5), Zaf1_0);
if (Z189 >= B_68) break;
}
}
}

static void Z279
# ifdef HAVE_ARGS
(struct S_1_ComputeDefaults *link, Zaf1_6 Z189)
# else
(link, Z189)
struct S_1_ComputeDefaults *link;
Zaf1_6 Z189;
# endif
{
Zaf1_6 Z243;

ZpmCQ_14(link->Z258, (LONGCARD)Z189);
ZpmCQ_13(link->Z274, (LONGCARD)Z189);
{
SHORTCARD B_69 = *link->Z263, B_70 = *link->Z264;

if (B_69 <= B_70)
for (Z243 = B_69;; Z243 += 1) {
if (ZpmCQ_25((LONGCARD)Z243, &(*link->Z217)->A[Z189].Y1) && !ZpmCQ_25((LONGCARD)Z243, link->Z274)) {
Z279(link, Z243);
}
if (Z243 >= B_70) break;
}
}
INC(*link->Z269);
(*link->Z217)->A[Z189].Y4 = *link->Z269;
(*link->Z217)->A[*link->Z269].Y5 = Z189;
}

void Zaf1_35
# ifdef HAVE_ARGS
(Zaf1_6 Z263, Zaf1_6 Z264)
# else
(Z263, Z264)
Zaf1_6 Z263, Z264;
# endif
{
Z216 *Z217;
LONGINT Z218;
Zaf1_6 Z189, Z255, Z243, Z193;
SHORTCARD Z271;
Zgd7EPBB_1 Z183;
ZpmCQ_4 Z272, Z273;
ZpmCQ_4 Z274, Z258;
ZpmCQ_4 Z275, Z276;
ZpmCQ_4 Z277, Z278;
SHORTCARD Z269;
CARDINAL Z224;
struct S_1_ComputeDefaults frame;

frame.Z263 = &Z263;
frame.Z264 = &Z264;
frame.Z217 = &Z217;
frame.Z274 = &Z274;
frame.Z258 = &Z258;
frame.Z269 = &Z269;
Z218 = Z264 + 1;
ZarQdhNDD_0((ADDRESS *)&Z217, &Z218, (LONGINT)sizeof (Z208));
ZpmCQ_5(&Z272, Zgd7EPBB_4);
ZpmCQ_5(&Z273, Zgd7EPBB_4);
ZpmCQ_5(&Z274, (LONGCARD)Z264);
ZpmCQ_5(&Z258, (LONGCARD)Z264);
ZpmCQ_5(&Z275, (LONGCARD)Z264);
ZpmCQ_5(&Z276, (LONGCARD)Z264);
ZpmCQ_5(&Z277, (LONGCARD)Z264);
ZpmCQ_5(&Z278, (LONGCARD)Z264);
Zaf1_15 = 0;
{
SHORTCARD B_71 = Z263, B_72 = Z264;

if (B_71 <= B_72)
for (Z189 = B_71;; Z189 += 1) {
ZpmCQ_5(&Z217->A[Z189].Y0, Zgd7EPBB_4);
{
Zgd7EPBB_1 B_73 = Zaf1_26(Z189), B_74 = Zaf1_27(Z189);

if (B_73 <= B_74)
for (Z183 = B_73;; Z183 += 1) {
if (Zaf1_23(Z189, Z183) != Zaf1_0) {
ZpmCQ_13(&Z217->A[Z189].Y0, ORD(Z183));
}
if (Z183 >= B_74) break;
}
}
if (Z189 >= B_72) break;
}
}
{
SHORTCARD B_75 = Z263, B_76 = Z264;

if (B_75 <= B_76)
for (Z255 = B_75;; Z255 += 1) {
ZpmCQ_5(&Z217->A[Z255].Y1, (LONGCARD)Z264);
ZpmCQ_5(&Z217->A[Z255].Y2, (LONGCARD)Z264);
Z217->A[Z255].Y3 = 0;
if (!ZpmCQ_26(Z217->A[Z255].Y0)) {
ZpmCQ_30(&Z272, Z217->A[Z255].Y0);
{
SHORTCARD B_77 = Z263, B_78 = Z264;

if (B_77 <= B_78)
for (Z243 = B_77;; Z243 += 1) {
if (Z255 != Z243) {
ZpmCQ_30(&Z273, Z217->A[Z243].Y0);
if (ZpmCQ_21(Z273, Z272)) {
if (ZpmCQ_15(&Z217->A[Z243].Y0) >= Z217->A[Z255].Y3) {
{
Zgd7EPBB_1 B_79 = Zaf1_26(Z243), B_80 = Zaf1_27(Z243);

if (B_79 <= B_80)
for (Z183 = B_79;; Z183 += 1) {
Z189 = Zaf1_23(Z243, Z183);
if (Z189 != Zaf1_0 && Z189 != Zaf1_23(Z255, Z183)) {
ZpmCQ_14(&Z273, ORD(Z183));
}
if (Z183 >= B_80) break;
}
}
Z271 = ZpmCQ_15(&Z273);
if (Z271 > 0) {
if (Z271 == Z217->A[Z255].Y3) {
ZpmCQ_13(&Z217->A[Z255].Y1, (LONGCARD)Z243);
} else if (Z271 > Z217->A[Z255].Y3) {
ZpmCQ_31(&Z217->A[Z255].Y1, (LONGCARD)Z243);
Z217->A[Z255].Y3 = Z271;
}
}
}
}
}
if (Z243 >= B_78) break;
}
}
}
if (Z255 >= B_76) break;
}
}
{
SHORTCARD B_81 = Z263, B_82 = Z264;

if (B_81 <= B_82)
for (Z255 = B_81;; Z255 += 1) {
{
SHORTCARD B_83 = Z263, B_84 = Z264;

if (B_83 <= B_84)
for (Z243 = B_83;; Z243 += 1) {
if (ZpmCQ_25((LONGCARD)Z243, &Z217->A[Z255].Y1)) {
ZpmCQ_13(&Z217->A[Z243].Y2, (LONGCARD)Z255);
}
if (Z243 >= B_84) break;
}
}
if (Z255 >= B_82) break;
}
}
Z269 = Z263 - 1;
ZpmCQ_12(&Z258);
{
SHORTCARD B_85 = 0, B_86 = Z263 - 1;

if (B_85 <= B_86)
for (Z189 = B_85;; Z189 += 1) {
ZpmCQ_14(&Z258, (LONGCARD)Z189);
if (Z189 >= B_86) break;
}
}
if (Z263 <= Zaf1_10 && Zaf1_10 <= Z264) {
Z279(&frame, Zaf1_10);
}
while (!ZpmCQ_26(Z258)) {
Z279(&frame, (SHORTCARD)ZpmCQ_19(&Z258));
}
{
SHORTCARD B_87 = Z263, B_88 = Z264;

if (B_87 <= B_88)
for (Z255 = B_87;; Z255 += 1) {
Z243 = Z255 + 1;
for (;;) {
if (Z243 > Z264) {
goto EXIT_2;
}
if (ZpmCQ_25((LONGCARD)Z243, &Z217->A[Z255].Y1) && ZpmCQ_25((LONGCARD)Z255, &Z217->A[Z243].Y1)) {
ZpmCQ_13(&Z275, (LONGCARD)Z255);
ZpmCQ_13(&Z275, (LONGCARD)Z243);
goto EXIT_2;
}
INC(Z243);
} EXIT_2:;
if (Z255 >= B_88) break;
}
}
ZpmCQ_32(&Z274);
ZpmCQ_32(&Z258);
ZpmCQ_12(&Z258);
{
SHORTCARD B_89 = 0, B_90 = Z263 - 1;

if (B_89 <= B_90)
for (Z189 = B_89;; Z189 += 1) {
ZpmCQ_14(&Z258, (LONGCARD)Z189);
if (Z189 >= B_90) break;
}
}
while (!ZpmCQ_26(Z258)) {
Z189 = Z217->A[ZpmCQ_19(&Z258)].Y5;
ZpmCQ_30(&Z276, Z217->A[Z189].Y1);
ZpmCQ_10(&Z276, Z275);
ZpmCQ_13(&Z276, (LONGCARD)Z189);
ZpmCQ_30(&Z277, Z276);
{
LONGCARD B_91 = ZpmCQ_17(&Z277), B_92 = ZpmCQ_18(&Z277);

if (B_91 <= B_92)
for (Z224 = B_91;; Z224 += 1) {
if (!ZpmCQ_25(Z224, &Zaf1_12)) {
ZpmCQ_14(&Z277, Z224);
}
if (Z224 >= B_92) break;
}
}
if (Z263 <= Zaf1_10 && Zaf1_10 <= Z264 && ZpmCQ_25((LONGCARD)Zaf1_10, &Z276)) {
Z189 = Zaf1_10;
} else if (!ZpmCQ_26(Z277)) {
Z189 = ZpmCQ_19(&Z277);
} else {
Z189 = ZpmCQ_19(&Z276);
}
ZpmCQ_31(&Z276, (LONGCARD)Z189);
ZpmCQ_13(&Z274, (LONGCARD)Z189);
while (!ZpmCQ_26(Z276)) {
ZpmCQ_32(&Z277);
while (!ZpmCQ_26(Z276)) {
Z255 = ZpmCQ_20(&Z276);
ZpmCQ_14(&Z258, (LONGCARD)Z217->A[Z255].Y4);
ZpmCQ_30(&Z278, Z217->A[Z255].Y2);
while (!ZpmCQ_26(Z278)) {
Z243 = ZpmCQ_20(&Z278);
if (!ZpmCQ_25((LONGCARD)Z243, &Z274)) {
Zaf1_18(Z243, Z255);
ZpmCQ_13(&Z277, (LONGCARD)Z243);
ZpmCQ_13(&Z274, (LONGCARD)Z243);
}
}
}
ZpmCQ_30(&Z276, Z277);
}
}
{
SHORTCARD B_93 = Z263, B_94 = Z264;

if (B_93 <= B_94)
for (Z255 = B_93;; Z255 += 1) {
if (Zaf1_17(Z255) == Zaf1_0) {
Z217->A[Z255].Y3 = 0;
if (!ZpmCQ_26(Z217->A[Z255].Y0)) {
ZpmCQ_30(&Z272, Z217->A[Z255].Y0);
{
SHORTCARD B_95 = Z263, B_96 = Z264;

if (B_95 <= B_96)
for (Z243 = B_95;; Z243 += 1) {
if (Z255 != Z243) {
ZpmCQ_30(&Z273, Z217->A[Z243].Y0);
if (ZpmCQ_22(Z273, Z272)) {
if (ZpmCQ_15(&Z217->A[Z243].Y0) >= Z217->A[Z255].Y3) {
{
Zgd7EPBB_1 B_97 = Zaf1_26(Z243), B_98 = Zaf1_27(Z243);

if (B_97 <= B_98)
for (Z183 = B_97;; Z183 += 1) {
Z189 = Zaf1_23(Z243, Z183);
if (Z189 != Zaf1_0 && Z189 != Zaf1_23(Z255, Z183)) {
ZpmCQ_14(&Z273, ORD(Z183));
}
if (Z183 >= B_98) break;
}
}
Z271 = ZpmCQ_15(&Z273);
if (Z271 > 0) {
if (Z271 == Z217->A[Z255].Y3) {
ZpmCQ_13(&Z276, (LONGCARD)Z243);
} else if (Z271 > Z217->A[Z255].Y3) {
ZpmCQ_31(&Z276, (LONGCARD)Z243);
Z217->A[Z255].Y3 = Z271;
}
}
}
}
}
if (Z243 >= B_96) break;
}
}
if (Z217->A[Z255].Y3 > 0) {
ZpmCQ_30(&Z277, Z276);
{
LONGCARD B_99 = ZpmCQ_17(&Z277), B_100 = ZpmCQ_18(&Z277);

if (B_99 <= B_100)
for (Z224 = B_99;; Z224 += 1) {
if (!ZpmCQ_25(Z224, &Zaf1_12)) {
ZpmCQ_14(&Z277, Z224);
}
if (Z224 >= B_100) break;
}
}
if (Z263 <= Zaf1_10 && Zaf1_10 <= Z264 && ZpmCQ_25((LONGCARD)Zaf1_10, &Z276)) {
Z189 = Zaf1_10;
} else if (!ZpmCQ_26(Z277)) {
Z189 = ZpmCQ_19(&Z277);
} else {
Z189 = ZpmCQ_19(&Z276);
}
Zaf1_18(Z255, Z189);
}
}
}
if (Z255 >= B_94) break;
}
}
{
SHORTCARD B_101 = Z263, B_102 = Z264;

if (B_101 <= B_102)
for (Z255 = B_101;; Z255 += 1) {
Z193 = Zaf1_17(Z255);
if (Z193 != Zaf1_0) {
{
Zgd7EPBB_1 B_103 = Zaf1_26(Z255), B_104 = Zaf1_27(Z255);

if (B_103 <= B_104)
for (Z183 = B_103;; Z183 += 1) {
Z189 = Zaf1_23(Z193, Z183);
if (Z189 != Zaf1_0 && Z189 == Zaf1_23(Z255, Z183)) {
Zaf1_24(Z255, Z183, Zaf1_0);
}
if (Z183 >= B_104) break;
}
}
INC1(Zaf1_15, Z217->A[Z255].Y3);
}
if (Z255 >= B_102) break;
}
}
{
SHORTCARD B_105 = Z263, B_106 = Z264;

if (B_105 <= B_106)
for (Z189 = B_105;; Z189 += 1) {
ZpmCQ_7(&Z217->A[Z189].Y0);
ZpmCQ_7(&Z217->A[Z189].Y1);
ZpmCQ_7(&Z217->A[Z189].Y2);
if (Z189 >= B_106) break;
}
}
ZpmCQ_7(&Z272);
ZpmCQ_7(&Z273);
ZpmCQ_7(&Z274);
ZpmCQ_7(&Z258);
ZpmCQ_7(&Z275);
ZpmCQ_7(&Z276);
ZpmCQ_7(&Z277);
ZpmCQ_7(&Z278);
ZarQdhNDD_3((ADDRESS *)&Z217, &Z218, (LONGINT)sizeof (Z208));
}

void BEGIN_Dfa ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Sets ();
BEGIN_UniCode ();
BEGIN_Classes ();
BEGIN_General ();
BEGIN_DynArray ();
BEGIN_Sets ();
BEGIN_IO ();
BEGIN_Layout ();
BEGIN_GenTabs ();
BEGIN_Classes ();
BEGIN_UniCode ();

Zaf1_7 = 127;
Zaf1_8 = 0;
Z179 = Z165;
ZarQdhNDD_0((ADDRESS *)&Z178, &Z179, (LONGINT)sizeof (Z168));
}
