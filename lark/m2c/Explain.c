#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_Conflict
#include "Conflict.h"
#endif

#ifndef DEFINITION_GenLRk
#include "GenLRk.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_LR1
#include "LR1.h"
#endif

#ifndef DEFINITION_Conflict
#include "Conflict.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Explain
#include "Explain.h"
#endif

ZfM_3 ZbrRF74A_0;

#define Z213	100
#define Z214	100
#define Z215	100
typedef struct S_1 {
SHORTCARD Y0, Y1, Y2;
} Z216;
typedef struct S_2 {
SHORTCARD Y0, Y1;
} Z220;
typedef struct S_8 {
Z220 A[10000000 + 1];
} *Z221;
static Z221 Z222, Z223, Z224, Z225;
static LONGINT Z226, Z227, Z228, Z229, Z230;
static CARDINAL Z231, Z232;
static SHORTCARD Z233, Z234;
static SHORTCARD Z235, Z236;
static SHORTCARD Z237;
struct S_2_Explain;
static void Z255 ARGS ((struct S_2_Explain *link, CARDINAL Z256, CHAR Z257[], LONGCARD O_1));
static BOOLEAN Z259 ARGS ((SHORTCARD Z248, SHORTCARD Z260));
struct S_2_Explain {
BITSET *Z239;
};
struct S_1_TraceC;
static void Z278 ARGS ((CARDINAL Z297, CARDINAL Z298, CARDINAL Z248, CARDINAL *Z241, CARDINAL *Z242));
typedef struct S_3 {
SHORTCARD Y0, Y1;
CARDINAL Y2;
} Z299;
struct S_6 {
Z299 A[10000000 + 1];
};
static void Z308 ARGS ((struct S_1_TraceC *link, CARDINAL Z303));
struct S_1_TraceC {
CARDINAL *Z298;
CARDINAL *Y1_109;
struct S_6 **Z306;
};
static void Z279 ARGS ((CARDINAL Z247, CARDINAL Z248));
struct S_5 {
Z216 A[10000000 + 1];
};
static void Z269 ARGS ((CARDINAL Z238, CARDINAL Z247));
static void Z311 ARGS ((CARDINAL Z247, CARDINAL Z248, BOOLEAN Z328));
struct S_4 {
Z216 A[10000000 + 1];
};
static void Z270 ARGS ((LONGINT Z243, LONGINT Z244));
static void Z276 ARGS ((CARDINAL Z267, CARDINAL Z268));
static void Z277 ARGS ((CARDINAL Z247));
static void Z281 ARGS ((CARDINAL Z243, CARDINAL Z244, CARDINAL Z247));
static void Z331 ARGS ((CARDINAL Z247));
static void Z330 ARGS ((CARDINAL Z332));
static void Z309 ARGS ((void));

static void Z255
# ifdef HAVE_ARGS
(struct S_2_Explain *link, CARDINAL Z256, CHAR Z257[], LONGCARD O_1)
# else
(link, Z256, Z257, O_1)
struct S_2_Explain *link;
CARDINAL Z256;
CHAR Z257[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z257, O_1, CHAR)
if (IN(Z256, *link->Z239)) {
ZfM_29(ZbrRF74A_0, Z257, O_1);
ZfM_33(ZbrRF74A_0);
}
FREE_OPEN_ARRAYS
}

static BOOLEAN Z259
# ifdef HAVE_ARGS
(SHORTCARD Z248, SHORTCARD Z260)
# else
(Z248, Z260)
SHORTCARD Z248, Z260;
# endif
{
SHORTINT Z261, Z262;

Z261 = ZiS8_24->A[Z248].Y0;
Z262 = ZiS8_24->A[Z260].Y0;
while (Z261 >= 0 && Z262 >= 0) {
if (ZiS8_27->A[Z261].Y0 != ZiS8_27->A[Z262].Y0) {
return FALSE;
}
Z261 = ZiS8_27->A[Z261].Y1;
Z262 = ZiS8_27->A[Z262].Y1;
}
return Z261 == Z262;
}

void ZbrRF74A_1
# ifdef HAVE_ARGS
(CARDINAL Z238, BITSET Z239, ZpmCQ_4 Z240)
# else
(Z238, Z239, Z240)
CARDINAL Z238;
BITSET Z239;
ZpmCQ_4 Z240;
# endif
{
CARDINAL Z241, Z242, Z243, Z244, Z245, Z246;
SHORTINT Z247;
SHORTCARD Z248, Z249, Z250, Z251, Z252;
BOOLEAN Z253;
Z221 Z254;
struct S_2_Explain frame;

frame.Z239 = &Z239;
ZfM_29(ZbrRF74A_0, (STRING)"State ", 6L);
ZfM_25(ZbrRF74A_0, (LONGINT)ZiS8_14->A[Z238].Y5, 4L);
ZfM_29(ZbrRF74A_0, (STRING)" (", 2L);
ZfM_25(ZbrRF74A_0, (LONGINT)Z238, 4L);
ZfM_29(ZbrRF74A_0, (STRING)"): derivation trees", 19L);
ZfM_33(ZbrRF74A_0);
ZfM_29(ZbrRF74A_0, (STRING)"-----------------------------------", 35L);
ZfM_33(ZbrRF74A_0);
ZfM_33(ZbrRF74A_0);
Z255(&frame, (LONGCARD)ZggGECF6A_0, (STRING)"	shift reduce conflict", 22L);
Z255(&frame, (LONGCARD)ZggGECF6A_1, (STRING)"	reduce reduce conflict", 23L);
if (ZpmCQ_25(ORD('U'), &Zq0A4_61)) {
Z255(&frame, (LONGCARD)ZggGECF6A_2, (STRING)"	shift reduce conflict explicitly repaired", 42L);
Z255(&frame, (LONGCARD)ZggGECF6A_3, (STRING)"	reduce reduce conflict explicitly repaired", 43L);
}
if (ZpmCQ_25(ORD('V'), &Zq0A4_61)) {
Z255(&frame, (LONGCARD)ZggGECF6A_4, (STRING)"	shift reduce conflict implicitly repaired", 42L);
Z255(&frame, (LONGCARD)ZggGECF6A_5, (STRING)"	reduce reduce conflict implicitly repaired", 43L);
}
if (ZpmCQ_25(ORD('W'), &Zq0A4_61)) {
Z255(&frame, (LONGCARD)ZggGECF6A_8, (STRING)"	shift reduce conflict solved using LALR(2)", 43L);
Z255(&frame, (LONGCARD)ZggGECF6A_9, (STRING)"	reduce reduce conflict solved using LALR(2)", 44L);
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_61)) {
Z255(&frame, (LONGCARD)ZggGECF6A_6, (STRING)"	shift reduce conflict dynamically repaired", 43L);
Z255(&frame, (LONGCARD)ZggGECF6A_7, (STRING)"	reduce reduce conflict dynamically repaired", 44L);
}
ZfM_33(ZbrRF74A_0);
Z230 = 0;
{
SHORTCARD B_1 = ZpmCQ_17(&Z240), B_2 = ZpmCQ_18(&Z240);

if (B_1 <= B_2)
for (Z248 = B_1;; Z248 += 1) {
if (ZpmCQ_25((LONGCARD)Z248, &Z240)) {
Z247 = ZiS8_24->A[Z248].Y0;
while (Z247 >= 0) {
{
register ZiS8_11 *W_1 = &ZiS8_27->A[Z247];

{
register ZiS8_8 *W_2 = &ZiS8_17->A[W_1->Y0];

{
register Zq0A4_120 *W_3 = &Zq0A4_95->A[W_2->Y0]->U_1.V_18.Y17;

if (W_2->Y1 < W_3->Y12) {
Z229 = 0;
Z269(Z238, W_1->Y0);
Z270(0L, 0L);
ZfM_33(ZbrRF74A_0);
ZfM_29(ZbrRF74A_0, (STRING)"shift  ", 7L);
ZfM_25(ZbrRF74A_0, (LONGINT)W_3->Y11.Y1, 4L);
ZfM_29(ZbrRF74A_0, (STRING)"  ", 2L);
Zfb3DLQ_7(ZbrRF74A_0, W_3->Y16->U_1.V_9.Y8.Y2);
ZfM_29(ZbrRF74A_0, (STRING)": ", 2L);
Z276((LONGCARD)W_2->Y0, (LONGCARD)W_2->Y1);
ZfM_24(ZbrRF74A_0, '?');
ZfM_33(ZbrRF74A_0);
ZfM_33(ZbrRF74A_0);
ZfM_29(ZbrRF74A_0, (STRING)"example   s  ", 13L);
Z277((LONGCARD)Z229);
ZfM_33(ZbrRF74A_0);
ZfM_33(ZbrRF74A_0);
} else {
Z229 = 0;
Z278(Z238, W_1->Y0, (LONGCARD)Z248, &Z241, &Z242);
Z244 = Z229;
Z279(Z242, (LONGCARD)Z248);
Z243 = Z229;
Z269(Z241, Z242);
Z270((LONGINT)Z243, (LONGINT)Z244);
ZfM_33(ZbrRF74A_0);
ZfM_29(ZbrRF74A_0, (STRING)"reduce ", 7L);
ZfM_25(ZbrRF74A_0, (LONGINT)W_3->Y11.Y1, 4L);
ZfM_29(ZbrRF74A_0, (STRING)"  ", 2L);
Zfb3DLQ_7(ZbrRF74A_0, W_3->Y16->U_1.V_9.Y8.Y2);
ZfM_29(ZbrRF74A_0, (STRING)": ", 2L);
Z276((LONGCARD)W_2->Y0, (LONGCARD)W_2->Y1);
ZfM_29(ZbrRF74A_0, (STRING)" {", 2L);
Zfb3DLQ_7(ZbrRF74A_0, Zq0A4_93->A[Z248]->U_1.V_6.Y5.Y2);
ZfM_29(ZbrRF74A_0, (STRING)"} ?", 3L);
ZfM_33(ZbrRF74A_0);
ZfM_33(ZbrRF74A_0);
ZfM_29(ZbrRF74A_0, (STRING)"example   r  ", 13L);
Z281(Z243, Z244, (LONGCARD)Z229);
ZfM_33(ZbrRF74A_0);
ZfM_33(ZbrRF74A_0);
}
Z254 = Z225;
Z225 = Z224;
Z224 = Z254;
Z230 = Z229;
}
}
Z247 = W_1->Y1;
}
}
}
if (Z248 >= B_2) break;
}
}
Z249 = ZiS8_28;
Z251 = 0;
Z253 = TRUE;
ZfM_29(ZbrRF74A_0, (STRING)"State ", 6L);
ZfM_25(ZbrRF74A_0, (LONGINT)ZiS8_14->A[Z238].Y5, 4L);
ZfM_29(ZbrRF74A_0, (STRING)" (", 2L);
ZfM_25(ZbrRF74A_0, (LONGINT)Z238, 4L);
ZfM_29(ZbrRF74A_0, (STRING)"): summary", 10L);
ZfM_33(ZbrRF74A_0);
ZfM_29(ZbrRF74A_0, (STRING)"--------------------------", 26L);
ZfM_33(ZbrRF74A_0);
ZfM_33(ZbrRF74A_0);
{
register ZiS8_7 *W_4 = &ZiS8_14->A[Z238];

{
SHORTCARD B_3 = ZpmCQ_17(&Z240), B_4 = ZpmCQ_18(&Z240);

if (B_3 <= B_4)
for (Z248 = B_3;; Z248 += 1) {
if (ZpmCQ_25((LONGCARD)Z248, &Z240)) {
Z245 = W_4->Y10->A[Z248 - W_4->Y7];
if (Z245 > ZiS8_28 + ZpmC89LG6_2) {
Z250 = Z245 - ZiS8_28 - ZpmC89LG6_2;
if (ZggGECF6A_13->A[Z250].Y5 != 0) {
Z247 = ZiS8_24->A[Z248].Y0;
while (Z247 >= 0) {
{
register ZiS8_11 *W_5 = &ZiS8_27->A[Z247];

{
register ZiS8_8 *W_6 = &ZiS8_17->A[W_5->Y0];

{
register Zq0A4_120 *W_7 = &Zq0A4_95->A[W_6->Y0]->U_1.V_18.Y17;

ZfM_29(ZbrRF74A_0, (STRING)"LR(2) ", 6L);
if (W_6->Y1 < W_7->Y12) {
ZfM_29(ZbrRF74A_0, (STRING)" shift  ", 8L);
ZfM_25(ZbrRF74A_0, (LONGINT)W_7->Y11.Y1, 4L);
ZfM_29(ZbrRF74A_0, (STRING)"  ", 2L);
Zfb3DLQ_7(ZbrRF74A_0, W_7->Y16->U_1.V_9.Y8.Y2);
ZfM_29(ZbrRF74A_0, (STRING)": ", 2L);
Z276((LONGCARD)W_6->Y0, (LONGCARD)W_6->Y1);
ZdaDoSr_3(ZbrRF74A_0, (LONGCARD)Z250, W_5->Y0);
} else {
ZfM_29(ZbrRF74A_0, (STRING)" reduce ", 8L);
ZfM_25(ZbrRF74A_0, (LONGINT)W_7->Y11.Y1, 4L);
ZfM_29(ZbrRF74A_0, (STRING)"  ", 2L);
Zfb3DLQ_7(ZbrRF74A_0, W_7->Y16->U_1.V_9.Y8.Y2);
ZfM_29(ZbrRF74A_0, (STRING)": ", 2L);
Z276((LONGCARD)W_6->Y0, (LONGCARD)W_6->Y1);
ZfM_29(ZbrRF74A_0, (STRING)" {", 2L);
Zfb3DLQ_7(ZbrRF74A_0, Zq0A4_93->A[Z248]->U_1.V_6.Y5.Y2);
ZfM_24(ZbrRF74A_0, '}');
ZdaDoSr_3(ZbrRF74A_0, (LONGCARD)Z250, W_5->Y0);
}
ZfM_33(ZbrRF74A_0);
}
}
Z247 = W_5->Y1;
}
}
} else {
ZfM_29(ZbrRF74A_0, (STRING)"dynamic decision ", 17L);
ZfM_25(ZbrRF74A_0, (LONGINT)Z250, 0L);
ZfM_29(ZbrRF74A_0, (STRING)" on lookahead ", 14L);
Zfb3DLQ_7(ZbrRF74A_0, Zq0A4_93->A[Z248]->U_1.V_6.Y5.Y2);
ZfM_29(ZbrRF74A_0, (STRING)":", 1L);
if (Z250 != Z251) {
{
register ZggGECF6A_10 *W_8 = &ZggGECF6A_13->A[Z250];

ZfM_33(ZbrRF74A_0);
{
register ZiS8_7 *W_9 = &ZiS8_14->A[W_8->Y1];

{
LONGCARD B_5 = W_9->Y0, B_6 = W_9->Y0 + W_9->Y2 + W_9->Y3;

if (B_5 <= B_6)
for (Z246 = B_5;; Z246 += 1) {
{
register ZiS8_8 *W_10 = &ZiS8_17->A[Z246];

if (W_10->Y1 == Zq0A4_95->A[W_10->Y0]->U_1.V_18.Y17.Y12 && ZpmCQ_25((LONGCARD)W_10->Y0, &W_8->Y0)) {
ZfM_29(ZbrRF74A_0, (STRING)"check predicate in line ", 24L);
if (Zq0A4_95->A[W_10->Y0]->U_1.V_1.Y0 == Zq0A4_20) {
{
register Zq0A4_122 *W_11 = &Zq0A4_95->A[W_10->Y0]->U_1.V_20.Y19;

ZfM_25(ZbrRF74A_0, (LONGINT)W_11->Y24.Y1, 0L);
if (W_11->Y22) {
ZfM_29(ZbrRF74A_0, (STRING)": ? - {", 7L);
} else {
ZfM_29(ZbrRF74A_0, (STRING)": ? {", 5L);
}
ZqnGVQ_5(ZbrRF74A_0, W_11->Y23);
ZfM_29(ZbrRF74A_0, (STRING)"}", 1L);
}
} else {
{
register Zq0A4_123 *W_12 = &Zq0A4_95->A[W_10->Y0]->U_1.V_21.Y20;

ZfM_25(ZbrRF74A_0, (LONGINT)W_12->Y24.Y1, 0L);
ZfM_29(ZbrRF74A_0, (STRING)": ? ", 4L);
if (W_12->Y22) {
ZfM_29(ZbrRF74A_0, (STRING)"- ", 2L);
}
Zfb3DLQ_7(ZbrRF74A_0, W_12->Y25->U_1.V_6.Y5.Y2);
}
}
ZfM_33(ZbrRF74A_0);
}
}
if (Z246 >= B_6) break;
}
}
}
}
Z245 = ZggGECF6A_13->A[Z250].Y2;
ZfM_29(ZbrRF74A_0, (STRING)"default:", 8L);
ZfM_33(ZbrRF74A_0);
} else {
ZfM_29(ZbrRF74A_0, (STRING)" as above", 9L);
ZfM_33(ZbrRF74A_0);
}
}
} else {
Z250 = 0;
}
if (Z250 == 0 || Z250 != Z251 && ZggGECF6A_13->A[Z250].Y5 == 0) {
if (Z253 || Z250 != Z251 || !Z259(Z252, Z248)) {
Z253 = FALSE;
Z247 = ZiS8_24->A[Z248].Y0;
while (Z247 >= 0) {
{
register ZiS8_11 *W_13 = &ZiS8_27->A[Z247];

{
register ZiS8_8 *W_14 = &ZiS8_17->A[W_13->Y0];

{
register Zq0A4_120 *W_15 = &Zq0A4_95->A[W_14->Y0]->U_1.V_18.Y17;

if (W_14->Y1 < W_15->Y12) {
if (Z245 <= Z249) {
ZfM_29(ZbrRF74A_0, (STRING)"retain", 6L);
} else {
ZfM_29(ZbrRF74A_0, (STRING)"ignore", 6L);
}
ZfM_29(ZbrRF74A_0, (STRING)" shift  ", 8L);
ZfM_25(ZbrRF74A_0, (LONGINT)W_15->Y11.Y1, 4L);
ZfM_29(ZbrRF74A_0, (STRING)"  ", 2L);
Zfb3DLQ_7(ZbrRF74A_0, W_15->Y16->U_1.V_9.Y8.Y2);
ZfM_29(ZbrRF74A_0, (STRING)": ", 2L);
Z276((LONGCARD)W_14->Y0, (LONGCARD)W_14->Y1);
ZfM_33(ZbrRF74A_0);
} else {
if (Z245 == ZiS8_28 + W_14->Y0) {
ZfM_29(ZbrRF74A_0, (STRING)"retain", 6L);
} else {
ZfM_29(ZbrRF74A_0, (STRING)"ignore", 6L);
}
ZfM_29(ZbrRF74A_0, (STRING)" reduce ", 8L);
ZfM_25(ZbrRF74A_0, (LONGINT)W_15->Y11.Y1, 4L);
ZfM_29(ZbrRF74A_0, (STRING)"  ", 2L);
Zfb3DLQ_7(ZbrRF74A_0, W_15->Y16->U_1.V_9.Y8.Y2);
ZfM_29(ZbrRF74A_0, (STRING)": ", 2L);
Z276((LONGCARD)W_14->Y0, (LONGCARD)W_14->Y1);
ZfM_29(ZbrRF74A_0, (STRING)" {", 2L);
Zfb3DLQ_7(ZbrRF74A_0, Zq0A4_93->A[Z248]->U_1.V_6.Y5.Y2);
ZfM_24(ZbrRF74A_0, '}');
ZfM_33(ZbrRF74A_0);
}
}
}
Z247 = W_13->Y1;
}
}
} else {
ZfM_29(ZbrRF74A_0, (STRING)"on lookahead ", 13L);
Zfb3DLQ_7(ZbrRF74A_0, Zq0A4_93->A[Z248]->U_1.V_6.Y5.Y2);
ZfM_29(ZbrRF74A_0, (STRING)":", 1L);
ZfM_29(ZbrRF74A_0, (STRING)" as above", 9L);
ZfM_33(ZbrRF74A_0);
}
}
ZfM_33(ZbrRF74A_0);
Z251 = Z250;
Z252 = Z248;
}
if (Z248 >= B_4) break;
}
}
}
}

static void Z308
# ifdef HAVE_ARGS
(struct S_1_TraceC *link, CARDINAL Z303)
# else
(link, Z303)
struct S_1_TraceC *link;
CARDINAL Z303;
# endif
{
{
register Z299 *W_16 = &(*link->Z306)->A[Z303];

if (Z303 == 1) {
{
register ZiS8_8 *W_17 = &ZiS8_17->A[*link->Z298];

INC(Z229);
if (Z229 >= Z228) {
Z309();
}
Z224->A[Z229].Y0 = W_17->Y0;
Z224->A[Z229].Y1 = W_17->Y1;
}
} else {
Z308(link, (LONGCARD)W_16->Y1);
{
register ZiS8_8 *W_18 = &ZiS8_17->A[(*link->Z306)->A[W_16->Y1].Y2];

*link->Y1_109 = Zq0A4_95->A[W_18->Y0]->U_1.V_18.Y17.Y16->U_1.V_9.Y8.Y8;
}
Z311(W_16->Y2, *link->Y1_109, TRUE);
}
}
}

static void Z278
# ifdef HAVE_ARGS
(CARDINAL Z297, CARDINAL Z298, CARDINAL Z248, CARDINAL *Z241, CARDINAL *Z242)
# else
(Z297, Z298, Z248, Z241, Z242)
CARDINAL Z297, Z298, Z248;
CARDINAL *Z241, *Z242;
# endif
{
CARDINAL Z238, Z247, Z302, Y1_109, Z243, Z303;
ZpmCQ_4 Z304, Z305;
struct S_6 *Z306;
LONGINT Z307;
struct S_1_TraceC frame;

frame.Z298 = &Z298;
frame.Y1_109 = &Y1_109;
frame.Z306 = &Z306;
ZpmCQ_5(&Z304, (LONGCARD)ZiS8_15);
ZpmCQ_5(&Z305, Zq0A4_91);
ZarQdhNDD_0((ADDRESS *)&Z306, &Z227, (LONGINT)sizeof (Z299));
{
register Z299 *W_19 = &Z306->A[1];

W_19->Y0 = Z297;
W_19->Y2 = Z298;
W_19->Y1 = 0;
}
Z307 = 1;
Z303 = 1;
ZpmCQ_13(&Z304, Z298);
{
register ZiS8_8 *W_20 = &ZiS8_17->A[Z298];

if (W_20->Y1 == 0) {
for (;;) {
Z238 = Z297;
{
register ZiS8_7 *W_21 = &ZiS8_14->A[Z238];

Y1_109 = Zq0A4_95->A[W_20->Y0]->U_1.V_18.Y17.Y16->U_1.V_9.Y8.Y8 - Zq0A4_89;
{
LONGCARD B_7 = W_21->Y0, B_8 = W_21->Y0 + W_21->Y2;

if (B_7 <= B_8)
for (Z247 = B_7;; Z247 += 1) {
{
register ZiS8_8 *W_22 = &ZiS8_17->A[Z247];

{
register Zq0A4_120 *W_23 = &Zq0A4_95->A[W_22->Y0]->U_1.V_18.Y17;

if (W_22->Y1 < W_23->Y12) {
Z243 = W_23->Y17->A[W_22->Y1 + 1];
if (Z243 > Zq0A4_91 && ZolB7FGBG_9((LONGINT)(Z243 - Zq0A4_89), (LONGINT)Y1_109, Zq0A4_96)) {
{
register Zq0A4_111 *W_24 = &Zq0A4_93->A[Z243]->U_1.V_9.Y8;

if (ZpmCQ_25(Z248, W_24->Y11->A[Y1_109 - W_24->Y9])) {
goto EXIT_1;
} else if (ZpmCQ_25(Zq0A4_91, W_24->Y11->A[Y1_109 - W_24->Y9])) {
ZpmCQ_32(&Z305);
ZiS8_57(W_22->Y0, (SHORTCARD)(W_22->Y1 + 2), &Z305);
if (ZpmCQ_25(Z248, &Z305)) {
goto EXIT_1;
} else if (ZpmCQ_25(Zq0A4_91, &Z305)) {
if (W_23->Y16->U_1.V_9.Y8.Y8 == Zq0A4_89) {
goto EXIT_1;
} else {
ZiS8_49((SHORTCARD)Z238, Z247, &Z305);
}
if (ZpmCQ_25(Z248, &Z305) && !ZpmCQ_25(Z247, &Z304)) {
INC(Z307);
if (Z307 >= Z227) {
ZarQdhNDD_2((ADDRESS *)&Z306, &Z227, (LONGINT)sizeof (Z299));
}
{
register Z299 *W_25 = &Z306->A[Z307];

W_25->Y0 = Z238;
W_25->Y2 = Z247;
W_25->Y1 = Z303;
}
ZpmCQ_13(&Z304, Z247);
}
}
}
}
}
}
}
}
if (Z247 >= B_8) break;
}
}
}
Z303 = 2;
goto EXIT_1;
} EXIT_1:;
}
}
if (ZiS8_17->A[Z298].Y1 != 0 || Z303 != 1) {
for (;;) {
{
register Z299 *W_26 = &Z306->A[Z303];

{
register ZiS8_8 *W_27 = &ZiS8_17->A[W_26->Y2];

{
register ZiS8_7 *W_28 = &ZiS8_14->A[W_26->Y0];

{
register ZiS8_9 *W_29 = &ZiS8_20->A[W_26->Y2 - W_28->Y0 + W_28->Y1];

Y1_109 = Zq0A4_95->A[W_27->Y0]->U_1.V_18.Y17.Y16->U_1.V_9.Y8.Y8 - Zq0A4_89;
{
LONGCARD B_9 = 1, B_10 = W_29->Y3;

if (B_9 <= B_10)
for (Z302 = B_9;; Z302 += 1) {
Z238 = W_29->Y1->A[Z302 - 1];
{
register ZiS8_7 *W_30 = &ZiS8_14->A[Z238];

{
LONGCARD B_11 = W_30->Y0, B_12 = W_30->Y0 + W_30->Y2;

if (B_11 <= B_12)
for (Z247 = B_11;; Z247 += 1) {
{
register ZiS8_8 *W_31 = &ZiS8_17->A[Z247];

{
register Zq0A4_120 *W_32 = &Zq0A4_95->A[W_31->Y0]->U_1.V_18.Y17;

if (W_31->Y1 < W_32->Y12) {
Z243 = W_32->Y17->A[W_31->Y1 + 1];
if (Z243 > Zq0A4_91 && ZolB7FGBG_9((LONGINT)(Z243 - Zq0A4_89), (LONGINT)Y1_109, Zq0A4_96)) {
{
register Zq0A4_111 *W_33 = &Zq0A4_93->A[Z243]->U_1.V_9.Y8;

if (ZpmCQ_25(Z248, W_33->Y11->A[Y1_109 - W_33->Y9])) {
goto EXIT_2;
} else if (ZpmCQ_25(Zq0A4_91, W_33->Y11->A[Y1_109 - W_33->Y9])) {
ZpmCQ_32(&Z305);
ZiS8_57(W_31->Y0, (SHORTCARD)(W_31->Y1 + 2), &Z305);
if (ZpmCQ_25(Z248, &Z305)) {
goto EXIT_2;
} else if (ZpmCQ_25(Zq0A4_91, &Z305)) {
if (W_32->Y16->U_1.V_9.Y8.Y8 == Zq0A4_89) {
goto EXIT_2;
} else {
ZiS8_49((SHORTCARD)Z238, Z247, &Z305);
}
if (ZpmCQ_25(Z248, &Z305) && !ZpmCQ_25(Z247, &Z304)) {
INC(Z307);
if (Z307 >= Z227) {
ZarQdhNDD_2((ADDRESS *)&Z306, &Z227, (LONGINT)sizeof (Z299));
}
{
register Z299 *W_34 = &Z306->A[Z307];

W_34->Y0 = Z238;
W_34->Y2 = Z247;
W_34->Y1 = Z303;
}
ZpmCQ_13(&Z304, Z247);
}
}
}
}
}
}
}
}
if (Z247 >= B_12) break;
}
}
}
if (Z302 >= B_10) break;
}
}
}
}
}
}
INC(Z303);
} EXIT_2:;
}
for (;;) {
{
register ZiS8_8 *W_35 = &ZiS8_17->A[Z247];

{
register Zq0A4_120 *W_36 = &Zq0A4_95->A[W_35->Y0]->U_1.V_18.Y17;

if (W_35->Y1 < W_36->Y12) {
Z243 = W_36->Y17->A[W_35->Y1 + 1];
{
register Zq0A4_111 *W_37 = &Zq0A4_93->A[Z243]->U_1.V_9.Y8;

if (Z243 > Zq0A4_91 && ZolB7FGBG_9((LONGINT)(Z243 - Zq0A4_89), (LONGINT)Y1_109, Zq0A4_96) && ZpmCQ_25(Zq0A4_91, W_37->Y11->A[Y1_109 - W_37->Y9])) {
if (W_36->Y16->U_1.V_9.Y8.Y8 == Zq0A4_89 && W_36->Y12 == 1) {
goto EXIT_3;
}
ZpmCQ_32(&Z305);
ZiS8_57(W_35->Y0, (SHORTCARD)(W_35->Y1 + 2), &Z305);
if (ZpmCQ_25(Z248, &Z305)) {
goto EXIT_3;
}
}
}
}
}
}
INC(Z247);
} EXIT_3:;
INC(Z307);
if (Z307 >= Z227) {
ZarQdhNDD_2((ADDRESS *)&Z306, &Z227, (LONGINT)sizeof (Z299));
}
{
register Z299 *W_38 = &Z306->A[Z307];

W_38->Y0 = Z238;
W_38->Y2 = Z247;
W_38->Y1 = Z303;
}
Z308(&frame, (LONGCARD)Z307);
DEC(Z229);
*Z241 = Z238;
*Z242 = Z247;
ZarQdhNDD_3((ADDRESS *)&Z306, &Z227, (LONGINT)sizeof (Z299));
ZpmCQ_7(&Z305);
ZpmCQ_7(&Z304);
}

static void Z279
# ifdef HAVE_ARGS
(CARDINAL Z247, CARDINAL Z248)
# else
(Z247, Z248)
CARDINAL Z247, Z248;
# endif
{
CARDINAL Z260;
LONGINT Z303;
ZpmCQ_4 Z318, Z319, Z305;
Zq0A4_35 Z320;
struct S_5 *Z321;
LONGINT Z322;

if (Zq0A4_95->A[ZiS8_17->A[Z247].Y0]->U_1.V_18.Y17.Y16->U_1.V_9.Y8.Y8 != Zq0A4_89) {
ZpmCQ_5(&Z319, Zq0A4_90);
ZpmCQ_5(&Z305, Zq0A4_91);
ZarQdhNDD_0((ADDRESS *)&Z321, &Z226, (LONGINT)sizeof (Z216));
{
register ZiS8_8 *W_39 = &ZiS8_17->A[Z247];

{
register Z216 *W_40 = &Z321->A[1];

W_40->Y0 = W_39->Y0;
W_40->Y1 = W_39->Y1 + 1;
W_40->Y2 = 0;
}
}
Z322 = 1;
Z303 = 1;
for (;;) {
if (Z303 > Z322) {
goto EXIT_4;
}
{
register Z216 *W_41 = &Z321->A[Z303];

Z260 = Zq0A4_95->A[W_41->Y0]->U_1.V_18.Y17.Y17->A[W_41->Y1 + 1];
if (Z260 < Zq0A4_91) {
goto EXIT_4;
} else {
{
register Zq0A4_111 *W_42 = &Zq0A4_93->A[Z260]->U_1.V_9.Y8;

if (IN(Zq0A4_50, W_42->Y5)) {
ZpmCQ_32(&Z305);
ZiS8_57(W_41->Y0, (SHORTCARD)(W_41->Y1 + 2), &Z305);
if (ZpmCQ_25(Z248, &Z305)) {
INC(Z322);
if (Z322 >= Z226) {
ZarQdhNDD_2((ADDRESS *)&Z321, &Z226, (LONGINT)sizeof (Z216));
}
Z321->A[Z322].Y0 = W_41->Y0;
Z321->A[Z322].Y1 = W_41->Y1 + 1;
Z321->A[Z322].Y2 = Z303;
}
}
if (!ZpmCQ_25(Z260, &Z319) && ZpmCQ_25(Z248, &W_42->Y10)) {
ZpmCQ_13(&Z319, Z260);
Z320 = W_42->Y4;
while (Zq0A4_155(Z320, Zq0A4_18)) {
{
register Zq0A4_120 *W_43 = &Z320->U_1.V_18.Y17;

ZpmCQ_32(&Z305);
ZiS8_57(W_43->Y14, 1, &Z305);
if (ZpmCQ_25(Z248, &Z305)) {
INC(Z322);
if (Z322 >= Z226) {
ZarQdhNDD_2((ADDRESS *)&Z321, &Z226, (LONGINT)sizeof (Z216));
}
{
register Z216 *W_44 = &Z321->A[Z322];

W_44->Y0 = W_43->Y14;
W_44->Y1 = 0;
W_44->Y2 = Z303;
}
}
Z320 = W_43->Y1;
}
}
}
}
}
}
INC(Z303);
} EXIT_4:;
{
register Z216 *W_45 = &Z321->A[Z303];

INC(Z229);
if (Z229 >= Z228) {
Z309();
}
Z224->A[Z229].Y0 = W_45->Y0;
Z224->A[Z229].Y1 = W_45->Y1;
Z303 = W_45->Y2;
}
while (Z303 != 0) {
{
register Z216 *W_46 = &Z321->A[Z303];

INC(Z229);
if (Z229 >= Z228) {
Z309();
}
Z224->A[Z229].Y0 = W_46->Y0;
Z224->A[Z229].Y1 = W_46->Y1;
Z303 = W_46->Y2;
}
}
ZarQdhNDD_3((ADDRESS *)&Z321, &Z226, (LONGINT)sizeof (Z216));
ZpmCQ_7(&Z319);
ZpmCQ_7(&Z305);
} else {
{
register ZiS8_8 *W_47 = &ZiS8_17->A[Z247];

INC(Z229);
if (Z229 >= Z228) {
Z309();
}
Z224->A[Z229].Y0 = W_47->Y0;
Z224->A[Z229].Y1 = W_47->Y1 + 1;
}
}
}

static void Z269
# ifdef HAVE_ARGS
(CARDINAL Z238, CARDINAL Z247)
# else
(Z238, Z247)
CARDINAL Z238, Z247;
# endif
{
CARDINAL Z273, Z261;
LONGINT Z325;

{
register ZiS8_8 *W_48 = &ZiS8_17->A[Z247];

INC(Z229);
Z224->A[Z229].Y0 = W_48->Y0;
Z224->A[Z229].Y1 = W_48->Y1;
Z273 = Zq0A4_95->A[W_48->Y0]->U_1.V_18.Y17.Y16->U_1.V_9.Y8.Y8;
}
if (Z238 == Z231 && Z273 == Z233) {
{
LONGCARD B_13 = 1, B_14 = Z235;

if (B_13 <= B_14)
for (Z261 = B_13;; Z261 += 1) {
INC(Z229);
Z224->A[Z229] = Z222->A[Z261];
if (Z261 >= B_14) break;
}
}
Z237 = 1;
return;
}
if (Z238 == Z232 && Z273 == Z234) {
{
LONGCARD B_15 = 1, B_16 = Z236;

if (B_15 <= B_16)
for (Z261 = B_15;; Z261 += 1) {
INC(Z229);
Z224->A[Z229] = Z223->A[Z261];
if (Z261 >= B_16) break;
}
}
Z237 = 2;
return;
}
if (Z237 == 1) {
Z232 = Z238;
Z234 = Z273;
} else {
Z231 = Z238;
Z233 = Z273;
}
Z325 = Z229;
while (Z273 != Zq0A4_89) {
{
register Zq0A4_111 *W_49 = &Zq0A4_93->A[Z273]->U_1.V_9.Y8;

INC(Z229);
if (Z229 >= Z228) {
Z309();
}
Z224->A[Z229].Y0 = W_49->Y13;
Z224->A[Z229].Y1 = W_49->Y14;
Z273 = Zq0A4_95->A[W_49->Y13]->U_1.V_18.Y17.Y16->U_1.V_9.Y8.Y8;
}
}
if (Z237 == 1) {
Z236 = Z229 - Z325;
{
LONGCARD B_17 = 1, B_18 = Z236;

if (B_17 <= B_18)
for (Z261 = B_17;; Z261 += 1) {
INC(Z325);
Z223->A[Z261] = Z224->A[Z325];
if (Z261 >= B_18) break;
}
}
Z237 = 2;
} else {
Z235 = Z229 - Z325;
{
LONGCARD B_19 = 1, B_20 = Z235;

if (B_19 <= B_20)
for (Z261 = B_19;; Z261 += 1) {
INC(Z325);
Z222->A[Z261] = Z224->A[Z325];
if (Z261 >= B_20) break;
}
}
Z237 = 1;
}
}

static void Z311
# ifdef HAVE_ARGS
(CARDINAL Z247, CARDINAL Z248, BOOLEAN Z328)
# else
(Z247, Z248, Z328)
CARDINAL Z247, Z248;
BOOLEAN Z328;
# endif
{
CARDINAL Z303, Z260;
ZpmCQ_4 Z319, Z305;
Zq0A4_35 Z320;
struct S_4 *Z321;
LONGINT Z322;

ZarQdhNDD_0((ADDRESS *)&Z321, &Z226, (LONGINT)sizeof (Z216));
{
register ZiS8_8 *W_50 = &ZiS8_17->A[Z247];

{
register Z216 *W_51 = &Z321->A[1];

W_51->Y0 = W_50->Y0;
W_51->Y1 = W_50->Y1;
W_51->Y2 = 0;
}
Z322 = 1;
Z303 = 1;
if (Zq0A4_95->A[W_50->Y0]->U_1.V_18.Y17.Y17->A[W_50->Y1 + 1] != Z248) {
ZpmCQ_5(&Z319, Zq0A4_90);
ZpmCQ_5(&Z305, Zq0A4_91);
for (;;) {
{
register Z216 *W_52 = &Z321->A[Z303];

Z260 = Zq0A4_95->A[W_52->Y0]->U_1.V_18.Y17.Y17->A[W_52->Y1 + 1];
}
if (!ZpmCQ_25(Z260, &Z319)) {
ZpmCQ_13(&Z319, Z260);
Z320 = Zq0A4_93->A[Z260]->U_1.V_9.Y8.Y4;
while (Zq0A4_155(Z320, Zq0A4_18)) {
{
register Zq0A4_120 *W_53 = &Z320->U_1.V_18.Y17;

if (W_53->Y12 > 0 && W_53->Y17->A[1] > Zq0A4_91) {
if (Z328) {
ZpmCQ_32(&Z305);
ZiS8_57(W_53->Y14, 2, &Z305);
}
if (!Z328 || ZpmCQ_25(Zq0A4_91, &Z305)) {
INC(Z322);
if (Z322 >= Z226) {
ZarQdhNDD_2((ADDRESS *)&Z321, &Z226, (LONGINT)sizeof (Z216));
}
{
register Z216 *W_54 = &Z321->A[Z322];

W_54->Y0 = W_53->Y14;
W_54->Y1 = 0;
W_54->Y2 = Z303;
}
if (W_53->Y17->A[1] == Z248) {
goto EXIT_5;
}
}
}
Z320 = W_53->Y1;
}
}
}
INC(Z303);
if (Z303 > (CARDINAL)Z322) {
ZblNKKO_44((STRING)"internal error: out of B entries", 32L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
}
} EXIT_5:;
ZpmCQ_7(&Z319);
ZpmCQ_7(&Z305);
}
Z303 = Z322;
while (Z303 != 0) {
{
register Z216 *W_55 = &Z321->A[Z303];

INC(Z229);
if (Z229 >= Z228) {
Z309();
}
Z224->A[Z229].Y0 = W_55->Y0;
Z224->A[Z229].Y1 = W_55->Y1;
Z303 = W_55->Y2;
}
}
}
ZarQdhNDD_3((ADDRESS *)&Z321, &Z226, (LONGINT)sizeof (Z216));
}

static void Z270
# ifdef HAVE_ARGS
(LONGINT Z243, LONGINT Z244)
# else
(Z243, Z244)
LONGINT Z243, Z244;
# endif
{
LONGINT Z329, Z261;

Z329 = Z229;
while (Z230 > 0 && Z329 > 0 && Z225->A[Z230].Y0 == Z224->A[Z329].Y0 && Z225->A[Z230].Y1 == Z224->A[Z329].Y1) {
DEC(Z329);
DEC(Z230);
}
if (Z229 - Z329 >= 3) {
INC(Z329);
ZfM_29(ZbrRF74A_0, (STRING)" ...", 4L);
ZfM_33(ZbrRF74A_0);
} else {
Z329 = Z229;
}
for (Z261 = Z329; Z261 >= 1; Z261 += -1) {
if (Z244 < Z261 && Z261 <= Z243) {
ZfM_29(ZbrRF74A_0, (STRING)"| ", 2L);
}
Z276((LONGCARD)Z224->A[Z261].Y0, (LONGCARD)Z224->A[Z261].Y1);
ZfM_33(ZbrRF74A_0);
}
}

static void Z276
# ifdef HAVE_ARGS
(CARDINAL Z267, CARDINAL Z268)
# else
(Z267, Z268)
CARDINAL Z267, Z268;
# endif
{
CARDINAL Z261;
Zq0A4_35 Z248;

{
register Zq0A4_120 *W_56 = &Zq0A4_95->A[Z267]->U_1.V_18.Y17;

if (Z268 == 0) {
ZfM_29(ZbrRF74A_0, (STRING)".", 1L);
} else {
ZfM_29(ZbrRF74A_0, (STRING)" ", 1L);
}
{
LONGCARD B_21 = 1, B_22 = W_56->Y12;

if (B_21 <= B_22)
for (Z261 = B_21;; Z261 += 1) {
Z248 = Zq0A4_93->A[W_56->Y17->A[Z261]];
if (Z248->U_1.V_1.Y0 == Zq0A4_6) {
Zfb3DLQ_7(ZbrRF74A_0, Z248->U_1.V_6.Y5.Y2);
} else {
Zfb3DLQ_7(ZbrRF74A_0, Z248->U_1.V_9.Y8.Y2);
}
if (Z261 == Z268) {
ZfM_29(ZbrRF74A_0, (STRING)".", 1L);
} else {
ZfM_29(ZbrRF74A_0, (STRING)" ", 1L);
}
if (Z261 >= B_22) break;
}
}
}
}

static void Z277
# ifdef HAVE_ARGS
(CARDINAL Z247)
# else
(Z247)
CARDINAL Z247;
# endif
{
CARDINAL Z261, Z268;

Z268 = Z224->A[Z247].Y1 + 1;
{
register Zq0A4_120 *W_57 = &Zq0A4_95->A[Z224->A[Z247].Y0]->U_1.V_18.Y17;

{
LONGCARD B_23 = 1, B_24 = W_57->Y12;

if (B_23 <= B_24)
for (Z261 = B_23;; Z261 += 1) {
if (Z268 == Z261) {
if (Z247 > 1) {
Z277(Z247 - 1);
} else {
ZfM_24(ZbrRF74A_0, '.');
Z330((LONGCARD)W_57->Y17->A[Z261]);
}
} else {
Z330((LONGCARD)W_57->Y17->A[Z261]);
}
if (Z261 >= B_24) break;
}
}
}
}

static void Z281
# ifdef HAVE_ARGS
(CARDINAL Z243, CARDINAL Z244, CARDINAL Z247)
# else
(Z243, Z244, Z247)
CARDINAL Z243, Z244, Z247;
# endif
{
CARDINAL Z261, Z268;

Z268 = Z224->A[Z247].Y1 + 1;
{
register Zq0A4_120 *W_58 = &Zq0A4_95->A[Z224->A[Z247].Y0]->U_1.V_18.Y17;

if (Z247 > Z243 + 1) {
{
LONGCARD B_25 = 1, B_26 = W_58->Y12;

if (B_25 <= B_26)
for (Z261 = B_25;; Z261 += 1) {
if (Z268 == Z261) {
Z281(Z243, Z244, Z247 - 1);
} else {
Z330((LONGCARD)W_58->Y17->A[Z261]);
}
if (Z261 >= B_26) break;
}
}
} else {
Z261 = 1;
for (;;) {
if (Z261 > W_58->Y12) {
goto EXIT_6;
}
if (Z268 == Z261) {
Z277(Z244);
Z261 = Z224->A[Z243].Y1 + 1;
if (W_58->Y17->A[Z261] < Zq0A4_91) {
ZfM_24(ZbrRF74A_0, '.');
Z330((LONGCARD)W_58->Y17->A[Z261]);
} else {
Z331(Z243 - 1);
}
} else {
Z330((LONGCARD)W_58->Y17->A[Z261]);
}
INC(Z261);
} EXIT_6:;
}
}
}

static void Z331
# ifdef HAVE_ARGS
(CARDINAL Z247)
# else
(Z247)
CARDINAL Z247;
# endif
{
CARDINAL Z261, Z268;

Z268 = Z224->A[Z247].Y1 + 1;
{
register Zq0A4_120 *W_59 = &Zq0A4_95->A[Z224->A[Z247].Y0]->U_1.V_18.Y17;

{
LONGCARD B_27 = 1, B_28 = W_59->Y12;

if (B_27 <= B_28)
for (Z261 = B_27;; Z261 += 1) {
if (Z268 == Z261) {
if (W_59->Y17->A[Z261] < Zq0A4_91) {
ZfM_24(ZbrRF74A_0, '.');
Z330((LONGCARD)W_59->Y17->A[Z261]);
} else {
Z331(Z247 - 1);
}
} else {
Z330((LONGCARD)W_59->Y17->A[Z261]);
}
if (Z261 >= B_28) break;
}
}
}
}

static void Z330
# ifdef HAVE_ARGS
(CARDINAL Z332)
# else
(Z332)
CARDINAL Z332;
# endif
{
Zp1PEAFD_2 Z333;
CARDINAL Z261;
CHAR Z334;

if (Z332 < Zq0A4_91) {
if (Z332 == 0) {
return;
}
Zfb3DLQ_3(Zq0A4_93->A[Z332]->U_1.V_6.Y5.Y9, &Z333);
Z334 = Zp1PEAFD_12(&Z333, 1);
if (Z334 == '"' || Z334 == '\'') {
{
LONGCARD B_29 = 2, B_30 = Zp1PEAFD_7(&Z333) - 1;

if (B_29 <= B_30)
for (Z261 = B_29;; Z261 += 1) {
ZfM_24(ZbrRF74A_0, Zp1PEAFD_12(&Z333, (Zp1PEAFD_1)Z261));
if (Z261 >= B_30) break;
}
}
} else {
{
LONGCARD B_31 = 1, B_32 = Zp1PEAFD_7(&Z333);

if (B_31 <= B_32)
for (Z261 = B_31;; Z261 += 1) {
ZfM_24(ZbrRF74A_0, Zp1PEAFD_12(&Z333, (Zp1PEAFD_1)Z261));
if (Z261 >= B_32) break;
}
}
}
ZfM_24(ZbrRF74A_0, ' ');
} else {
{
register Zq0A4_120 *W_60 = &Zq0A4_93->A[Z332]->U_1.V_9.Y8.Y4->U_1.V_18.Y17;

{
LONGCARD B_33 = 1, B_34 = W_60->Y12;

if (B_33 <= B_34)
for (Z261 = B_33;; Z261 += 1) {
Z330((LONGCARD)W_60->Y17->A[Z261]);
if (Z261 >= B_34) break;
}
}
}
}
}

static void Z309
 ARGS ((void))
{
LONGINT Z336;

Z336 = Z228;
ZarQdhNDD_2((ADDRESS *)&Z222, &Z228, (LONGINT)sizeof (Z220));
Z228 = Z336;
ZarQdhNDD_2((ADDRESS *)&Z223, &Z228, (LONGINT)sizeof (Z220));
Z228 = Z336;
ZarQdhNDD_2((ADDRESS *)&Z224, &Z228, (LONGINT)sizeof (Z220));
Z228 = Z336;
ZarQdhNDD_2((ADDRESS *)&Z225, &Z228, (LONGINT)sizeof (Z220));
}

void BEGIN_Explain ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Sets ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Idents ();
BEGIN_Strings ();
BEGIN_Relation ();
BEGIN_Texts ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Semantic ();
BEGIN_Conflict ();
BEGIN_GenLRk ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_LR1 ();
BEGIN_Conflict ();
BEGIN_Tree ();

Z237 = 0;
Z231 = 0;
Z232 = 0;
Z226 = Z214;
Z227 = Z215;
Z228 = Z213;
ZarQdhNDD_0((ADDRESS *)&Z222, &Z228, (LONGINT)sizeof (Z220));
ZarQdhNDD_0((ADDRESS *)&Z223, &Z228, (LONGINT)sizeof (Z220));
ZarQdhNDD_0((ADDRESS *)&Z224, &Z228, (LONGINT)sizeof (Z220));
ZarQdhNDD_0((ADDRESS *)&Z225, &Z228, (LONGINT)sizeof (Z220));
}
