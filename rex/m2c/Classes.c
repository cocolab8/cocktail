#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_HugeSets
#include "HugeSets.h"
#endif

#ifndef DEFINITION_Tree0
#include "Tree0.h"
#endif

#ifndef DEFINITION_Dfa
#include "Dfa.h"
#endif

#ifndef DEFINITION_UniCode
#include "UniCode.h"
#endif

#ifndef DEFINITION_Sort
#include "Sort.h"
#endif

#ifndef DEFINITION_ScanGen
#include "ScanGen.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Classes
#include "Classes.h"
#endif

Zgd7EPBB_1 Zgd7EPBB_4;
ZerF6mmCQ_4 Zgd7EPBB_5;
ZerF6mmCQ_4 Zgd7EPBB_6;
struct Classes_3 Zgd7EPBB_7;
struct Classes_4 *Zgd7EPBB_8;
LONGINT Zgd7EPBB_9;
struct Classes_5 *Zgd7EPBB_10;
LONGINT Zgd7EPBB_11;
INTEGER Zgd7EPBB_12;
struct Classes_6 *Zgd7EPBB_13;
LONGINT Zgd7EPBB_14;
INTEGER Zgd7EPBB_15;
struct Classes_7 *Zgd7EPBB_16;
LONGINT Zgd7EPBB_17;
INTEGER Zgd7EPBB_18;
BOOLEAN Zgd7EPBB_19;

static void Z177 ARGS ((Zq0A4J_17 Z178));
static void Z185 ARGS ((ZrxAagD3_3 Z186, ZrxAagD3_3 Z187, Zgd7EPBB_1 Z188));
static BOOLEAN Z213 ARGS ((INTEGER Z174, INTEGER Z205));
static void Z214 ARGS ((INTEGER Z174, INTEGER Z205));

INTEGER Zgd7EPBB_20
# ifdef HAVE_ARGS
(ZerF6mmCQ_4 Z160)
# else
(Z160)
ZerF6mmCQ_4 Z160;
# endif
{
INTEGER Z174;

{
LONGINT B_1 = 1, B_2 = Zgd7EPBB_15;

if (B_1 <= B_2)
for (Z174 = B_1;; Z174 += 1) {
if (ZerF6mmCQ_22(&Z160, &Zgd7EPBB_13->A[Z174].Y0)) {
return Z174;
}
if (Z174 >= B_2) break;
}
}
return 0;
}

static void Z177
# ifdef HAVE_ARGS
(Zq0A4J_17 Z178)
# else
(Z178)
Zq0A4J_17 Z178;
# endif
{
CARDINAL Z174;
Zp1PEAFD_2 Z179;

switch (Z178->U_1.V_1.Y0) {
case Zq0A4J_11:;
ZerF6mmCQ_12(&Zgd7EPBB_5, Z178->U_1.V_11.Y10.Y5);
break;
case Zq0A4J_12:;
if (Zgd7EPBB_20(Z178->U_1.V_12.Y11.Y5) == 0) {
INC(Zgd7EPBB_15);
if (Zgd7EPBB_15 == Zgd7EPBB_14) {
ZarQdhNDD_2((ADDRESS *)&Zgd7EPBB_13, &Zgd7EPBB_14, (LONGINT)sizeof (Zgd7EPBB_2));
}
ZerF6mmCQ_6(&Zgd7EPBB_13->A[Zgd7EPBB_15].Y0);
ZerF6mmCQ_26(&Zgd7EPBB_13->A[Zgd7EPBB_15].Y0, Z178->U_1.V_12.Y11.Y5);
ZerF6mmCQ_8(&Zgd7EPBB_6, Z178->U_1.V_12.Y11.Y5);
}
break;
case Zq0A4J_13:;
Zp1PEAFi_3(Z178->U_1.V_13.Y12.Y5, &Z179);
for (Z174 = Zp1PEAFD_7(&Z179); Z174 >= 1; Z174 += -1) {
ZerF6mmCQ_12(&Zgd7EPBB_5, ORD(Zp1PEAFD_12(&Z179, (Zp1PEAFD_1)Z174)));
}
break;
default:
break;
}
}

static void Z185
# ifdef HAVE_ARGS
(ZrxAagD3_3 Z186, ZrxAagD3_3 Z187, Zgd7EPBB_1 Z188)
# else
(Z186, Z187, Z188)
ZrxAagD3_3 Z186, Z187;
Zgd7EPBB_1 Z188;
# endif
{
ZrxAagD3_3 Z174, Z190, Z191;

Z190 = ZdaDDAD7_5((LONGCARD)(Zgd7EPBB_9 - 1), Z187);
Z191 = ZdaDDAD7_6((LONGCARD)Zgd7EPBB_9, Z186);
{
ZrxAagD3_3 B_3 = Z186, B_4 = Z190;

if (B_3 <= B_4)
for (Z174 = B_3;; Z174 += 1) {
Zgd7EPBB_8->A[Z174] = Z188;
if (Z174 >= B_4) break;
}
}
if (Z191 <= Z187) {
INC(Zgd7EPBB_12);
if (Zgd7EPBB_12 >= Zgd7EPBB_11) {
ZarQdhNDD_2((ADDRESS *)&Zgd7EPBB_10, &Zgd7EPBB_11, (LONGINT)sizeof (Zgd7EPBB_3));
}
Zgd7EPBB_10->A[Zgd7EPBB_12].Y0 = Z187;
Zgd7EPBB_10->A[Zgd7EPBB_12].Y1 = Z188;
}
}

Zgd7EPBB_1 Zgd7EPBB_23
# ifdef HAVE_ARGS
(ZrxAagD3_3 Z159)
# else
(Z159)
ZrxAagD3_3 Z159;
# endif
{
INTEGER Z199, Z200, Z201;

if (Z159 < (ZrxAagD3_3)Zgd7EPBB_9) {
return Zgd7EPBB_8->A[Z159];
} else {
Z199 = 1;
Z200 = Zgd7EPBB_12;
while (Z200 - Z199 > 1) {
Z201 = (Z199 + Z200) / 2;
if (Zgd7EPBB_10->A[Z201].Y0 < Z159) {
Z199 = Z201;
} else {
Z200 = Z201;
}
}
if (Zgd7EPBB_10->A[Z199 - 1].Y0 < Z159 && Z159 <= Zgd7EPBB_10->A[Z199].Y0) {
return Zgd7EPBB_10->A[Z199].Y1;
} else {
return Zgd7EPBB_10->A[Z200].Y1;
}
}
}

ZrxAagD3_3 Zgd7EPBB_24
# ifdef HAVE_ARGS
(Zgd7EPBB_1 Z188)
# else
(Z188)
Zgd7EPBB_1 Z188;
# endif
{
return Zgd7EPBB_7.A[Z188];
}

void Zgd7EPBB_21
 ARGS ((void))
{
INTEGER Z174, Z205;
ZerF6mmCQ_4 Z160;
LONGCARD Z186, Z187, Z206;

ZerF6mmCQ_6(&Zgd7EPBB_5);
ZerF6mmCQ_6(&Zgd7EPBB_6);
Zgd7EPBB_14 = 16;
ZarQdhNDD_0((ADDRESS *)&Zgd7EPBB_13, &Zgd7EPBB_14, (LONGINT)sizeof (Zgd7EPBB_2));
Zgd7EPBB_15 = 0;
if (Zgd7EPBB_19) {
Zq0A4J_72(Zq0A4J_37, (Zq0A4J_18)Z177);
ZerF6mmCQ_12(&Zgd7EPBB_5, ORD(Zaf1_5));
ZerF6mmCQ_8(&Zgd7EPBB_6, Zgd7EPBB_5);
ZerF6mmCQ_11(&Zgd7EPBB_6);
} else {
ZerF6mmCQ_12(&Zgd7EPBB_5, ORD(Zaf1_1));
ZerF6mmCQ_11(&Zgd7EPBB_5);
}
Zgd7EPBB_17 = 16;
ZarQdhNDD_0((ADDRESS *)&Zgd7EPBB_16, &Zgd7EPBB_17, (LONGINT)sizeof (ZerF6mmCQ_4));
Zgd7EPBB_18 = 0;
ZerF6mmCQ_6(&Zgd7EPBB_16->A[0]);
ZerF6mmCQ_26(&Zgd7EPBB_16->A[0], Zgd7EPBB_5);
ZerF6mmCQ_8(&Zgd7EPBB_16->A[0], Zgd7EPBB_6);
ZerF6mmCQ_11(&Zgd7EPBB_16->A[0]);
if (!Zgd7EPBB_19) {
ZerF6mmCQ_28(&Zgd7EPBB_5);
ZerF6mmCQ_13(&Zgd7EPBB_5, 1L, Zaf1_7);
}
if (Zpky9jaD_38 == Zpky9jaD_60) {
ZerF6mmCQ_15(&Zgd7EPBB_5, 65536L, (LONGCARD)4294967295L);
ZerF6mmCQ_15(&Zgd7EPBB_16->A[0], 65536L, (LONGCARD)4294967295L);
}
ZerF6mmCQ_6(&Z160);
{
LONGINT B_5 = 1, B_6 = Zgd7EPBB_15;

if (B_5 <= B_6)
for (Z174 = B_5;; Z174 += 1) {
{
LONGINT B_7 = 0, B_8 = Zgd7EPBB_18;

if (B_7 <= B_8)
for (Z205 = B_7;; Z205 += 1) {
ZerF6mmCQ_26(&Z160, Zgd7EPBB_13->A[Z174].Y0);
ZerF6mmCQ_9(&Z160, Zgd7EPBB_5);
ZerF6mmCQ_10(&Z160, Zgd7EPBB_16->A[Z205]);
if (!ZerF6mmCQ_25(Z160) && !ZerF6mmCQ_22(&Z160, &Zgd7EPBB_16->A[Z205])) {
INC(Zgd7EPBB_18);
if (ORD(Zgd7EPBB_18) == (CARDINAL)Zgd7EPBB_17) {
ZarQdhNDD_2((ADDRESS *)&Zgd7EPBB_16, &Zgd7EPBB_17, (LONGINT)sizeof (ZerF6mmCQ_4));
}
ZerF6mmCQ_6(&Zgd7EPBB_16->A[Zgd7EPBB_18]);
ZerF6mmCQ_26(&Zgd7EPBB_16->A[Zgd7EPBB_18], Z160);
ZerF6mmCQ_9(&Zgd7EPBB_16->A[Z205], Z160);
}
if (Z205 >= B_8) break;
}
}
if (Z174 >= B_6) break;
}
}
ZarQdhNDD_0((ADDRESS *)&Zgd7EPBB_8, &Zgd7EPBB_9, (LONGINT)sizeof (Zgd7EPBB_1));
Zgd7EPBB_12 = 0;
Zgd7EPBB_11 = 16;
ZarQdhNDD_0((ADDRESS *)&Zgd7EPBB_10, &Zgd7EPBB_11, (LONGINT)sizeof (Zgd7EPBB_3));
{
LONGINT B_9 = 0, B_10 = Zgd7EPBB_18;

if (B_9 <= B_10)
for (Z205 = B_9;; Z205 += 1) {
ZerF6mmCQ_26(&Z160, Zgd7EPBB_16->A[Z205]);
while (!ZerF6mmCQ_25(Z160)) {
ZerF6mmCQ_20(&Z160, &Z186, &Z187);
Z185(Z186, Z187, (Zgd7EPBB_1)Z205);
}
if (Z205 >= B_10) break;
}
}
Zgd7EPBB_4 = Zgd7EPBB_18;
ZerF6mmCQ_26(&Z160, Zgd7EPBB_5);
while (!ZerF6mmCQ_25(Z160)) {
ZerF6mmCQ_20(&Z160, &Z186, &Z187);
{
LONGCARD B_11 = Z186, B_12 = Z187;

if (B_11 <= B_12)
for (Z206 = B_11;; Z206 += 1) {
INC(Zgd7EPBB_4);
Z185(Z206, Z206, Zgd7EPBB_4);
Zgd7EPBB_7.A[Zgd7EPBB_4] = Z206;
if (Z206 >= B_12) break;
}
}
}
ZerF6mmCQ_7(&Z160);
if (Zaf1_7 >= (ZrxAagD3_3)Zgd7EPBB_9) {
Zgd7EPBB_10->A[0].Y0 = Zgd7EPBB_9 - 1;
Zgd7EPBB_10->A[0].Y1 = 0;
ZpwKP_2(1L, Zgd7EPBB_12, (ZpwKP_0)Z213, (ZpwKP_1)Z214);
}
{
LONGINT B_13 = 1, B_14 = Zgd7EPBB_15;

if (B_13 <= B_14)
for (Z174 = B_13;; Z174 += 1) {
ZpmCQ_5(&Zgd7EPBB_13->A[Z174].Y1, Zgd7EPBB_4);
{
LONGINT B_15 = 0, B_16 = Zgd7EPBB_18;

if (B_15 <= B_16)
for (Z205 = B_15;; Z205 += 1) {
if (ZerF6mmCQ_21(Zgd7EPBB_16->A[Z205], Zgd7EPBB_13->A[Z174].Y0)) {
ZpmCQ_13(&Zgd7EPBB_13->A[Z174].Y1, ORD(Z205));
}
if (Z205 >= B_16) break;
}
}
if (Z174 >= B_14) break;
}
}
}

static BOOLEAN Z213
# ifdef HAVE_ARGS
(INTEGER Z174, INTEGER Z205)
# else
(Z174, Z205)
INTEGER Z174, Z205;
# endif
{
return Zgd7EPBB_10->A[Z174].Y0 <= Zgd7EPBB_10->A[Z205].Y0;
}

static void Z214
# ifdef HAVE_ARGS
(INTEGER Z174, INTEGER Z205)
# else
(Z174, Z205)
INTEGER Z174, Z205;
# endif
{
Zgd7EPBB_3 Z178;

Z178 = Zgd7EPBB_10->A[Z174];
Zgd7EPBB_10->A[Z174] = Zgd7EPBB_10->A[Z205];
Zgd7EPBB_10->A[Z205] = Z178;
}

void Zgd7EPBB_22
 ARGS ((void))
{
INTEGER Z174;

ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Classes", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
{
LONGINT B_17 = 0, B_18 = Zgd7EPBB_18;

if (B_17 <= B_18)
for (Z174 = B_17;; Z174 += 1) {
ZfM_25((ZDz6VQCC_4)ZfM_1, Z174, 2L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ' ');
ZerF6mmCQ_29((ZDz6VQCC_4)ZfM_1, Zgd7EPBB_16->A[Z174]);
ZfM_33((ZDz6VQCC_4)ZfM_1);
if (Z174 >= B_18) break;
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"ToChar", 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
{
LONGINT B_19 = Zgd7EPBB_18 + 1, B_20 = (INTEGER)Zgd7EPBB_4;

if (B_19 <= B_20)
for (Z174 = B_19;; Z174 += 1) {
ZfM_25((ZDz6VQCC_4)ZfM_1, Z174, 3L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ' ');
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zgd7EPBB_7.A[Z174], 3L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
if (Z174 >= B_20) break;
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"ToClass", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
for (Z174 = 0; Z174 <= 255; Z174 += 1) {
ZfM_25((ZDz6VQCC_4)ZfM_1, Z174, 3L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ' ');
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zgd7EPBB_23((ZrxAagD3_3)Z174), 3L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_22((ZDz6VQCC_4)ZfM_1);
}

void Zgd7EPBB_25
 ARGS ((void))
{
INTEGER Z174;

{
LONGINT B_21 = 1, B_22 = Zgd7EPBB_15;

if (B_21 <= B_22)
for (Z174 = B_21;; Z174 += 1) {
ZerF6mmCQ_7(&Zgd7EPBB_13->A[Z174].Y0);
ZpmCQ_7(&Zgd7EPBB_13->A[Z174].Y1);
if (Z174 >= B_22) break;
}
}
ZarQdhNDD_3((ADDRESS *)&Zgd7EPBB_13, &Zgd7EPBB_14, (LONGINT)sizeof (Zgd7EPBB_2));
}

void BEGIN_Classes ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_HugeSets ();
BEGIN_UniCode ();
BEGIN_Sets ();
BEGIN_General ();
BEGIN_DynArray ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_IO ();
BEGIN_HugeSets ();
BEGIN_Tree0 ();
BEGIN_Dfa ();
BEGIN_UniCode ();
BEGIN_Sort ();
BEGIN_ScanGen ();
BEGIN_Sets ();

}
