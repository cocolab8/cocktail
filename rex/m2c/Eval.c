#include "SYSTEM_.h"

#ifndef DEFINITION_Tree0
#include "Tree0.h"
#endif

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_HugeSets
#include "HugeSets.h"
#endif

#ifndef DEFINITION_Classes
#include "Classes.h"
#endif

#ifndef DEFINITION_Dfa
#include "Dfa.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Eval
#include "Eval.h"
#endif


static ZerF6mmCQ_5 Z167;
static BOOLEAN Z168;
#define Z169	Zq0A4J_1
static void Z173 ARGS ((Zq0A4J_17 Z171));

void ZbpA7_0
# ifdef HAVE_ARGS
(Zq0A4J_17 Z171)
# else
(Z171)
Zq0A4J_17 Z171;
# endif
{
Z173(Z171);
}

static void Z173
# ifdef HAVE_ARGS
(Zq0A4J_17 Z171)
# else
(Z171)
Zq0A4J_17 Z171;
# endif
{
Zp1PEAFD_2 Z174;
Ztf1PEAFD_3 Z175;
ZpmCQ_4 Z176;
CARDINAL Z178, Z179;
LONGCARD Z180, Z181, Z182;

switch (Z171->U_1.V_1.Y0) {
case Zq0A4J_3:;
Z171->U_1.V_3.Y2.Y4 = 0;
Z171->U_1.V_3.Y2.Y3 = 0;
Z171->U_1.V_3.Y2.Y2 = TRUE;
Z171->U_1.V_3.Y2.Y1 = Zq0A4_0;
break;
case Zq0A4J_4:;
Z173(Z171->U_1.V_4.Y3.Y5);
Z171->U_1.V_4.Y3.Y4 = Z171->U_1.V_4.Y3.Y5->U_1.V_3.Y2.Y4;
Z171->U_1.V_4.Y3.Y3 = Z171->U_1.V_4.Y3.Y5->U_1.V_3.Y2.Y3;
Z171->U_1.V_4.Y3.Y2 = TRUE;
Z171->U_1.V_4.Y3.Y1 = Zq0A4_0;
break;
case Zq0A4J_5:;
Z173(Z171->U_1.V_5.Y4.Y5);
Z171->U_1.V_5.Y4.Y4 = Z171->U_1.V_5.Y4.Y5->U_1.V_3.Y2.Y4;
Z171->U_1.V_5.Y4.Y3 = Z171->U_1.V_5.Y4.Y5->U_1.V_3.Y2.Y3;
Z171->U_1.V_5.Y4.Y2 = FALSE;
Z171->U_1.V_5.Y4.Y1 = Zq0A4_21(Zq0A4_7, Z171->U_1.V_5.Y4.Y5->U_1.V_3.Y2.Y1);
break;
case Zq0A4J_6:;
Z173(Z171->U_1.V_6.Y5.Y5);
Z171->U_1.V_6.Y5.Y4 = Z171->U_1.V_6.Y5.Y5->U_1.V_3.Y2.Y4;
Z171->U_1.V_6.Y5.Y3 = Z171->U_1.V_6.Y5.Y5->U_1.V_3.Y2.Y3;
Z171->U_1.V_6.Y5.Y2 = FALSE;
Z171->U_1.V_6.Y5.Y1 = Zq0A4_21(Zq0A4_6, Z171->U_1.V_6.Y5.Y5->U_1.V_3.Y2.Y1);
break;
case Zq0A4J_7:;
Z173(Z171->U_1.V_7.Y6.Y6);
Z173(Z171->U_1.V_7.Y6.Y5);
Z171->U_1.V_7.Y6.Y4 = Z171->U_1.V_7.Y6.Y5->U_1.V_3.Y2.Y4 + Z171->U_1.V_7.Y6.Y6->U_1.V_3.Y2.Y4;
Z171->U_1.V_7.Y6.Y3 = Z171->U_1.V_7.Y6.Y5->U_1.V_3.Y2.Y3 + Z171->U_1.V_7.Y6.Y6->U_1.V_3.Y2.Y3;
Z171->U_1.V_7.Y6.Y2 = TRUE;
Z171->U_1.V_7.Y6.Y1 = Zq0A4_0;
break;
case Zq0A4J_8:;
Z173(Z171->U_1.V_8.Y7.Y6);
Z173(Z171->U_1.V_8.Y7.Y5);
Z171->U_1.V_8.Y7.Y4 = Z171->U_1.V_8.Y7.Y5->U_1.V_3.Y2.Y4 + Z171->U_1.V_8.Y7.Y6->U_1.V_3.Y2.Y4;
Z171->U_1.V_8.Y7.Y3 = Z171->U_1.V_8.Y7.Y5->U_1.V_3.Y2.Y3 + Z171->U_1.V_8.Y7.Y6->U_1.V_3.Y2.Y3;
Z171->U_1.V_8.Y7.Y2 = TRUE;
Z171->U_1.V_8.Y7.Y1 = Zq0A4_22(Zq0A4_1, Z171->U_1.V_8.Y7.Y5->U_1.V_3.Y2.Y1, Z171->U_1.V_8.Y7.Y6->U_1.V_3.Y2.Y1);
break;
case Zq0A4J_9:;
Z173(Z171->U_1.V_9.Y8.Y6);
Z173(Z171->U_1.V_9.Y8.Y5);
Z171->U_1.V_9.Y8.Y4 = Z171->U_1.V_9.Y8.Y5->U_1.V_3.Y2.Y4 + Z171->U_1.V_9.Y8.Y6->U_1.V_3.Y2.Y4;
Z171->U_1.V_9.Y8.Y3 = Z171->U_1.V_9.Y8.Y5->U_1.V_3.Y2.Y3 + Z171->U_1.V_9.Y8.Y6->U_1.V_3.Y2.Y3;
Z171->U_1.V_9.Y8.Y2 = Z171->U_1.V_9.Y8.Y5->U_1.V_3.Y2.Y2 && Z171->U_1.V_9.Y8.Y6->U_1.V_3.Y2.Y2;
Z171->U_1.V_9.Y8.Y1 = Zq0A4_22(Zq0A4_5, Z171->U_1.V_9.Y8.Y5->U_1.V_3.Y2.Y1, Z171->U_1.V_9.Y8.Y6->U_1.V_3.Y2.Y1);
break;
case Zq0A4J_10:;
Z173(Z171->U_1.V_10.Y9.Y6);
Z173(Z171->U_1.V_10.Y9.Y5);
Z171->U_1.V_10.Y9.Y4 = Z171->U_1.V_10.Y9.Y5->U_1.V_3.Y2.Y4 + Z171->U_1.V_10.Y9.Y6->U_1.V_3.Y2.Y4;
Z171->U_1.V_10.Y9.Y3 = Z171->U_1.V_10.Y9.Y5->U_1.V_3.Y2.Y3 + Z171->U_1.V_10.Y9.Y6->U_1.V_3.Y2.Y3;
Z171->U_1.V_10.Y9.Y2 = FALSE;
Z171->U_1.V_10.Y9.Y1 = Zq0A4_22(Zq0A4_4, Z171->U_1.V_10.Y9.Y5->U_1.V_3.Y2.Y1, Z171->U_1.V_10.Y9.Y6->U_1.V_3.Y2.Y1);
break;
case Zq0A4J_11:;
Z171->U_1.V_11.Y10.Y4 = 1;
Z171->U_1.V_11.Y10.Y3 = 1;
Z171->U_1.V_11.Y10.Y2 = TRUE;
Z171->U_1.V_11.Y10.Y1 = Zq0A4_23(Zq0A4_8, (SHORTCARD)Zgd7EPBB_23(Z171->U_1.V_11.Y10.Y5));
break;
case Zq0A4J_12:;
Z179 = Zgd7EPBB_20(Z171->U_1.V_12.Y11.Y5);
if (Z179 != 0) {
Z171->U_1.V_12.Y11.Y6 = ZpmCQ_15(&Zgd7EPBB_13->A[Z179].Y1);
ZerF6mmCQ_26(&Z167, Z171->U_1.V_12.Y11.Y5);
ZerF6mmCQ_10(&Z167, Zgd7EPBB_5);
INC1(Z171->U_1.V_12.Y11.Y6, ZerF6mmCQ_16(&Z167));
if (Z171->U_1.V_12.Y11.Y6 == 1) {
if (ZpmCQ_15(&Zgd7EPBB_13->A[Z179].Y1) == 1) {
Z171->U_1.V_12.Y11.Y1 = Zq0A4_23(Zq0A4_8, (SHORTCARD)ZpmCQ_19(&Zgd7EPBB_13->A[Z179].Y1));
} else {
Z171->U_1.V_12.Y11.Y1 = Zq0A4_23(Zq0A4_8, (SHORTCARD)Zgd7EPBB_23(ZerF6mmCQ_19(&Z167)));
}
} else {
ZpmCQ_5(&Z176, Zgd7EPBB_4);
while (!ZerF6mmCQ_25(Z167)) {
ZerF6mmCQ_20(&Z167, &Z180, &Z181);
{
LONGCARD B_1 = Z180, B_2 = Z181;

if (B_1 <= B_2)
for (Z182 = B_1;; Z182 += 1) {
ZpmCQ_13(&Z176, Zgd7EPBB_23(Z182));
if (Z182 >= B_2) break;
}
}
}
ZpmCQ_8(&Z176, Zgd7EPBB_13->A[Z179].Y1);
Z171->U_1.V_12.Y11.Y1 = Zq0A4_24(Zq0A4_9, Z176);
}
} else {
Z171->U_1.V_12.Y11.Y6 = ZerF6mmCQ_16(&Z171->U_1.V_12.Y11.Y5);
if (Z171->U_1.V_12.Y11.Y6 == 1) {
Z171->U_1.V_12.Y11.Y1 = Zq0A4_23(Zq0A4_8, (SHORTCARD)ZerF6mmCQ_19(&Z171->U_1.V_12.Y11.Y5));
} else {
ZpmCQ_5(&Z176, Zgd7EPBB_4);
ZerF6mmCQ_26(&Z167, Z171->U_1.V_12.Y11.Y5);
while (!ZerF6mmCQ_25(Z167)) {
ZerF6mmCQ_20(&Z167, &Z180, &Z181);
{
LONGCARD B_3 = Z180, B_4 = ZdaDDAD7_5(Z181, Zaf1_7);

if (B_3 <= B_4)
for (Z182 = B_3;; Z182 += 1) {
ZpmCQ_13(&Z176, Zgd7EPBB_23(Z182));
if (Z182 >= B_4) break;
}
}
}
Z171->U_1.V_12.Y11.Y1 = Zq0A4_24(Zq0A4_9, Z176);
}
}
Z171->U_1.V_12.Y11.Y4 = 1;
Z171->U_1.V_12.Y11.Y3 = 1;
Z171->U_1.V_12.Y11.Y2 = Z171->U_1.V_12.Y11.Y6 == 1;
break;
case Zq0A4J_13:;
Z171->U_1.V_13.Y12.Y4 = Zp1PEAFi_4(Z171->U_1.V_13.Y12.Y5);
Z171->U_1.V_13.Y12.Y3 = Zp1PEAFi_4(Z171->U_1.V_13.Y12.Y5);
Z171->U_1.V_13.Y12.Y2 = TRUE;
Zp1PEAFi_3(Z171->U_1.V_13.Y12.Y5, &Z174);
Ztf1PEAFD_6(&Z175);
{
LONGCARD B_5 = 1, B_6 = Zp1PEAFD_7(&Z174);

if (B_5 <= B_6)
for (Z178 = B_5;; Z178 += 1) {
Ztf1PEAFD_8(&Z175, (SHORTCARD)Zgd7EPBB_23(ORD(Zp1PEAFD_12(&Z174, (Zp1PEAFD_1)Z178))));
if (Z178 >= B_6) break;
}
}
Z171->U_1.V_13.Y12.Y1 = Zq0A4_25(Zq0A4_10, Zp1PEAFi_8(&Z175));
break;
case Zq0A4J_14:;
Z173(Z171->U_1.V_14.Y13.Y5);
Z171->U_1.V_14.Y13.Y4 = Z171->U_1.V_14.Y13.Y5->U_1.V_3.Y2.Y4;
Z171->U_1.V_14.Y13.Y3 = Z171->U_1.V_14.Y13.Y5->U_1.V_3.Y2.Y3;
Z171->U_1.V_14.Y13.Y2 = TRUE;
Z171->U_1.V_14.Y13.Y1 = Zq0A4_26(Zq0A4_2, Z171->U_1.V_14.Y13.Y5->U_1.V_3.Y2.Y1, Z171->U_1.V_14.Y13.Y6, Z171->U_1.V_14.Y13.Y7, Z171->U_1.V_14.Y13.Y8, Z171->U_1.V_14.Y13.Y9, Z171->U_1.V_14.Y13.Y10);
break;
case Zq0A4J_15:;
Z173(Z171->U_1.V_15.Y14.Y7);
Z173(Z171->U_1.V_15.Y14.Y6);
if (Z171->U_1.V_15.Y14.Y6->U_1.V_3.Y2.Y2 && Z171->U_1.V_15.Y14.Y7->U_1.V_3.Y2.Y2) {
Z171->U_1.V_15.Y14.Y10 = ZpmCQ_15(&Z171->U_1.V_15.Y14.Y5);
Z171->U_1.V_15.Y14.Y4 = (Z171->U_1.V_15.Y14.Y6->U_1.V_3.Y2.Y4 + Z171->U_1.V_15.Y14.Y7->U_1.V_3.Y2.Y4) * Z171->U_1.V_15.Y14.Y10;
} else {
Z171->U_1.V_15.Y14.Y4 = 0;
}
if (!(Z171->U_1.V_15.Y14.Y6->U_1.V_3.Y2.Y2 && Z171->U_1.V_15.Y14.Y7->U_1.V_3.Y2.Y2)) {
Z171->U_1.V_15.Y14.Y3 = Z171->U_1.V_15.Y14.Y6->U_1.V_3.Y2.Y3 + Z171->U_1.V_15.Y14.Y7->U_1.V_3.Y2.Y3;
} else {
Z171->U_1.V_15.Y14.Y3 = 0;
}
Z171->U_1.V_15.Y14.Y2 = TRUE;
Z171->U_1.V_15.Y14.Y1 = Zq0A4_27(Zq0A4_3, Z171->U_1.V_15.Y14.Y5, Z171->U_1.V_15.Y14.Y6->U_1.V_3.Y2.Y1, Z171->U_1.V_15.Y14.Y7->U_1.V_3.Y2.Y1, (BOOLEAN)(Z171->U_1.V_15.Y14.Y6->U_1.V_3.Y2.Y2 && Z171->U_1.V_15.Y14.Y7->U_1.V_3.Y2.Y2), Z171->U_1.V_15.Y14.Y8, Z171->U_1.V_15.Y14.Y9);
break;
default:
break;
}
}

void ZbpA7_1
 ARGS ((void))
{
ZerF6mmCQ_6(&Z167);
}

void ZbpA7_2
 ARGS ((void))
{
}

void BEGIN_Eval ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Tree0 ();
BEGIN_Tree0 ();
BEGIN_General ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_HugeSets ();
BEGIN_Classes ();
BEGIN_Dfa ();
BEGIN_StringM ();
BEGIN_Sets ();
BEGIN_WStrings ();
BEGIN_Tree ();

}
