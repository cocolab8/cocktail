#include "SYSTEM_.h"

#ifndef DEFINITION_Checks
#include "Checks.h"
#endif

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_HugeSets
#include "HugeSets.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Layout
#include "Layout.h"
#endif

#ifndef DEFINITION_Dfa
#include "Dfa.h"
#endif

#ifndef DEFINITION_GenTabs
#include "GenTabs.h"
#endif

#ifndef DEFINITION_Classes
#include "Classes.h"
#endif

#ifndef DEFINITION_ScanGen
#include "ScanGen.h"
#endif

#ifndef DEFINITION_Pack
#include "Pack.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_UniCode
#include "UniCode.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_ScanTabs
#include "ScanTabs.h"
#endif

Zpky9wjxF_15 *Zpky9wjxF_23;
LONGINT Zpky9wjxF_24;
Zpky9wjxF_16 *Zpky9wjxF_25;
LONGINT Zpky9wjxF_26;
Zpky9wjxF_17 *Zpky9wjxF_27;
LONGINT Zpky9wjxF_28;
Zpky9wjxF_18 *Zpky9wjxF_29;
LONGINT Zpky9wjxF_30;
Zpky9wjxF_19 *Zpky9wjxF_31;
LONGINT Zpky9wjxF_32;
Zpky9wjxF_20 *Zpky9wjxF_33;
LONGINT Zpky9wjxF_34;
Zpky9wjxF_21 *Zpky9wjxF_35;
LONGINT Zpky9wjxF_36;
Zpky9wjxF_22 *Zpky9wjxF_37;
LONGINT Zpky9wjxF_38;
Zpky9wjxF_13 Zpky9wjxF_39;
Zpky9wjxF_12 Zpky9wjxF_40;
Zpky9wjxF_12 Zpky9wjxF_41;

#define Z214	8000
static ZDz6VQCC_4 Z215;
static Zpky9wjxF_8 Z216;
static void Z252 ARGS ((ZDz6VQCC_4 Z219));
static void Z253 ARGS ((ZDz6VQCC_4 Z219));
static void Z233 ARGS ((ZDz6VQCC_4 Z219));
static void Z235 ARGS ((ZDz6VQCC_4 Z219));
static void Z237 ARGS ((ZDz6VQCC_4 Z219));
static void Z239 ARGS ((ZDz6VQCC_4 Z219));
struct S_7 {
CHAR A[127 + 1];
};
typedef struct S_1 {
Zgd7EPBB_1 Y0, Y1;
} Z270;
typedef Zgd7EPBB_1 Z273;
typedef struct S_2 *Z274;
typedef struct S_2 {
struct S_6 {
Z273 A[100000 - 1 + 1];
} *Y0;
LONGINT Y1;
Zpky9wjxF_12 Y2;
Z274 Y3;
} Z275;
struct S_3 {
Z270 A[100000 + 1];
};
struct S_4 {
Z273 A[100000 + 1];
};
struct S_5 {
Z274 A[100000 + 1];
};
static void Z304 ARGS ((Zaf1_6 Z262));

void Zpky9wjxF_47
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
Zpky9wjxF_12 Z220;
Zmfy8_0 Z222;
CARDINAL Z223;

switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zmfy8_4(&Z222, Z219);
{
LONGCARD B_1 = 0, B_2 = Zpky9wjxF_40;

if (B_1 <= B_2)
for (Z220 = B_1;; Z220 += 1) {
Zmfy8_6(Z222, (LONGCARD)Zpky9wjxF_31->A[Z220].Y0);
Zmfy8_6(Z222, (LONGCARD)Zpky9wjxF_31->A[Z220].Y1);
if (Z220 >= B_2) break;
}
}
Zmfy8_8(&Z222);
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
Z223 = 0;
{
LONGCARD B_3 = 0, B_4 = Zpky9wjxF_40;

if (B_3 <= B_4)
for (Z220 = B_3;; Z220 += 1) {
ZfM_24(Z219, '{');
ZfM_25(Z219, (LONGINT)Zpky9wjxF_31->A[Z220].Y0, 4L);
ZfM_29(Z219, (STRING)", ", 2L);
ZfM_25(Z219, (LONGINT)Zpky9wjxF_31->A[Z220].Y1, 4L);
ZfM_29(Z219, (STRING)"}, ", 3L);
INC(Z223);
if (Z223 == 5) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_4) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_59:;
Z223 = 0;
{
LONGCARD B_5 = 0, B_6 = Zpky9wjxF_40;

if (B_5 <= B_6)
for (Z220 = B_5;; Z220 += 1) {
ZfM_24(Z219, '(');
ZfM_25(Z219, (LONGINT)Zpky9wjxF_31->A[Z220].Y0, 4L);
ZfM_29(Z219, (STRING)", ", 2L);
ZfM_25(Z219, (LONGINT)Zpky9wjxF_31->A[Z220].Y1, 4L);
ZfM_24(Z219, ')');
if (Z220 != Zpky9wjxF_40) {
ZfM_29(Z219, (STRING)", ", 2L);
}
INC(Z223);
if (Z223 == 5) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_6) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_60:;
if (Zpky9jaD_47) {
ZfM_29(Z219, (STRING)"    private static final int yyCombCheck [] = {", 47L);
Zpky9jaD_53(Z219);
Z223 = 0;
{
LONGCARD B_7 = 0, B_8 = Zpky9wjxF_40;

if (B_7 <= B_8)
for (Z220 = B_7;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_31->A[Z220].Y0, 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_8) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"    };", 6L);
Zpky9jaD_53(Z219);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"    private static final int yyCombNext [] = {", 46L);
Zpky9jaD_53(Z219);
Z223 = 0;
{
LONGCARD B_9 = 0, B_10 = Zpky9wjxF_40;

if (B_9 <= B_10)
for (Z220 = B_9;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_31->A[Z220].Y1, 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_10) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"    };", 6L);
Zpky9jaD_53(Z219);
} else if (Zpky9wjxF_40 >= Z214) {
ZfM_29(Z219, (STRING)"    private static int yyCombCheck [] = new int [", 49L);
ZfM_25(Z219, (LONGINT)(Zpky9wjxF_40 + 1), 0L);
ZfM_29(Z219, (STRING)"];", 2L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"    private static int yyCombNext  [] = new int [", 49L);
ZfM_25(Z219, (LONGINT)(Zpky9wjxF_40 + 1), 0L);
ZfM_29(Z219, (STRING)"];", 2L);
Zpky9jaD_53(Z219);
} else {
ZfM_29(Z219, (STRING)"    private static int yyCombCheck [] = ", 40L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_CombCheck1.yy;", 15L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"    private static int yyCombNext  [] = ", 40L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_CombNext1.yy;", 14L);
Zpky9jaD_53(Z219);
}
break;
}
}

void Zpky9wjxF_48
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
CARDINAL Z220;
Zmfy8_0 Z222;
CARDINAL Z223;

switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zmfy8_4(&Z222, Z219);
{
LONGCARD B_11 = 1, B_12 = Zaf1_8;

if (B_11 <= B_12)
for (Z220 = B_11;; Z220 += 1) {
Zmfy8_6(Z222, Zpky9wjxF_27->A[Z220]);
if (Z220 >= B_12) break;
}
}
Zmfy8_8(&Z222);
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
Z223 = 0;
{
LONGCARD B_13 = 1, B_14 = Zaf1_8;

if (B_13 <= B_14)
for (Z220 = B_13;; Z220 += 1) {
ZfM_29(Z219, (STRING)"& yyComb [", 10L);
ZfM_25(Z219, (LONGINT)Zpky9wjxF_27->A[Z220], 4L);
ZfM_29(Z219, (STRING)"], ", 3L);
INC(Z223);
if (Z223 == 4) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_14) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_59:;
Z223 = 0;
{
LONGCARD B_15 = 1, B_16 = Zaf1_8;

if (B_15 <= B_16)
for (Z220 = B_15;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_27->A[Z220], 5L);
if (Z220 != Zaf1_8) {
ZfM_29(Z219, (STRING)", ", 2L);
}
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_16) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_60:;
if (Zpky9jaD_47) {
ZfM_29(Z219, (STRING)"    private static final int yyBasePtr [] = { 0,", 48L);
Zpky9jaD_53(Z219);
Z223 = 0;
{
LONGCARD B_17 = 1, B_18 = Zaf1_8;

if (B_17 <= B_18)
for (Z220 = B_17;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_27->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_18) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"    };", 6L);
Zpky9jaD_53(Z219);
} else if (Zaf1_8 >= Z214) {
ZfM_29(Z219, (STRING)"    private static int yyBasePtr [] = new int [", 47L);
ZfM_25(Z219, (LONGINT)(Zaf1_8 + 1), 0L);
ZfM_29(Z219, (STRING)"];", 2L);
Zpky9jaD_53(Z219);
} else {
ZfM_29(Z219, (STRING)"    private static int yyBasePtr [] = ", 38L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_BasePtr1.yy;", 13L);
Zpky9jaD_53(Z219);
}
break;
}
}

void Zpky9wjxF_49
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
CARDINAL Z220;
Zmfy8_0 Z222;
CARDINAL Z223;

switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zmfy8_4(&Z222, Z219);
{
LONGCARD B_19 = 1, B_20 = Zaf1_8;

if (B_19 <= B_20)
for (Z220 = B_19;; Z220 += 1) {
Zmfy8_6(Z222, (LONGCARD)Zpky9wjxF_29->A[Z220]);
if (Z220 >= B_20) break;
}
}
Zmfy8_8(&Z222);
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
Z223 = 0;
{
LONGCARD B_21 = 1, B_22 = Zaf1_8;

if (B_21 <= B_22)
for (Z220 = B_21;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_29->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_22) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_59:;
Z223 = 0;
{
LONGCARD B_23 = 1, B_24 = Zaf1_8;

if (B_23 <= B_24)
for (Z220 = B_23;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_29->A[Z220], 5L);
if (Z220 != Zaf1_8) {
ZfM_29(Z219, (STRING)", ", 2L);
}
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_24) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_60:;
if (Zpky9jaD_47) {
ZfM_29(Z219, (STRING)"    private static final int yyDefault [] = { 0,", 48L);
Zpky9jaD_53(Z219);
Z223 = 0;
{
LONGCARD B_25 = 1, B_26 = Zaf1_8;

if (B_25 <= B_26)
for (Z220 = B_25;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_29->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_26) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"    };", 6L);
Zpky9jaD_53(Z219);
} else if (Zaf1_8 >= Z214) {
ZfM_29(Z219, (STRING)"    private static int yyDefault [] = new int [", 47L);
ZfM_25(Z219, (LONGINT)(Zaf1_8 + 1), 0L);
ZfM_29(Z219, (STRING)"];", 2L);
Zpky9jaD_53(Z219);
} else {
ZfM_29(Z219, (STRING)"    private static int yyDefault [] = ", 38L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_Default1.yy;", 13L);
Zpky9jaD_53(Z219);
}
break;
}
}

void Zpky9wjxF_50
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
CARDINAL Z220;
Zmfy8_0 Z222;
CARDINAL Z223;

switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zmfy8_4(&Z222, Z219);
{
LONGCARD B_27 = 1, B_28 = Zaf1_8;

if (B_27 <= B_28)
for (Z220 = B_27;; Z220 += 1) {
Zmfy8_6(Z222, (LONGCARD)Zpky9wjxF_33->A[Z220]);
if (Z220 >= B_28) break;
}
}
Zmfy8_8(&Z222);
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
Z223 = 0;
{
LONGCARD B_29 = 1, B_30 = Zaf1_8;

if (B_29 <= B_30)
for (Z220 = B_29;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_33->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_30) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_59:;
Z223 = 0;
{
LONGCARD B_31 = 1, B_32 = Zaf1_8;

if (B_31 <= B_32)
for (Z220 = B_31;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_33->A[Z220], 5L);
if (Z220 != Zaf1_8) {
ZfM_29(Z219, (STRING)", ", 2L);
}
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_32) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_60:;
if (Zpky9jaD_47) {
ZfM_29(Z219, (STRING)"    private static final int yyEobTrans [] = { 0,", 49L);
Zpky9jaD_53(Z219);
Z223 = 0;
{
LONGCARD B_33 = 1, B_34 = Zaf1_8;

if (B_33 <= B_34)
for (Z220 = B_33;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_33->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_34) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"    };", 6L);
Zpky9jaD_53(Z219);
} else if (Zaf1_8 >= Z214) {
ZfM_29(Z219, (STRING)"    private static int yyEobTrans [] = new int [", 48L);
ZfM_25(Z219, (LONGINT)(Zaf1_8 + 1), 0L);
ZfM_29(Z219, (STRING)"];", 2L);
Zpky9jaD_53(Z219);
} else {
ZfM_29(Z219, (STRING)"    private static int yyEobTrans [] = ", 39L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_EobTrans1.yy;", 14L);
Zpky9jaD_53(Z219);
}
break;
}
}

void Zpky9wjxF_51
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
CARDINAL Z220;
Zmfy8_0 Z222;
CARDINAL Z223;

switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zmfy8_4(&Z222, Z219);
{
LONGCARD B_35 = 1, B_36 = Zaf1_8;

if (B_35 <= B_36)
for (Z220 = B_35;; Z220 += 1) {
Zmfy8_6(Z222, (LONGCARD)Zpky9wjxF_37->A[Z220]);
if (Z220 >= B_36) break;
}
}
Zmfy8_8(&Z222);
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
Z223 = 0;
{
LONGCARD B_37 = 1, B_38 = Zaf1_8;

if (B_37 <= B_38)
for (Z220 = B_37;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_37->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_38) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_59:;
Z223 = 0;
{
LONGCARD B_39 = 1, B_40 = Zaf1_8;

if (B_39 <= B_40)
for (Z220 = B_39;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_37->A[Z220], 5L);
if (Z220 != Zaf1_8) {
ZfM_29(Z219, (STRING)", ", 2L);
}
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_40) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_60:;
if (Zpky9jaD_47) {
ZfM_29(Z219, (STRING)"    private static final int yyAction [] = { 0,", 47L);
Zpky9jaD_53(Z219);
Z223 = 0;
{
LONGCARD B_41 = 1, B_42 = Zaf1_8;

if (B_41 <= B_42)
for (Z220 = B_41;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_37->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_42) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"    };", 6L);
Zpky9jaD_53(Z219);
} else if (Zaf1_8 >= Z214) {
ZfM_29(Z219, (STRING)"    private static int yyAction [] = new int [", 46L);
ZfM_25(Z219, (LONGINT)(Zaf1_8 + 1), 0L);
ZfM_29(Z219, (STRING)"];", 2L);
Zpky9jaD_53(Z219);
} else {
ZfM_29(Z219, (STRING)"    private static int yyAction [] = ", 37L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_Action1.yy;", 12L);
Zpky9jaD_53(Z219);
}
break;
}
}

void Zpky9wjxF_52
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
CARDINAL Z220;
Zmfy8_0 Z222;
CARDINAL Z223;

switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
case Zpky9jaD_60:;
Z223 = 0;
{
LONGCARD B_43 = 0, B_44 = (CARDINAL)Zgd7EPBB_12;

if (B_43 <= B_44)
for (Z220 = B_43;; Z220 += 1) {
if (Zgd7EPBB_10->A[Z220].Y0 < (LONGCARD)2147483648) {
ZfM_32(Z219, Zgd7EPBB_10->A[Z220].Y0, 5L);
} else {
ZfM_29(Z219, (STRING)"0X", 2L);
ZfM_28(Z219, Zgd7EPBB_10->A[Z220].Y0, 8L, 16L);
}
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_44) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_59:;
break;
}
}

void Zpky9wjxF_53
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
INTEGER Z220;
Zmfy8_0 Z222;
CARDINAL Z223;

switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
case Zpky9jaD_60:;
Z223 = 0;
{
LONGINT B_45 = 0, B_46 = Zgd7EPBB_12;

if (B_45 <= B_46)
for (Z220 = B_45;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zgd7EPBB_10->A[Z220].Y1, 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_46) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_59:;
break;
}
}

void Zpky9wjxF_54
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
CARDINAL Z220;
Zmfy8_0 Z222;
CARDINAL Z223;

switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
case Zpky9jaD_60:;
Z223 = 0;
{
LONGCARD B_47 = 0, B_48 = ZdaDDAD7_5(Zaf1_7, (LONGCARD)(Zgd7EPBB_9 - 1));

if (B_47 <= B_48)
for (Z220 = B_47;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zgd7EPBB_23(Z220), 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
if (Z220 >= B_48) break;
}
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
break;
case Zpky9jaD_59:;
break;
}
}

void Zpky9wjxF_55
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219, BOOLEAN Z247)
# else
(Z219, Z247)
ZDz6VQCC_4 Z219;
BOOLEAN Z247;
# endif
{
Zpky9wjxF_12 Z220, Z248;
CARDINAL Z249;
CARDINAL Z223;

if (Zpky9jaD_47) {
return;
}
Z249 = 1;
Z220 = 0;
while (Z220 <= Zpky9wjxF_40) {
ZfM_29(Z219, (STRING)"class ", 6L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_CombCheck", 10L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)" {", 2L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"  static final int yy [] = {", 28L);
Zpky9jaD_53(Z219);
Z223 = 0;
Z248 = 1;
while (Z248 <= Z214 && Z220 <= Zpky9wjxF_40) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_31->A[Z220].Y0, 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
INC(Z220);
INC(Z248);
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"  };", 4L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"};", 2L);
Zpky9jaD_53(Z219);
Zpky9jaD_53(Z219);
INC(Z249);
}
Z249 = 1;
Z220 = 0;
while (Z220 <= Zpky9wjxF_40) {
ZfM_29(Z219, (STRING)"class ", 6L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_CombNext", 9L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)" {", 2L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"  static final int yy [] = {", 28L);
Zpky9jaD_53(Z219);
Z223 = 0;
Z248 = 1;
while (Z248 <= Z214 && Z220 <= Zpky9wjxF_40) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_31->A[Z220].Y1, 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
INC(Z220);
INC(Z248);
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"  };", 4L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"};", 2L);
Zpky9jaD_53(Z219);
Zpky9jaD_53(Z219);
INC(Z249);
}
Z249 = 1;
Z220 = 0;
while (Z220 <= Zaf1_8) {
ZfM_29(Z219, (STRING)"class ", 6L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_BasePtr", 8L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)" {", 2L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"  static final int [] yy = {", 28L);
if (Z220 == 0) {
ZfM_29(Z219, (STRING)" 0,", 3L);
INC(Z220);
}
Zpky9jaD_53(Z219);
Z223 = 0;
Z248 = 1;
while (Z248 <= Z214 && Z220 <= Zaf1_8) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_27->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
INC(Z220);
INC(Z248);
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"  };", 4L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"};", 2L);
Zpky9jaD_53(Z219);
Zpky9jaD_53(Z219);
INC(Z249);
}
Z249 = 1;
Z220 = 0;
while (Z220 <= Zaf1_8) {
ZfM_29(Z219, (STRING)"class ", 6L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_Default", 8L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)" {", 2L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"  static final int [] yy = {", 28L);
if (Z220 == 0) {
ZfM_29(Z219, (STRING)" 0,", 3L);
INC(Z220);
}
Zpky9jaD_53(Z219);
Z223 = 0;
Z248 = 1;
while (Z248 <= Z214 && Z220 <= Zaf1_8) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_29->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
INC(Z220);
INC(Z248);
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"  };", 4L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"};", 2L);
Zpky9jaD_53(Z219);
Zpky9jaD_53(Z219);
INC(Z249);
}
Z249 = 1;
Z220 = 0;
while (Z220 <= Zaf1_8) {
ZfM_29(Z219, (STRING)"class ", 6L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_EobTrans", 9L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)" {", 2L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"  static final int [] yy = {", 28L);
if (Z220 == 0) {
ZfM_29(Z219, (STRING)" 0,", 3L);
INC(Z220);
}
Zpky9jaD_53(Z219);
Z223 = 0;
Z248 = 1;
while (Z248 <= Z214 && Z220 <= Zaf1_8) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_33->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
INC(Z220);
INC(Z248);
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"  };", 4L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"};", 2L);
Zpky9jaD_53(Z219);
Zpky9jaD_53(Z219);
INC(Z249);
}
if (Z247) {
Z249 = 1;
Z220 = 0;
while (Z220 <= Zaf1_8) {
ZfM_29(Z219, (STRING)"class ", 6L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_Action", 7L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)" {", 2L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"  static final int [] yy = {", 28L);
if (Z220 == 0) {
ZfM_29(Z219, (STRING)" 0,", 3L);
INC(Z220);
}
Zpky9jaD_53(Z219);
Z223 = 0;
Z248 = 1;
while (Z248 <= Z214 && Z220 <= Zaf1_8) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_37->A[Z220], 5L);
ZfM_29(Z219, (STRING)", ", 2L);
INC(Z223);
if (Z223 == 10) {
Z223 = 0;
Zpky9jaD_53(Z219);
}
INC(Z220);
INC(Z248);
}
if (Z223 > 0) {
Zpky9jaD_53(Z219);
}
ZfM_29(Z219, (STRING)"  };", 4L);
Zpky9jaD_53(Z219);
ZfM_29(Z219, (STRING)"};", 2L);
Zpky9jaD_53(Z219);
Zpky9jaD_53(Z219);
INC(Z249);
}
}
}

void Zpky9wjxF_56
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219, BOOLEAN Z247)
# else
(Z219, Z247)
ZDz6VQCC_4 Z219;
BOOLEAN Z247;
# endif
{
Zpky9wjxF_12 Z220;
CARDINAL Z249;

if (Zpky9jaD_47) {
return;
}
if (Zpky9wjxF_40 >= Z214) {
Z249 = 1;
Z220 = 0;
while (Z220 <= Zpky9wjxF_40) {
ZfM_29(Z219, (STRING)"        System.arraycopy (", 26L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_CombCheck", 10L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)".yy, 0, yyCombCheck, ", 21L);
ZfM_25(Z219, (LONGINT)Z220, 0L);
ZfM_29(Z219, (STRING)", ", 2L);
ZfM_25(Z219, ZdaDDAD7_3((LONGINT)(Zpky9wjxF_40 + 1 - Z220), (LONGINT)Z214), 0L);
ZfM_29(Z219, (STRING)");", 2L);
Zpky9jaD_53(Z219);
INC1(Z220, Z214);
INC(Z249);
}
Z249 = 1;
Z220 = 0;
while (Z220 <= Zpky9wjxF_40) {
ZfM_29(Z219, (STRING)"        System.arraycopy (", 26L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_CombNext", 9L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)".yy, 0, yyCombNext, ", 20L);
ZfM_25(Z219, (LONGINT)Z220, 0L);
ZfM_29(Z219, (STRING)", ", 2L);
ZfM_25(Z219, ZdaDDAD7_3((LONGINT)(Zpky9wjxF_40 + 1 - Z220), (LONGINT)Z214), 0L);
ZfM_29(Z219, (STRING)");", 2L);
Zpky9jaD_53(Z219);
INC1(Z220, Z214);
INC(Z249);
}
}
if (Zaf1_8 >= Z214) {
Z249 = 1;
Z220 = 0;
while (Z220 <= Zaf1_8) {
ZfM_29(Z219, (STRING)"        System.arraycopy (", 26L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_BasePtr", 8L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)".yy, 0, yyBasePtr, ", 19L);
ZfM_25(Z219, (LONGINT)Z220, 0L);
ZfM_29(Z219, (STRING)", ", 2L);
ZfM_25(Z219, ZdaDDAD7_3((LONGINT)(Zaf1_8 + 1 - Z220), (LONGINT)Z214), 0L);
ZfM_29(Z219, (STRING)");", 2L);
Zpky9jaD_53(Z219);
INC1(Z220, Z214);
INC(Z249);
}
Z249 = 1;
Z220 = 0;
while (Z220 <= Zaf1_8) {
ZfM_29(Z219, (STRING)"        System.arraycopy (", 26L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_Default", 8L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)".yy, 0, yyDefault, ", 19L);
ZfM_25(Z219, (LONGINT)Z220, 0L);
ZfM_29(Z219, (STRING)", ", 2L);
ZfM_25(Z219, ZdaDDAD7_3((LONGINT)(Zaf1_8 + 1 - Z220), (LONGINT)Z214), 0L);
ZfM_29(Z219, (STRING)");", 2L);
Zpky9jaD_53(Z219);
INC1(Z220, Z214);
INC(Z249);
}
Z249 = 1;
Z220 = 0;
while (Z220 <= Zaf1_8) {
ZfM_29(Z219, (STRING)"        System.arraycopy (", 26L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_EobTrans", 9L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)".yy, 0, yyEobTrans, ", 20L);
ZfM_25(Z219, (LONGINT)Z220, 0L);
ZfM_29(Z219, (STRING)", ", 2L);
ZfM_25(Z219, ZdaDDAD7_3((LONGINT)(Zaf1_8 + 1 - Z220), (LONGINT)Z214), 0L);
ZfM_29(Z219, (STRING)");", 2L);
Zpky9jaD_53(Z219);
INC1(Z220, Z214);
INC(Z249);
}
if (Z247) {
Z249 = 1;
Z220 = 0;
while (Z220 <= Zaf1_8) {
ZfM_29(Z219, (STRING)"        System.arraycopy (", 26L);
Zfb3DLQ_7(Z219, Zpky9jaD_48);
ZfM_29(Z219, (STRING)"_Action", 7L);
ZfM_25(Z219, (LONGINT)Z249, 0L);
ZfM_29(Z219, (STRING)".yy, 0, yyAction, ", 18L);
ZfM_25(Z219, (LONGINT)Z220, 0L);
ZfM_29(Z219, (STRING)", ", 2L);
ZfM_25(Z219, ZdaDDAD7_3((LONGINT)(Zaf1_8 + 1 - Z220), (LONGINT)Z214), 0L);
ZfM_29(Z219, (STRING)");", 2L);
Zpky9jaD_53(Z219);
INC1(Z220, Z214);
INC(Z249);
}
}
}
}

static void Z252
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
Zpky9wjxF_12 Z220;

ZfM_25(Z219, (LONGINT)(Zpky9wjxF_40 + 1), 0L);
ZfM_29(Z219, (STRING)" = Check", 8L);
Zpky9jaD_53(Z219);
{
LONGCARD B_49 = 0, B_50 = Zpky9wjxF_40;

if (B_49 <= B_50)
for (Z220 = B_49;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_31->A[Z220].Y0, 0L);
Zpky9jaD_53(Z219);
if (Z220 >= B_50) break;
}
}
}

static void Z253
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
Zpky9wjxF_12 Z220;

ZfM_25(Z219, (LONGINT)(Zpky9wjxF_40 + 1), 0L);
ZfM_29(Z219, (STRING)" = Next", 7L);
Zpky9jaD_53(Z219);
{
LONGCARD B_51 = 0, B_52 = Zpky9wjxF_40;

if (B_51 <= B_52)
for (Z220 = B_51;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_31->A[Z220].Y1, 0L);
Zpky9jaD_53(Z219);
if (Z220 >= B_52) break;
}
}
}

static void Z233
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
CARDINAL Z220;

ZfM_25(Z219, (LONGINT)(Zaf1_8 + 1), 0L);
ZfM_29(Z219, (STRING)" = Base", 7L);
Zpky9jaD_53(Z219);
{
LONGCARD B_53 = 0, B_54 = Zaf1_8;

if (B_53 <= B_54)
for (Z220 = B_53;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_27->A[Z220], 0L);
Zpky9jaD_53(Z219);
if (Z220 >= B_54) break;
}
}
}

static void Z235
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
CARDINAL Z220;

ZfM_25(Z219, (LONGINT)(Zaf1_8 + 1), 0L);
ZfM_29(Z219, (STRING)" = Default", 10L);
Zpky9jaD_53(Z219);
{
LONGCARD B_55 = 0, B_56 = Zaf1_8;

if (B_55 <= B_56)
for (Z220 = B_55;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_29->A[Z220], 0L);
Zpky9jaD_53(Z219);
if (Z220 >= B_56) break;
}
}
}

static void Z237
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
CARDINAL Z220;

ZfM_25(Z219, (LONGINT)(Zaf1_8 + 1), 0L);
ZfM_29(Z219, (STRING)" = EobTrans", 11L);
Zpky9jaD_53(Z219);
{
LONGCARD B_57 = 0, B_58 = Zaf1_8;

if (B_57 <= B_58)
for (Z220 = B_57;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_33->A[Z220], 0L);
Zpky9jaD_53(Z219);
if (Z220 >= B_58) break;
}
}
}

static void Z239
# ifdef HAVE_ARGS
(ZDz6VQCC_4 Z219)
# else
(Z219)
ZDz6VQCC_4 Z219;
# endif
{
CARDINAL Z220;

ZfM_25(Z219, (LONGINT)(Zaf1_8 + 1), 0L);
ZfM_29(Z219, (STRING)" = Action", 9L);
Zpky9jaD_53(Z219);
{
LONGCARD B_59 = 0, B_60 = Zaf1_8;

if (B_59 <= B_60)
for (Z220 = B_59;; Z220 += 1) {
ZfM_25(Z219, (LONGINT)Zpky9wjxF_37->A[Z220], 0L);
Zpky9jaD_53(Z219);
if (Z220 >= B_60) break;
}
}
}

void Zpky9wjxF_44
# ifdef HAVE_ARGS
(BOOLEAN Z247)
# else
(Z247)
BOOLEAN Z247;
# endif
{
Zp1PEAFD_2 Z254, Z255;
struct S_7 Z256;

if (Zpky9jaD_37 == Zfb3DLQ_1) {
Zp1PEAFD_13((STRING)"scanner", 7L, &Z255);
} else {
Zfb3DLQ_3(Zpky9jaD_37, &Z255);
}
Zp1PEAFD_13((STRING)".txt", 4L, &Z254);
Zp1PEAFD_5(&Z255, &Z254);
Zp1PEAFD_6(&Z255, '\0');
Zp1PEAFD_14(&Z255, Z256.A, 128L);
Z215 = ZfM_20(Z256.A, 128L);
if (Z215 < 0) {
ZblNKKO_45((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z256));
}
Z233(Z215);
Z235(Z215);
Z237(Z215);
if (Z247) {
Z239(Z215);
}
Z252(Z215);
Z253(Z215);
ZfM_21(Z215);
}

void Zpky9wjxF_42
# ifdef HAVE_ARGS
(BOOLEAN Z247)
# else
(Z247)
BOOLEAN Z247;
# endif
{
Zaf1_6 Z262;
CARDINAL Z263;
SHORTCARD Z264;

Zpky9wjxF_30 = Zaf1_8 + 1;
ZarQdhNDD_0((ADDRESS *)&Zpky9wjxF_29, &Zpky9wjxF_30, (LONGINT)sizeof (Zpky9wjxF_9));
ZarQdhNDD_0((ADDRESS *)&Zpky9wjxF_33, &Zpky9wjxF_30, (LONGINT)sizeof (Zpky9wjxF_9));
Zpky9wjxF_29->A[Zaf1_0] = Zaf1_0;
Zpky9wjxF_33->A[Zaf1_0] = Zaf1_0;
{
SHORTCARD B_61 = 1, B_62 = Zaf1_8;

if (B_61 <= B_62)
for (Z262 = B_61;; Z262 += 1) {
Zpky9wjxF_29->A[Z262] = Zaf1_17(Z262);
Zpky9wjxF_33->A[Z262] = Zaf1_28(Z262);
if (Z262 >= B_62) break;
}
}
if (Z247) {
ZarQdhNDD_0((ADDRESS *)&Zpky9wjxF_37, &Zpky9wjxF_30, (LONGINT)sizeof (Zpky9wjxF_8));
Zpky9wjxF_37->A[Zaf1_0] = Zaf1_0;
{
SHORTCARD B_63 = 1, B_64 = Zaf1_8;

if (B_63 <= B_64)
for (Z262 = B_63;; Z262 += 1) {
Zpky9wjxF_37->A[Z262] = ZdaDwjxF_11 + 1;
if (Z262 >= B_64) break;
}
}
{
SHORTCARD B_65 = 1, B_66 = ZdaDwjxF_11;

if (B_65 <= B_66)
for (Z264 = B_65;; Z264 += 1) {
{
LONGCARD B_67 = ZpmCQ_17(&ZdaDwjxF_17->A[Z264].Y5), B_68 = ZpmCQ_18(&ZdaDwjxF_17->A[Z264].Y5);

if (B_67 <= B_68)
for (Z263 = B_67;; Z263 += 1) {
if (ZpmCQ_25(Z263, &ZdaDwjxF_17->A[Z264].Y5)) {
Zpky9wjxF_37->A[Z263] = Z264;
}
if (Z263 >= B_68) break;
}
}
if (Z264 >= B_66) break;
}
}
}
}

void Zpky9wjxF_43
# ifdef HAVE_ARGS
(SHORTINT Z269)
# else
(Z269)
SHORTINT Z269;
# endif
{
Zpky9wjxF_12 Z280;
LONGINT Z281;
Zaf1_6 Z262;
BOOLEAN Z282;
ZrxAagD3_3 Z283, Z284;
Zgd7EPBB_1 Z285, Z286;
LONGINT Z287;
INTEGER Z220, Z248;
CARDINAL Z288;
struct S_3 *Z289;
LONGINT Z290;
INTEGER Z291;
struct S_4 *Z292;
LONGINT Z293;
struct S_5 *Z294;
LONGINT Z295;
Z274 Z296;
ZerF6mmCQ_4 Z297;
LONGINT Z298;

Zpky9wjxF_28 = Zaf1_8 + 1;
ZarQdhNDD_0((ADDRESS *)&Zpky9wjxF_27, &Zpky9wjxF_28, (LONGINT)sizeof (Zpky9wjxF_12));
{
SHORTCARD B_69 = 0, B_70 = Zaf1_8;

if (B_69 <= B_70)
for (Z262 = B_69;; Z262 += 1) {
Zpky9wjxF_27->A[Z262] = 0;
if (Z262 >= B_70) break;
}
}
if (Zpky9jaD_45) {
Z298 = Zgd7EPBB_4;
} else {
Z298 = Zaf1_7;
}
if (Z269 == 0) {
Zpky9wjxF_32 = ZdaDwjxF_12 * 60;
} else if (Z269 >= 10000) {
Zpky9wjxF_32 = Zaf1_8 * 5;
} else {
Zpky9wjxF_32 = ZdaDwjxF_12 * 12;
}
Zpky9wjxF_32 = ZdaDDAD7_4(Zpky9wjxF_32, Z298 + 1);
ZarQdhNDD_0((ADDRESS *)&Zpky9wjxF_31, &Zpky9wjxF_32, (LONGINT)sizeof (Zpky9wjxF_14));
{
LONGINT B_71 = 0, B_72 = Zpky9wjxF_32 - 1;

if (B_71 <= B_72)
for (Z220 = B_71;; Z220 += 1) {
Zpky9wjxF_31->A[Z220].Y0 = Zaf1_0;
Zpky9wjxF_31->A[Z220].Y1 = Zaf1_0;
if (Z220 >= B_72) break;
}
}
Z290 = 128;
ZarQdhNDD_0((ADDRESS *)&Z289, &Z290, (LONGINT)sizeof (Z270));
Z293 = Z290 * 2;
ZarQdhNDD_0((ADDRESS *)&Z292, &Z293, (LONGINT)sizeof (Z273));
Z295 = Zaf1_8;
ZarQdhNDD_0((ADDRESS *)&Z294, &Z295, (LONGINT)sizeof (Z274));
{
LONGINT B_73 = 0, B_74 = Z295 - 1;

if (B_73 <= B_74)
for (Z220 = B_73;; Z220 += 1) {
Z294->A[Z220] = NIL;
if (Z220 >= B_74) break;
}
}
ZerF6mmCQ_6(&Z297);
Zpky9wjxF_40 = 0;
Zpky9wjxF_41 = 0;
{
SHORTCARD B_75 = 1, B_76 = Zaf1_8;

if (B_75 <= B_76)
for (Z262 = B_75;; Z262 += 1) {
ZerF6mmCQ_28(&Z297);
Z283 = Zaf1_26(Z262);
Z284 = Zaf1_27(Z262);
if (Z283 <= Z284) {
for (;;) {
if (Zaf1_25(Z262, Z283) != Zaf1_0) {
if (Zpky9jaD_45) {
ZerF6mmCQ_12(&Z297, Z283);
} else {
if ((INTEGER)Z283 <= Zgd7EPBB_18) {
ZerF6mmCQ_8(&Z297, Zgd7EPBB_16->A[Z283]);
} else {
ZerF6mmCQ_12(&Z297, Zgd7EPBB_24(Z283));
}
}
}
if (Z283 == Z284) {
goto EXIT_1;
}
INC(Z283);
} EXIT_1:;
}
Z291 = 0;
if (!ZerF6mmCQ_25(Z297)) {
Z283 = ZerF6mmCQ_17(&Z297);
Z283 = ZdaDDAD7_5(Z283, Zaf1_7);
Z284 = ZerF6mmCQ_18(&Z297);
Z284 = ZdaDDAD7_5(Z284, Zaf1_7);
if (Z283 <= Z284) {
for (;;) {
for (;;) {
if (Z283 == Z284) {
goto EXIT_3;
}
if (!ZerF6mmCQ_24(Z283, &Z297)) {
INC(Z283);
} else {
goto EXIT_3;
}
} EXIT_3:;
if (ZerF6mmCQ_24(Z283, &Z297)) {
INC(Z291);
if (Z291 >= Z290) {
ZarQdhNDD_2((ADDRESS *)&Z289, &Z290, (LONGINT)sizeof (Z270));
ZarQdhNDD_2((ADDRESS *)&Z292, &Z293, (LONGINT)sizeof (Z273));
}
Z289->A[Z291].Y0 = Z283;
for (;;) {
if (Z283 == Z284) {
goto EXIT_4;
}
if (ZerF6mmCQ_24(Z283, &Z297)) {
INC(Z283);
} else {
goto EXIT_4;
}
} EXIT_4:;
if (ZerF6mmCQ_24(Z283, &Z297)) {
Z289->A[Z291].Y1 = Z283;
} else {
Z289->A[Z291].Y1 = Z283 - 1;
}
}
if (Z283 == Z284) {
goto EXIT_2;
}
} EXIT_2:;
}
}
Z280 = 0;
if (Z291 > 0) {
Z292->A[2] = Z289->A[1].Y1 - Z289->A[1].Y0;
Z288 = Z292->A[2];
{
LONGINT B_77 = 2, B_78 = Z291;

if (B_77 <= B_78)
for (Z248 = B_77;; Z248 += 1) {
Z292->A[Z248 + Z248 - 1] = Z289->A[Z248].Y0 - Z289->A[Z248 - 1].Y1;
Z292->A[Z248 + Z248] = Z289->A[Z248].Y1 - Z289->A[Z248].Y0;
INC1(Z288, (Z292->A[Z248 + Z248 - 1] + Z292->A[Z248 + Z248]) * (Z273)Z248);
if (Z248 >= B_78) break;
}
}
Z288 = Z288 % Zaf1_8;
Z282 = FALSE;
Z296 = Z294->A[Z288];
for (;;) {
if (Z296 == NIL) {
goto EXIT_5;
}
if (Z296->Y1 == Z291 * 2) {
Z282 = TRUE;
Z248 = 1;
for (;;) {
INC(Z248);
if (Z296->Y0->A[Z248 - 1] != Z292->A[Z248]) {
Z282 = FALSE;
goto EXIT_6;
}
if (Z248 == Z296->Y1) {
goto EXIT_6;
}
} EXIT_6:;
if (Z282) {
goto EXIT_5;
}
}
Z296 = Z296->Y3;
} EXIT_5:;
if (Z282) {
if (Zpky9jaD_45) {
if (Z296->Y2 + Z296->Y0->A[2 - 1] < Z289->A[1].Y0) {
Z280 = 0;
} else {
Z280 = Z296->Y2 - Z289->A[1].Y0 + Z296->Y0->A[2 - 1] + 1;
}
} else {
if (Z296->Y2 + Z296->Y0->A[2 - 1] < ORD(Zq0A4_29.A[CHR(Z289->A[1].Y0)])) {
Z280 = 0;
} else {
Z280 = Z296->Y2 - ORD(Zq0A4_29.A[CHR(Z289->A[1].Y0)]) + Z296->Y0->A[2 - 1] + 1;
}
}
} else {
Z296 = (Z274)ZDtgCFKU_1((LONGINT)sizeof (Z275));
{
register Z275 *W_1 = Z296;

W_1->Y2 = 0;
W_1->Y3 = Z294->A[Z288];
W_1->Y1 = Z291 * 2;
ZarQdhNDD_0((ADDRESS *)&W_1->Y0, &W_1->Y1, (LONGINT)sizeof (Z273));
{
LONGINT B_79 = 1, B_80 = W_1->Y1;

if (B_79 <= B_80)
for (Z248 = B_79;; Z248 += 1) {
W_1->Y0->A[Z248 - 1] = Z292->A[Z248];
if (Z248 >= B_80) break;
}
}
}
Z294->A[Z288] = Z296;
}
for (;;) {
Z281 = Z280;
if (Z281 >= Zpky9wjxF_32 - Z298) {
Z287 = Zpky9wjxF_32;
ZarQdhNDD_2((ADDRESS *)&Zpky9wjxF_31, &Zpky9wjxF_32, (LONGINT)sizeof (Zpky9wjxF_14));
{
LONGINT B_81 = Z287, B_82 = Zpky9wjxF_32 - 1;

if (B_81 <= B_82)
for (Z220 = B_81;; Z220 += 1) {
Zpky9wjxF_31->A[Z220].Y0 = Zaf1_0;
Zpky9wjxF_31->A[Z220].Y1 = Zaf1_0;
if (Z220 >= B_82) break;
}
}
}
Z282 = TRUE;
Z248 = 0;
for (;;) {
INC(Z248);
Z285 = Z289->A[Z248].Y0;
Z286 = Z289->A[Z248].Y1;
Z283 = Z285;
for (;;) {
if (Zpky9jaD_45) {
if (Zpky9wjxF_31->A[Z280 + Z283].Y0 != Zaf1_0) {
do {
INC(Z280);
} while (!(Zpky9wjxF_31->A[Z280 + Z283].Y0 == Zaf1_0));
Z282 = FALSE;
goto EXIT_9;
}
} else {
if (Zpky9wjxF_31->A[Z280 + ORD(Zq0A4_29.A[CHR(Z283)])].Y0 != Zaf1_0) {
do {
INC(Z280);
} while (!(Zpky9wjxF_31->A[Z280 + ORD(Zq0A4_29.A[CHR(Z283)])].Y0 == Zaf1_0));
Z282 = FALSE;
goto EXIT_9;
}
}
if (Z283 == Z286) {
goto EXIT_9;
}
INC(Z283);
} EXIT_9:;
if (!Z282 || Z248 == Z291) {
goto EXIT_8;
}
} EXIT_8:;
if (Z282) {
goto EXIT_7;
}
} EXIT_7:;
Z248 = 0;
for (;;) {
INC(Z248);
Z283 = Z289->A[Z248].Y0;
Z286 = Z289->A[Z248].Y1;
for (;;) {
if (Zpky9jaD_45) {
{
register Zpky9wjxF_14 *W_2 = &Zpky9wjxF_31->A[Z280 + Z283];

W_2->Y0 = Z262;
W_2->Y1 = Zaf1_25(Z262, Z283);
}
} else {
{
register Zpky9wjxF_14 *W_3 = &Zpky9wjxF_31->A[Z280 + ORD(Zq0A4_29.A[CHR(Z283)])];

W_3->Y0 = Z262;
W_3->Y1 = Zaf1_25(Z262, Zgd7EPBB_23(Z283));
}
}
INC(Zpky9wjxF_41);
if (Z283 == Z286) {
goto EXIT_11;
}
INC(Z283);
} EXIT_11:;
if (Z248 == Z291) {
goto EXIT_10;
}
} EXIT_10:;
if (Zpky9jaD_45) {
Z296->Y2 = Z280 + Z289->A[1].Y0;
} else {
Z296->Y2 = Z280 + ORD(Zq0A4_29.A[CHR(Z289->A[1].Y0)]);
}
}
Zpky9wjxF_27->A[Z262] = Z280;
Zpky9wjxF_40 = ZdaDDAD7_4((LONGINT)Zpky9wjxF_40, (LONGINT)Z280);
if (Z262 >= B_76) break;
}
}
INC1(Zpky9wjxF_40, Z298);
ZarQdhNDD_3((ADDRESS *)&Z289, &Z290, (LONGINT)sizeof (Z270));
ZarQdhNDD_3((ADDRESS *)&Z292, &Z293, (LONGINT)sizeof (Z273));
ZarQdhNDD_3((ADDRESS *)&Z294, &Z295, (LONGINT)sizeof (Z274));
}

void Zpky9wjxF_45
 ARGS ((void))
{
Zaf1_6 Z262;

ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Tables :", 8L);
Zpky9jaD_53((ZDz6VQCC_4)ZfM_1);
Zpky9jaD_53((ZDz6VQCC_4)ZfM_1);
{
SHORTCARD B_83 = 1, B_84 = Zaf1_8;

if (B_83 <= B_84)
for (Z262 = B_83;; Z262 += 1) {
Z304(Z262);
Zpky9jaD_53((ZDz6VQCC_4)ZfM_1);
if (Z262 >= B_84) break;
}
}
}

void Zpky9wjxF_46
 ARGS ((void))
{
Zaf1_6 Z262;

for (;;) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"State ? ", 8L);
if (ZfM_18((ZDz6VQCC_4)ZfM_0)) {
ZfM_16((ZDz6VQCC_4)ZfM_0);
}
Z262 = ZfM_8((ZDz6VQCC_4)ZfM_0);
if (Z262 == 0) {
goto EXIT_12;
}
Z304(Z262);
} EXIT_12:;
}

static void Z304
# ifdef HAVE_ARGS
(Zaf1_6 Z262)
# else
(Z262)
Zaf1_6 Z262;
# endif
{
Zpky9wjxF_8 Z306;
Zgd7EPBB_1 Z283, Z298;
Zpky9wjxF_14 Z307;
INTEGER Z308;

Z308 = 0;
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"State, Default =", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z262, 5L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zpky9wjxF_29->A[Z262], 5L);
Zpky9jaD_53((ZDz6VQCC_4)ZfM_1);
if (Zpky9jaD_45) {
Z298 = Zgd7EPBB_4;
} else {
Z298 = Zaf1_7;
}
{
Zgd7EPBB_1 B_85 = Zaf1_1, B_86 = Z298;

if (B_85 <= B_86)
for (Z283 = B_85;; Z283 += 1) {
Z306 = Z262;
for (;;) {
Z307 = Zpky9wjxF_31->A[Zpky9wjxF_27->A[Z306] + Z283];
if (Z307.Y0 == Z306) {
Z306 = Z307.Y1;
goto EXIT_13;
}
Z306 = Zpky9wjxF_29->A[Z306];
Z306 = Zaf1_0;
if (Z306 == Zaf1_0) {
goto EXIT_13;
}
} EXIT_13:;
if (Z306 != Zaf1_0) {
if (Z308 == 10) {
Zpky9jaD_53((ZDz6VQCC_4)ZfM_1);
Z308 = 0;
}
INC(Z308);
ZrxAagD3_4((ZDz6VQCC_4)ZfM_1, Z283);
ZibDRNS_1((ZDz6VQCC_4)ZfM_1);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z306, 1L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ',');
ZibDRNS_1((ZDz6VQCC_4)ZfM_1);
}
if (Z283 >= B_86) break;
}
}
Zpky9jaD_53((ZDz6VQCC_4)ZfM_1);
}

void BEGIN_ScanTabs ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Checks ();
BEGIN_General ();
BEGIN_rMemory ();
BEGIN_DynArray ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_HugeSets ();
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_Layout ();
BEGIN_Dfa ();
BEGIN_GenTabs ();
BEGIN_Classes ();
BEGIN_ScanGen ();
BEGIN_Pack ();
BEGIN_Tree ();
BEGIN_UniCode ();
BEGIN_Errors ();
BEGIN_Position ();
BEGIN_Sets ();

Z216 = sizeof (Zpky9wjxF_8);
}
