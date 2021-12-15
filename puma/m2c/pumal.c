#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_Optimize
#include "Optimize.h"
#endif

#ifndef DEFINITION_C
#include "C.h"
#endif

#ifndef DEFINITION_Tree3
#include "Tree3.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

static CHAR Z224 [] = ".h";
static CHAR Z225 [] = ".c";
static CHAR Z226 [] = ".h";
static CHAR Z227 [] = ".cxx";
static Zp1PEAFD_2 Z228, Z229, Z230, Z231;
static struct S_1 {
CHAR A[255 + 1];
} Z232, Z233;
static SHORTCARD Z234, Z235, Z236, Z237, Z238;
static CHAR Z239;
static Zq0A4_185 Z240, Z241, Z242, Z243, Z244, Z245;
static Zfb3DLQ_0 Z246, Z247;
static ZpmCQ_4 Z248, Z249;
static ZolB7FGBG_3 Z250;
static BOOLEAN Z251;
static ZfM_3 Z252 ARGS ((Zp1PEAFD_2 Z253));
static void Z254 ARGS ((Zp1PEAFD_2 Z253, ZfM_3 Z188));
static void Z255 ARGS ((void));
static INTEGER Z260;
static void Z261 ARGS ((Zq0A4_185 Z262));
static BOOLEAN Z270;
static void Z271 ARGS ((Zq0A4_185 Z262));
static void Z272 ARGS ((Zq0A4_185 Z262));
static void Z273 ARGS ((Zq0A4_185 Z262));
static void Z275 ARGS ((Zq0A4_185 Z262));
static void Z276 ARGS ((Zq0A4_185 Z262));
static void Z277 ARGS ((Zq0A4_185 Z262));
static void Z278 ARGS ((Zq0A4_185 Z262));
static void Z279 ARGS ((Zq0A4_185 Z262));
static void Z280 ARGS ((Zq0A4_185 Z262));


static ZfM_3 Z252
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z253)
# else
(Z253)
Zp1PEAFD_2 Z253;
# endif
{
Zp1PEAFD_2 Z231;

if (ZpmCQ_25(ORD('7'), &Zq0A4_216)) {
Zp1PEAFD_13((STRING)"xx", 2L, &Z231);
Zp1PEAFD_5(&Z231, &Z253);
Zp1PEAFD_6(&Z231, '\0');
Zp1PEAFD_14(&Z231, Z233.A, 256L);
} else {
Zp1PEAFD_6(&Z253, '\0');
Zp1PEAFD_14(&Z253, Z233.A, 256L);
}
return ZfM_20(Z233.A, 256L);
}

static void Z254
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z253, ZfM_3 Z188)
# else
(Z253, Z188)
Zp1PEAFD_2 Z253;
ZfM_3 Z188;
# endif
{
Zp1PEAFD_2 Z231;

ZfM_21(Z188);
if (ZpmCQ_25(ORD('7'), &Zq0A4_216)) {
Zp1PEAFD_3(&Z231, &Z228);
Zp1PEAFD_13((STRING)"gupd ", 5L, &Z230);
Zp1PEAFD_5(&Z231, &Z230);
Zp1PEAFD_5(&Z231, &Z253);
Zp1PEAFD_13((STRING)" xx", 3L, &Z230);
Zp1PEAFD_5(&Z231, &Z230);
Zp1PEAFD_5(&Z231, &Z253);
Zp1PEAFD_6(&Z231, '\0');
Zp1PEAFD_14(&Z231, Z233.A, 256L);
Z238 = rSystem(Z233.A, 256L);
}
}

static void Z255
 ARGS ((void))
{
ZfM_3 Z256;
Zp1PEAFD_2 Z257;
Zfb3DLQ_0 Z236;
INTEGER Z237;

if (ZpmCQ_25(ORD('+'), &Zq0A4_216)) {
Zp1PEAFD_13((STRING)"TypeTab.cxx", 11L, &Z230);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zp1PEAFD_13((STRING)"TypeTab.c", 9L, &Z230);
}
Zp1PEAFD_3(&Z231, &Z228);
Zp1PEAFD_5(&Z231, &Z230);
Zp1PEAFD_6(&Z231, '\0');
Zp1PEAFD_14(&Z231, Z233.A, 256L);
Z256 = ZfM_4(Z233.A, 256L);
Zp1PEAFD_13((STRING)"yy", 2L, &Z231);
Zfb3DLQ_3(Zq0A4_389->U_1.V_32.Y31.Y1, &Z230);
Zp1PEAFD_5(&Z231, &Z230);
Zp1PEAFD_13((STRING)".h", 2L, &Z230);
Zp1PEAFD_5(&Z231, &Z230);
Zq0A4_217 = Z252(Z231);
while (!ZfM_19(Z256)) {
Zp1PEAFD_20(Z256, &Z257);
Z236 = Zfb3DLQ_2(&Z257);
if (Z236 <= ZpmC89LG6_0 && ZpmCQ_25((LONGCARD)Z236, &ZpmC89LG6_1)) {
ZpmCQ_14(&ZpmC89LG6_1, (LONGCARD)Z236);
ZfM_29(Zq0A4_217, (STRING)"# ifndef begin", 14L);
Zq0A4_237(Z236);
ZfM_33(Zq0A4_217);
Zp1PEAFD_20(Z256, &Z257);
Zp1PEAFD_22(Zq0A4_217, &Z257);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
for (Z237 = 2; Z237 <= 7; Z237 += 1) {
ZfM_16(Z256);
}
ZfM_29(Zq0A4_217, (STRING)"# ifndef equal", 14L);
Zq0A4_237(Z236);
ZfM_33(Zq0A4_217);
Zp1PEAFD_20(Z256, &Z257);
Zp1PEAFD_22(Zq0A4_217, &Z257);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
} else {
for (Z237 = 1; Z237 <= 8; Z237 += 1) {
ZfM_16(Z256);
}
}
}
ZfM_5(Z256);
ZpmC89LG6_10(Zq0A4_389);
while (!ZpmCQ_26(ZpmC89LG6_1)) {
Z236 = ZpmCQ_20(&ZpmC89LG6_1);
ZpmCQ_13(&ZpmC89LG6_2, (LONGCARD)Z236);
ZfM_29(Zq0A4_217, (STRING)"# ifndef begin", 14L);
Zq0A4_237(Z236);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define begin", 14L);
Zq0A4_237(Z236);
ZfM_29(Zq0A4_217, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# ifndef equal", 14L);
Zq0A4_237(Z236);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define equal", 14L);
Zq0A4_237(Z236);
ZfM_29(Zq0A4_217, (STRING)"(a, b)	\\", 8L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  memcmp ((char *) & a, (char *) & b, sizeof (a)) == 0", 54L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
}
ZpmC89LG6_11();
if (ZpmCQ_25(ORD('+'), &Zq0A4_216)) {
Zg_4(Zq0A4_389);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zg_3(Zq0A4_389);
}
Z254(Z231, Zq0A4_217);
}

static void Z261
# ifdef HAVE_ARGS
(Zq0A4_185 Z262)
# else
(Z262)
Zq0A4_185 Z262;
# endif
{
INTEGER Z236;

switch (Z262->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_1 = &Z262->U_1.V_5.Y4;

{
LONGINT B_1 = 1, B_2 = Z260;

if (B_1 <= B_2)
for (Z236 = B_1;; Z236 += 1) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   ", 3L);
if (Z236 >= B_2) break;
}
}
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_1->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"	=", 2L);
Z261(W_1->Y3);
if (W_1->Y4->U_1.V_1.Y0 != Zq0A4_55) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" <", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
INC(Z260);
Z261(W_1->Y4);
DEC(Z260);
{
LONGINT B_3 = 1, B_4 = Z260;

if (B_3 <= B_4)
for (Z236 = B_3;; Z236 += 1) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   ", 3L);
if (Z236 >= B_4) break;
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)">", 1L);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" .", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z261(W_1->Y5);
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_2 = &Z262->U_1.V_10.Y9;

ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" ", 1L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_2->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)": ", 2L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_2->Y3);
Z261(W_2->Y1);
}
break;
case Zq0A4_62:;
{
register Zq0A4_266 *W_3 = &Z262->U_1.V_11.Y10;

if (((SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_3->Y5) == 0X0L) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" [", 2L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_3->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)": ", 2L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_3->Y3);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"]", 1L);
}
Z261(W_3->Y1);
}
break;
case Zq0A4_63:;
{
register Zq0A4_267 *W_4 = &Z262->U_1.V_12.Y11;

Z261(W_4->Y1);
}
break;
default:
break;
}
}

static void Z271
# ifdef HAVE_ARGS
(Zq0A4_185 Z262)
# else
(Z262)
Zq0A4_185 Z262;
# endif
{
switch (Z262->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_5 = &Z262->U_1.V_5.Y4;

Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_5->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" (", 2L);
Z270 = TRUE;
Zq0A4_230(Z262, (Zq0A4_215)Z271);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)")", 1L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_6 = &Z262->U_1.V_10.Y9;

if (Z270) {
Z270 = FALSE;
} else {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)", ", 2L);
}
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_6->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" := ", 4L);
if (W_6->Y2 != W_6->Y3) {
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_6->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)": ", 2L);
}
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_6->Y3);
}
break;
case Zq0A4_62:;
{
register Zq0A4_266 *W_7 = &Z262->U_1.V_11.Y10;

if (((SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_7->Y5) == 0X0L) {
if (Z270) {
Z270 = FALSE;
} else {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)", ", 2L);
}
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_7->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" := ", 4L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_7->Y2);
}
}
break;
default:
break;
}
}

static void Z272
# ifdef HAVE_ARGS
(Zq0A4_185 Z262)
# else
(Z262)
Zq0A4_185 Z262;
# endif
{
switch (Z262->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_8 = &Z262->U_1.V_5.Y4;

Z272(W_8->Y4);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_8->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" (", 2L);
Z270 = TRUE;
Zq0A4_230(Z262, (Zq0A4_215)Z271);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)") :-", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z240 = Zq0A4_53;
Zq0A4_230(Z262, (Zq0A4_215)Z272);
if (Z240 != Zq0A4_53) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z240->U_1.V_10.Y9.Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)");", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   .", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z272(W_8->Y5);
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_9 = &Z262->U_1.V_10.Y9;

if (IN(Zq0A4_3, W_9->Y5)) {
Z240 = Z262;
} else {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_9->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)");", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
}
break;
default:
break;
}
}

static void Z273
# ifdef HAVE_ARGS
(Zq0A4_185 Z262)
# else
(Z262)
Zq0A4_185 Z262;
# endif
{
Zq0A4_185 Z243, Z199;

switch (Z262->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_10 = &Z262->U_1.V_5.Y4;

if (ZpmCQ_25((LONGCARD)W_10->Y9, &Z249)) {
return;
}
ZpmCQ_13(&Z249, (LONGCARD)W_10->Y9);
Z275(W_10->Y4);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_10->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" (", 2L);
Z270 = TRUE;
Zq0A4_230(Z262, (Zq0A4_215)Z271);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)") :-", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z240 = Zq0A4_53;
Zq0A4_230(Z262, (Zq0A4_215)Z273);
if (Z240 != Zq0A4_53) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z240->U_1.V_10.Y9.Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)");", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   .", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_11 = &Z262->U_1.V_10.Y9;

if (IN(Zq0A4_3, W_11->Y5)) {
Z240 = Z262;
} else {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_11->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)");", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
Z243 = ZpmC89LG6_4(W_11->Y3, &Z199);
if (!ZpmCQ_25((LONGCARD)Z243->U_1.V_5.Y4.Y9, &Z249)) {
ZpmCQ_13(&Z248, (LONGCARD)Z243->U_1.V_5.Y4.Y9);
}
}
break;
default:
break;
}
}

static void Z275
# ifdef HAVE_ARGS
(Zq0A4_185 Z262)
# else
(Z262)
Zq0A4_185 Z262;
# endif
{
while (Z262->U_1.V_1.Y0 == Zq0A4_56) {
Z273(Z262);
Z262 = Z262->U_1.V_5.Y4.Y5;
}
}

static void Z276
# ifdef HAVE_ARGS
(Zq0A4_185 Z262)
# else
(Z262)
Zq0A4_185 Z262;
# endif
{
Zq0A4_185 Z243, Z199;

switch (Z262->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_12 = &Z262->U_1.V_5.Y4;

if (ZpmCQ_25((LONGCARD)W_12->Y9, &Z249)) {
return;
}
ZpmCQ_13(&Z249, (LONGCARD)W_12->Y9);
Z277(W_12->Y4);
if (W_12->Y9 == Z235) {
Z251 = TRUE;
} else {
Z251 = FALSE;
Zq0A4_230(W_12->Y3, (Zq0A4_215)Z278);
}
if (Z251) {
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_12->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" (", 2L);
Z270 = TRUE;
Zq0A4_230(Z262, (Zq0A4_215)Z271);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)") :-", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z240 = Zq0A4_53;
Zq0A4_230(Z262, (Zq0A4_215)Z276);
if (Z240 != Zq0A4_53) {
Z243 = ZpmC89LG6_4(Z240->U_1.V_10.Y9.Y3, &Z199);
if (ZolB7FGBG_9((LONGINT)Z243->U_1.V_5.Y4.Y9, (LONGINT)Z235, Z250)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z240->U_1.V_10.Y9.Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)");", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   .", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_13 = &Z262->U_1.V_10.Y9;

Z243 = ZpmC89LG6_4(W_13->Y3, &Z199);
if (ZolB7FGBG_9((LONGINT)Z243->U_1.V_5.Y4.Y9, (LONGINT)Z235, Z250)) {
if (IN(Zq0A4_3, W_13->Y5)) {
Z240 = Z262;
} else {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_13->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)");", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (!ZpmCQ_25((LONGCARD)Z243->U_1.V_5.Y4.Y9, &Z249)) {
ZpmCQ_13(&Z248, (LONGCARD)Z243->U_1.V_5.Y4.Y9);
}
}
}
break;
default:
break;
}
}

static void Z277
# ifdef HAVE_ARGS
(Zq0A4_185 Z262)
# else
(Z262)
Zq0A4_185 Z262;
# endif
{
while (Z262->U_1.V_1.Y0 == Zq0A4_56) {
Z276(Z262);
Z262 = Z262->U_1.V_5.Y4.Y5;
}
}

static void Z278
# ifdef HAVE_ARGS
(Zq0A4_185 Z262)
# else
(Z262)
Zq0A4_185 Z262;
# endif
{
Zq0A4_185 Z243, Z199;

if (Z262->U_1.V_1.Y0 == Zq0A4_61) {
Z243 = ZpmC89LG6_4(Z262->U_1.V_10.Y9.Y3, &Z199);
if (ZolB7FGBG_9((LONGINT)Z243->U_1.V_5.Y4.Y9, (LONGINT)Z235, Z250)) {
Z251 = TRUE;
}
}
}

static void Z279
# ifdef HAVE_ARGS
(Zq0A4_185 Z262)
# else
(Z262)
Zq0A4_185 Z262;
# endif
{
Zq0A4_185 Z243, Z199;

switch (Z262->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_14 = &Z262->U_1.V_5.Y4;

Z234 = W_14->Y9;
ZolB7FGBG_6(&Z250, (LONGINT)Z234, (LONGINT)W_14->Y9);
Zq0A4_229(W_14->Y4, (Zq0A4_215)Z280);
Zq0A4_230(Z262, (Zq0A4_215)Z279);
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_15 = &Z262->U_1.V_10.Y9;

Z243 = ZpmC89LG6_4(W_15->Y3, &Z199);
ZolB7FGBG_6(&Z250, (LONGINT)Z234, (LONGINT)Z243->U_1.V_5.Y4.Y9);
}
break;
default:
break;
}
}

static void Z280
# ifdef HAVE_ARGS
(Zq0A4_185 Z262)
# else
(Z262)
Zq0A4_185 Z262;
# endif
{
ZolB7FGBG_6(&Z250, (LONGINT)Z234, (LONGINT)Z262->U_1.V_5.Y4.Y9);
}

void BEGIN_MODULE ARGS ((void))
{
BEGIN_rSystem ();
BEGIN_rMemory ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Relation ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Scanner ();
BEGIN_Parser ();
BEGIN_Tree ();
BEGIN_Semantic ();
BEGIN_Optimize ();
BEGIN_C ();
BEGIN_Tree3 ();
BEGIN_Relation ();

Z260 = 0;
Zp1PEAFD_4(&Z228);
Zq0A4_220.A[0] = '\0';
Z238 = GetArgCount() - 1;
{
SHORTCARD B_5 = 1, B_6 = Z238;

if (B_5 <= B_6)
for (Z236 = B_5;; Z236 += 1) {
GetArgument((LONGINT)Z236, Z232.A, 256L);
if (Z232.A[0] == '-') {
if (Z232.A[1] == 'l') {
Zp1PEAFD_4(&Z228);
Z237 = 2;
for (;;) {
Z239 = Z232.A[Z237];
if (Z239 == '\0') {
goto EXIT_1;
}
Zp1PEAFD_6(&Z228, Z239);
INC(Z237);
} EXIT_1:;
Zp1PEAFD_6(&Z228, '/');
DEC(Z238);
} else if (Z232.A[1] == 'y' && Z236 < Z238) {
ZpmCQ_13(&Zq0A4_216, ORD('y'));
INC(Z236);
GetArgument((LONGINT)Z236, Z232.A, 256L);
Zp1PEAFD_13(Z232.A, 256L, &Z231);
Z246 = Zfb3DLQ_2(&Z231);
} else if (Z232.A[1] == 'z' && Z236 < Z238) {
ZpmCQ_13(&Zq0A4_216, ORD('z'));
INC(Z236);
GetArgument((LONGINT)Z236, Z232.A, 256L);
Zp1PEAFD_13(Z232.A, 256L, &Z231);
Z247 = Zfb3DLQ_2(&Z231);
} else {
Z237 = 0;
for (;;) {
INC(Z237);
Z239 = Z232.A[Z237];
if (Z239 == '\0') {
goto EXIT_2;
} else if (Z239 == '?') {
ZpmCQ_13(&Zq0A4_216, ORD('h'));
} else {
ZpmCQ_13(&Zq0A4_216, ORD(Z239));
}
} EXIT_2:;
}
} else if (Z232.A[0] == '?') {
ZpmCQ_13(&Zq0A4_216, ORD('h'));
} else {
Z237 = 0;
do {
Z239 = Z232.A[Z237];
Zq0A4_220.A[Z237] = Z239;
INC(Z237);
} while (!(Z239 == '\0'));
DEC(Z238);
}
if (Z236 >= B_6) break;
}
}
if (Z238 < 1) {
ZpmCQ_13(&Zq0A4_216, ORD('a'));
}
if (ZpmCQ_25(ORD('a'), &Zq0A4_216)) {
ZpmCQ_13(&Zq0A4_216, ORD('d'));
ZpmCQ_13(&Zq0A4_216, ORD('i'));
}
ZpmCQ_13(&Zq0A4_216, ORD('c'));
if (ZpmCQ_25(ORD('h'), &Zq0A4_216)) {
ZpmCQ_14(&Zq0A4_216, ORD('h'));
Zq0A4_217 = ZfM_1;
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"usage: puma-light [-options] [-y <type>] [-z <type>] [-l<directory>] [<file>]", 77L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" a generate all, same as -di (default)", 38L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" d generate header file", 23L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" i generate implementation part", 31L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" s suppress warnings", 20L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" m use procedure MakeTREE to construct nodes (default: inline code)", 67L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" p allow node constructors without parentheses", 46L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" f signal a runtime error if none of the rules of a procedure matches", 69L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" k allow non-linear patterns", 28L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" n check parameters for NoTREE (NULL, NIL) and treat as failure", 63L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" w surround actions by WITH statements", 38L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" e treat undefined names as error", 33L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" v treat undefined names as warning", 35L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" o list undefined names on standard output", 42L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" t print tree definitions", 25L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" r print patterns", 17L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" x generate and print a traversal procedure for all node types (Traverse)", 73L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" y <type> generate and print a traversal procedure for all node types", 69L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"      that are reachable from the node type <type>", 50L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" z <type> restrict traversal procedure to reach node types of class <type>, only", 80L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" q browse internal data structure", 33L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" : generate lines not longer than 80 characters", 47L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" 6 generate # line directives", 29L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" 7 touch output files only if necessary", 39L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" 8 report storage consumption", 29L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" c generate C   code (default)", 30L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" + generate C++ code", 20L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" h print help information", 25L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" -l<dir> specify the directory dir where puma finds its tables", 62L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
}
if (ZpmCQ_26(Zq0A4_216)) {
ZfM_34();
exit (1);
}
ZblNKKO_43(TRUE);
if (Zq0A4_220.A[0] != '\0') {
Zpky9FDA_25(Zq0A4_220.A, 256L);
}
INC1(Zq0A4_0, ZmfDOBA_54());
Z245 = Zq0A4_389->U_1.V_32.Y31.Y2;
if (Z245->U_1.V_1.Y0 == Zq0A4_86) {
Z245->U_1.V_35.Y34.Y4 = Zq0A4_439();
Z245->U_1.V_35.Y34.Y5 = Zq0A4M_0();
if (ZpmCQ_25(ORD('t'), &Zq0A4_216)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Tree Definition: ", 17L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z245->U_1.V_35.Y34.Y1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"----------------", 16L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z261(Z245->U_1.V_35.Y34.Y5);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (ZpmCQ_25(ORD('r'), &Zq0A4_216)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Patterns: ", 10L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z245->U_1.V_35.Y34.Y1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"---------", 9L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Zq0A4_229(Z245->U_1.V_35.Y34.Y5, (Zq0A4_215)Z271);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (ZpmCQ_25(ORD('x'), &Zq0A4_216)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"PROCEDURE Traverse (", 20L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z245->U_1.V_35.Y34.Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)")", 1L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z272(Z245->U_1.V_35.Y34.Y5);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
}
ZpmC89LG6_9(Zq0A4_389);
if (ZpmCQ_25(ORD('b'), &Zq0A4_216)) {
ZltNGGGMI_4(Zq0A4_389);
} else {
ZltNGGGMI_3(Zq0A4_389);
}
if (ZpmCQ_25(ORD('y'), &Zq0A4_216)) {
Z241 = ZpmC89LG6_4(Z246, &Z244);
if (Z241 == Zq0A4_53) {
Zpky9FDA_14((STRING)"node type not declared", 22L, ZmtLFGGBG_1, Z246);
} else if (!ZpmCQ_25(ORD('z'), &Zq0A4_216)) {
ZpmCQ_5(&Z248, (LONGCARD)Z244->U_1.V_35.Y34.Y6);
ZpmCQ_5(&Z249, (LONGCARD)Z244->U_1.V_35.Y34.Y6);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"PROCEDURE Traverse (", 20L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z244->U_1.V_35.Y34.Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)")", 1L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZpmCQ_13(&Z248, (LONGCARD)Z241->U_1.V_5.Y4.Y9);
while (!ZpmCQ_26(Z248)) {
Z234 = ZpmCQ_20(&Z248);
Z243 = ZpmC89LG6_5(Z244->U_1.V_35.Y34.Y5, (LONGCARD)Z234);
Z273(Z243);
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZpmCQ_7(&Z248);
ZpmCQ_7(&Z249);
} else {
Z242 = ZpmC89LG6_3(Z244->U_1.V_35.Y34.Y5, Z247);
if (Z242 == Zq0A4_53) {
Zpky9FDA_14((STRING)"node type not declared", 22L, ZmtLFGGBG_1, Z247);
} else {
Z235 = Z242->U_1.V_5.Y4.Y9;
ZolB7FGBG_4(&Z250, Z244->U_1.V_35.Y34.Y6, Z244->U_1.V_35.Y34.Y6);
Zq0A4_229(Z244->U_1.V_35.Y34.Y5, (Zq0A4_215)Z279);
ZolB7FGBG_20(&Z250);
ZpmCQ_5(&Z248, (LONGCARD)Z244->U_1.V_35.Y34.Y6);
ZpmCQ_5(&Z249, (LONGCARD)Z244->U_1.V_35.Y34.Y6);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"PROCEDURE Traverse (", 20L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z244->U_1.V_35.Y34.Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)")", 1L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZpmCQ_13(&Z248, (LONGCARD)Z241->U_1.V_5.Y4.Y9);
while (!ZpmCQ_26(Z248)) {
Z234 = ZpmCQ_20(&Z248);
Z243 = ZpmC89LG6_5(Z244->U_1.V_35.Y34.Y5, (LONGCARD)Z234);
Z276(Z243);
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZpmCQ_7(&Z248);
ZpmCQ_7(&Z249);
ZolB7FGBG_5(&Z250);
}
}
}
ZblNKKO_48((ZDz6VQCC_4)ZfM_2);
if (ZpmCQ_25(ORD('q'), &Zq0A4_216)) {
Zq0A4_543(Zq0A4_389);
}
if (Zq0A4_0 > 0) {
ZfM_34();
rExit(1L);
}
Z255();
if (ZpmCQ_25(ORD('d'), &Zq0A4_216)) {
Zfb3DLQ_3(Zq0A4_389->U_1.V_32.Y31.Y1, &Z231);
if (ZpmCQ_25(ORD('+'), &Zq0A4_216)) {
Zp1PEAFD_13(Z226, 2L, &Z230);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zp1PEAFD_13(Z224, 2L, &Z230);
}
Zp1PEAFD_5(&Z231, &Z230);
Zq0A4_217 = Z252(Z231);
Zg_5(Zq0A4_389);
Z254(Z231, Zq0A4_217);
}
if (ZpmCQ_25(ORD('i'), &Zq0A4_216)) {
Zfb3DLQ_3(Zq0A4_389->U_1.V_32.Y31.Y1, &Z231);
if (ZpmCQ_25(ORD('+'), &Zq0A4_216)) {
Zp1PEAFD_13(Z227, 4L, &Z230);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zp1PEAFD_13(Z225, 2L, &Z230);
}
Zp1PEAFD_5(&Z231, &Z230);
Zp1PEAFD_3(&Z229, &Z231);
Zq0A4_217 = Z252(Z231);
Zg_6(Zq0A4_389);
Z254(Z231, Zq0A4_217);
if (!ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zp1PEAFD_3(&Z231, &Z228);
Zp1PEAFD_13((STRING)"gcpp ", 5L, &Z230);
Zp1PEAFD_5(&Z231, &Z230);
Zp1PEAFD_5(&Z231, &Z229);
Zp1PEAFD_6(&Z231, '\0');
Zp1PEAFD_14(&Z231, Z233.A, 256L);
Z238 = rSystem(Z233.A, 256L);
Zp1PEAFD_3(&Z231, &Z228);
Zp1PEAFD_13((STRING)"grm yy", 6L, &Z230);
Zp1PEAFD_5(&Z231, &Z230);
Zfb3DLQ_3(Zq0A4_389->U_1.V_32.Y31.Y1, &Z230);
Zp1PEAFD_5(&Z231, &Z230);
Zp1PEAFD_13((STRING)".h", 2L, &Z230);
Zp1PEAFD_5(&Z231, &Z230);
Zp1PEAFD_6(&Z231, '\0');
Zp1PEAFD_14(&Z231, Z233.A, 256L);
Z238 = rSystem(Z233.A, 256L);
}
}
if (ZpmCQ_25(ORD('8'), &Zq0A4_216)) {
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Memory", 6L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZDtgCFKU_0, 8L);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"  Heap", 6L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Zq0A4_390, 8L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
ZfM_34();
rExit(0L);
}
