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

#ifndef DEFINITION_Mod
#include "Mod.h"
#endif

#ifndef DEFINITION_C
#include "C.h"
#endif

#ifndef DEFINITION_Cxx
#include "Cxx.h"
#endif

#ifndef DEFINITION_Java
#include "Java.h"
#endif

#ifndef DEFINITION_Tree2
#include "Tree2.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#define Z255	208
static CHAR Z256 [] = ".md";
static CHAR Z257 [] = ".mi";
static CHAR Z258 [] = ".h";
static CHAR Z259 [] = ".c";
static CHAR Z260 [] = ".cxx";
static CHAR Z261 [] = ".java";
static Zp1PEAFD_2 Z262, Z263, Z264, Z265, Z266;
static struct S_1 {
CHAR A[255 + 1];
} Z267, Z268;
static SHORTCARD Z269, Z270, Z271, Z272, Z273, Z274, Z275;
static CHAR Z276;
static Zq0A4_185 Z277, Z278, Z279, Z280, Z281;
static Zfb3DLQ_0 Z282, Z283;
static ZpmCQ_4 Z284, Z285;
static ZolB7FGBG_3 Z286;
static BOOLEAN Z287;
static ZDz6VQCC_5 Z288;
static struct S_2 {
Zp1PEAFD_2 A[16 + 1];
} Z289;
static SHORTCARD Z290;
static struct S_3 {
Zp1PEAFD_2 A[16 + 1];
} Z291;
static SHORTCARD Z292;
static ZfM_3 Z293 ARGS ((Zp1PEAFD_2 Z294));
static void Z295 ARGS ((Zp1PEAFD_2 Z294, ZfM_3 Z203));
static INTEGER Z296 ARGS ((CHAR Z276));
static void Z297 ARGS ((INTEGER Z275));
static BOOLEAN Z298 ARGS ((CHAR Z299[], LONGCARD O_1, CARDINAL Z300));
struct S_5 {
CHAR A[128 + 1];
};
struct S_6 {
CHAR A[10 + 1];
};
struct S_7 {
BITSET A[32 + 1];
};
struct S_8 {
CHAR A[32 + 1];
};
static void Z309 ARGS ((void));
static INTEGER Z312;
static void Z313 ARGS ((Zq0A4_185 Z308));
static BOOLEAN Z323;
static void Z324 ARGS ((Zq0A4_185 Z308));
static void Z325 ARGS ((Zq0A4_185 Z308));
static void Z326 ARGS ((Zq0A4_185 Z308));
static void Z328 ARGS ((Zq0A4_185 Z308));
static void Z329 ARGS ((Zq0A4_185 Z308));
static void Z330 ARGS ((Zq0A4_185 Z308));
static void Z331 ARGS ((Zq0A4_185 Z308));
static void Z332 ARGS ((Zq0A4_185 Z308));
static void Z333 ARGS ((Zq0A4_185 Z308));
static ZfM_3 Z334 ARGS ((Zfb3DLQ_0 Z316));
static void Z336 ARGS ((Zq0A4_185 Z337));
static void Z344 ARGS ((Zq0A4_185 Z308));


static ZfM_3 Z293
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z294)
# else
(Z294)
Zp1PEAFD_2 Z294;
# endif
{
Zp1PEAFD_2 Z266;
INTEGER Z275;

if (ZpmCQ_25(ORD('7'), &Zq0A4_216)) {
Zp1PEAFD_13((STRING)"xx", 2L, &Z266);
Zp1PEAFD_5(&Z266, &Z294);
Zp1PEAFD_6(&Z266, '\0');
Zp1PEAFD_14(&Z266, Z268.A, 256L);
} else {
Zp1PEAFD_6(&Z294, '\0');
Zp1PEAFD_14(&Z294, Z268.A, 256L);
}
Z275 = ZfM_20(Z268.A, 256L);
if (Z275 < 0) {
INC(Zq0A4_0);
ZblNKKO_47((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z268));
}
return Z275;
}

static void Z295
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z294, ZfM_3 Z203)
# else
(Z294, Z203)
Zp1PEAFD_2 Z294;
ZfM_3 Z203;
# endif
{
Zp1PEAFD_2 Z266;

ZfM_21(Z203);
if (ZpmCQ_25(ORD('7'), &Zq0A4_216)) {
Zp1PEAFD_13((STRING)"gupd ", 5L, &Z266);
Zp1PEAFD_5(&Z266, &Z294);
Zp1PEAFD_13((STRING)" xx", 3L, &Z264);
Zp1PEAFD_5(&Z266, &Z264);
Zp1PEAFD_5(&Z266, &Z294);
Zp1PEAFD_6(&Z266, '\0');
Zp1PEAFD_14(&Z266, Z268.A, 256L);
Z275 = rSystem(Z268.A, 256L);
}
}

static INTEGER Z296
# ifdef HAVE_ARGS
(CHAR Z276)
# else
(Z276)
CHAR Z276;
# endif
{
switch (Z276) {
case '0':;
case '1':;
case '2':;
case '3':;
case '4':;
case '5':;
case '6':;
case '7':;
case '8':;
case '9':;
return ORD(Z276) - ORD('0');
break;
case 'A':;
case 'B':;
case 'C':;
case 'D':;
case 'E':;
case 'F':;
return ORD(Z276) - ORD('A') + 10;
break;
case 'a':;
case 'b':;
case 'c':;
case 'd':;
case 'e':;
case 'f':;
return ORD(Z276) - ORD('a') + 10;
break;
}
return 0;
}

static void Z297
# ifdef HAVE_ARGS
(INTEGER Z275)
# else
(Z275)
INTEGER Z275;
# endif
{
switch (Z275) {
case 1:;
ZblNKKO_46((STRING)"cannot open license file: ctlicens.dat", 38L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
case 2:;
ZblNKKO_46((STRING)"sorry, the license is expired", 29L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
case 3:;
ZblNKKO_46((STRING)"sorry, the problem is too big for demo version", 46L, (LONGCARD)ZblNKKO_15, ZmtLFGGBG_1);
break;
case 4:;
ZblNKKO_46((STRING)"license file ctlicens.dat seems corrupted", 41L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
}
}

static BOOLEAN Z298
# ifdef HAVE_ARGS
(CHAR Z299[], LONGCARD O_1, CARDINAL Z300)
# else
(Z299, O_1, Z300)
CHAR Z299[];
LONGCARD O_1;
CARDINAL Z300;
# endif
{
Zp1PEAFD_2 Z266, Z264;
struct S_5 Z268;
ZfM_3 Z301;
struct S_6 Z302;
ZDz6VQCC_5 Z303;
struct S_7 Z304;
struct S_8 Z305;
CHAR Z276;
CARDINAL Z272, Z306;
BITSET Z307, Z308;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z299, O_1, CHAR)
if (rtpqy()) {
FREE_OPEN_ARRAYS
return TRUE;
}
Zp1PEAFD_3(&Z266, &Z262);
Zp1PEAFD_6(&Z266, '.');
Zp1PEAFD_6(&Z266, '.');
Zp1PEAFD_6(&Z266, DirectorySeparator());
Zp1PEAFD_13((STRING)"ctlicens.dat", 12L, &Z264);
Zp1PEAFD_5(&Z266, &Z264);
Zp1PEAFD_6(&Z266, '\0');
Zp1PEAFD_14(&Z266, Z268.A, 129L);
Z301 = ZfM_4(Z268.A, 129L);
if (Z301 < 0) {
Z297(1L);
FREE_OPEN_ARRAYS
return FALSE;
}
for (;;) {
if (ZfM_19(Z301)) {
Z297(4L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z272 = 0;
Z276 = ZfM_7(Z301);
while (Z276 != '\n' && Z276 != '\r') {
Z304.A[Z272] = (BITSET)(Z296(Z276) * 16 + Z296(ZfM_7(Z301)));
INC(Z272);
Z276 = ZfM_7(Z301);
}
if (Z276 == '\r') {
Z276 = ZfM_7(Z301);
}
if (Z276 != '\n') {
Z297(4L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z306 = Z272 - 1;
Z307 = (BITSET)ORD('j');
{
LONGCARD B_1 = 0, B_2 = Z306;

if (B_1 <= B_2)
for (Z272 = B_1;; Z272 += 1) {
Z308 = Z304.A[Z272] ^ Z307;
Z307 = Z307 ^ Z308;
Z305.A[Z272] = CHR((CARDINAL)Z308);
if (Z272 >= B_2) break;
}
}
if (Z305.A[0] == Z299[0] && Z305.A[1] == Z299[1] && Z305.A[2] == Z299[2]) {
goto EXIT_1;
}
} EXIT_1:;
ZfM_5(Z301);
Zp1PEAFD_4(&Z264);
for (Z272 = 5; Z272 <= 12; Z272 += 1) {
Zp1PEAFD_6(&Z264, Z305.A[Z272]);
}
(void) strncpy ((char *)Z302.A, "%Y%m%d", sizeof (Z302.A));
Z303 = rtpqx(Z302.A, 11L);
Z272 = 0;
for (;;) {
Z302.A[Z272] = Z303->A[Z272];
if (Z302.A[Z272] == '\0' || Z272 == 10) {
goto EXIT_2;
}
INC(Z272);
} EXIT_2:;
Zp1PEAFD_13(Z302.A, 11L, &Z266);
if (!Zp1PEAFD_9(&Z266, &Z264)) {
Z297(2L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z306 = 0;
for (Z272 = 14; Z272 <= 19; Z272 += 1) {
if (Z305.A[Z272] != ' ') {
Z306 = Z306 * 10 + ORD(Z305.A[Z272]) - ORD('0');
}
}
if (Z300 > Z306) {
Z297(3L);
FREE_OPEN_ARRAYS
return FALSE;
}
FREE_OPEN_ARRAYS
return TRUE;
}

static void Z309
 ARGS ((void))
{
ZfM_3 Z310;
Zp1PEAFD_2 Z307;
Zfb3DLQ_0 Z272;
INTEGER Z273;

if (ZpmCQ_25(ORD('*'), &Zq0A4_216)) {
Zp1PEAFD_13((STRING)"TypeTab.cxx", 11L, &Z264);
} else if (ZpmCQ_25(ORD('+'), &Zq0A4_216)) {
Zp1PEAFD_13((STRING)"TypeTab.cx", 10L, &Z264);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zp1PEAFD_13((STRING)"TypeTab.c", 9L, &Z264);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_216)) {
Zp1PEAFD_13((STRING)"TypeTab.j", 9L, &Z264);
} else {
Zp1PEAFD_13((STRING)"TypeTab.m", 9L, &Z264);
}
Zp1PEAFD_3(&Z266, &Z262);
Zp1PEAFD_5(&Z266, &Z264);
Zp1PEAFD_6(&Z266, '\0');
Zp1PEAFD_14(&Z266, Z268.A, 256L);
Z310 = ZfM_4(Z268.A, 256L);
if (Z310 < 0) {
ZblNKKO_47((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z268));
INC(Zq0A4_0);
return;
}
Zp1PEAFD_13((STRING)"yy", 2L, &Z266);
Zq0A4_242(Zq0A4_389->U_1.V_32.Y31.Y1, &Z264);
Zp1PEAFD_5(&Z266, &Z264);
Zp1PEAFD_13((STRING)".h", 2L, &Z264);
Zp1PEAFD_5(&Z266, &Z264);
Zq0A4_217 = Z293(Z266);
while (!ZfM_19(Z310)) {
Zp1PEAFD_20(Z310, &Z307);
Z272 = Zfb3DLQ_2(&Z307);
if (Z272 <= ZpmC89LG6_0 && ZpmCQ_25((LONGCARD)Z272, &ZpmC89LG6_1)) {
ZpmCQ_14(&ZpmC89LG6_1, (LONGCARD)Z272);
ZfM_29(Zq0A4_217, (STRING)"# ifndef begin", 14L);
Zq0A4_237(Z272);
ZfM_33(Zq0A4_217);
Zp1PEAFD_20(Z310, &Z307);
Zp1PEAFD_22(Zq0A4_217, &Z307);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
for (Z273 = 2; Z273 <= 7; Z273 += 1) {
ZfM_16(Z310);
}
ZfM_29(Zq0A4_217, (STRING)"# ifndef equal", 14L);
Zq0A4_237(Z272);
ZfM_33(Zq0A4_217);
Zp1PEAFD_20(Z310, &Z307);
Zp1PEAFD_22(Zq0A4_217, &Z307);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
ZfM_16(Z310);
} else {
for (Z273 = 1; Z273 <= 9; Z273 += 1) {
ZfM_16(Z310);
}
}
}
ZfM_5(Z310);
ZpmC89LG6_10(Zq0A4_389);
while (!ZpmCQ_26(ZpmC89LG6_1)) {
Z272 = ZpmCQ_20(&ZpmC89LG6_1);
ZpmCQ_13(&ZpmC89LG6_2, (LONGCARD)Z272);
if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
ZfM_29(Zq0A4_217, (STRING)"# ifndef begin", 14L);
Zq0A4_237(Z272);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define begin", 14L);
Zq0A4_237(Z272);
ZfM_29(Zq0A4_217, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# ifndef equal", 14L);
Zq0A4_237(Z272);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define equal", 14L);
Zq0A4_237(Z272);
ZfM_29(Zq0A4_217, (STRING)"(a, b)	\\", 8L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  memcmp ((char *) & a, (char *) & b, sizeof (a)) == 0", 54L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_216)) {
ZfM_29(Zq0A4_217, (STRING)"# ifndef begin", 14L);
Zq0A4_237(Z272);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define begin", 14L);
Zq0A4_237(Z272);
ZfM_29(Zq0A4_217, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# ifndef equal", 14L);
Zq0A4_237(Z272);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define equal", 14L);
Zq0A4_237(Z272);
ZfM_29(Zq0A4_217, (STRING)"(a, b)	(a.equals (b))", 21L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
} else {
ZfM_29(Zq0A4_217, (STRING)"# ifndef begin", 14L);
Zq0A4_237(Z272);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define begin", 14L);
Zq0A4_237(Z272);
ZfM_29(Zq0A4_217, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# ifndef equal", 14L);
Zq0A4_237(Z272);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define equal", 14L);
Zq0A4_237(Z272);
ZfM_29(Zq0A4_217, (STRING)"(a, b)	yyIsEqual (a, b)", 23L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
}
}
ZpmC89LG6_11();
if (ZpmCQ_25(ORD('*'), &Zq0A4_216)) {
ZgpZ_3(Zq0A4_389);
} else if (ZpmCQ_25(ORD('+'), &Zq0A4_216)) {
Zg_4(Zq0A4_389);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zg_3(Zq0A4_389);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_216)) {
ZggAA_3(Zq0A4_389);
} else {
ZjqD_3(Zq0A4_389);
}
Z295(Z266, Zq0A4_217);
}

static void Z313
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
INTEGER Z272, Z314;

switch (Z308->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_1 = &Z308->U_1.V_5.Y4;

{
LONGINT B_3 = 1, B_4 = Z312;

if (B_3 <= B_4)
for (Z272 = B_3;; Z272 += 1) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"  ", 2L);
if (Z272 >= B_4) break;
}
}
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_1->Y1);
Z314 = Z312 * 2 + Zfb3DLQ_5(W_1->Y1);
for (Z272 = Z314 + 1; Z272 <= 32; Z272 += 1) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" ", 1L);
}
if (IN(Zq0A4_48, W_1->Y2)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)":=", 2L);
} else {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"=", 1L);
}
Z313(W_1->Y3);
if (W_1->Y4->U_1.V_1.Y0 != Zq0A4_55) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" <", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
INC(Z312);
Z313(W_1->Y4);
DEC(Z312);
{
LONGINT B_5 = 1, B_6 = Z312;

if (B_5 <= B_6)
for (Z272 = B_5;; Z272 += 1) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"  ", 2L);
if (Z272 >= B_6) break;
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)">", 1L);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" .", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z313(W_1->Y5);
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_2 = &Z308->U_1.V_10.Y9;

ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" ", 1L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_2->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)": ", 2L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_2->Y3);
Z313(W_2->Y1);
}
break;
case Zq0A4_62:;
{
register Zq0A4_266 *W_3 = &Z308->U_1.V_11.Y10;

if (((SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_3->Y5) == 0X0L) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" [", 2L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_3->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)": ", 2L);
if (W_3->Y7 != Zq0A4_53 && W_3->Y7->U_1.V_1.Y0 == Zq0A4_56) {
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_3->Y7->U_1.V_5.Y4.Y1);
} else {
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_3->Y3);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"]", 1L);
}
Z313(W_3->Y1);
}
break;
case Zq0A4_63:;
{
register Zq0A4_267 *W_4 = &Z308->U_1.V_12.Y11;

Z313(W_4->Y1);
}
break;
default:
break;
}
}

static void Z324
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
switch (Z308->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_5 = &Z308->U_1.V_5.Y4;

Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_5->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" (", 2L);
Z323 = TRUE;
Zq0A4_230(Z308, (Zq0A4_215)Z324);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)")", 1L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_6 = &Z308->U_1.V_10.Y9;

if (!IN(Zq0A4_1, W_6->Y5)) {
if (Z323) {
Z323 = FALSE;
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
}
break;
case Zq0A4_62:;
{
register Zq0A4_266 *W_7 = &Z308->U_1.V_11.Y10;

if (((SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_7->Y5) == 0X0L) {
if (Z323) {
Z323 = FALSE;
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

static void Z325
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
switch (Z308->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_8 = &Z308->U_1.V_5.Y4;

Z325(W_8->Y4);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_8->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" (", 2L);
Z323 = TRUE;
Zq0A4_230(Z308, (Zq0A4_215)Z324);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)") :-", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z277 = Zq0A4_53;
Zq0A4_230(Z308, (Zq0A4_215)Z325);
if (Z277 != Zq0A4_53) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z277->U_1.V_10.Y9.Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)");", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   .", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z325(W_8->Y5);
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_9 = &Z308->U_1.V_10.Y9;

if (IN(Zq0A4_3, W_9->Y5)) {
Z277 = Z308;
} else if (!IN(Zq0A4_1, W_9->Y5)) {
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

static void Z326
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
Zq0A4_185 Z280, Z214;

switch (Z308->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_10 = &Z308->U_1.V_5.Y4;

if (ZpmCQ_25((LONGCARD)W_10->Y9, &Z285)) {
return;
}
ZpmCQ_13(&Z285, (LONGCARD)W_10->Y9);
Z328(W_10->Y4);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_10->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" (", 2L);
Z323 = TRUE;
Zq0A4_230(Z308, (Zq0A4_215)Z324);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)") :-", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z277 = Zq0A4_53;
Zq0A4_230(Z308, (Zq0A4_215)Z326);
if (Z277 != Zq0A4_53) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z277->U_1.V_10.Y9.Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)");", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   .", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_11 = &Z308->U_1.V_10.Y9;

if (IN(Zq0A4_3, W_11->Y5)) {
Z277 = Z308;
} else if (!IN(Zq0A4_1, W_11->Y5)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_11->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)");", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
Z280 = ZpmC89LG6_4(W_11->Y3, &Z214);
if (!ZpmCQ_25((LONGCARD)Z280->U_1.V_5.Y4.Y9, &Z285)) {
ZpmCQ_13(&Z284, (LONGCARD)Z280->U_1.V_5.Y4.Y9);
}
}
break;
default:
break;
}
}

static void Z328
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
while (Z308->U_1.V_1.Y0 == Zq0A4_56) {
Z326(Z308);
Z308 = Z308->U_1.V_5.Y4.Y5;
}
}

static void Z329
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
Zq0A4_185 Z280, Z214;

switch (Z308->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_12 = &Z308->U_1.V_5.Y4;

if (ZpmCQ_25((LONGCARD)W_12->Y9, &Z285)) {
return;
}
ZpmCQ_13(&Z285, (LONGCARD)W_12->Y9);
Z330(W_12->Y4);
if (W_12->Y9 == Z271) {
Z287 = TRUE;
} else {
Z287 = FALSE;
Zq0A4_230(W_12->Y3, (Zq0A4_215)Z331);
}
if (Z287) {
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_12->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" (", 2L);
Z323 = TRUE;
Zq0A4_230(Z308, (Zq0A4_215)Z324);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)") :-", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z277 = Zq0A4_53;
Zq0A4_230(Z308, (Zq0A4_215)Z329);
if (Z277 != Zq0A4_53) {
Z280 = ZpmC89LG6_4(Z277->U_1.V_10.Y9.Y3, &Z214);
if (ZolB7FGBG_9((LONGINT)Z280->U_1.V_5.Y4.Y9, (LONGINT)Z271, Z286)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z277->U_1.V_10.Y9.Y2);
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
register Zq0A4_265 *W_13 = &Z308->U_1.V_10.Y9;

Z280 = ZpmC89LG6_4(W_13->Y3, &Z214);
if (ZolB7FGBG_9((LONGINT)Z280->U_1.V_5.Y4.Y9, (LONGINT)Z271, Z286)) {
if (IN(Zq0A4_3, W_13->Y5)) {
Z277 = Z308;
} else if (!IN(Zq0A4_1, W_13->Y5)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"   Traverse (", 13L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_13->Y2);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)");", 2L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (!ZpmCQ_25((LONGCARD)Z280->U_1.V_5.Y4.Y9, &Z285)) {
ZpmCQ_13(&Z284, (LONGCARD)Z280->U_1.V_5.Y4.Y9);
}
}
}
break;
default:
break;
}
}

static void Z330
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
while (Z308->U_1.V_1.Y0 == Zq0A4_56) {
Z329(Z308);
Z308 = Z308->U_1.V_5.Y4.Y5;
}
}

static void Z331
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
Zq0A4_185 Z280, Z214;

if (Z308->U_1.V_1.Y0 == Zq0A4_61) {
Z280 = ZpmC89LG6_4(Z308->U_1.V_10.Y9.Y3, &Z214);
if (ZolB7FGBG_9((LONGINT)Z280->U_1.V_5.Y4.Y9, (LONGINT)Z271, Z286)) {
Z287 = TRUE;
}
}
}

static void Z332
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
Zq0A4_185 Z280, Z214;

switch (Z308->U_1.V_1.Y0) {
case Zq0A4_56:;
{
register Zq0A4_260 *W_14 = &Z308->U_1.V_5.Y4;

Z270 = W_14->Y9;
ZolB7FGBG_6(&Z286, (LONGINT)Z270, (LONGINT)W_14->Y9);
Zq0A4_229(W_14->Y4, (Zq0A4_215)Z333);
Zq0A4_230(Z308, (Zq0A4_215)Z332);
}
break;
case Zq0A4_61:;
{
register Zq0A4_265 *W_15 = &Z308->U_1.V_10.Y9;

Z280 = ZpmC89LG6_4(W_15->Y3, &Z214);
ZolB7FGBG_6(&Z286, (LONGINT)Z270, (LONGINT)Z280->U_1.V_5.Y4.Y9);
}
break;
default:
break;
}
}

static void Z333
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
ZolB7FGBG_6(&Z286, (LONGINT)Z270, (LONGINT)Z308->U_1.V_5.Y4.Y9);
}

static ZfM_3 Z334
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z316)
# else
(Z316)
Zfb3DLQ_0 Z316;
# endif
{
SHORTCARD Z272;
ZfM_3 Z335;

Z272 = 0;
for (;;) {
Zp1PEAFD_3(&Z266, &Z291.A[Z272]);
Zq0A4_242(Z316, &Z264);
Zp1PEAFD_5(&Z266, &Z264);
Zp1PEAFD_13((STRING)".TS", 3L, &Z264);
Zp1PEAFD_5(&Z266, &Z264);
Zp1PEAFD_6(&Z266, '\0');
Zp1PEAFD_14(&Z266, Z268.A, 256L);
Z335 = ZfM_4(Z268.A, 256L);
if (Z335 >= 0) {
return Z335;
}
INC(Z272);
if (Z272 > Z290) {
return -1;
}
} EXIT_3:;
}

static void Z336
# ifdef HAVE_ARGS
(Zq0A4_185 Z337)
# else
(Z337)
Zq0A4_185 Z337;
# endif
{
while (Z337->U_1.V_1.Y0 == Zq0A4_86) {
{
register Zq0A4_290 *W_16 = &Z337->U_1.V_35.Y34;

Zq0A4_217 = Z334(W_16->Y1);
if (Zq0A4_217 >= 0) {
if (ZfM_8(Zq0A4_217) != Z255) {
INC(Zq0A4_0);
ZblNKKO_47((STRING)"file produced by wrong version of ast", 37L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z268));
}
ZfM_16(Zq0A4_217);
Zp1PEAFD_20(Zq0A4_217, &Z264);
W_16->Y1 = Zfb3DLQ_2(&Z264);
Zq0A4_243(W_16->Y1, &W_16->Y2, &W_16->Y1);
Zfb3DLQ_3(W_16->Y1, &Z264);
Zp1PEAFD_13((STRING)"t", 1L, &Z265);
Zp1PEAFD_5(&Z265, &Z264);
W_16->Y7 = Zfb3DLQ_2(&Z265);
Zp1PEAFD_20(Zq0A4_217, &Z264);
W_16->Y8 = Zfb3DLQ_2(&Z264);
ZpmCQ_13(&Zq0A4_216, ORD(ZfM_7(Zq0A4_217)));
ZfM_16(Zq0A4_217);
W_16->Y5 = Zq0A4L_2(Zq0A4_217);
ZfM_5(Zq0A4_217);
if (ZpmCQ_25(ORD('t'), &Zq0A4_216)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Tree Definition: ", 17L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_16->Y1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"----------------", 16L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z313(W_16->Y5);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (ZpmCQ_25(ORD('r'), &Zq0A4_216)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Patterns: ", 10L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_16->Y1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"---------", 9L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Zq0A4_229(W_16->Y5, (Zq0A4_215)Z324);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (ZpmCQ_25(ORD('x'), &Zq0A4_216)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"PROCEDURE Traverse (", 20L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_16->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)")", 1L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z325(W_16->Y5);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
} else {
W_16->Y5 = Zq0A4_409();
Zpky9FDA_14((STRING)"cannot read view file", 21L, W_16->Y3, W_16->Y1);
}
Z337 = W_16->Y4;
}
}
}

static void Z344
# ifdef HAVE_ARGS
(Zq0A4_185 Z308)
# else
(Z308)
Zq0A4_185 Z308;
# endif
{
SHORTCARD Z272;
ZfM_3 Z335;

switch (Z308->U_1.V_1.Y0) {
case Zq0A4_83:;
Z344(Z308->U_1.V_32.Y31.Y4);
Zq0A4_389 = Z308;
break;
case Zq0A4_89:;
{
register Zq0A4_293 *W_17 = &Z308->U_1.V_38.Y37;

Z272 = 0;
for (;;) {
Zp1PEAFD_3(&Z264, &Z289.A[Z272]);
Zfb3DLQ_3(W_17->Y2, &Z265);
Zp1PEAFD_5(&Z264, &Z265);
Zp1PEAFD_14(&Z264, Z268.A, 256L);
Z335 = ZfM_4(Z268.A, 256L);
if (Z335 >= 0) {
ZfM_5(Z335);
Zpky9FDA_22.Y0 = ZmtLFGGBG_1;
Zpky9FDA_22.Y0.Y2 = Zfb3DLQ_2(&Z264);
Zpky9FDA_25(Z268.A, 256L);
INC1(Zq0A4_0, ZmfDOBA_54());
W_17->Y4 = Zq0A4_389;
goto EXIT_4;
}
INC(Z272);
if (Z272 > Z290) {
Zpky9FDA_14((STRING)"cannot read IMPORT file", 23L, W_17->Y3, W_17->Y2);
goto EXIT_4;
}
} EXIT_4:;
Z344(W_17->Y1);
}
break;
default:
break;
}
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
BEGIN_Mod ();
BEGIN_C ();
BEGIN_Cxx ();
BEGIN_Java ();
BEGIN_Tree2 ();
BEGIN_Relation ();
BEGIN_Scanner ();

Z269 = 0;
Z312 = 0;
Zp1PEAFD_4(&Z262);
Z290 = 0;
Zp1PEAFD_4(&Z289.A[0]);
Zp1PEAFD_6(&Z289.A[0], '.');
Zp1PEAFD_6(&Z289.A[0], DirectorySeparator());
Z292 = 0;
Zp1PEAFD_4(&Z291.A[0]);
Zp1PEAFD_6(&Z291.A[0], '.');
Zp1PEAFD_6(&Z291.A[0], DirectorySeparator());
Zq0A4_220.A[0] = '\0';
Z275 = GetArgCount() - 1;
Z272 = 1;
while (Z272 <= Z275) {
GetArgument((LONGINT)Z272, Z267.A, 256L);
if (Z267.A[0] == '-') {
if (Z267.A[1] == 'l') {
if (Z267.A[2] == '\0' && Z272 < Z275) {
INC(Z272);
GetArgument((LONGINT)Z272, Z267.A, 256L);
Z273 = 0;
} else {
Z273 = 2;
}
Zp1PEAFD_4(&Z262);
for (;;) {
Z276 = Z267.A[Z273];
if (Z276 == '\0') {
goto EXIT_5;
}
Zp1PEAFD_6(&Z262, Z276);
INC(Z273);
} EXIT_5:;
Zp1PEAFD_6(&Z262, DirectorySeparator());
INC(Z269);
} else if (Z267.A[1] == 'I') {
if (Z267.A[2] == '\0' && Z272 < Z275) {
INC(Z272);
GetArgument((LONGINT)Z272, Z267.A, 256L);
Z273 = 0;
} else {
Z273 = 2;
}
INC(Z290);
Zp1PEAFD_4(&Z289.A[Z290]);
for (;;) {
Z276 = Z267.A[Z273];
if (Z276 == '\0') {
goto EXIT_6;
}
Zp1PEAFD_6(&Z289.A[Z290], Z276);
INC(Z273);
} EXIT_6:;
Zp1PEAFD_6(&Z289.A[Z290], DirectorySeparator());
INC(Z269);
} else if (Z267.A[1] == 'T') {
if (Z267.A[2] == '\0' && Z272 < Z275) {
INC(Z272);
GetArgument((LONGINT)Z272, Z267.A, 256L);
Z273 = 0;
} else {
Z273 = 2;
}
INC(Z292);
Zp1PEAFD_4(&Z291.A[Z292]);
for (;;) {
Z276 = Z267.A[Z273];
if (Z276 == '\0') {
goto EXIT_7;
}
Zp1PEAFD_6(&Z291.A[Z292], Z276);
INC(Z273);
} EXIT_7:;
Zp1PEAFD_6(&Z291.A[Z292], DirectorySeparator());
INC(Z269);
} else if (Z267.A[1] == 'y' && Z272 < Z275) {
ZpmCQ_13(&Zq0A4_216, ORD('y'));
INC(Z272);
GetArgument((LONGINT)Z272, Z267.A, 256L);
Zp1PEAFD_13(Z267.A, 256L, &Z266);
Z282 = Zfb3DLQ_2(&Z266);
} else if (Z267.A[1] == 'z' && Z272 < Z275) {
ZpmCQ_13(&Zq0A4_216, ORD('z'));
INC(Z272);
GetArgument((LONGINT)Z272, Z267.A, 256L);
Zp1PEAFD_13(Z267.A, 256L, &Z266);
Z283 = Zfb3DLQ_2(&Z266);
} else {
Z273 = 0;
for (;;) {
INC(Z273);
Z276 = Z267.A[Z273];
if (Z276 == '\0') {
goto EXIT_8;
} else if (Z276 == '?') {
ZpmCQ_13(&Zq0A4_216, ORD('h'));
} else {
if (Z276 == '+' && ZpmCQ_25(ORD('+'), &Zq0A4_216) && ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
ZpmCQ_13(&Zq0A4_216, ORD('*'));
ZpmCQ_14(&Zq0A4_216, ORD('+'));
} else {
ZpmCQ_13(&Zq0A4_216, ORD(Z276));
}
}
} EXIT_8:;
}
} else if (Z267.A[0] == '?') {
ZpmCQ_13(&Zq0A4_216, ORD('h'));
} else {
Z273 = 0;
Z274 = 0;
do {
Z276 = Z267.A[Z273];
Zq0A4_220.A[Z273] = Z276;
INC(Z273);
} while (!(Z276 == '\0'));
INC(Z269);
}
INC(Z272);
}
if (Z275 <= Z269) {
ZpmCQ_13(&Zq0A4_216, ORD('a'));
}
if (ZpmCQ_25(ORD('a'), &Zq0A4_216)) {
ZpmCQ_13(&Zq0A4_216, ORD('d'));
ZpmCQ_13(&Zq0A4_216, ORD('i'));
}
if (ZpmCQ_25(ORD('+'), &Zq0A4_216)) {
ZpmCQ_13(&Zq0A4_216, ORD('c'));
}
if (ZpmCQ_25(ORD('s'), &Zq0A4_216)) {
ZpmCQ_13(&Zq0A4_216, ORD('u'));
}
if (ZpmCQ_25(ORD('h'), &Zq0A4_216)) {
ZpmCQ_14(&Zq0A4_216, ORD('h'));
Zq0A4_217 = ZfM_1;
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"usage: puma [-options] [-y <type>] [-z <type>] [-I <directory>] [-T <directory>]", 80L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"            [-l <directory>] [<file>]", 37L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" a generate all, same as -di (default)", 38L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" d generate header file or definition module", 44L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" i generate implementation part or module", 41L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" s suppress information and warning messages", 44L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" u suppress information messages", 32L);
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
ZfM_29(Zq0A4_217, (STRING)" q browse internal data structure with text browser", 51L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" g browse internal data structure with graphical browser", 56L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" : generate lines not longer than 80 characters", 47L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" 6 generate # line directives", 29L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" 7 touch output files only if necessary", 39L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" 8 report storage consumption", 29L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" c generate C source code (default: Modula-2)", 45L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" c+ generate simple C++ source code", 35L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" c++ generate proper C++ source code", 36L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" J generate Java source code", 28L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" h print help information", 25L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" l <dir> specify the directory dir where puma finds its data files", 66L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" I <dir> add dir to the list of directories to be searched for IMPORT files", 75L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" T <dir> add dir to the list of directories to be searched for .TS files", 72L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
}
if (ZpmCQ_26(Zq0A4_216)) {
ZfM_34();
exit (1);
}
if (Zp1PEAFD_7(&Z262) == 0) {
Z288 = GetEnvVar((STRING)"CT_DIR", 6L);
if (Z288 != NIL) {
Z272 = 0;
for (;;) {
Z267.A[Z272] = Z288->A[Z272];
if (Z267.A[Z272] == '\0' || Z272 == 255) {
goto EXIT_9;
}
INC(Z272);
} EXIT_9:;
Zp1PEAFD_13(Z267.A, 256L, &Z262);
Zp1PEAFD_6(&Z262, DirectorySeparator());
Zp1PEAFD_13((STRING)"lib", 3L, &Z264);
Zp1PEAFD_5(&Z262, &Z264);
Zp1PEAFD_6(&Z262, DirectorySeparator());
Zp1PEAFD_13((STRING)"puma", 4L, &Z264);
Zp1PEAFD_5(&Z262, &Z264);
Zp1PEAFD_6(&Z262, DirectorySeparator());
}
}
if (!ZpmCQ_25(ORD('@'), &Zq0A4_216)) {
ZblNKKO_43(TRUE);
}
if (Zq0A4_220.A[0] != '\0') {
Zp1PEAFD_13(Zq0A4_220.A, 256L, &Z264);
} else {
Zp1PEAFD_13((STRING)"-", 1L, &Z264);
}
Zpky9FDA_22.Y0 = ZmtLFGGBG_1;
Zpky9FDA_22.Y0.Y2 = Zfb3DLQ_2(&Z264);
if (Zq0A4_220.A[0] != '\0') {
Zpky9FDA_25(Zq0A4_220.A, 256L);
}
INC1(Zq0A4_0, ZmfDOBA_54());
Z336(Zq0A4_389->U_1.V_32.Y31.Y2);
Z344(Zq0A4_389);
if (Zq0A4_0 > 0) {
ZblNKKO_48((ZDz6VQCC_4)ZfM_2);
ZfM_34();
rExit(1L);
}
ZpmC89LG6_9(Zq0A4_389);
if (Zq0A4_0 > 0) {
ZblNKKO_48((ZDz6VQCC_4)ZfM_2);
ZfM_34();
rExit(1L);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_216)) {
ZltNGGGMI_4(Zq0A4_389);
} else {
ZltNGGGMI_3(Zq0A4_389);
}
if (ZpmCQ_25(ORD('y'), &Zq0A4_216)) {
Z278 = ZpmC89LG6_4(Z282, &Z281);
if (Z278 == Zq0A4_53) {
Zpky9FDA_14((STRING)"node type not declared", 22L, ZmtLFGGBG_1, Z282);
} else if (!ZpmCQ_25(ORD('z'), &Zq0A4_216)) {
ZpmCQ_5(&Z284, (LONGCARD)Z281->U_1.V_35.Y34.Y6);
ZpmCQ_5(&Z285, (LONGCARD)Z281->U_1.V_35.Y34.Y6);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"PROCEDURE Traverse (", 20L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z281->U_1.V_35.Y34.Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)")", 1L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZpmCQ_13(&Z284, (LONGCARD)Z278->U_1.V_5.Y4.Y9);
while (!ZpmCQ_26(Z284)) {
Z270 = ZpmCQ_20(&Z284);
Z280 = ZpmC89LG6_5(Z281->U_1.V_35.Y34.Y5, (LONGCARD)Z270);
Z326(Z280);
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZpmCQ_7(&Z284);
ZpmCQ_7(&Z285);
} else {
Z279 = ZpmC89LG6_3(Z281->U_1.V_35.Y34.Y5, Z283);
if (Z279 == Zq0A4_53) {
Zpky9FDA_14((STRING)"node type not declared", 22L, ZmtLFGGBG_1, Z283);
} else {
Z271 = Z279->U_1.V_5.Y4.Y9;
ZolB7FGBG_4(&Z286, Z281->U_1.V_35.Y34.Y6, Z281->U_1.V_35.Y34.Y6);
Zq0A4_229(Z281->U_1.V_35.Y34.Y5, (Zq0A4_215)Z332);
ZolB7FGBG_20(&Z286);
ZpmCQ_5(&Z284, (LONGCARD)Z281->U_1.V_35.Y34.Y6);
ZpmCQ_5(&Z285, (LONGCARD)Z281->U_1.V_35.Y34.Y6);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"PROCEDURE Traverse (", 20L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z281->U_1.V_35.Y34.Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)")", 1L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZpmCQ_13(&Z284, (LONGCARD)Z278->U_1.V_5.Y4.Y9);
while (!ZpmCQ_26(Z284)) {
Z270 = ZpmCQ_20(&Z284);
Z280 = ZpmC89LG6_5(Z281->U_1.V_35.Y34.Y5, (LONGCARD)Z270);
Z329(Z280);
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZpmCQ_7(&Z284);
ZpmCQ_7(&Z285);
ZolB7FGBG_5(&Z286);
}
}
}
ZblNKKO_48((ZDz6VQCC_4)ZfM_2);
ZblNKKO_43(FALSE);
if (!Z298((STRING)"pum", 3L, (LONGCARD)ZpmC89LG6_0)) {
ZfM_34();
rExit(1L);
}
if (ZpmCQ_25(ORD('q'), &Zq0A4_216)) {
Zq0A4_543(Zq0A4_389);
}
if (ZpmCQ_25(ORD('g'), &Zq0A4_216)) {
Zq0A4_544(Zq0A4_389);
}
if (Zq0A4_0 > 0) {
ZfM_34();
rExit(1L);
}
if (ZpmCQ_25(ORD('d'), &Zq0A4_216)) {
if (ZpmCQ_25(ORD('J'), &Zq0A4_216)) {
ZpmCQ_13(&Zq0A4_216, ORD('i'));
} else {
Zq0A4_242(Zq0A4_389->U_1.V_32.Y31.Y1, &Z266);
if (ZpmCQ_25(ORD('*'), &Zq0A4_216)) {
Zp1PEAFD_13(Z258, 2L, &Z264);
} else if (ZpmCQ_25(ORD('+'), &Zq0A4_216)) {
Zp1PEAFD_13(Z258, 2L, &Z264);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zp1PEAFD_13(Z258, 2L, &Z264);
} else {
Zp1PEAFD_13(Z256, 3L, &Z264);
}
Zp1PEAFD_5(&Z266, &Z264);
Zq0A4_217 = Z293(Z266);
if (ZpmCQ_25(ORD('*'), &Zq0A4_216)) {
ZgpZ_4(Zq0A4_389);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zg_5(Zq0A4_389);
} else {
ZjqD_4(Zq0A4_389);
}
Z295(Z266, Zq0A4_217);
}
}
if (ZpmCQ_25(ORD('i'), &Zq0A4_216)) {
Z309();
Zq0A4_242(Zq0A4_389->U_1.V_32.Y31.Y1, &Z266);
if (ZpmCQ_25(ORD('*'), &Zq0A4_216)) {
Zp1PEAFD_13(Z260, 4L, &Z264);
} else if (ZpmCQ_25(ORD('+'), &Zq0A4_216)) {
Zp1PEAFD_13(Z260, 4L, &Z264);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zp1PEAFD_13(Z259, 2L, &Z264);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_216)) {
Zp1PEAFD_13(Z261, 5L, &Z264);
} else {
Zp1PEAFD_13(Z257, 3L, &Z264);
}
Zp1PEAFD_5(&Z266, &Z264);
Zp1PEAFD_3(&Z263, &Z266);
Zq0A4_217 = Z293(Z266);
if (ZpmCQ_25(ORD('*'), &Zq0A4_216)) {
ZgpZ_5(Zq0A4_389);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zg_6(Zq0A4_389);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_216)) {
ZggAA_4(Zq0A4_389);
} else {
ZjqD_5(Zq0A4_389);
}
Z295(Z266, Zq0A4_217);
if (!ZpmCQ_25(ORD('c'), &Zq0A4_216)) {
Zp1PEAFD_13((STRING)"gcpp ", 5L, &Z266);
Zp1PEAFD_5(&Z266, &Z263);
Zp1PEAFD_6(&Z266, '\0');
Zp1PEAFD_14(&Z266, Z268.A, 256L);
Z275 = rSystem(Z268.A, 256L);
Zp1PEAFD_13((STRING)"grm yy", 6L, &Z266);
Zq0A4_242(Zq0A4_389->U_1.V_32.Y31.Y1, &Z264);
Zp1PEAFD_5(&Z266, &Z264);
Zp1PEAFD_13((STRING)".h", 2L, &Z264);
Zp1PEAFD_5(&Z266, &Z264);
Zp1PEAFD_6(&Z266, '\0');
Zp1PEAFD_14(&Z266, Z268.A, 256L);
Z275 = rSystem(Z268.A, 256L);
}
if (Zq0A4_0 > 0) {
Zp1PEAFD_13((STRING)"grm ", 4L, &Z266);
Zp1PEAFD_5(&Z266, &Z263);
Zp1PEAFD_6(&Z266, '\0');
Zp1PEAFD_14(&Z266, Z268.A, 256L);
Z275 = rSystem(Z268.A, 256L);
ZfM_34();
rExit(1L);
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
