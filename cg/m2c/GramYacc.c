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

#ifndef DEFINITION_StringM
#include "StringM.h"
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

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_GramYacc
#include "GramYacc.h"
#endif

ZfM_3 ZdnD80oy0_0;
BOOLEAN ZdnD80oy0_1;
PROC ZdnD80oy0_2;

static Zq0A4_153 Z168, Z169, Z170, Z171;
static SHORTCARD Z172, Z173;
static BOOLEAN Z174, Z175, Z176, Z177, Z178, Z179;
static Zp1PEAFD_2 Z180, Z181;
static CARDINAL Z182;
static Zq0A4_153 Z183 ARGS ((Zq0A4_153 Z142));
static Zfb3DLQ_0 Z186 ARGS ((Zq0A4_153 Z187));
static void Z190 ARGS ((CHAR Z191[], LONGCARD O_1));
static BOOLEAN Z194 ARGS ((BYTE Z195[], LONGCARD O_3, BYTE Z196[], LONGCARD O_2));
struct S_12 {
union {
char dummy;
} U_1;
};
static void Z213 ARGS ((Zq0A4_153 Z199));
struct S_11 {
union {
char dummy;
} U_1;
};
static void Z224 ARGS ((Zq0A4_153 Z199));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z218 ARGS ((Zq0A4_153 Z199));
struct S_9 {
union {
char dummy;
} U_1;
};
static void Z223 ARGS ((Zq0A4_153 Z199));
struct S_8 {
union {
char dummy;
} U_1;
};
static void Z219 ARGS ((Zq0A4_153 Z199));
struct S_7 {
union {
char dummy;
} U_1;
};
static void Z221 ARGS ((Zq0A4_153 Z199));
struct S_6 {
union {
char dummy;
} U_1;
};
static void Z231 ARGS ((Zq0A4_153 Z199));
struct S_5 {
union {
char dummy;
} U_1;
};
static void Z232 ARGS ((Zq0A4_153 Z199));
struct S_4 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z233 ARGS ((Zq0A4_153 Z252, Zq0A4_153 Z253));
struct S_3 {
union {
char dummy;
} U_1;
};
static void Z254 ARGS ((Zq0A4_153 Z199, Zq0A4_153 Z255));
struct S_2 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z215 ARGS ((Zq0A4_153 Z259, BOOLEAN Z260));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z263 ARGS ((void));

static Zq0A4_153 Z183
# ifdef HAVE_ARGS
(Zq0A4_153 Z142)
# else
(Z142)
Zq0A4_153 Z142;
# endif
{
while (Z142->U_1.V_5.Y4.Y6->U_1.V_1.Y0 != Zq0A4_99) {
Z142 = Z142->U_1.V_5.Y4.Y6;
}
return Z142;
}

static Zfb3DLQ_0 Z186
# ifdef HAVE_ARGS
(Zq0A4_153 Z187)
# else
(Z187)
Zq0A4_153 Z187;
# endif
{
{
register Zq0A4_226 *W_1 = &Z187->U_1.V_5.Y4;

if (IN(Zq0A4_16, W_1->Y2)) {
Zp1PEAFD_13((STRING)"yy", 2L, &Z180);
Zp1PEAFD_18((LONGINT)W_1->Y1, &Z181);
Zp1PEAFD_5(&Z180, &Z181);
} else {
Zfb3DLQ_3(W_1->Y1, &Z180);
}
}
Zp1PEAFD_6(&Z180, '_');
Zp1PEAFD_18((LONGINT)Z182, &Z181);
Zp1PEAFD_5(&Z180, &Z181);
return Zfb3DLQ_2(&Z180);
}

static void Z190
# ifdef HAVE_ARGS
(CHAR Z191[], LONGCARD O_1)
# else
(Z191, O_1)
CHAR Z191[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z191, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module GramYacc, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z191, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZdnD80oy0_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z194
# ifdef HAVE_ARGS
(BYTE Z195[], LONGCARD O_3, BYTE Z196[], LONGCARD O_2)
# else
(Z195, O_3, Z196, O_2)
BYTE Z195[];
LONGCARD O_3;
BYTE Z196[];
LONGCARD O_2;
# endif
{
INTEGER Z197;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z196, O_2, WORD)
COPY_OPEN_ARRAY (Z195, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z197 = B_1;; Z197 += 1) {
if (Z195[Z197] != Z196[Z197]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z197 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZdnD80oy0_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_12 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_2 = &Z199->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"%{", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"Scanner.h\"", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"/* IMPORT */", 12L);
ZfM_33(Zq0A4_172);
ZqnGVQ_5(Zq0A4_172, W_2->Y4->U_1.V_17.Y16.Y2);
Z168 = W_2->Y14;
while (Z168->U_1.V_1.Y0 == Zq0A4_144) {
ZqnGVQ_5(Zq0A4_172, Z168->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y2);
Z168 = Z168->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"/* EXPORT */", 12L);
ZfM_33(Zq0A4_172);
ZqnGVQ_5(Zq0A4_172, W_2->Y4->U_1.V_17.Y16.Y1);
Z168 = W_2->Y14;
while (Z168->U_1.V_1.Y0 == Zq0A4_144) {
ZqnGVQ_5(Zq0A4_172, Z168->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y1);
Z168 = Z168->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"/* GLOBAL */", 12L);
ZfM_33(Zq0A4_172);
ZqnGVQ_5(Zq0A4_172, W_2->Y4->U_1.V_17.Y16.Y3);
Z168 = W_2->Y14;
while (Z168->U_1.V_1.Y0 == Zq0A4_144) {
ZqnGVQ_5(Zq0A4_172, Z168->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y3);
Z168 = Z168->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"/* LOCAL */", 11L);
ZfM_33(Zq0A4_172);
ZqnGVQ_5(Zq0A4_172, W_2->Y4->U_1.V_17.Y16.Y4);
Z168 = W_2->Y14;
while (Z168->U_1.V_1.Y0 == Zq0A4_144) {
ZqnGVQ_5(Zq0A4_172, Z168->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y4);
Z168 = Z168->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void BeginParser ()", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZqnGVQ_5(Zq0A4_172, W_2->Y4->U_1.V_17.Y16.Y5);
Z168 = W_2->Y14;
while (Z168->U_1.V_1.Y0 == Zq0A4_144) {
ZqnGVQ_5(Zq0A4_172, Z168->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y5);
Z168 = Z168->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void CloseParser ()", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZqnGVQ_5(Zq0A4_172, W_2->Y4->U_1.V_17.Y16.Y6);
Z168 = W_2->Y14;
while (Z168->U_1.V_1.Y0 == Zq0A4_144) {
ZqnGVQ_5(Zq0A4_172, Z168->U_1.V_49.Y48.Y4->U_1.V_17.Y16.Y6);
Z168 = Z168->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (!ZpmCQ_25(ORD('v'), &Zq0A4_171)) {
Z213(W_2->Y13);
}
ZfM_29(Zq0A4_172, (STRING)"%}", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"%union {", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" tScanAttribute Scan;", 21L);
ZfM_33(Zq0A4_172);
if (!ZpmCQ_25(ORD('v'), &Zq0A4_171)) {
Z168 = W_2->Y13;
while (Z168->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_3 = &Z168->U_1.V_5.Y4;

if (IN(Zq0A4_38, W_3->Y2) && (SET_IS_SUBSET1(SET_ELEM (Zq0A4_36) | SET_ELEM (Zq0A4_45), W_3->Y2) || Z215(W_3->Y4, (BOOLEAN)IN(Zq0A4_45, W_3->Y2)))) {
if (IN(Zq0A4_16, W_3->Y2) && !IN(Zq0A4_43, W_3->Y2)) {
ZfM_29(Zq0A4_172, (STRING)" yy", 3L);
Zq0A4_195((LONGINT)W_3->Y1);
ZfM_29(Zq0A4_172, (STRING)" /* ", 4L);
Zq0A4_192(W_3->Y1);
ZfM_29(Zq0A4_172, (STRING)" */ yy", 6L);
Zq0A4_195((LONGINT)W_3->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" yy", 3L);
Zq0A4_192(W_3->Y8);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_3->Y8);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
}
Z168 = W_3->Y5;
}
}
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"%token", 6L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_2->Y13, (Zq0A4_170)Z218);
ZfM_33(Zq0A4_172);
Z219(W_2->Y9);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"%%", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_2->Y13, (Zq0A4_170)ZdnD80oy0_3);
return;
}
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_4 = &Z199->U_1.V_5.Y4;

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_38) | SET_ELEM (Zq0A4_36), W_4->Y2)) {
Z170 = Z199;
Z182 = 0;
Z221(Z199);
}
return;
}
}
}

static void Z213
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_11 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_5 = &Z199->U_1.V_5.Y4;

if (IN(Zq0A4_38, W_5->Y2) && (SET_IS_SUBSET1(SET_ELEM (Zq0A4_36) | SET_ELEM (Zq0A4_45), W_5->Y2) || Z215(W_5->Y4, (BOOLEAN)IN(Zq0A4_45, W_5->Y2)))) {
ZfM_29(Zq0A4_172, (STRING)"typedef struct { ", 17L);
Zq0A4_185(W_5->Y3, (Zq0A4_170)Z223);
Z224(W_5->Y4);
if (IN(Zq0A4_16, W_5->Y2) && !IN(Zq0A4_43, W_5->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"} /* ", 5L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)" */ yy", 6L);
Zq0A4_195((LONGINT)W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"} yy", 4L);
Zq0A4_192(W_5->Y8);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
}
Z213(W_5->Y5);
return;
}
}
}

static void Z224
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_10 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_6 = &Z199->U_1.V_5.Y4;

Zq0A4_185(W_6->Y3, (Zq0A4_170)Z223);
Z224(W_6->Y4);
Z224(W_6->Y5);
return;
}
}
}

static void Z218
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_9 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_7 = &Z199->U_1.V_5.Y4;

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_39) | SET_ELEM (Zq0A4_36), W_7->Y2)) {
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_195((LONGINT)W_7->Y10);
ZfM_33(Zq0A4_172);
}
return;
}
}
}

static void Z223
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_8 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_106) {
{
register Zq0A4_232 *W_8 = &Z199->U_1.V_11.Y10;

if ((Zq0A4_176 & W_8->Y6) == 0X0L) {
Zq0A4_192(W_8->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_8->Y3);
ZfM_29(Zq0A4_172, (STRING)"; ", 2L);
}
return;
}
}
}

static void Z219
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_7 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_131) {
{
register Zq0A4_257 *W_9 = &Z199->U_1.V_36.Y35;

ZfM_29(Zq0A4_172, (STRING)"%left ", 6L);
Z219(W_9->Y1);
ZfM_33(Zq0A4_172);
Z219(W_9->Y2);
return;
}
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_132) {
{
register Zq0A4_258 *W_10 = &Z199->U_1.V_37.Y36;

ZfM_29(Zq0A4_172, (STRING)"%right", 6L);
Z219(W_10->Y1);
ZfM_33(Zq0A4_172);
Z219(W_10->Y2);
return;
}
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_133) {
{
register Zq0A4_259 *W_11 = &Z199->U_1.V_38.Y37;

ZfM_29(Zq0A4_172, (STRING)"%nonassoc ", 10L);
Z219(W_11->Y1);
ZfM_33(Zq0A4_172);
Z219(W_11->Y2);
return;
}
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_126) {
{
register Zq0A4_252 *W_12 = &Z199->U_1.V_31.Y30;

ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_12->Y1);
Z219(W_12->Y3);
return;
}
}
}

static void Z221
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_6 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_13 = &Z199->U_1.V_5.Y4;

if (W_13->Y4->U_1.V_1.Y0 == Zq0A4_99) {
{
register Zq0A4_226 *W_14 = &Z170->U_1.V_5.Y4;

if (IN(Zq0A4_16, W_14->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_195((LONGINT)W_14->Y1);
} else {
Zq0A4_192(W_14->Y1);
}
}
ZfM_29(Zq0A4_172, (STRING)"	: ", 3L);
Z169 = Z199;
Z173 = 0;
Z174 = FALSE;
INC(Z182);
Zq0A4_185(Z199, (Zq0A4_170)Z231);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Z173 = 0;
Z174 = TRUE;
Zq0A4_185(Z199, (Zq0A4_170)Z232);
} else {
Z231(W_13->Y4);
}
return;
}
}
}

static void Z231
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_5 Z200;

for (;;) {
for (;;) {
if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL) {
switch (Z199->U_1.V_1.Y0) {
case Zq0A4_100:;
{
register Zq0A4_226 *W_15 = &Z199->U_1.V_5.Y4;

Z221(Z199);
Z199 = W_15->Y5;
goto EXIT_2;
}
break;
case Zq0A4_105:;
{
register Zq0A4_231 *W_16 = &Z199->U_1.V_10.Y9;

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_16) | SET_ELEM (Zq0A4_38), W_16->Y8->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_195((LONGINT)W_16->Y4);
} else {
Zq0A4_192(W_16->Y4);
}
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
return;
}
break;
case Zq0A4_107:;
{
register Zq0A4_233 *W_17 = &Z199->U_1.V_12.Y11;

if (!ZpmCQ_25(ORD('v'), &Zq0A4_171)) {
if (Z233(Z169, Z199)) {
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
if (Z173 != 0) {
Z168 = Z183(Z170);
{
register Zq0A4_226 *W_18 = &Z168->U_1.V_5.Y4;

ZfM_29(Zq0A4_172, (STRING)" $$.", 4L);
if (IN(Zq0A4_16, W_18->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_195((LONGINT)W_18->Y1);
} else {
Zq0A4_192(W_18->Y1);
}
ZfM_29(Zq0A4_172, (STRING)" = $", 4L);
Zq0A4_195((LONGINT)Z173);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
if (IN(Zq0A4_16, W_18->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_195((LONGINT)W_18->Y1);
} else {
Zq0A4_192(W_18->Y1);
}
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
}
Z231(W_17->Y4);
ZfM_29(Zq0A4_172, (STRING)"} ", 2L);
} else {
if (W_17->Y5 == 0) {
W_17->Y5 = Z186(Z170);
}
ZfM_29(Zq0A4_172, (STRING)"xx_", 3L);
Zq0A4_192(W_17->Y5);
ZfM_29(Zq0A4_172, (STRING)"_", 1L);
Zq0A4_195((LONGINT)W_17->Y6);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
}
Z173 = W_17->Y6;
}
return;
}
break;
case Zq0A4_111:;
{
register Zq0A4_237 *W_19 = &Z199->U_1.V_16.Y15;

ZfM_29(Zq0A4_172, (STRING)"%prec ", 6L);
Zq0A4_192(W_19->Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
return;
}
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_20 = &Z199->U_1.V_42.Y41;

Z231(W_20->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z231(W_20->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Z199 = W_20->Y1;
goto EXIT_2;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_21 = &Z199->U_1.V_43.Y42;

Z231(W_21->Y4);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Z231(W_21->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Z199 = W_21->Y1;
goto EXIT_2;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_22 = &Z199->U_1.V_44.Y43;

Z231(W_22->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Z199 = W_22->Y1;
goto EXIT_2;
}
break;
case Zq0A4_140:;
{
register Zq0A4_266 *W_23 = &Z199->U_1.V_45.Y44;

Z199 = W_23->Y1;
goto EXIT_2;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_24 = &Z199->U_1.V_46.Y45;

if (W_24->Y5 != Zq0A4_97) {
if (W_24->Y4 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"if (", 4L);
Z231(W_24->Y4);
ZfM_29(Zq0A4_172, (STRING)") ; else { ", 11L);
Z231(W_24->Y5);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
} else {
Z231(W_24->Y5);
}
}
Z199 = W_24->Y1;
goto EXIT_2;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_25 = &Z199->U_1.V_21.Y20;

Z171 = Zq0A4_183(Z169, W_25->Y2);
if (Z171 != Zq0A4_97) {
Z168 = Z171->U_1.V_10.Y9.Y8;
if (Z168 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"$", 1L);
if (!Z174) {
Zq0A4_195((LONGINT)Z171->U_1.V_10.Y9.Y14);
} else {
Zq0A4_195((LONGINT)(SHORTINT)(Z171->U_1.V_10.Y9.Y14 + 1 - Z172));
}
if (IN(Zq0A4_38, Z168->U_1.V_5.Y4.Y2)) {
Z168 = Z183(Z168);
if (IN(Zq0A4_16, Z168->U_1.V_5.Y4.Y2) && !IN(Zq0A4_43, Z168->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)".yy", 3L);
Zq0A4_195((LONGINT)Z168->U_1.V_5.Y4.Y1);
} else {
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z168->U_1.V_5.Y4.Y1);
}
} else {
if (IN(Zq0A4_16, Z168->U_1.V_5.Y4.Y2) && !IN(Zq0A4_43, Z168->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)".Scan.yy", 8L);
Zq0A4_195((LONGINT)Z168->U_1.V_5.Y4.Y10);
} else {
ZfM_29(Zq0A4_172, (STRING)".Scan.", 6L);
Zq0A4_192(Z168->U_1.V_5.Y4.Y8);
}
}
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_25->Y3);
} else {
Zq0A4_192(W_25->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_25->Y3);
}
} else {
Zq0A4_192(W_25->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_25->Y3);
}
Z199 = W_25->Y1;
goto EXIT_2;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_26 = &Z199->U_1.V_22.Y21;

Z171 = Zq0A4_183(Z169, W_26->Y2);
Z168 = Z183(Z170);
if (Z171 == Zq0A4_97 || IN(Zq0A4_16, Z171->U_1.V_11.Y10.Y6) || Z171->U_1.V_1.Y0 == Zq0A4_105) {
Zq0A4_192(W_26->Y2);
} else if (IN(Zq0A4_16, Z168->U_1.V_5.Y4.Y2) && !IN(Zq0A4_43, Z168->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"$$.yy", 5L);
Zq0A4_195((LONGINT)Z168->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_26->Y2);
} else {
ZfM_29(Zq0A4_172, (STRING)"$$.", 3L);
Zq0A4_192(Z168->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_26->Y2);
}
Z199 = W_26->Y1;
goto EXIT_2;
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_27 = &Z199->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_172, W_27->Y2);
Z199 = W_27->Y1;
goto EXIT_2;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_28 = &Z199->U_1.V_25.Y24;

Z231(W_28->Y2);
Z199 = W_28->Y1;
goto EXIT_2;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_29 = &Z199->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_172, W_29->Y1);
Z199 = W_29->Y2;
goto EXIT_2;
}
break;
default:
break;
}
}
return;
} EXIT_2:;
} EXIT_1:;
}

static void Z232
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_4 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_107) {
{
register Zq0A4_233 *W_30 = &Z199->U_1.V_12.Y11;

if (!ZpmCQ_25(ORD('v'), &Zq0A4_171)) {
if (!IN(Zq0A4_32, W_30->Y7) && !Z233(Z169, Z199)) {
INCL(W_30->Y7, Zq0A4_32);
Z172 = W_30->Y6;
ZfM_29(Zq0A4_172, (STRING)"xx_", 3L);
Zq0A4_192(W_30->Y5);
ZfM_29(Zq0A4_172, (STRING)"_", 1L);
Zq0A4_195((LONGINT)W_30->Y6);
ZfM_29(Zq0A4_172, (STRING)"	: {", 4L);
if (Z173 != 0) {
Z168 = Z183(Z170);
{
register Zq0A4_226 *W_31 = &Z168->U_1.V_5.Y4;

ZfM_29(Zq0A4_172, (STRING)" $$.", 4L);
if (IN(Zq0A4_16, W_31->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_195((LONGINT)W_31->Y1);
} else {
Zq0A4_192(W_31->Y1);
}
ZfM_29(Zq0A4_172, (STRING)" = $", 4L);
Zq0A4_195((LONGINT)(SHORTINT)(Z173 + 1 - Z172));
ZfM_29(Zq0A4_172, (STRING)".", 1L);
if (IN(Zq0A4_16, W_31->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_195((LONGINT)W_31->Y1);
} else {
Zq0A4_192(W_31->Y1);
}
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
}
Z231(W_30->Y4);
ZfM_29(Zq0A4_172, (STRING)"} .", 3L);
ZfM_33(Zq0A4_172);
}
Z173 = W_30->Y6;
}
return;
}
}
}

static BOOLEAN Z233
# ifdef HAVE_ARGS
(Zq0A4_153 Z252, Zq0A4_153 Z253)
# else
(Z252, Z253)
Zq0A4_153 Z252;
Zq0A4_153 Z253;
# endif
{
struct S_3 Z200;

if (Z252 == Zq0A4_97) {
return FALSE;
}
if (Z253 == Zq0A4_97) {
return FALSE;
}
for (;;) {
Z175 = FALSE;
Z176 = FALSE;
Z177 = FALSE;
Z178 = FALSE;
Z179 = FALSE;
Z254(Z252, Z253);
if (!Z179) {
goto EXIT_3;
}
return TRUE;
} EXIT_3:;
return FALSE;
}

static void Z254
# ifdef HAVE_ARGS
(Zq0A4_153 Z199, Zq0A4_153 Z255)
# else
(Z199, Z255)
Zq0A4_153 Z199;
Zq0A4_153 Z255;
# endif
{
struct S_2 Z200;

for (;;) {
for (;;) {
if (Z199 == Zq0A4_97) {
return;
}
if (Z255 == Zq0A4_97) {
return;
}
if (Z199 != NIL) {
switch (Z199->U_1.V_1.Y0) {
case Zq0A4_100:;
for (;;) {
{
register Zq0A4_226 *W_32 = &Z199->U_1.V_5.Y4;

Z254(W_32->Y3, Z255);
if (!!Z179) {
goto EXIT_6;
}
Z254(W_32->Y6, Z255);
return;
}
} EXIT_6:;
break;
case Zq0A4_105:;
{
register Zq0A4_231 *W_33 = &Z199->U_1.V_10.Y9;

Z254(W_33->Y1, Z255);
Z175 = TRUE;
Z176 = TRUE;
Z177 = TRUE;
Z178 = TRUE;
return;
}
break;
case Zq0A4_106:;
{
register Zq0A4_232 *W_34 = &Z199->U_1.V_11.Y10;

Z199 = W_34->Y1;
goto EXIT_5;
}
break;
case Zq0A4_107:;
{
register Zq0A4_233 *W_35 = &Z199->U_1.V_12.Y11;

Z254(W_35->Y1, Z255);
if (Z199 == Z255 && !Z175) {
Z179 = TRUE;
}
Z175 = TRUE;
return;
}
break;
case Zq0A4_108:;
{
register Zq0A4_234 *W_36 = &Z199->U_1.V_13.Y12;

Z254(W_36->Y1, Z255);
if (Z199 == Z255 && !Z176) {
Z179 = TRUE;
}
Z176 = TRUE;
Z175 = TRUE;
return;
}
break;
case Zq0A4_109:;
{
register Zq0A4_235 *W_37 = &Z199->U_1.V_14.Y13;

Z254(W_37->Y1, Z255);
if (Z199 == Z255 && !Z177) {
Z179 = TRUE;
}
Z177 = TRUE;
return;
}
break;
case Zq0A4_110:;
{
register Zq0A4_236 *W_38 = &Z199->U_1.V_15.Y14;

Z254(W_38->Y1, Z255);
if (Z199 == Z255 && !Z177) {
Z179 = TRUE;
}
Z177 = TRUE;
return;
}
break;
case Zq0A4_111:;
{
register Zq0A4_237 *W_39 = &Z199->U_1.V_16.Y15;

Z254(W_39->Y1, Z255);
if (Z199 == Z255 && !Z178) {
Z179 = TRUE;
}
Z178 = TRUE;
return;
}
break;
default:
break;
}
}
return;
} EXIT_5:;
} EXIT_4:;
}

static BOOLEAN Z215
# ifdef HAVE_ARGS
(Zq0A4_153 Z259, BOOLEAN Z260)
# else
(Z259, Z260)
Zq0A4_153 Z259;
BOOLEAN Z260;
# endif
{
struct S_1 Z200;

for (;;) {
for (;;) {
if (Z259 == Zq0A4_97) {
return FALSE;
}
if (Z259 != NIL && Z259->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_40 = &Z259->U_1.V_5.Y4;

if (!((Z260 || IN(Zq0A4_45, W_40->Y2)) && IN(Zq0A4_36, W_40->Y2))) {
goto EXIT_9;
}
return TRUE;
}
} EXIT_9:;
for (;;) {
{
register Zq0A4_226 *W_41 = &Z259->U_1.V_5.Y4;

if (!Z215(W_41->Y4, (BOOLEAN)(Z260 || IN(Zq0A4_45, W_41->Y2)))) {
goto EXIT_10;
}
return TRUE;
}
} EXIT_10:;
{
register Zq0A4_226 *W_42 = &Z259->U_1.V_5.Y4;

Z259 = W_42->Y5;
goto EXIT_8;
}
}
return FALSE;
} EXIT_8:;
} EXIT_7:;
}

void ZdnD80oy0_4
 ARGS ((void))
{
}

void ZdnD80oy0_5
 ARGS ((void))
{
}

static void Z263
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_GramYacc ARGS ((void))
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
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_Strings ();

ZdnD80oy0_0 = ZfM_1;
ZdnD80oy0_2 = Z263;
ZdnD80oy0_4();
}
