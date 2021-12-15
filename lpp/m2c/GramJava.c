#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
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

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_GramJava
#include "GramJava.h"
#endif

ZfM_3 ZdnD8lgAA_0;
BOOLEAN ZdnD8lgAA_1;
PROC ZdnD8lgAA_2;

static Zq0A4_153 Z180, Z181, Z182, Z183;
static Zfb3DLQ_0 Z184, Z185, Z186, Z187, Z188, Z189, Z190;
static SHORTCARD Z191, Z192;
static BOOLEAN Z193, Z194, Z195, Z196, Z197, Z198;
static Zp1PEAFD_2 Z199, Z200;
static BOOLEAN Z201;
static BOOLEAN Z202;
static CARDINAL Z203, Z204;
static BOOLEAN Z205;
static void Z206 ARGS ((ZfM_3 Z207));
static void Z209 ARGS ((ZfM_3 Z207, Zp1PEAFD_2 Z174));
static void Z210 ARGS ((ZfM_3 Z207, ZqnGVQ_0 Z211));
static void Z213 ARGS ((ZfM_3 Z207, Zp1PEAFi_1 Z214));
#define Z218	'\n'
static void Z221 ARGS ((ZfM_3 Z163, ZmtLFGGBG_0 Z222, CHAR Z223[], LONGCARD O_1));
static void Z226 ARGS ((ZfM_3 Z163, ZqnGVQ_0 Z211, ZmtLFGGBG_0 Z227));
static void Z228 ARGS ((INTEGER Z229));
static void Z230 ARGS ((Zfb3DLQ_0 Z216));
static void Z231 ARGS ((INTEGER Z229));
static void Z232 ARGS ((Zfb3DLQ_0 Z216));
static void Z233 ARGS ((INTEGER Z229));
static void Z234 ARGS ((Zfb3DLQ_0 Z216));
static Zfb3DLQ_0 Z235 ARGS ((Zq0A4_153 Z236));
static void Z239 ARGS ((Zfb3DLQ_0 Z216));
static void Z240 ARGS ((Zq0A4_153 Z236));
static void Z242 ARGS ((Zq0A4_153 Z236));
static void Z243 ARGS ((Zq0A4_153 Z236, Zq0A4_153 Z244));
static void Z251 ARGS ((CHAR Z252[], LONGCARD O_2));
static BOOLEAN Z255 ARGS ((BYTE Z256[], LONGCARD O_4, BYTE Z257[], LONGCARD O_3));
struct S_19 {
union {
char dummy;
} U_1;
};
struct S_18 {
union {
char dummy;
} U_1;
};
static void Z292 ARGS ((Zq0A4_153 Z260));
struct S_17 {
union {
char dummy;
} U_1;
};
static void Z290 ARGS ((Zq0A4_153 Z260));
struct S_16 {
union {
char dummy;
} U_1;
};
static void Z291 ARGS ((Zq0A4_153 Z260));
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z275 ARGS ((Zq0A4_153 Z260));
struct S_14 {
union {
char dummy;
} U_1;
};
static void Z283 ARGS ((Zq0A4_153 Z260));
struct S_13 {
union {
char dummy;
} U_1;
};
static void Z287 ARGS ((Zq0A4_153 Z313));
struct S_12 {
union {
char dummy;
} U_1;
};
static void Z308 ARGS ((Zq0A4_153 Z260));
struct S_11 {
union {
char dummy;
} U_1;
};
static void Z309 ARGS ((Zq0A4_153 Z260));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z249 ARGS ((Zq0A4_153 Z260));
struct S_9 {
union {
char dummy;
} U_1;
};
static void Z284 ARGS ((Zq0A4_153 Z260));
struct S_8 {
union {
char dummy;
} U_1;
};
static void Z288 ARGS ((Zq0A4_153 Z260));
struct S_7 {
union {
char dummy;
} U_1;
};
static void Z319 ARGS ((Zq0A4_153 Z260));
struct S_6 {
union {
char dummy;
} U_1;
};
static void Z320 ARGS ((Zq0A4_153 Z260));
struct S_5 {
union {
char dummy;
} U_1;
};
static void Z310 ARGS ((Zfb3DLQ_0 Z238));
struct S_4 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z321 ARGS ((Zq0A4_153 Z331, Zq0A4_153 Z332));
struct S_3 {
union {
char dummy;
} U_1;
};
static void Z333 ARGS ((Zq0A4_153 Z260, Zq0A4_153 Z334));
struct S_2 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z246 ARGS ((Zq0A4_153 Z336, BOOLEAN Z337));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z340 ARGS ((void));

static void Z206
# ifdef HAVE_ARGS
(ZfM_3 Z207)
# else
(Z207)
ZfM_3 Z207;
# endif
{
ZfM_33(Z207);
INC(Zq0A4_173.Y1);
INC(Zq0A4_174.Y1);
}

static void Z209
# ifdef HAVE_ARGS
(ZfM_3 Z207, Zp1PEAFD_2 Z174)
# else
(Z207, Z174)
ZfM_3 Z207;
Zp1PEAFD_2 Z174;
# endif
{
Zp1PEAFD_22(Z207, &Z174);
INC(Zq0A4_173.Y1);
INC(Zq0A4_174.Y1);
}

static void Z210
# ifdef HAVE_ARGS
(ZfM_3 Z207, ZqnGVQ_0 Z211)
# else
(Z207, Z211)
ZfM_3 Z207;
ZqnGVQ_0 Z211;
# endif
{
ZqnGVQ_5(Z207, Z211);
INC1(Zq0A4_173.Y1, ZijFQQ_13(Z211));
INC(Zq0A4_174.Y1);
}

static void Z213
# ifdef HAVE_ARGS
(ZfM_3 Z207, Zp1PEAFi_1 Z214)
# else
(Z207, Z214)
ZfM_3 Z207;
Zp1PEAFi_1 Z214;
# endif
{
Zp1PEAFD_2 Z199;
CARDINAL Z216;
CHAR Z217;

Zp1PEAFi_3(Z214, &Z199);
{
LONGCARD B_1 = 1, B_2 = Z199.Y1;

if (B_1 <= B_2)
for (Z216 = B_1;; Z216 += 1) {
Z217 = Z199.Y0.A[Z216];
ZfM_24(Z207, Z217);
if (Z217 == Z218) {
INC(Zq0A4_173.Y1);
INC(Zq0A4_174.Y1);
}
if (Z216 >= B_2) break;
}
}
}

static void Z221
# ifdef HAVE_ARGS
(ZfM_3 Z163, ZmtLFGGBG_0 Z222, CHAR Z223[], LONGCARD O_1)
# else
(Z163, Z222, Z223, O_1)
ZfM_3 Z163;
ZmtLFGGBG_0 Z222;
CHAR Z223[];
LONGCARD O_1;
# endif
{
CARDINAL Z224;

if (Z222.Y1 == 0) {
Z222 = Zq0A4_173;
}
if (Z222.Y0 == Zq0A4_173.Y0) {
Z224 = 2;
} else {
Z224 = 0;
}
if (Zq0A4_174.Y1 == Z222.Y1 && Zq0A4_174.Y0 == Z222.Y0) {
} else if (Zq0A4_174.Y1 + 1 == Z222.Y1 && Zq0A4_174.Y0 == Z222.Y0) {
Z206(Z163);
} else {
Z206(Z163);
INC1(Z222.Y1, Z224);
ZfM_29(Z163, (STRING)"#@ line ", 8L);
ZfM_25(Z163, (LONGINT)Z222.Y1, 0L);
ZfM_29(Z163, (STRING)" \"", 2L);
Zfb3DLQ_7(Z163, Z222.Y0);
ZfM_29(Z163, (STRING)"\"", 1L);
Z206(Z163);
Zq0A4_174 = Z222;
}
}

static void Z226
# ifdef HAVE_ARGS
(ZfM_3 Z163, ZqnGVQ_0 Z211, ZmtLFGGBG_0 Z227)
# else
(Z163, Z211, Z227)
ZfM_3 Z163;
ZqnGVQ_0 Z211;
ZmtLFGGBG_0 Z227;
# endif
{
if (ZijFQQ_13(Z211) > 0) {
Z221(Z163, Z227, (STRING)" A pre Target Code Block", 24L);
Z210(Z163, Z211);
Z221(Z163, Zq0A4_173, (STRING)" B post Target Code Block", 25L);
}
}

static void Z228
# ifdef HAVE_ARGS
(INTEGER Z229)
# else
(Z229)
INTEGER Z229;
# endif
{
ZfM_29(Zq0A4_172, (STRING)"Zz_", 3L);
Zq0A4_195(Z229);
}

static void Z230
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z216)
# else
(Z216)
Zfb3DLQ_0 Z216;
# endif
{
ZfM_29(Zq0A4_172, (STRING)"Zz", 2L);
Zq0A4_192(Z216);
}

static void Z231
# ifdef HAVE_ARGS
(INTEGER Z229)
# else
(Z229)
INTEGER Z229;
# endif
{
ZfM_29(Zq0A4_172, (STRING)"yy_", 3L);
Zq0A4_195(Z229);
}

static void Z232
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z216)
# else
(Z216)
Zfb3DLQ_0 Z216;
# endif
{
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(Z216);
}

static void Z233
# ifdef HAVE_ARGS
(INTEGER Z229)
# else
(Z229)
INTEGER Z229;
# endif
{
ZfM_29(Zq0A4_172, (STRING)"Xx_", 3L);
Zq0A4_195(Z229);
}

static void Z234
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z216)
# else
(Z216)
Zfb3DLQ_0 Z216;
# endif
{
ZfM_29(Zq0A4_172, (STRING)"Xx", 2L);
Zq0A4_192(Z216);
}

static Zfb3DLQ_0 Z235
# ifdef HAVE_ARGS
(Zq0A4_153 Z236)
# else
(Z236)
Zq0A4_153 Z236;
# endif
{
{
register Zq0A4_226 *W_1 = &Z236->U_1.V_5.Y4;

if (IN(Zq0A4_16, W_1->Y2)) {
Zp1PEAFD_13((STRING)"yy", 2L, &Z199);
Zp1PEAFD_18((LONGINT)W_1->Y1, &Z200);
Zp1PEAFD_5(&Z199, &Z200);
} else {
Zfb3DLQ_3(W_1->Y1, &Z199);
}
}
Zp1PEAFD_6(&Z199, '_');
Zp1PEAFD_18((LONGINT)Z203, &Z200);
Zp1PEAFD_5(&Z199, &Z200);
return Zfb3DLQ_2(&Z199);
}

static void Z239
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z216)
# else
(Z216)
Zfb3DLQ_0 Z216;
# endif
{
if (Z216 != Zfb3DLQ_1) {
Zq0A4_192(Z216);
} else {
ZfM_29(Zq0A4_172, (STRING)"Scanner", 7L);
}
}

static void Z240
# ifdef HAVE_ARGS
(Zq0A4_153 Z236)
# else
(Z236)
Zq0A4_153 Z236;
# endif
{
if (Z236 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"ParsAttribute", 13L);
} else {
{
register Zq0A4_226 *W_2 = &Z236->U_1.V_5.Y4;

if (IN(Zq0A4_16, W_2->Y2) && !IN(Zq0A4_43, W_2->Y2)) {
Z228((LONGINT)W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)"/* ", 3L);
Zq0A4_194(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)" */", 3L);
} else {
Z230(W_2->Y8);
}
}
}
}

static void Z242
# ifdef HAVE_ARGS
(Zq0A4_153 Z236)
# else
(Z236)
Zq0A4_153 Z236;
# endif
{
{
register Zq0A4_226 *W_3 = &Z236->U_1.V_5.Y4;

if (IN(Zq0A4_16, W_3->Y2) && !IN(Zq0A4_43, W_3->Y2)) {
Z231((LONGINT)W_3->Y1);
ZfM_29(Zq0A4_172, (STRING)"/* ", 3L);
Zq0A4_194(W_3->Y1);
ZfM_29(Zq0A4_172, (STRING)" */", 3L);
} else {
Z232(W_3->Y8);
}
}
}

static void Z243
# ifdef HAVE_ARGS
(Zq0A4_153 Z236, Zq0A4_153 Z244)
# else
(Z236, Z244)
Zq0A4_153 Z236;
Zq0A4_153 Z244;
# endif
{
if (Z236->U_1.V_1.Y0 != Zq0A4_100) {
return;
}
{
register Zq0A4_226 *W_4 = &Z236->U_1.V_5.Y4;

if (IN(Zq0A4_38, W_4->Y2) && (SET_IS_SUBSET1(SET_ELEM (Zq0A4_36) | SET_ELEM (Zq0A4_45), W_4->Y2) || Z246(W_4->Y4, (BOOLEAN)IN(Zq0A4_45, W_4->Y2)))) {
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   class ", 9L);
Z240(Z236);
ZfM_29(Zq0A4_172, (STRING)" extends ", 9L);
Z240(Z244);
ZfM_29(Zq0A4_172, (STRING)" {", 2L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Z240(Z236);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Z240(Z236);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z242(Z236);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         return this;", 21L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
Z182 = Z236;
Zq0A4_185(W_4->Y3, (Zq0A4_170)Z249);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
Z206(Zq0A4_172);
Z243(W_4->Y4, Z236);
}
Z243(W_4->Y5, Z244);
}
}

static void Z251
# ifdef HAVE_ARGS
(CHAR Z252[], LONGCARD O_2)
# else
(Z252, O_2)
CHAR Z252[];
LONGCARD O_2;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z252, O_2, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module GramJava, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z252, O_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZdnD8lgAA_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z255
# ifdef HAVE_ARGS
(BYTE Z256[], LONGCARD O_4, BYTE Z257[], LONGCARD O_3)
# else
(Z256, O_4, Z257, O_3)
BYTE Z256[];
LONGCARD O_4;
BYTE Z257[];
LONGCARD O_3;
# endif
{
INTEGER Z258;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_3 * sizeof (WORD) + O_4 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z257, O_3, WORD)
COPY_OPEN_ARRAY (Z256, O_4, WORD)
{
LONGINT B_3 = 0, B_4 = (INTEGER)(O_4 - 1);

if (B_3 <= B_4)
for (Z258 = B_3;; Z258 += 1) {
if (Z256[Z258] != Z257[Z258]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z258 >= B_4) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZdnD8lgAA_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_19 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_5 = &Z260->U_1.V_32.Y31;

if (W_5->Y2 != Zfb3DLQ_1) {
ZfM_29(Zq0A4_172, (STRING)"SCANNER ", 8L);
Zq0A4_192(W_5->Y2);
Z206(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"PARSER ", 7L);
Zq0A4_192(W_5->Y3);
Z206(Zq0A4_172);
Z205 = FALSE;
if (!ZqnGVQ_4(&W_5->Y4->U_1.V_17.Y16.Y2)) {
Z205 = TRUE;
}
Z180 = W_5->Y14;
while (Z180->U_1.V_1.Y0 == Zq0A4_144) {
if (!ZqnGVQ_4(&Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y2)) {
Z205 = TRUE;
}
Z180 = Z180->U_1.V_49.Y48.Y12;
}
if (Z205) {
ZfM_29(Zq0A4_172, (STRING)"IMPORT {", 8L);
Z206(Zq0A4_172);
Z226(Zq0A4_172, W_5->Y4->U_1.V_17.Y16.Y2, W_5->Y4->U_1.V_17.Y16.Y8);
Z180 = W_5->Y14;
while (Z180->U_1.V_1.Y0 == Zq0A4_144) {
Z226(Zq0A4_172, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y2, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y8);
Z180 = Z180->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
Z206(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"GLOBAL {", 8L);
Z206(Zq0A4_172);
Z226(Zq0A4_172, W_5->Y4->U_1.V_17.Y16.Y3, W_5->Y4->U_1.V_17.Y16.Y9);
Z180 = W_5->Y14;
while (Z180->U_1.V_1.Y0 == Zq0A4_144) {
Z226(Zq0A4_172, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y3, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y9);
Z180 = Z180->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"# ifndef yyParsAttribute", 24L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyParsAttribute ParsAttribute", 38L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef yyScanToPars", 21L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyScanToPars(s) new ZzScan (s)", 39L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"EXPORT {", 8L);
Z206(Zq0A4_172);
Z226(Zq0A4_172, W_5->Y4->U_1.V_17.Y16.Y1, W_5->Y4->U_1.V_17.Y16.Y7);
Z180 = W_5->Y14;
while (Z180->U_1.V_1.Y0 == Zq0A4_144) {
Z226(Zq0A4_172, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y1, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y7);
Z180 = Z180->U_1.V_49.Y48.Y12;
}
if (!ZpmCQ_25(ORD('v'), &Zq0A4_171)) {
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   class ParsAttribute {", 24L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Z239(W_5->Y2);
ZfM_29(Zq0A4_172, (STRING)".ScanAttribute yyScan () {", 26L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         throw new CocktailError (\"Parse stack type error\");", 60L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
Z275(W_5->Y13);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   class ZzScan extends ParsAttribute {", 39L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ZzScan (", 14L);
Z239(W_5->Y2);
ZfM_29(Zq0A4_172, (STRING)".ScanAttribute scanAttribute) {", 31L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         this.scanAttribute = scanAttribute;", 44L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Z239(W_5->Y2);
ZfM_29(Zq0A4_172, (STRING)".ScanAttribute yyScan () {", 26L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         return scanAttribute;", 30L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Z239(W_5->Y2);
ZfM_29(Zq0A4_172, (STRING)".ScanAttribute scanAttribute;", 29L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
Z243(W_5->Y13, (Zq0A4_153)Zq0A4_97);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"LOCAL {", 7L);
Z206(Zq0A4_172);
Z226(Zq0A4_172, W_5->Y4->U_1.V_17.Y16.Y4, W_5->Y4->U_1.V_17.Y16.Y10);
Z180 = W_5->Y14;
while (Z180->U_1.V_1.Y0 == Zq0A4_144) {
Z226(Zq0A4_172, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y4, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y10);
Z180 = Z180->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN {", 7L);
Z206(Zq0A4_172);
Z226(Zq0A4_172, W_5->Y4->U_1.V_17.Y16.Y5, W_5->Y4->U_1.V_17.Y16.Y11);
Z180 = W_5->Y14;
while (Z180->U_1.V_1.Y0 == Zq0A4_144) {
Z226(Zq0A4_172, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y5, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y11);
Z180 = Z180->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"CLOSE {", 7L);
Z206(Zq0A4_172);
Z226(Zq0A4_172, W_5->Y4->U_1.V_17.Y16.Y6, W_5->Y4->U_1.V_17.Y16.Y12);
Z180 = W_5->Y14;
while (Z180->U_1.V_1.Y0 == Zq0A4_144) {
Z226(Zq0A4_172, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y6, Z180->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y12);
Z180 = Z180->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"TOKEN", 5L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
Zq0A4_184(W_5->Y13, (Zq0A4_170)Z283);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"OPER", 4L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
Z284(W_5->Y9);
Z206(Zq0A4_172);
if (W_5->Y10->U_1.V_1.Y0 == Zq0A4_126) {
ZfM_29(Zq0A4_172, (STRING)"START", 5L);
Z206(Zq0A4_172);
Z287(W_5->Y10);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"RULE", 4L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
Zq0A4_184(W_5->Y13, (Zq0A4_170)ZdnD8lgAA_3);
return;
}
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_6 = &Z260->U_1.V_5.Y4;

if (!SET_IS_SUBSET1(SET_ELEM (Zq0A4_38) | SET_ELEM (Zq0A4_36), W_6->Y2)) {
goto EXIT_1;
}
Z182 = Z260;
Z203 = 0;
Z288(Z260);
return;
}
} EXIT_1:;
}
}

void ZdnD8lgAA_4
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_18 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_7 = &Z260->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"j", 1L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public class ScanAttribute extends Position {", 48L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ScanAttribute (int line, int column) {", 51L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         super (line, column);", 30L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ScanAttribute (Position other) {", 45L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         super (other.line, other.column);", 42L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
Zq0A4_184(W_7->Y13, (Zq0A4_170)Z290);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
Z206(Zq0A4_172);
Zq0A4_184(W_7->Y13, (Zq0A4_170)Z291);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"%%", 2L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public ScanAttribute errorAttribute (int token) {", 52L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"       switch (token) {", 23L);
Z206(Zq0A4_172);
Zq0A4_184(W_7->Y13, (Zq0A4_170)Z292);
ZfM_29(Zq0A4_172, (STRING)"           default:", 19L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"              return new ScanAttribute (attribute);", 51L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"       }", 8L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"%%", 2L);
Z206(Zq0A4_172);
Zq0A4_184(W_7->Y13, (Zq0A4_170)ZdnD8lgAA_4);
return;
}
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_8 = &Z260->U_1.V_5.Y4;

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_39) | SET_ELEM (Zq0A4_36), W_8->Y2)) {
Zq0A4_195((LONGINT)W_8->Y10);
if (IN(Zq0A4_45, W_8->Y2)) {
ZfM_29(Zq0A4_172, (STRING)" S ", 3L);
} else {
ZfM_29(Zq0A4_172, (STRING)" N ", 3L);
}
if (IN(Zq0A4_16, W_8->Y2) && !IN(Zq0A4_43, W_8->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_195((LONGINT)W_8->Y10);
} else {
Zq0A4_192(W_8->Y8);
}
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_8->Y1);
Z206(Zq0A4_172);
}
return;
}
}
}

static void Z292
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_17 Z261;

for (;;) {
for (;;) {
if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL) {
switch (Z260->U_1.V_1.Y0) {
case Zq0A4_100:;
{
register Zq0A4_226 *W_9 = &Z260->U_1.V_5.Y4;

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_39) | SET_ELEM (Zq0A4_36) | SET_ELEM (Zq0A4_45), W_9->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"           case /* ", 19L);
Zq0A4_194(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)" */ ", 4L);
Zq0A4_195((LONGINT)W_9->Y10);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Z206(Zq0A4_172);
if (IN(Zq0A4_16, W_9->Y2) && !IN(Zq0A4_43, W_9->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"              {  ", 17L);
Z233((LONGINT)W_9->Y10);
ZfM_29(Zq0A4_172, (STRING)" pAttribute", 11L);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Z233((LONGINT)W_9->Y10);
ZfM_29(Zq0A4_172, (STRING)" (attribute);", 13L);
Z206(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"              {  ", 17L);
Z234(W_9->Y8);
ZfM_29(Zq0A4_172, (STRING)" pAttribute", 11L);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Z234(W_9->Y8);
ZfM_29(Zq0A4_172, (STRING)" (attribute);", 13L);
Z206(Zq0A4_172);
}
Z182 = Z260;
Zq0A4_185(Z260, (Zq0A4_170)Z292);
ZfM_29(Zq0A4_172, (STRING)"                 return pAttribute;", 35L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"              }", 15L);
Z206(Zq0A4_172);
}
return;
}
break;
case Zq0A4_107:;
{
register Zq0A4_233 *W_10 = &Z260->U_1.V_12.Y11;

Z292(W_10->Y4);
return;
}
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_11 = &Z260->U_1.V_42.Y41;

ZfM_29(Zq0A4_172, (STRING)"                ", 16L);
Z292(W_11->Y4);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Z292(W_11->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
Z292(W_11->Y1);
return;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_12 = &Z260->U_1.V_43.Y42;

ZfM_29(Zq0A4_172, (STRING)"                ", 16L);
Z292(W_12->Y4);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Z292(W_12->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
Z292(W_12->Y1);
return;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_13 = &Z260->U_1.V_44.Y43;

Z292(W_13->Y5);
Z260 = W_13->Y1;
goto EXIT_3;
}
break;
case Zq0A4_140:;
{
register Zq0A4_266 *W_14 = &Z260->U_1.V_45.Y44;

Z260 = W_14->Y1;
goto EXIT_3;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_15 = &Z260->U_1.V_46.Y45;

if (W_15->Y4 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"                if (! (", 23L);
Z292(W_15->Y4);
ZfM_29(Zq0A4_172, (STRING)")) { ", 5L);
Z292(W_15->Y5);
ZfM_29(Zq0A4_172, (STRING)"; }", 3L);
Z206(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"                ", 16L);
Z292(W_15->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
Z260 = W_15->Y1;
goto EXIT_3;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_16 = &Z260->U_1.V_22.Y21;

Z183 = Zq0A4_183(Z182, W_16->Y2);
if (Z183 == Zq0A4_97) {
Zq0A4_192(W_16->Y2);
} else {
ZfM_29(Zq0A4_172, (STRING)"pAttribute", 10L);
if (W_16->Y2 == Zq0A4_74) {
ZfM_29(Zq0A4_172, (STRING)".position ()", 12L);
Z206(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_16->Y2);
}
}
Z292(W_16->Y1);
return;
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_17 = &Z260->U_1.V_24.Y23;

Z213(Zq0A4_172, W_17->Y2);
Z292(W_17->Y1);
return;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_18 = &Z260->U_1.V_25.Y24;

Z292(W_18->Y2);
Z292(W_18->Y1);
return;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_19 = &Z260->U_1.V_28.Y27;

Z213(Zq0A4_172, W_19->Y1);
Z292(W_19->Y2);
return;
}
break;
default:
break;
}
}
return;
} EXIT_3:;
} EXIT_2:;
}

static void Z290
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_16 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_20 = &Z260->U_1.V_5.Y4;

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_39) | SET_ELEM (Zq0A4_36) | SET_ELEM (Zq0A4_45), W_20->Y2)) {
Z206(Zq0A4_172);
if (IN(Zq0A4_16, W_20->Y2) && !IN(Zq0A4_43, W_20->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"      /* ", 9L);
Zq0A4_194(W_20->Y1);
ZfM_29(Zq0A4_172, (STRING)" */ ", 4L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Z233((LONGINT)W_20->Y10);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_20->Y10);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
Z206(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Z234(W_20->Y8);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_20->Y8);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
Z206(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"         throw new CocktailError (\"Scanner attribute type error\");", 66L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
}
return;
}
}
}

static void Z291
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_15 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_21 = &Z260->U_1.V_5.Y4;

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_39) | SET_ELEM (Zq0A4_36) | SET_ELEM (Zq0A4_45), W_21->Y2)) {
Z206(Zq0A4_172);
if (IN(Zq0A4_16, W_21->Y2) && !IN(Zq0A4_43, W_21->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"   /* ", 6L);
Zq0A4_194(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)" */", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public class ", 16L);
Z233((LONGINT)W_21->Y10);
ZfM_29(Zq0A4_172, (STRING)" extends ScanAttribute {", 24L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Z233((LONGINT)W_21->Y10);
ZfM_29(Zq0A4_172, (STRING)" (Position other", 16L);
} else {
ZfM_29(Zq0A4_172, (STRING)"   public class ", 16L);
Z234(W_21->Y8);
ZfM_29(Zq0A4_172, (STRING)" extends ScanAttribute {", 24L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Z234(W_21->Y8);
ZfM_29(Zq0A4_172, (STRING)" (Position other", 16L);
}
Z182 = Z260;
Z202 = FALSE;
Zq0A4_185(Z260, (Zq0A4_170)Z308);
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         super (other);", 23L);
Z206(Zq0A4_172);
Zq0A4_185(Z260, (Zq0A4_170)Z309);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
if (IN(Zq0A4_16, W_21->Y2) && !IN(Zq0A4_43, W_21->Y2)) {
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Z233((LONGINT)W_21->Y10);
} else {
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Z234(W_21->Y8);
}
ZfM_29(Zq0A4_172, (STRING)" (Position other) {", 19L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         super (other);", 23L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
Z206(Zq0A4_172);
Zq0A4_185(Z260, (Zq0A4_170)Z249);
Z206(Zq0A4_172);
if (IN(Zq0A4_16, W_21->Y2) && !IN(Zq0A4_43, W_21->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"      /* ", 9L);
Zq0A4_194(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)" */", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Z233((LONGINT)W_21->Y10);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_21->Y10);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
Z206(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Z234(W_21->Y8);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_21->Y8);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
Z206(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"         return this;", 21L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
Z206(Zq0A4_172);
}
return;
}
}
}

static void Z275
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_14 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_22 = &Z260->U_1.V_5.Y4;

if (IN(Zq0A4_38, W_22->Y2) && (SET_IS_SUBSET1(SET_ELEM (Zq0A4_36) | SET_ELEM (Zq0A4_45), W_22->Y2) || Z246(W_22->Y4, (BOOLEAN)IN(Zq0A4_45, W_22->Y2)))) {
Z206(Zq0A4_172);
if (IN(Zq0A4_16, W_22->Y2) && !IN(Zq0A4_43, W_22->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"      /* ", 9L);
Zq0A4_194(W_22->Y1);
ZfM_29(Zq0A4_172, (STRING)" */", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Z228((LONGINT)W_22->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_22->Y1);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
Z206(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Z230(W_22->Y8);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_22->Y8);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
Z206(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"         throw new CocktailError (\"Parse stack type error\");", 60L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
Z206(Zq0A4_172);
}
Z275(W_22->Y4);
Z275(W_22->Y5);
return;
}
}
}

static void Z283
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_13 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_23 = &Z260->U_1.V_5.Y4;

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_39) | SET_ELEM (Zq0A4_36), W_23->Y2)) {
Z310(W_23->Y1);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Zq0A4_195((LONGINT)W_23->Y10);
if (W_23->Y11 != 10) {
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)W_23->Y11);
}
if (W_23->Y9 != Zfb3DLQ_1) {
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_23->Y9);
}
Z206(Zq0A4_172);
}
return;
}
}
}

static void Z287
# ifdef HAVE_ARGS
(Zq0A4_153 Z313)
# else
(Z313)
Zq0A4_153 Z313;
# endif
{
struct S_12 Z261;

for (;;) {
for (;;) {
if (Z313 == Zq0A4_97) {
return;
}
if (Z313 != NIL && Z313->U_1.V_1.Y0 == Zq0A4_126) {
{
register Zq0A4_252 *W_24 = &Z313->U_1.V_31.Y30;

ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_24->Y1);
Z313 = W_24->Y3;
goto EXIT_5;
}
}
return;
} EXIT_5:;
} EXIT_4:;
}

static void Z308
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_11 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_106) {
{
register Zq0A4_232 *W_25 = &Z260->U_1.V_11.Y10;

if ((Zq0A4_176 & W_25->Y6) == 0X0L) {
if (IN(Zq0A4_38, Z182->U_1.V_5.Y4.Y2) || W_25->Y3 != Zq0A4_74) {
if (Z202) {
Z202 = FALSE;
} else {
ZfM_29(Zq0A4_172, (STRING)",", 1L);
Z206(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(W_25->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_25->Y3);
}
}
return;
}
}
}

static void Z309
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_10 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_106) {
{
register Zq0A4_232 *W_26 = &Z260->U_1.V_11.Y10;

if ((Zq0A4_176 & W_26->Y6) == 0X0L) {
if (IN(Zq0A4_38, Z182->U_1.V_5.Y4.Y2) || W_26->Y3 != Zq0A4_74) {
ZfM_29(Zq0A4_172, (STRING)"         this.", 14L);
Zq0A4_192(W_26->Y3);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Zq0A4_192(W_26->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
}
return;
}
}
}

static void Z249
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_9 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_106) {
{
register Zq0A4_232 *W_27 = &Z260->U_1.V_11.Y10;

if ((Zq0A4_176 & W_27->Y6) == 0X0L) {
if (IN(Zq0A4_38, Z182->U_1.V_5.Y4.Y2) || W_27->Y3 != Zq0A4_74) {
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Zq0A4_192(W_27->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_27->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
}
return;
}
}
}

static void Z284
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_8 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_131) {
{
register Zq0A4_257 *W_28 = &Z260->U_1.V_36.Y35;

ZfM_29(Zq0A4_172, (STRING)"  LEFT ", 7L);
Z284(W_28->Y1);
Z206(Zq0A4_172);
Z284(W_28->Y2);
return;
}
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_132) {
{
register Zq0A4_258 *W_29 = &Z260->U_1.V_37.Y36;

ZfM_29(Zq0A4_172, (STRING)"  RIGHT", 7L);
Z284(W_29->Y1);
Z206(Zq0A4_172);
Z284(W_29->Y2);
return;
}
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_133) {
{
register Zq0A4_259 *W_30 = &Z260->U_1.V_38.Y37;

ZfM_29(Zq0A4_172, (STRING)"  NONE ", 7L);
Z284(W_30->Y1);
Z206(Zq0A4_172);
Z284(W_30->Y2);
return;
}
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_126) {
{
register Zq0A4_252 *W_31 = &Z260->U_1.V_31.Y30;

ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z310(W_31->Y1);
Z284(W_31->Y3);
return;
}
}
}

static void Z288
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_7 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_32 = &Z260->U_1.V_5.Y4;

if (W_32->Y4->U_1.V_1.Y0 == Zq0A4_99) {
{
register Zq0A4_226 *W_33 = &Z182->U_1.V_5.Y4;

if (IN(Zq0A4_16, W_33->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_195((LONGINT)W_33->Y1);
} else {
Z310(W_33->Y1);
}
}
ZfM_29(Zq0A4_172, (STRING)" : ", 3L);
Z181 = Z260;
Z192 = 0;
Z201 = FALSE;
Z193 = FALSE;
INC(Z203);
Zq0A4_185(Z260, (Zq0A4_170)Z319);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Z206(Zq0A4_172);
Z192 = 0;
Z193 = TRUE;
Zq0A4_185(Z260, (Zq0A4_170)Z320);
} else {
Z319(W_32->Y4);
}
return;
}
}
}

static void Z319
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_6 Z261;

for (;;) {
for (;;) {
if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL) {
switch (Z260->U_1.V_1.Y0) {
case Zq0A4_100:;
{
register Zq0A4_226 *W_34 = &Z260->U_1.V_5.Y4;

Z221(Zq0A4_172, W_34->Y7, (STRING)" D pre Class", 12L);
Z288(Z260);
Z260 = W_34->Y5;
goto EXIT_7;
}
break;
case Zq0A4_105:;
{
register Zq0A4_231 *W_35 = &Z260->U_1.V_10.Y9;

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_16) | SET_ELEM (Zq0A4_38), W_35->Y8->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_195((LONGINT)W_35->Y4);
} else {
Z310(W_35->Y4);
}
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
return;
}
break;
case Zq0A4_107:;
{
register Zq0A4_233 *W_36 = &Z260->U_1.V_12.Y11;

if (!ZpmCQ_25(ORD('v'), &Zq0A4_171)) {
if (Z321(Z181, Z260)) {
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
if (Z192 == 0) {
{
register Zq0A4_226 *W_37 = &Z182->U_1.V_5.Y4;

if (IN(Zq0A4_45, W_37->Y2)) {
if (IN(Zq0A4_16, W_37->Y2)) {
Z228((LONGINT)W_37->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_37->Y1);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Z228((LONGINT)W_37->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z231((LONGINT)W_37->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
} else {
Z230(W_37->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_37->Y1);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Z230(W_37->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z232(W_37->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
}
}
} else {
if (!Z201) {
{
register Zq0A4_226 *W_38 = &Z182->U_1.V_5.Y4;

if (IN(Zq0A4_45, W_38->Y2)) {
if (IN(Zq0A4_16, W_38->Y2)) {
Z228((LONGINT)W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)" = $", 4L);
Zq0A4_195((LONGINT)Z192);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Z231((LONGINT)W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z231((LONGINT)W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
} else {
Z230(W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)" = $", 4L);
Zq0A4_195((LONGINT)Z192);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Z232(W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z232(W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
}
}
}
}
Z221(Zq0A4_172, W_36->Y3, (STRING)" F pre ActionPart", 17L);
Z319(W_36->Y4);
ZfM_29(Zq0A4_172, (STRING)"} ", 2L);
} else {
if (W_36->Y5 == 0) {
W_36->Y5 = Z235(Z182);
}
ZfM_29(Zq0A4_172, (STRING)"xx_", 3L);
Zq0A4_192(W_36->Y5);
ZfM_29(Zq0A4_172, (STRING)"_", 1L);
Zq0A4_195((LONGINT)W_36->Y6);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
}
Z192 = W_36->Y6;
}
return;
}
break;
case Zq0A4_108:;
{
register Zq0A4_234 *W_39 = &Z260->U_1.V_13.Y12;

if (!ZpmCQ_25(ORD('v'), &Zq0A4_171)) {
if (Z321(Z181, Z260)) {
ZfM_29(Zq0A4_172, (STRING)"[", 1L);
if (Z192 == 0) {
{
register Zq0A4_226 *W_40 = &Z182->U_1.V_5.Y4;

if (IN(Zq0A4_45, W_40->Y2)) {
if (IN(Zq0A4_16, W_40->Y2)) {
Z228((LONGINT)W_40->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_40->Y1);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Z228((LONGINT)W_40->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z231((LONGINT)W_40->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
} else {
Z230(W_40->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_40->Y1);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Z230(W_40->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z232(W_40->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
}
}
} else {
{
register Zq0A4_226 *W_41 = &Z182->U_1.V_5.Y4;

if (IN(Zq0A4_45, W_41->Y2)) {
if (IN(Zq0A4_16, W_41->Y2)) {
Z228((LONGINT)W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)" = $", 4L);
Zq0A4_195((LONGINT)Z192);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Z231((LONGINT)W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z231((LONGINT)W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
} else {
Z230(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)" = $", 4L);
Zq0A4_195((LONGINT)Z192);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Z232(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z232(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
}
}
}
Z201 = TRUE;
Z221(Zq0A4_172, W_39->Y3, (STRING)" G pre UCActionPart", 19L);
Z319(W_39->Y4);
ZfM_29(Zq0A4_172, (STRING)"] ", 2L);
} else {
if (W_39->Y5 == 0) {
W_39->Y5 = Z235(Z182);
}
ZfM_29(Zq0A4_172, (STRING)"xx_", 3L);
Zq0A4_192(W_39->Y5);
ZfM_29(Zq0A4_172, (STRING)"_", 1L);
Zq0A4_195((LONGINT)W_39->Y6);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
}
Z192 = W_39->Y6;
}
return;
}
break;
case Zq0A4_109:;
{
register Zq0A4_235 *W_42 = &Z260->U_1.V_14.Y13;

Z221(Zq0A4_172, W_42->Y4, (STRING)" H pre TrialParse", 17L);
ZfM_29(Zq0A4_172, (STRING)"? ", 2L);
if (W_42->Y5) {
ZfM_29(Zq0A4_172, (STRING)"- ", 2L);
}
Zq0A4_192(W_42->Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
return;
}
break;
case Zq0A4_110:;
{
register Zq0A4_236 *W_43 = &Z260->U_1.V_15.Y14;

Z221(Zq0A4_172, W_43->Y4, (STRING)" I pre CondParse", 16L);
ZfM_29(Zq0A4_172, (STRING)"? ", 2L);
if (W_43->Y5) {
ZfM_29(Zq0A4_172, (STRING)"- ", 2L);
}
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
Z319(W_43->Y3);
ZfM_29(Zq0A4_172, (STRING)"} ", 2L);
return;
}
break;
case Zq0A4_111:;
{
register Zq0A4_237 *W_44 = &Z260->U_1.V_16.Y15;

Z221(Zq0A4_172, W_44->Y4, (STRING)" J pre PrecClause", 17L);
ZfM_29(Zq0A4_172, (STRING)"PREC ", 5L);
Zq0A4_192(W_44->Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
return;
}
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_45 = &Z260->U_1.V_42.Y41;

Z221(Zq0A4_172, W_45->Y3, (STRING)" K pre Assign", 13L);
Z319(W_45->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z319(W_45->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
Z260 = W_45->Y1;
goto EXIT_7;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_46 = &Z260->U_1.V_43.Y42;

Z221(Zq0A4_172, W_46->Y3, (STRING)" L pre Copy", 11L);
Z319(W_46->Y4);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Z319(W_46->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
if (W_46->Y2.Y1 == 0) {
Z206(Zq0A4_172);
}
Z260 = W_46->Y1;
goto EXIT_7;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_47 = &Z260->U_1.V_44.Y43;

Z221(Zq0A4_172, W_47->Y3, (STRING)" M pre TargetCode", 17L);
Z319(W_47->Y5);
if (!ZmfDOBA_0(W_47->Y5)) {
ZfM_29(Zq0A4_172, (STRING)";", 1L);
}
Z260 = W_47->Y1;
goto EXIT_7;
}
break;
case Zq0A4_140:;
{
register Zq0A4_266 *W_48 = &Z260->U_1.V_45.Y44;

Z260 = W_48->Y1;
goto EXIT_7;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_49 = &Z260->U_1.V_46.Y45;

Z221(Zq0A4_172, W_49->Y3, (STRING)" O pre Check", 12L);
if (W_49->Y4 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"if (! (", 7L);
Z319(W_49->Y4);
ZfM_29(Zq0A4_172, (STRING)")) { ", 5L);
Z319(W_49->Y5);
ZfM_29(Zq0A4_172, (STRING)"; }", 3L);
Z206(Zq0A4_172);
if (W_49->Y6->U_1.V_1.Y0 != Zq0A4_135) {
ZfM_29(Zq0A4_172, (STRING)" else ", 6L);
Z319(W_49->Y6);
}
} else {
Z319(W_49->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
Z319(W_49->Y6);
}
Z260 = W_49->Y1;
goto EXIT_7;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_50 = &Z260->U_1.V_21.Y20;

Z183 = Zq0A4_183(Z181, W_50->Y2);
if (Z183 != Zq0A4_97) {
Z180 = Z183->U_1.V_10.Y9.Y8;
if (Z180 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"$", 1L);
if (!Z193) {
Zq0A4_195((LONGINT)Z183->U_1.V_10.Y9.Y14);
} else {
Zq0A4_195((LONGINT)(SHORTINT)(Z183->U_1.V_10.Y9.Y14 + 1 - Z191));
}
if (IN(Zq0A4_38, Z180->U_1.V_5.Y4.Y2)) {
if (IN(Zq0A4_16, Z180->U_1.V_5.Y4.Y2) && !IN(Zq0A4_43, Z180->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)".yy_", 4L);
Zq0A4_195((LONGINT)Z180->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"()", 2L);
} else {
ZfM_29(Zq0A4_172, (STRING)".yy", 3L);
Zq0A4_192(Z180->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"()", 2L);
}
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_50->Y3);
} else {
ZfM_29(Zq0A4_172, (STRING)".yyScan ()", 10L);
if (W_50->Y3 == Zq0A4_74) {
ZfM_29(Zq0A4_172, (STRING)".position ()", 12L);
} else if (W_50->Y3 == Zq0A4_73) {
} else if (IN(Zq0A4_16, Z180->U_1.V_5.Y4.Y2) && !IN(Zq0A4_43, Z180->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)".yy_", 4L);
Zq0A4_195((LONGINT)Z180->U_1.V_5.Y4.Y10);
ZfM_29(Zq0A4_172, (STRING)"().", 3L);
Zq0A4_192(W_50->Y3);
} else {
ZfM_29(Zq0A4_172, (STRING)".yy", 3L);
Zq0A4_192(Z180->U_1.V_5.Y4.Y8);
ZfM_29(Zq0A4_172, (STRING)"().", 3L);
Zq0A4_192(W_50->Y3);
}
}
} else {
Zq0A4_192(W_50->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_50->Y3);
}
} else {
Zq0A4_192(W_50->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_50->Y3);
}
Z260 = W_50->Y1;
goto EXIT_7;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_51 = &Z260->U_1.V_22.Y21;

Z183 = Zq0A4_183(Z181, W_51->Y2);
if (Z183 == Zq0A4_97 || IN(Zq0A4_16, Z183->U_1.V_11.Y10.Y6) || Z183->U_1.V_1.Y0 == Zq0A4_105) {
Zq0A4_192(W_51->Y2);
} else if (IN(Zq0A4_16, Z182->U_1.V_5.Y4.Y2) && !IN(Zq0A4_43, Z182->U_1.V_5.Y4.Y2)) {
Z231((LONGINT)Z182->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_51->Y2);
} else {
Z232(Z182->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_51->Y2);
}
Z260 = W_51->Y1;
goto EXIT_7;
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_52 = &Z260->U_1.V_24.Y23;

Z213(Zq0A4_172, W_52->Y2);
Z260 = W_52->Y1;
goto EXIT_7;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_53 = &Z260->U_1.V_25.Y24;

Z319(W_53->Y2);
Z260 = W_53->Y1;
goto EXIT_7;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_54 = &Z260->U_1.V_28.Y27;

Z213(Zq0A4_172, W_54->Y1);
Z260 = W_54->Y2;
goto EXIT_7;
}
break;
default:
break;
}
}
return;
} EXIT_7:;
} EXIT_6:;
}

static void Z320
# ifdef HAVE_ARGS
(Zq0A4_153 Z260)
# else
(Z260)
Zq0A4_153 Z260;
# endif
{
struct S_5 Z261;

if (Z260 == Zq0A4_97) {
return;
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_107) {
{
register Zq0A4_233 *W_55 = &Z260->U_1.V_12.Y11;

if (!ZpmCQ_25(ORD('v'), &Zq0A4_171)) {
if (!IN(Zq0A4_32, W_55->Y7) && !Z321(Z181, Z260)) {
INCL(W_55->Y7, Zq0A4_32);
Z191 = W_55->Y6;
ZfM_29(Zq0A4_172, (STRING)"xx_", 3L);
Zq0A4_192(W_55->Y5);
ZfM_29(Zq0A4_172, (STRING)"_", 1L);
Zq0A4_195((LONGINT)W_55->Y6);
ZfM_29(Zq0A4_172, (STRING)" : {", 4L);
{
register Zq0A4_226 *W_56 = &Z182->U_1.V_5.Y4;

if (Z192 == 0) {
if (IN(Zq0A4_45, W_56->Y2)) {
if (IN(Zq0A4_16, W_56->Y2)) {
Z228((LONGINT)W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Z228((LONGINT)W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z231((LONGINT)W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
} else {
Z230(W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Z230(W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z232(W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
}
} else {
if (IN(Zq0A4_45, W_56->Y2)) {
if (IN(Zq0A4_16, W_56->Y2)) {
Z228((LONGINT)W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)" = $", 4L);
Zq0A4_195((LONGINT)(SHORTINT)(Z192 + 1 - Z191));
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Z231((LONGINT)W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z231((LONGINT)W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
} else {
Z230(W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)" = $", 4L);
Zq0A4_195((LONGINT)(SHORTINT)(Z192 + 1 - Z191));
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Z232(W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z232(W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
}
}
}
Z319(W_55->Y4);
ZfM_29(Zq0A4_172, (STRING)"} .", 3L);
Z206(Zq0A4_172);
}
Z192 = W_55->Y6;
}
return;
}
}
if (Z260 != NIL && Z260->U_1.V_1.Y0 == Zq0A4_108) {
{
register Zq0A4_234 *W_57 = &Z260->U_1.V_13.Y12;

if (!ZpmCQ_25(ORD('v'), &Zq0A4_171)) {
if (!IN(Zq0A4_32, W_57->Y7) && !Z321(Z181, Z260)) {
INCL(W_57->Y7, Zq0A4_32);
Z191 = W_57->Y6;
ZfM_29(Zq0A4_172, (STRING)"xx_", 3L);
Zq0A4_192(W_57->Y5);
ZfM_29(Zq0A4_172, (STRING)"_", 1L);
Zq0A4_195((LONGINT)W_57->Y6);
ZfM_29(Zq0A4_172, (STRING)" : [", 4L);
if (Z192 == 0) {
{
register Zq0A4_226 *W_58 = &Z182->U_1.V_5.Y4;

if (IN(Zq0A4_45, W_58->Y2)) {
if (IN(Zq0A4_16, W_58->Y2)) {
Z228((LONGINT)W_58->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_58->Y1);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Z228((LONGINT)W_58->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z231((LONGINT)W_58->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
} else {
Z230(W_58->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_58->Y1);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Z230(W_58->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z232(W_58->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
}
}
} else {
{
register Zq0A4_226 *W_59 = &Z182->U_1.V_5.Y4;

if (IN(Zq0A4_45, W_59->Y2)) {
if (IN(Zq0A4_16, W_59->Y2)) {
Z228((LONGINT)W_59->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z231((LONGINT)W_59->Y1);
ZfM_29(Zq0A4_172, (STRING)" = $", 4L);
Zq0A4_195((LONGINT)(SHORTINT)(Z192 + 1 - Z191));
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Z231((LONGINT)W_59->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z231((LONGINT)W_59->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
} else {
Z230(W_59->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z232(W_59->Y1);
ZfM_29(Zq0A4_172, (STRING)" = $", 4L);
Zq0A4_195((LONGINT)(SHORTINT)(Z192 + 1 - Z191));
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Z232(W_59->Y1);
ZfM_29(Zq0A4_172, (STRING)"();", 3L);
Z206(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"$$ = ", 5L);
Z232(W_59->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
Z206(Zq0A4_172);
}
}
}
}
Z319(W_57->Y4);
ZfM_29(Zq0A4_172, (STRING)"] .", 3L);
Z206(Zq0A4_172);
}
Z192 = W_57->Y6;
}
return;
}
}
}

static void Z310
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z238)
# else
(Z238)
Zfb3DLQ_0 Z238;
# endif
{
struct S_4 Z261;

if (Z238 == Z184) {
ZfM_29(Zq0A4_172, (STRING)"\\", 1L);
Zq0A4_192(Z238);
return;
}
if (Z238 == Z185) {
ZfM_29(Zq0A4_172, (STRING)"\\", 1L);
Zq0A4_192(Z238);
return;
}
if (Z238 == Z186) {
ZfM_29(Zq0A4_172, (STRING)"\\", 1L);
Zq0A4_192(Z238);
return;
}
if (Z238 == Z187) {
ZfM_29(Zq0A4_172, (STRING)"\\", 1L);
Zq0A4_192(Z238);
return;
}
if (Z238 == Z188) {
ZfM_29(Zq0A4_172, (STRING)"\\", 1L);
Zq0A4_192(Z238);
return;
}
if (Z238 == Z189) {
ZfM_29(Zq0A4_172, (STRING)"\\", 1L);
Zq0A4_192(Z238);
return;
}
if (Z238 == Z190) {
ZfM_29(Zq0A4_172, (STRING)"\\", 1L);
Zq0A4_192(Z238);
return;
}
Zq0A4_192(Z238);
return;
}

static BOOLEAN Z321
# ifdef HAVE_ARGS
(Zq0A4_153 Z331, Zq0A4_153 Z332)
# else
(Z331, Z332)
Zq0A4_153 Z331;
Zq0A4_153 Z332;
# endif
{
struct S_3 Z261;

if (Z331 == Zq0A4_97) {
return FALSE;
}
if (Z332 == Zq0A4_97) {
return FALSE;
}
for (;;) {
Z194 = FALSE;
Z195 = FALSE;
Z196 = FALSE;
Z197 = FALSE;
Z198 = FALSE;
Z333(Z331, Z332);
if (!Z198) {
goto EXIT_8;
}
return TRUE;
} EXIT_8:;
return FALSE;
}

static void Z333
# ifdef HAVE_ARGS
(Zq0A4_153 Z260, Zq0A4_153 Z334)
# else
(Z260, Z334)
Zq0A4_153 Z260;
Zq0A4_153 Z334;
# endif
{
struct S_2 Z261;

for (;;) {
for (;;) {
if (Z260 == Zq0A4_97) {
return;
}
if (Z334 == Zq0A4_97) {
return;
}
if (Z260 != NIL) {
switch (Z260->U_1.V_1.Y0) {
case Zq0A4_100:;
for (;;) {
{
register Zq0A4_226 *W_60 = &Z260->U_1.V_5.Y4;

Z333(W_60->Y3, Z334);
if (!!Z198) {
goto EXIT_11;
}
Z333(W_60->Y6, Z334);
return;
}
} EXIT_11:;
break;
case Zq0A4_105:;
{
register Zq0A4_231 *W_61 = &Z260->U_1.V_10.Y9;

Z333(W_61->Y1, Z334);
Z194 = TRUE;
Z195 = TRUE;
Z196 = TRUE;
Z197 = TRUE;
return;
}
break;
case Zq0A4_106:;
{
register Zq0A4_232 *W_62 = &Z260->U_1.V_11.Y10;

Z260 = W_62->Y1;
goto EXIT_10;
}
break;
case Zq0A4_107:;
{
register Zq0A4_233 *W_63 = &Z260->U_1.V_12.Y11;

Z333(W_63->Y1, Z334);
if (Z260 == Z334 && !Z194) {
Z198 = TRUE;
}
Z194 = TRUE;
return;
}
break;
case Zq0A4_108:;
{
register Zq0A4_234 *W_64 = &Z260->U_1.V_13.Y12;

Z333(W_64->Y1, Z334);
if (Z260 == Z334 && !Z195) {
Z198 = TRUE;
}
Z195 = TRUE;
Z194 = TRUE;
return;
}
break;
case Zq0A4_109:;
{
register Zq0A4_235 *W_65 = &Z260->U_1.V_14.Y13;

Z333(W_65->Y1, Z334);
if (Z260 == Z334 && !Z196) {
Z198 = TRUE;
}
Z196 = TRUE;
return;
}
break;
case Zq0A4_110:;
{
register Zq0A4_236 *W_66 = &Z260->U_1.V_15.Y14;

Z333(W_66->Y1, Z334);
if (Z260 == Z334 && !Z196) {
Z198 = TRUE;
}
Z196 = TRUE;
return;
}
break;
case Zq0A4_111:;
{
register Zq0A4_237 *W_67 = &Z260->U_1.V_16.Y15;

Z333(W_67->Y1, Z334);
if (Z260 == Z334 && !Z197) {
Z198 = TRUE;
}
Z197 = TRUE;
return;
}
break;
default:
break;
}
}
return;
} EXIT_10:;
} EXIT_9:;
}

static BOOLEAN Z246
# ifdef HAVE_ARGS
(Zq0A4_153 Z336, BOOLEAN Z337)
# else
(Z336, Z337)
Zq0A4_153 Z336;
BOOLEAN Z337;
# endif
{
struct S_1 Z261;

for (;;) {
for (;;) {
if (Z336 == Zq0A4_97) {
return FALSE;
}
if (Z336 != NIL && Z336->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_68 = &Z336->U_1.V_5.Y4;

if (!((Z337 || IN(Zq0A4_45, W_68->Y2)) && IN(Zq0A4_36, W_68->Y2))) {
goto EXIT_14;
}
return TRUE;
}
} EXIT_14:;
for (;;) {
{
register Zq0A4_226 *W_69 = &Z336->U_1.V_5.Y4;

if (!Z246(W_69->Y4, (BOOLEAN)(Z337 || IN(Zq0A4_45, W_69->Y2)))) {
goto EXIT_15;
}
return TRUE;
}
} EXIT_15:;
{
register Zq0A4_226 *W_70 = &Z336->U_1.V_5.Y4;

Z336 = W_70->Y5;
goto EXIT_13;
}
}
return FALSE;
} EXIT_13:;
} EXIT_12:;
}

void ZdnD8lgAA_5
 ARGS ((void))
{
Zp1PEAFD_13((STRING)"OPER", 4L, &Z199);
Z184 = Zfb3DLQ_2(&Z199);
Zp1PEAFD_13((STRING)"RIGHT", 5L, &Z199);
Z186 = Zfb3DLQ_2(&Z199);
Zp1PEAFD_13((STRING)"LEFT", 4L, &Z199);
Z185 = Zfb3DLQ_2(&Z199);
Zp1PEAFD_13((STRING)"NONE", 4L, &Z199);
Z187 = Zfb3DLQ_2(&Z199);
Zp1PEAFD_13((STRING)"PREC", 4L, &Z199);
Z188 = Zfb3DLQ_2(&Z199);
Zp1PEAFD_13((STRING)"START", 5L, &Z199);
Z189 = Zfb3DLQ_2(&Z199);
Zp1PEAFD_13((STRING)"RULE", 4L, &Z199);
Z190 = Zfb3DLQ_2(&Z199);
}

void ZdnD8lgAA_6
 ARGS ((void))
{
}

static void Z340
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_GramJava ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Position ();
BEGIN_Parser ();
BEGIN_Tree ();
BEGIN_StringM ();
BEGIN_Strings ();
BEGIN_Texts ();
BEGIN_Lists ();

ZdnD8lgAA_0 = ZfM_1;
ZdnD8lgAA_2 = Z340;
ZdnD8lgAA_5();
}
