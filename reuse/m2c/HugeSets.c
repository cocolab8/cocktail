#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_HugeSets
#include "HugeSets.h"
#endif


#define Z132	8
#define Z133	MAX_LONGCARD
static BOOLEAN Z166 ARGS ((ZerF6mmCQ_3 Z190, LONGCARD Z165));
static void Z162 ARGS ((ZerF6mmCQ_4 *Z135));

void ZerF6mmCQ_6
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135)
# else
(Z135)
ZerF6mmCQ_4 *Z135;
# endif
{
{
register ZerF6mmCQ_4 *W_1 = Z135;

ZpmCQ_5(&W_1->Y0, (LONGCARD)ZerF6mmCQ_0);
W_1->Y1 = NIL;
W_1->Y2 = 0;
W_1->Y3 = 0;
}
}

void ZerF6mmCQ_7
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135)
# else
(Z135)
ZerF6mmCQ_4 *Z135;
# endif
{
{
register ZerF6mmCQ_4 *W_2 = Z135;

ZpmCQ_7(&W_2->Y0);
if (W_2->Y2 != 0) {
ZarQdhNDD_3((ADDRESS *)&W_2->Y1, &W_2->Y2, (LONGINT)sizeof (ZerF6mmCQ_3));
W_2->Y2 = 0;
}
}
}

void ZerF6mmCQ_8
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z145, ZerF6mmCQ_4 Z146)
# else
(Z145, Z146)
ZerF6mmCQ_4 *Z145;
ZerF6mmCQ_4 Z146;
# endif
{
LONGINT Z147;

{
register ZerF6mmCQ_4 *W_3 = &Z146;

ZpmCQ_8(&Z145->Y0, W_3->Y0);
{
LONGINT B_1 = 1, B_2 = W_3->Y3;

if (B_1 <= B_2)
for (Z147 = B_1;; Z147 += 1) {
ZerF6mmCQ_13(Z145, W_3->Y1->A[Z147 - 1].Y0, W_3->Y1->A[Z147 - 1].Y1);
if (Z147 >= B_2) break;
}
}
}
}

void ZerF6mmCQ_9
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z145, ZerF6mmCQ_4 Z146)
# else
(Z145, Z146)
ZerF6mmCQ_4 *Z145;
ZerF6mmCQ_4 Z146;
# endif
{
LONGINT Z147;

{
register ZerF6mmCQ_4 *W_4 = &Z146;

ZpmCQ_9(&Z145->Y0, W_4->Y0);
{
LONGINT B_3 = 1, B_4 = W_4->Y3;

if (B_3 <= B_4)
for (Z147 = B_3;; Z147 += 1) {
ZerF6mmCQ_15(Z145, W_4->Y1->A[Z147 - 1].Y0, W_4->Y1->A[Z147 - 1].Y1);
if (Z147 >= B_4) break;
}
}
}
}

void ZerF6mmCQ_10
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z145, ZerF6mmCQ_4 Z146)
# else
(Z145, Z146)
ZerF6mmCQ_4 *Z145;
ZerF6mmCQ_4 Z146;
# endif
{
LONGINT Z147, Z154;
LONGCARD Z155, Z156, Z157;
ZerF6mmCQ_4 Z158;
ADDRESS Z159;
LONGINT Z160;
LONGINT Z161;

ZerF6mmCQ_6(&Z158);
{
register ZerF6mmCQ_4 *W_5 = Z145;

ZpmCQ_10(&W_5->Y0, Z146.Y0);
Z147 = 1;
Z154 = 1;
for (;;) {
if (Z147 > W_5->Y3 || Z154 > Z146.Y3) {
goto EXIT_1;
}
Z155 = ZdaDDAD7_6(W_5->Y1->A[Z147 - 1].Y0, Z146.Y1->A[Z154 - 1].Y0);
while (Z147 <= W_5->Y3 && W_5->Y1->A[Z147 - 1].Y1 < Z155) {
INC(Z147);
}
while (Z154 <= Z146.Y3 && Z146.Y1->A[Z154 - 1].Y1 < Z155) {
INC(Z154);
}
if (Z147 > W_5->Y3 || Z154 > Z146.Y3) {
goto EXIT_1;
}
Z156 = ZdaDDAD7_6(W_5->Y1->A[Z147 - 1].Y0, Z146.Y1->A[Z154 - 1].Y0);
Z157 = ZdaDDAD7_5(W_5->Y1->A[Z147 - 1].Y1, Z146.Y1->A[Z154 - 1].Y1);
if (Z156 <= Z157) {
Z162(&Z158);
{
register ZerF6mmCQ_4 *W_6 = &Z158;

W_6->Y1->A[W_6->Y3 - 1].Y0 = Z156;
W_6->Y1->A[W_6->Y3 - 1].Y1 = Z157;
}
if (Z157 == W_5->Y1->A[Z147 - 1].Y1) {
INC(Z147);
}
if (Z157 == Z146.Y1->A[Z154 - 1].Y1) {
INC(Z154);
}
}
} EXIT_1:;
Z159 = (ADDRESS)W_5->Y1;
Z160 = W_5->Y2;
Z161 = W_5->Y3;
W_5->Y1 = Z158.Y1;
W_5->Y2 = Z158.Y2;
W_5->Y3 = Z158.Y3;
Z158.Y1 = (struct HugeSets_3 *)Z159;
Z158.Y2 = Z160;
Z158.Y3 = Z161;
}
ZerF6mmCQ_7(&Z158);
}

void ZerF6mmCQ_11
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135)
# else
(Z135)
ZerF6mmCQ_4 *Z135;
# endif
{
LONGINT Z147;

{
register ZerF6mmCQ_4 *W_7 = Z135;

ZpmCQ_12(&W_7->Y0);
if (W_7->Y3 == 0) {
Z162(Z135);
W_7->Y1->A[1 - 1].Y0 = ZerF6mmCQ_0 + 1;
W_7->Y1->A[1 - 1].Y1 = Z133;
} else if (W_7->Y3 == 1) {
if (W_7->Y1->A[1 - 1].Y0 == ZerF6mmCQ_0 + 1 && W_7->Y1->A[1 - 1].Y1 == Z133) {
DEC(W_7->Y3);
} else if (W_7->Y1->A[1 - 1].Y0 == ZerF6mmCQ_0 + 1) {
W_7->Y1->A[1 - 1].Y0 = W_7->Y1->A[1 - 1].Y1 + 1;
W_7->Y1->A[1 - 1].Y1 = Z133;
} else if (W_7->Y1->A[1 - 1].Y1 == Z133) {
W_7->Y1->A[1 - 1].Y1 = W_7->Y1->A[1 - 1].Y0 - 1;
W_7->Y1->A[1 - 1].Y0 = ZerF6mmCQ_0 + 1;
} else {
Z162(Z135);
W_7->Y1->A[2 - 1].Y0 = W_7->Y1->A[1 - 1].Y1 + 1;
W_7->Y1->A[2 - 1].Y1 = Z133;
W_7->Y1->A[1 - 1].Y1 = W_7->Y1->A[1 - 1].Y0 - 1;
W_7->Y1->A[1 - 1].Y0 = ZerF6mmCQ_0 + 1;
}
} else if (W_7->Y1->A[1 - 1].Y0 == ZerF6mmCQ_0 + 1) {
{
LONGINT B_5 = 1, B_6 = W_7->Y3 - 1;

if (B_5 <= B_6)
for (Z147 = B_5;; Z147 += 1) {
W_7->Y1->A[Z147 - 1].Y0 = W_7->Y1->A[Z147 - 1].Y1 + 1;
W_7->Y1->A[Z147 - 1].Y1 = W_7->Y1->A[Z147 + 1 - 1].Y0 - 1;
if (Z147 >= B_6) break;
}
}
if (W_7->Y1->A[W_7->Y3 - 1].Y1 < Z133) {
W_7->Y1->A[W_7->Y3 - 1].Y0 = W_7->Y1->A[W_7->Y3 - 1].Y1 + 1;
W_7->Y1->A[W_7->Y3 - 1].Y1 = Z133;
} else {
DEC(W_7->Y3);
}
} else {
if (W_7->Y1->A[W_7->Y3 - 1].Y1 < Z133) {
Z162(Z135);
W_7->Y1->A[W_7->Y3 - 1].Y1 = Z133;
} else {
W_7->Y1->A[W_7->Y3 - 1].Y1 = W_7->Y1->A[W_7->Y3 - 1].Y0 - 1;
}
for (Z147 = W_7->Y3 - 1; Z147 >= 1; Z147 += -1) {
W_7->Y1->A[Z147 + 1 - 1].Y0 = W_7->Y1->A[Z147 - 1].Y1 + 1;
W_7->Y1->A[Z147 - 1].Y1 = W_7->Y1->A[Z147 - 1].Y0 - 1;
}
W_7->Y1->A[1 - 1].Y0 = ZerF6mmCQ_0 + 1;
}
}
}

void ZerF6mmCQ_12
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135, LONGCARD Z165)
# else
(Z135, Z165)
ZerF6mmCQ_4 *Z135;
LONGCARD Z165;
# endif
{
LONGINT Z147, Z154;

{
register ZerF6mmCQ_4 *W_8 = Z135;

if (Z165 <= ZerF6mmCQ_0) {
ZpmCQ_13(&W_8->Y0, Z165);
} else {
{
LONGINT B_7 = 1, B_8 = W_8->Y3;

if (B_7 <= B_8)
for (Z147 = B_7;; Z147 += 1) {
if (Z165 == W_8->Y1->A[Z147 - 1].Y0 - 1) {
DEC(W_8->Y1->A[Z147 - 1].Y0);
return;
} else if (Z165 < W_8->Y1->A[Z147 - 1].Y0) {
Z162(Z135);
{
LONGINT B_9 = W_8->Y3 - 1, B_10 = Z147;

if (B_9 >= B_10)
for (Z154 = B_9;; Z154 += -1) {
W_8->Y1->A[Z154 + 1 - 1] = W_8->Y1->A[Z154 - 1];
if (Z154 <= B_10) break;
}
}
W_8->Y1->A[Z147 - 1].Y0 = Z165;
W_8->Y1->A[Z147 - 1].Y1 = Z165;
return;
} else if (Z166(W_8->Y1->A[Z147 - 1], Z165)) {
return;
} else if (Z165 == W_8->Y1->A[Z147 - 1].Y1 + 1) {
INC(W_8->Y1->A[Z147 - 1].Y1);
if (Z147 < W_8->Y3 && Z165 == W_8->Y1->A[Z147 + 1 - 1].Y0 - 1) {
W_8->Y1->A[Z147 - 1].Y1 = W_8->Y1->A[Z147 + 1 - 1].Y1;
{
LONGINT B_11 = Z147 + 2, B_12 = W_8->Y3;

if (B_11 <= B_12)
for (Z154 = B_11;; Z154 += 1) {
W_8->Y1->A[Z154 - 1 - 1] = W_8->Y1->A[Z154 - 1];
if (Z154 >= B_12) break;
}
}
DEC(W_8->Y3);
}
return;
}
if (Z147 >= B_8) break;
}
}
Z162(Z135);
W_8->Y1->A[W_8->Y3 - 1].Y0 = Z165;
W_8->Y1->A[W_8->Y3 - 1].Y1 = Z165;
}
}
}

void ZerF6mmCQ_13
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135, LONGCARD Z167, LONGCARD Z168)
# else
(Z135, Z167, Z168)
ZerF6mmCQ_4 *Z135;
LONGCARD Z167, Z168;
# endif
{
LONGINT Z147, Z154, Z169;
LONGCARD Z170, Z171, Z172;

{
register ZerF6mmCQ_4 *W_9 = Z135;

Z171 = ZdaDDAD7_5((LONGCARD)ZerF6mmCQ_0, Z168);
Z172 = ZdaDDAD7_6((LONGCARD)(ZerF6mmCQ_0 + 1), Z167);
{
LONGCARD B_13 = Z167, B_14 = Z171;

if (B_13 <= B_14)
for (Z170 = B_13;; Z170 += 1) {
ZpmCQ_13(&W_9->Y0, Z170);
if (Z170 >= B_14) break;
}
}
if (Z172 <= Z168) {
{
LONGINT B_15 = 1, B_16 = W_9->Y3;

if (B_15 <= B_16)
for (Z147 = B_15;; Z147 += 1) {
if (Z168 == W_9->Y1->A[Z147 - 1].Y0 - 1) {
W_9->Y1->A[Z147 - 1].Y0 = Z172;
return;
} else if (Z168 < W_9->Y1->A[Z147 - 1].Y0) {
Z162(Z135);
{
LONGINT B_17 = W_9->Y3 - 1, B_18 = Z147;

if (B_17 >= B_18)
for (Z154 = B_17;; Z154 += -1) {
W_9->Y1->A[Z154 + 1 - 1] = W_9->Y1->A[Z154 - 1];
if (Z154 <= B_18) break;
}
}
W_9->Y1->A[Z147 - 1].Y0 = Z172;
W_9->Y1->A[Z147 - 1].Y1 = Z168;
return;
} else if (Z166(W_9->Y1->A[Z147 - 1], Z168)) {
W_9->Y1->A[Z147 - 1].Y0 = ZdaDDAD7_5(W_9->Y1->A[Z147 - 1].Y0, Z172);
return;
} else if (Z172 <= W_9->Y1->A[Z147 - 1].Y1) {
Z154 = Z147 + 1;
for (;;) {
if (Z154 > W_9->Y3) {
goto EXIT_2;
}
if (Z168 < W_9->Y1->A[Z154 - 1].Y0) {
goto EXIT_2;
}
INC(Z154);
} EXIT_2:;
DEC(Z154);
W_9->Y1->A[Z147 - 1].Y0 = ZdaDDAD7_5(W_9->Y1->A[Z147 - 1].Y0, Z172);
W_9->Y1->A[Z147 - 1].Y1 = ZdaDDAD7_6(W_9->Y1->A[Z154 - 1].Y1, Z168);
{
LONGINT B_19 = Z154 + 1, B_20 = W_9->Y3;

if (B_19 <= B_20)
for (Z169 = B_19;; Z169 += 1) {
W_9->Y1->A[Z169 - Z154 + Z147 - 1] = W_9->Y1->A[Z169 - 1];
if (Z169 >= B_20) break;
}
}
DEC1(W_9->Y3, Z154 - Z147);
return;
} else if (Z172 == W_9->Y1->A[Z147 - 1].Y1 + 1) {
W_9->Y1->A[Z147 - 1].Y1 = Z168;
Z154 = Z147 + 1;
for (;;) {
if (Z154 > W_9->Y3) {
goto EXIT_3;
}
if (Z168 < W_9->Y1->A[Z154 - 1].Y0) {
goto EXIT_3;
}
INC(Z154);
} EXIT_3:;
DEC(Z154);
W_9->Y1->A[Z147 - 1].Y1 = ZdaDDAD7_6(W_9->Y1->A[Z154 - 1].Y1, Z168);
if (Z154 < W_9->Y3 && Z168 == W_9->Y1->A[Z154 + 1 - 1].Y0 - 1) {
W_9->Y1->A[Z147 - 1].Y1 = W_9->Y1->A[Z154 + 1 - 1].Y1;
INC(Z154);
}
{
LONGINT B_21 = Z154 + 1, B_22 = W_9->Y3;

if (B_21 <= B_22)
for (Z169 = B_21;; Z169 += 1) {
W_9->Y1->A[Z169 - Z154 + Z147 - 1] = W_9->Y1->A[Z169 - 1];
if (Z169 >= B_22) break;
}
}
DEC1(W_9->Y3, Z154 - Z147);
return;
}
if (Z147 >= B_16) break;
}
}
Z162(Z135);
W_9->Y1->A[W_9->Y3 - 1].Y0 = Z172;
W_9->Y1->A[W_9->Y3 - 1].Y1 = Z168;
}
}
}

void ZerF6mmCQ_14
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135, LONGCARD Z165)
# else
(Z135, Z165)
ZerF6mmCQ_4 *Z135;
LONGCARD Z165;
# endif
{
LONGINT Z147, Z154;

{
register ZerF6mmCQ_4 *W_10 = Z135;

if (Z165 <= ZerF6mmCQ_0) {
ZpmCQ_14(&W_10->Y0, Z165);
} else {
{
LONGINT B_23 = 1, B_24 = W_10->Y3;

if (B_23 <= B_24)
for (Z147 = B_23;; Z147 += 1) {
if (Z166(W_10->Y1->A[Z147 - 1], Z165)) {
if (Z165 == W_10->Y1->A[Z147 - 1].Y0 && Z165 == W_10->Y1->A[Z147 - 1].Y1) {
{
LONGINT B_25 = Z147 + 1, B_26 = W_10->Y3;

if (B_25 <= B_26)
for (Z154 = B_25;; Z154 += 1) {
W_10->Y1->A[Z154 - 1 - 1] = W_10->Y1->A[Z154 - 1];
if (Z154 >= B_26) break;
}
}
DEC(W_10->Y3);
} else if (Z165 == W_10->Y1->A[Z147 - 1].Y0) {
INC(W_10->Y1->A[Z147 - 1].Y0);
} else if (Z165 == W_10->Y1->A[Z147 - 1].Y1) {
DEC(W_10->Y1->A[Z147 - 1].Y1);
} else {
Z162(Z135);
{
LONGINT B_27 = W_10->Y3 - 1, B_28 = Z147;

if (B_27 >= B_28)
for (Z154 = B_27;; Z154 += -1) {
W_10->Y1->A[Z154 + 1 - 1] = W_10->Y1->A[Z154 - 1];
if (Z154 <= B_28) break;
}
}
W_10->Y1->A[Z147 - 1].Y1 = Z165 - 1;
W_10->Y1->A[Z147 + 1 - 1].Y0 = Z165 + 1;
}
}
if (Z147 >= B_24) break;
}
}
}
}
}

void ZerF6mmCQ_15
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135, LONGCARD Z167, LONGCARD Z168)
# else
(Z135, Z167, Z168)
ZerF6mmCQ_4 *Z135;
LONGCARD Z167, Z168;
# endif
{
LONGINT Z147, Z154, Z169;
LONGCARD Z170, Z171, Z172;

{
register ZerF6mmCQ_4 *W_11 = Z135;

Z171 = ZdaDDAD7_5((LONGCARD)ZerF6mmCQ_0, Z168);
Z172 = ZdaDDAD7_6((LONGCARD)(ZerF6mmCQ_0 + 1), Z167);
{
LONGCARD B_29 = Z167, B_30 = Z171;

if (B_29 <= B_30)
for (Z170 = B_29;; Z170 += 1) {
ZpmCQ_14(&W_11->Y0, Z170);
if (Z170 >= B_30) break;
}
}
if (Z172 <= Z168) {
Z147 = 1;
for (;;) {
if (Z147 > W_11->Y3) {
goto EXIT_4;
}
if (Z168 < W_11->Y1->A[Z147 - 1].Y0) {
return;
}
if (Z172 <= W_11->Y1->A[Z147 - 1].Y1) {
goto EXIT_4;
}
INC(Z147);
} EXIT_4:;
Z154 = W_11->Y3;
for (;;) {
if (Z154 < Z147) {
goto EXIT_5;
}
if (W_11->Y1->A[Z154 - 1].Y1 < Z172) {
return;
}
if (W_11->Y1->A[Z154 - 1].Y0 <= Z168) {
goto EXIT_5;
}
DEC(Z154);
} EXIT_5:;
if (Z147 == Z154) {
Z172 = ZdaDDAD7_6(W_11->Y1->A[Z147 - 1].Y0, Z172);
Z168 = ZdaDDAD7_5(W_11->Y1->A[Z147 - 1].Y1, Z168);
if (Z172 == W_11->Y1->A[Z147 - 1].Y0 && Z168 == W_11->Y1->A[Z147 - 1].Y1) {
{
LONGINT B_31 = Z147 + 1, B_32 = W_11->Y3;

if (B_31 <= B_32)
for (Z154 = B_31;; Z154 += 1) {
W_11->Y1->A[Z154 - 1 - 1] = W_11->Y1->A[Z154 - 1];
if (Z154 >= B_32) break;
}
}
DEC(W_11->Y3);
} else if (Z172 == W_11->Y1->A[Z147 - 1].Y0) {
W_11->Y1->A[Z147 - 1].Y0 = Z168 + 1;
} else if (Z168 == W_11->Y1->A[Z147 - 1].Y1) {
W_11->Y1->A[Z147 - 1].Y1 = Z172 - 1;
} else {
Z162(Z135);
{
LONGINT B_33 = W_11->Y3 - 1, B_34 = Z147;

if (B_33 >= B_34)
for (Z154 = B_33;; Z154 += -1) {
W_11->Y1->A[Z154 + 1 - 1] = W_11->Y1->A[Z154 - 1];
if (Z154 <= B_34) break;
}
}
W_11->Y1->A[Z147 - 1].Y1 = Z172 - 1;
W_11->Y1->A[Z147 + 1 - 1].Y0 = Z168 + 1;
}
} else if (Z147 < Z154) {
Z172 = ZdaDDAD7_6(W_11->Y1->A[Z147 - 1].Y0, Z172);
Z168 = ZdaDDAD7_5(W_11->Y1->A[Z154 - 1].Y1, Z168);
if (W_11->Y1->A[Z147 - 1].Y0 < Z172) {
W_11->Y1->A[Z147 - 1].Y1 = Z172 - 1;
INC(Z147);
}
if (Z168 < W_11->Y1->A[Z154 - 1].Y1) {
W_11->Y1->A[Z154 - 1].Y0 = Z168 + 1;
DEC(Z154);
}
{
LONGINT B_35 = Z154 + 1, B_36 = W_11->Y3;

if (B_35 <= B_36)
for (Z169 = B_35;; Z169 += 1) {
W_11->Y1->A[Z169 - Z154 + Z147 - 1 - 1] = W_11->Y1->A[Z169 - 1];
if (Z169 >= B_36) break;
}
}
DEC1(W_11->Y3, Z154 - Z147 + 1);
}
}
}
}

LONGCARD ZerF6mmCQ_16
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135)
# else
(Z135)
ZerF6mmCQ_4 *Z135;
# endif
{
LONGCARD Z175;
LONGINT Z147;

{
register ZerF6mmCQ_4 *W_12 = Z135;

Z175 = 0;
{
LONGINT B_37 = 1, B_38 = W_12->Y3;

if (B_37 <= B_38)
for (Z147 = B_37;; Z147 += 1) {
INC1(Z175, W_12->Y1->A[Z147 - 1].Y1 - W_12->Y1->A[Z147 - 1].Y0 + 1);
if (Z147 >= B_38) break;
}
}
return ZpmCQ_15(&W_12->Y0) + Z175;
}
}

LONGCARD ZerF6mmCQ_17
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135)
# else
(Z135)
ZerF6mmCQ_4 *Z135;
# endif
{
{
register ZerF6mmCQ_4 *W_13 = Z135;

if (!ZpmCQ_26(W_13->Y0)) {
return ZpmCQ_17(&W_13->Y0);
} else if (W_13->Y3 > 0) {
return W_13->Y1->A[1 - 1].Y0;
} else {
return 0;
}
}
}

LONGCARD ZerF6mmCQ_18
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135)
# else
(Z135)
ZerF6mmCQ_4 *Z135;
# endif
{
{
register ZerF6mmCQ_4 *W_14 = Z135;

if (W_14->Y3 > 0) {
return W_14->Y1->A[W_14->Y3 - 1].Y1;
} else if (!ZpmCQ_26(W_14->Y0)) {
return ZpmCQ_18(&W_14->Y0);
} else {
return 0;
}
}
}

LONGCARD ZerF6mmCQ_19
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135)
# else
(Z135)
ZerF6mmCQ_4 *Z135;
# endif
{
return ZerF6mmCQ_17(Z135);
}

void ZerF6mmCQ_20
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135, LONGCARD *Z167, LONGCARD *Z168)
# else
(Z135, Z167, Z168)
ZerF6mmCQ_4 *Z135;
LONGCARD *Z167, *Z168;
# endif
{
LONGINT Z154;

{
register ZerF6mmCQ_4 *W_15 = Z135;

if (!ZpmCQ_26(W_15->Y0)) {
*Z167 = ZpmCQ_20(&W_15->Y0);
*Z168 = *Z167;
} else if (W_15->Y3 > 0) {
*Z167 = W_15->Y1->A[1 - 1].Y0;
*Z168 = W_15->Y1->A[1 - 1].Y1;
{
LONGINT B_39 = 2, B_40 = W_15->Y3;

if (B_39 <= B_40)
for (Z154 = B_39;; Z154 += 1) {
W_15->Y1->A[Z154 - 1 - 1] = W_15->Y1->A[Z154 - 1];
if (Z154 >= B_40) break;
}
}
DEC(W_15->Y3);
} else {
*Z167 = 0;
*Z168 = 0;
}
}
}

BOOLEAN ZerF6mmCQ_21
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 Z145, ZerF6mmCQ_4 Z146)
# else
(Z145, Z146)
ZerF6mmCQ_4 Z145, Z146;
# endif
{
LONGINT Z147, Z154;
LONGCARD Z170;

{
register ZerF6mmCQ_4 *W_16 = &Z145;

if (!ZpmCQ_21(W_16->Y0, Z146.Y0)) {
return FALSE;
}
Z154 = 1;
{
LONGINT B_41 = 1, B_42 = W_16->Y3;

if (B_41 <= B_42)
for (Z147 = B_41;; Z147 += 1) {
Z170 = W_16->Y1->A[Z147 - 1].Y1;
while (Z154 <= Z146.Y3 && Z146.Y1->A[Z154 - 1].Y1 < Z170) {
INC(Z154);
}
if (Z154 > Z146.Y3 || !Z166(Z146.Y1->A[Z154 - 1], W_16->Y1->A[Z147 - 1].Y0) || !Z166(Z146.Y1->A[Z154 - 1], Z170)) {
return FALSE;
}
if (Z147 >= B_42) break;
}
}
return TRUE;
}
}

BOOLEAN ZerF6mmCQ_22
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z145, ZerF6mmCQ_4 *Z146)
# else
(Z145, Z146)
ZerF6mmCQ_4 *Z145, *Z146;
# endif
{
LONGINT Z147;

{
register ZerF6mmCQ_4 *W_17 = Z145;

if (ZpmCQ_24(W_17->Y0, Z146->Y0) || W_17->Y3 != Z146->Y3) {
return FALSE;
}
{
LONGINT B_43 = 1, B_44 = W_17->Y3;

if (B_43 <= B_44)
for (Z147 = B_43;; Z147 += 1) {
if (W_17->Y1->A[Z147 - 1].Y0 != Z146->Y1->A[Z147 - 1].Y0 || W_17->Y1->A[Z147 - 1].Y1 != Z146->Y1->A[Z147 - 1].Y1) {
return FALSE;
}
if (Z147 >= B_44) break;
}
}
return TRUE;
}
}

BOOLEAN ZerF6mmCQ_23
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 Z145, ZerF6mmCQ_4 Z146)
# else
(Z145, Z146)
ZerF6mmCQ_4 Z145, Z146;
# endif
{
return !ZerF6mmCQ_22(&Z145, &Z146);
}

BOOLEAN ZerF6mmCQ_24
# ifdef HAVE_ARGS
(LONGCARD Z165, ZerF6mmCQ_4 *Z135)
# else
(Z165, Z135)
LONGCARD Z165;
ZerF6mmCQ_4 *Z135;
# endif
{
LONGINT Z147;

{
register ZerF6mmCQ_4 *W_18 = Z135;

if (Z165 <= ZerF6mmCQ_0) {
return ZpmCQ_25(Z165, &W_18->Y0);
} else {
{
LONGINT B_45 = 1, B_46 = W_18->Y3;

if (B_45 <= B_46)
for (Z147 = B_45;; Z147 += 1) {
if (Z166(W_18->Y1->A[Z147 - 1], Z165)) {
return TRUE;
}
if (Z147 >= B_46) break;
}
}
}
return FALSE;
}
}

BOOLEAN ZerF6mmCQ_25
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 Z135)
# else
(Z135)
ZerF6mmCQ_4 Z135;
# endif
{
{
register ZerF6mmCQ_4 *W_19 = &Z135;

return ZpmCQ_26(W_19->Y0) && W_19->Y3 == 0;
}
}

void ZerF6mmCQ_26
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z145, ZerF6mmCQ_4 Z146)
# else
(Z145, Z146)
ZerF6mmCQ_4 *Z145;
ZerF6mmCQ_4 Z146;
# endif
{
LONGINT Z147;

{
register ZerF6mmCQ_4 *W_20 = Z145;

ZpmCQ_30(&W_20->Y0, Z146.Y0);
W_20->Y3 = Z146.Y3 - 1;
Z162(Z145);
{
LONGINT B_47 = 1, B_48 = W_20->Y3;

if (B_47 <= B_48)
for (Z147 = B_47;; Z147 += 1) {
W_20->Y1->A[Z147 - 1] = Z146.Y1->A[Z147 - 1];
if (Z147 >= B_48) break;
}
}
}
}

void ZerF6mmCQ_27
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135, LONGCARD Z165)
# else
(Z135, Z165)
ZerF6mmCQ_4 *Z135;
LONGCARD Z165;
# endif
{
ZerF6mmCQ_28(Z135);
ZerF6mmCQ_12(Z135, Z165);
}

void ZerF6mmCQ_28
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135)
# else
(Z135)
ZerF6mmCQ_4 *Z135;
# endif
{
{
register ZerF6mmCQ_4 *W_21 = Z135;

ZpmCQ_32(&W_21->Y0);
W_21->Y3 = 0;
}
}

void ZerF6mmCQ_29
# ifdef HAVE_ARGS
(ZfM_3 Z189, ZerF6mmCQ_4 Z135)
# else
(Z189, Z135)
ZfM_3 Z189;
ZerF6mmCQ_4 Z135;
# endif
{
LONGINT Z147;

ZfM_24(Z189, '{');
{
register ZerF6mmCQ_4 *W_22 = &Z135;

for (Z147 = 0; Z147 <= ZerF6mmCQ_0; Z147 += 1) {
if (ZpmCQ_25((LONGCARD)Z147, &W_22->Y0)) {
ZfM_24(Z189, ' ');
ZfM_25(Z189, Z147, 0L);
}
}
{
LONGINT B_49 = 1, B_50 = W_22->Y3;

if (B_49 <= B_50)
for (Z147 = B_49;; Z147 += 1) {
ZfM_24(Z189, ' ');
ZfM_28(Z189, W_22->Y1->A[Z147 - 1].Y0, 0L, 10L);
ZfM_24(Z189, '-');
ZfM_28(Z189, W_22->Y1->A[Z147 - 1].Y1, 0L, 10L);
if (Z147 >= B_50) break;
}
}
}
ZfM_24(Z189, '}');
}

static BOOLEAN Z166
# ifdef HAVE_ARGS
(ZerF6mmCQ_3 Z190, LONGCARD Z165)
# else
(Z190, Z165)
ZerF6mmCQ_3 Z190;
LONGCARD Z165;
# endif
{
return Z190.Y0 <= Z165 && Z165 <= Z190.Y1;
}

static void Z162
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 *Z135)
# else
(Z135)
ZerF6mmCQ_4 *Z135;
# endif
{
{
register ZerF6mmCQ_4 *W_23 = Z135;

INC(W_23->Y3);
if (W_23->Y3 > W_23->Y2) {
if (W_23->Y2 == 0) {
W_23->Y2 = ZdaDDAD7_6((LONGCARD)W_23->Y3, (LONGCARD)Z132);
ZarQdhNDD_0((ADDRESS *)&W_23->Y1, &W_23->Y2, (LONGINT)sizeof (ZerF6mmCQ_3));
} else if (W_23->Y3 > W_23->Y2 + W_23->Y2) {
ZarQdhNDD_1((ADDRESS *)&W_23->Y1, &W_23->Y2, W_23->Y3, (LONGINT)sizeof (ZerF6mmCQ_3));
} else {
ZarQdhNDD_2((ADDRESS *)&W_23->Y1, &W_23->Y2, (LONGINT)sizeof (ZerF6mmCQ_3));
}
}
}
}

void BEGIN_HugeSets ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Sets ();
BEGIN_General ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Sets ();

}
