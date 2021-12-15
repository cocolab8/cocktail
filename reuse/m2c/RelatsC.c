#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_SetsC
#include "SetsC.h"
#endif

#ifndef DEFINITION_SetsC
#include "SetsC.h"
#endif

#ifndef DEFINITION_RelatsC
#include "RelatsC.h"
#endif


static SHORTCARD Z131, Z132;
static ZolB7FQk_3 Z154;
static BOOLEAN Z155 ARGS ((CARDINAL Z156));
typedef struct S_1 {
SHORTCARD A[1000000 + 1];
} Z167;
static Z167 *Z168;
static ZpmCQk_2 Z169;
static void Z174 ARGS ((CARDINAL Z156));
static void Z178 ARGS ((CARDINAL Z156));
static ZolB7FQk_2 Z196;
static BOOLEAN Z198 ARGS ((CARDINAL Z156));
static ZolB7FQk_1 Z202;
static void Z204 ARGS ((CARDINAL Z156));
static ZfM_3 Z208;
static void Z210 ARGS ((INTEGER Z144, INTEGER Z145));

void ZolB7FQk_4
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134, INTEGER Z136, INTEGER Z137)
# else
(Z134, Z136, Z137)
ZolB7FQk_3 *Z134;
INTEGER Z136, Z137;
# endif
{
LONGINT Z138;

Z134->Y1 = Z136;
Z134->Y2 = Z137;
Z138 = Z136 + 1;
ZarQdhNDD_0((ADDRESS *)&Z134->Y0, &Z138, (LONGINT)sizeof (ZpmCQk_2));
{
SHORTCARD B_1 = 0, B_2 = Z134->Y1;

if (B_1 <= B_2)
for (Z131 = B_1;; Z131 += 1) {
ZpmCQk_3(&Z134->Y0->A[Z131], (LONGCARD)Z137);
if (Z131 >= B_2) break;
}
}
}

void ZolB7FQk_5
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134)
# else
(Z134)
ZolB7FQk_3 *Z134;
# endif
{
LONGINT Z138;

{
SHORTCARD B_3 = 0, B_4 = Z134->Y1;

if (B_3 <= B_4)
for (Z131 = B_3;; Z131 += 1) {
ZpmCQk_5(&Z134->Y0->A[Z131]);
if (Z131 >= B_4) break;
}
}
Z138 = Z134->Y1 + 1;
ZarQdhNDD_3((ADDRESS *)&Z134->Y0, &Z138, (LONGINT)sizeof (ZpmCQk_2));
}

void ZolB7FQk_6
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134, INTEGER Z144, INTEGER Z145)
# else
(Z134, Z144, Z145)
ZolB7FQk_3 *Z134;
INTEGER Z144, Z145;
# endif
{
ZpmCQk_11(&Z134->Y0->A[Z144], (LONGCARD)Z145);
}

void ZolB7FQk_7
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134, INTEGER Z144, INTEGER Z145)
# else
(Z134, Z144, Z145)
ZolB7FQk_3 *Z134;
INTEGER Z144, Z145;
# endif
{
ZpmCQk_12(&Z134->Y0->A[Z144], (LONGCARD)Z145);
}

BOOLEAN ZolB7FQk_8
# ifdef HAVE_ARGS
(INTEGER Z144, INTEGER Z145, ZolB7FQk_3 Z134)
# else
(Z144, Z145, Z134)
INTEGER Z144, Z145;
ZolB7FQk_3 Z134;
# endif
{
return ZpmCQk_23((LONGCARD)Z145, &Z134.Y0->A[Z144]);
}

BOOLEAN ZolB7FQk_9
# ifdef HAVE_ARGS
(INTEGER Z144, INTEGER Z145, ZolB7FQk_3 Z134)
# else
(Z144, Z145, Z134)
INTEGER Z144, Z145;
ZolB7FQk_3 Z134;
# endif
{
return ZpmCQk_23((LONGCARD)Z145, &Z134.Y0->A[Z144]);
}

BOOLEAN ZolB7FQk_10
# ifdef HAVE_ARGS
(INTEGER Z144, ZolB7FQk_3 Z134)
# else
(Z144, Z134)
INTEGER Z144;
ZolB7FQk_3 Z134;
# endif
{
return ZpmCQk_23((LONGCARD)Z144, &Z134.Y0->A[Z144]);
}

BOOLEAN ZolB7FQk_11
# ifdef HAVE_ARGS
(INTEGER Z144, INTEGER Z145, ZolB7FQk_3 Z134)
# else
(Z144, Z145, Z134)
INTEGER Z144, Z145;
ZolB7FQk_3 Z134;
# endif
{
return !ZpmCQk_23((LONGCARD)Z145, &Z134.Y0->A[Z144]) || ZpmCQk_23((LONGCARD)Z144, &Z134.Y0->A[Z145]);
}

BOOLEAN ZolB7FQk_12
# ifdef HAVE_ARGS
(INTEGER Z144, INTEGER Z145, INTEGER Z152, ZolB7FQk_3 Z134)
# else
(Z144, Z145, Z152, Z134)
INTEGER Z144, Z145, Z152;
ZolB7FQk_3 Z134;
# endif
{
return !(ZpmCQk_23((LONGCARD)Z145, &Z134.Y0->A[Z144]) && ZpmCQk_23((LONGCARD)Z152, &Z134.Y0->A[Z145])) || ZpmCQk_23((LONGCARD)Z152, &Z134.Y0->A[Z144]);
}

BOOLEAN ZolB7FQk_13
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134)
# else
(Z134)
ZolB7FQk_3 Z134;
# endif
{
{
SHORTCARD B_5 = 0, B_6 = Z134.Y1;

if (B_5 <= B_6)
for (Z131 = B_5;; Z131 += 1) {
if (!ZpmCQk_23((LONGCARD)Z131, &Z134.Y0->A[Z131])) {
return FALSE;
}
if (Z131 >= B_6) break;
}
}
return TRUE;
}

static BOOLEAN Z155
# ifdef HAVE_ARGS
(CARDINAL Z156)
# else
(Z156)
CARDINAL Z156;
# endif
{
return ZpmCQk_23((LONGCARD)Z131, &Z154.Y0->A[Z156]);
}

BOOLEAN ZolB7FQk_14
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134)
# else
(Z134)
ZolB7FQk_3 Z134;
# endif
{
Z154 = Z134;
{
SHORTCARD B_7 = 0, B_8 = Z134.Y1;

if (B_7 <= B_8)
for (Z131 = B_7;; Z131 += 1) {
if (!ZpmCQk_25(Z134.Y0->A[Z131], (ZpmCQ_2)Z155)) {
return FALSE;
}
if (Z131 >= B_8) break;
}
}
return TRUE;
}

BOOLEAN ZolB7FQk_15
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134)
# else
(Z134)
ZolB7FQk_3 Z134;
# endif
{
ZolB7FQk_3 Z160;
BOOLEAN Z161;

ZolB7FQk_4(&Z160, (LONGINT)Z134.Y1, (LONGINT)Z134.Y2);
ZolB7FQk_23(&Z160, Z134);
ZolB7FQk_20(&Z160);
Z161 = ZolB7FQk_31(&Z160, &Z134);
ZolB7FQk_5(&Z160);
return Z161;
}

BOOLEAN ZolB7FQk_16
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134)
# else
(Z134)
ZolB7FQk_3 Z134;
# endif
{
return ZolB7FQk_13(Z134) && ZolB7FQk_14(Z134) && ZolB7FQk_15(Z134);
}

BOOLEAN ZolB7FQk_17
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134)
# else
(Z134)
ZolB7FQk_3 Z134;
# endif
{
{
SHORTCARD B_9 = 0, B_10 = Z134.Y1;

if (B_9 <= B_10)
for (Z131 = B_9;; Z131 += 1) {
if (ZpmCQk_23((LONGCARD)Z131, &Z134.Y0->A[Z131])) {
return TRUE;
}
if (Z131 >= B_10) break;
}
}
return FALSE;
}

BOOLEAN ZolB7FQk_18
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134)
# else
(Z134)
ZolB7FQk_3 Z134;
# endif
{
LONGINT Z171;
ZpmCQk_2 Z172;
BOOLEAN Z161;

Z171 = Z134.Y1 + 1;
ZarQdhNDD_0((ADDRESS *)&Z168, &Z171, (LONGINT)sizeof (SHORTCARD));
ZpmCQk_3(&Z169, (LONGCARD)Z134.Y1);
ZpmCQk_3(&Z172, (LONGCARD)Z134.Y1);
{
SHORTCARD B_11 = 0, B_12 = Z134.Y1;

if (B_11 <= B_12)
for (Z131 = B_11;; Z131 += 1) {
Z168->A[Z131] = 0;
if (Z131 >= B_12) break;
}
}
{
SHORTCARD B_13 = 0, B_14 = Z134.Y1;

if (B_13 <= B_14)
for (Z131 = B_13;; Z131 += 1) {
ZpmCQk_31(Z134.Y0->A[Z131], (ZpmCQ_1)Z174);
if (Z131 >= B_14) break;
}
}
{
SHORTCARD B_15 = 0, B_16 = Z134.Y1;

if (B_15 <= B_16)
for (Z131 = B_15;; Z131 += 1) {
if (Z168->A[Z131] == 0) {
ZpmCQk_11(&Z169, (LONGCARD)Z131);
}
if (Z131 >= B_16) break;
}
}
ZpmCQk_10(&Z172);
while (!ZpmCQk_24(Z169)) {
Z131 = ZpmCQk_18(&Z169);
ZpmCQk_12(&Z172, (LONGCARD)Z131);
ZpmCQk_31(Z134.Y0->A[Z131], (ZpmCQ_1)Z178);
}
Z161 = !ZpmCQk_24(Z172);
ZpmCQk_5(&Z169);
ZpmCQk_5(&Z172);
ZarQdhNDD_3((ADDRESS *)&Z168, &Z171, (LONGINT)sizeof (SHORTCARD));
return Z161;
}

static void Z174
# ifdef HAVE_ARGS
(CARDINAL Z156)
# else
(Z156)
CARDINAL Z156;
# endif
{
INC(Z168->A[Z156]);
}

static void Z178
# ifdef HAVE_ARGS
(CARDINAL Z156)
# else
(Z156)
CARDINAL Z156;
# endif
{
DEC(Z168->A[Z156]);
if (Z168->A[Z156] == 0) {
ZpmCQk_11(&Z169, Z156);
}
}

void ZolB7FQk_19
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134, ZpmCQk_2 *Z180)
# else
(Z134, Z180)
ZolB7FQk_3 Z134;
ZpmCQk_2 *Z180;
# endif
{
ZolB7FQk_3 Z160;

ZolB7FQk_4(&Z160, (LONGINT)Z134.Y1, (LONGINT)Z134.Y2);
ZolB7FQk_23(&Z160, Z134);
ZolB7FQk_20(&Z160);
ZpmCQk_30(Z180);
{
SHORTCARD B_17 = 0, B_18 = Z160.Y1;

if (B_17 <= B_18)
for (Z131 = B_17;; Z131 += 1) {
if (ZpmCQk_23((LONGCARD)Z131, &Z160.Y0->A[Z131])) {
ZpmCQk_11(Z180, (LONGCARD)Z131);
}
if (Z131 >= B_18) break;
}
}
ZolB7FQk_5(&Z160);
}

void ZolB7FQk_21
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134)
# else
(Z134)
ZolB7FQk_3 *Z134;
# endif
{
{
SHORTCARD B_19 = 0, B_20 = Z134->Y1;

if (B_19 <= B_20)
for (Z131 = B_19;; Z131 += 1) {
ZpmCQk_30(&Z134->Y0->A[Z131]);
if (Z131 >= B_20) break;
}
}
}

void ZolB7FQk_22
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134, INTEGER Z144, INTEGER Z145)
# else
(Z134, Z144, Z145)
ZolB7FQk_3 *Z134;
INTEGER Z144, Z145;
# endif
{
ZolB7FQk_21(Z134);
ZolB7FQk_6(Z134, Z144, Z145);
}

void ZolB7FQk_23
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z183, ZolB7FQk_3 Z184)
# else
(Z183, Z184)
ZolB7FQk_3 *Z183;
ZolB7FQk_3 Z184;
# endif
{
{
SHORTCARD B_21 = 0, B_22 = Z183->Y1;

if (B_21 <= B_22)
for (Z131 = B_21;; Z131 += 1) {
ZpmCQk_28(&Z183->Y0->A[Z131], Z184.Y0->A[Z131]);
if (Z131 >= B_22) break;
}
}
}

void ZolB7FQk_20
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134)
# else
(Z134)
ZolB7FQk_3 *Z134;
# endif
{
ZpmCQk_2 Z185;

{
register ZolB7FGBG_3 *W_1 = Z134;

{
SHORTCARD B_23 = 0, B_24 = W_1->Y1;

if (B_23 <= B_24)
for (Z132 = B_23;; Z132 += 1) {
if (!ZpmCQk_24(W_1->Y0->A[Z132])) {
Z185 = W_1->Y0->A[Z132];
{
SHORTCARD B_25 = 0, B_26 = W_1->Y1;

if (B_25 <= B_26)
for (Z131 = B_25;; Z131 += 1) {
if (ZpmCQk_23((LONGCARD)Z132, &W_1->Y0->A[Z131])) {
ZpmCQk_6(&W_1->Y0->A[Z131], Z185);
}
if (Z131 >= B_26) break;
}
}
}
if (Z132 >= B_24) break;
}
}
}
}

void ZolB7FQk_24
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z183, ZolB7FQk_3 Z184)
# else
(Z183, Z184)
ZolB7FQk_3 *Z183;
ZolB7FQk_3 Z184;
# endif
{
{
SHORTCARD B_27 = 0, B_28 = Z183->Y1;

if (B_27 <= B_28)
for (Z131 = B_27;; Z131 += 1) {
ZpmCQk_6(&Z183->Y0->A[Z131], Z184.Y0->A[Z131]);
if (Z131 >= B_28) break;
}
}
}

void ZolB7FQk_25
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z183, ZolB7FQk_3 Z184)
# else
(Z183, Z184)
ZolB7FQk_3 *Z183;
ZolB7FQk_3 Z184;
# endif
{
{
SHORTCARD B_29 = 0, B_30 = Z183->Y1;

if (B_29 <= B_30)
for (Z131 = B_29;; Z131 += 1) {
ZpmCQk_7(&Z183->Y0->A[Z131], Z184.Y0->A[Z131]);
if (Z131 >= B_30) break;
}
}
}

void ZolB7FQk_26
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z183, ZolB7FQk_3 Z184)
# else
(Z183, Z184)
ZolB7FQk_3 *Z183;
ZolB7FQk_3 Z184;
# endif
{
{
SHORTCARD B_31 = 0, B_32 = Z183->Y1;

if (B_31 <= B_32)
for (Z131 = B_31;; Z131 += 1) {
ZpmCQk_8(&Z183->Y0->A[Z131], Z184.Y0->A[Z131]);
if (Z131 >= B_32) break;
}
}
}

void ZolB7FQk_27
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z183, ZolB7FQk_3 Z184)
# else
(Z183, Z184)
ZolB7FQk_3 *Z183;
ZolB7FQk_3 Z184;
# endif
{
{
SHORTCARD B_33 = 0, B_34 = Z183->Y1;

if (B_33 <= B_34)
for (Z131 = B_33;; Z131 += 1) {
ZpmCQk_9(&Z183->Y0->A[Z131], Z184.Y0->A[Z131]);
if (Z131 >= B_34) break;
}
}
}

void ZolB7FQk_28
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134)
# else
(Z134)
ZolB7FQk_3 *Z134;
# endif
{
{
SHORTCARD B_35 = 0, B_36 = Z134->Y1;

if (B_35 <= B_36)
for (Z131 = B_35;; Z131 += 1) {
ZpmCQk_10(&Z134->Y0->A[Z131]);
if (Z131 >= B_36) break;
}
}
}

BOOLEAN ZolB7FQk_29
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z183, ZolB7FQk_3 Z184)
# else
(Z183, Z184)
ZolB7FQk_3 Z183, Z184;
# endif
{
{
SHORTCARD B_37 = 0, B_38 = Z183.Y1;

if (B_37 <= B_38)
for (Z131 = B_37;; Z131 += 1) {
if (!ZpmCQk_19(Z183.Y0->A[Z131], Z184.Y0->A[Z131])) {
return FALSE;
}
if (Z131 >= B_38) break;
}
}
return TRUE;
}

BOOLEAN ZolB7FQk_30
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z183, ZolB7FQk_3 Z184)
# else
(Z183, Z184)
ZolB7FQk_3 Z183, Z184;
# endif
{
return ZolB7FQk_29(Z183, Z184) && ZolB7FQk_32(Z183, Z184);
}

BOOLEAN ZolB7FQk_31
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z183, ZolB7FQk_3 *Z184)
# else
(Z183, Z184)
ZolB7FQk_3 *Z183, *Z184;
# endif
{
{
SHORTCARD B_39 = 0, B_40 = Z183->Y1;

if (B_39 <= B_40)
for (Z131 = B_39;; Z131 += 1) {
if (!ZpmCQk_21(&Z183->Y0->A[Z131], &Z184->Y0->A[Z131])) {
return FALSE;
}
if (Z131 >= B_40) break;
}
}
return TRUE;
}

BOOLEAN ZolB7FQk_32
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z183, ZolB7FQk_3 Z184)
# else
(Z183, Z184)
ZolB7FQk_3 Z183, Z184;
# endif
{
return !ZolB7FQk_31(&Z183, &Z184);
}

BOOLEAN ZolB7FQk_33
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134)
# else
(Z134)
ZolB7FQk_3 Z134;
# endif
{
{
SHORTCARD B_41 = 0, B_42 = Z134.Y1;

if (B_41 <= B_42)
for (Z131 = B_41;; Z131 += 1) {
if (!ZpmCQk_24(Z134.Y0->A[Z131])) {
return FALSE;
}
if (Z131 >= B_42) break;
}
}
return TRUE;
}

INTEGER ZolB7FQk_34
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134)
# else
(Z134)
ZolB7FQk_3 *Z134;
# endif
{
INTEGER Z194;

Z194 = 0;
{
SHORTCARD B_43 = 0, B_44 = Z134->Y1;

if (B_43 <= B_44)
for (Z131 = B_43;; Z131 += 1) {
INC1(Z194, ZpmCQk_13(&Z134->Y0->A[Z131]));
if (Z131 >= B_44) break;
}
}
return Z194;
}

void ZolB7FQk_35
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134, INTEGER *Z144, INTEGER *Z145)
# else
(Z134, Z144, Z145)
ZolB7FQk_3 *Z134;
INTEGER *Z144, *Z145;
# endif
{
{
SHORTCARD B_45 = 0, B_46 = Z134->Y1;

if (B_45 <= B_46)
for (Z131 = B_45;; Z131 += 1) {
if (!ZpmCQk_24(Z134->Y0->A[Z131])) {
*Z144 = Z131;
*Z145 = ZpmCQk_17(&Z134->Y0->A[Z131]);
return;
}
if (Z131 >= B_46) break;
}
}
*Z144 = 0;
*Z145 = 0;
}

void ZolB7FQk_36
# ifdef HAVE_ARGS
(ZolB7FQk_3 *Z134, INTEGER *Z144, INTEGER *Z145)
# else
(Z134, Z144, Z145)
ZolB7FQk_3 *Z134;
INTEGER *Z144, *Z145;
# endif
{
ZolB7FQk_35(Z134, Z144, Z145);
ZolB7FQk_7(Z134, *Z144, *Z145);
}

static BOOLEAN Z198
# ifdef HAVE_ARGS
(CARDINAL Z156)
# else
(Z156)
CARDINAL Z156;
# endif
{
return (*Z196)((LONGINT)Z131, (LONGINT)Z156);
}

BOOLEAN ZolB7FQk_37
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134, ZolB7FQk_2 Z199)
# else
(Z134, Z199)
ZolB7FQk_3 Z134;
ZolB7FQk_2 Z199;
# endif
{
Z196 = Z199;
{
SHORTCARD B_47 = 0, B_48 = Z134.Y1;

if (B_47 <= B_48)
for (Z131 = B_47;; Z131 += 1) {
if (!ZpmCQk_25(Z134.Y0->A[Z131], (ZpmCQ_2)Z198)) {
return FALSE;
}
if (Z131 >= B_48) break;
}
}
return TRUE;
}

BOOLEAN ZolB7FQk_38
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134, ZolB7FQk_2 Z199)
# else
(Z134, Z199)
ZolB7FQk_3 Z134;
ZolB7FQk_2 Z199;
# endif
{
Z196 = Z199;
{
SHORTCARD B_49 = 0, B_50 = Z134.Y1;

if (B_49 <= B_50)
for (Z131 = B_49;; Z131 += 1) {
if (ZpmCQk_26(Z134.Y0->A[Z131], (ZpmCQ_2)Z198)) {
return TRUE;
}
if (Z131 >= B_50) break;
}
}
return FALSE;
}

BOOLEAN ZolB7FQk_39
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134, ZolB7FQk_2 Z199)
# else
(Z134, Z199)
ZolB7FQk_3 Z134;
ZolB7FQk_2 Z199;
# endif
{
INTEGER Z194;

Z194 = 0;
Z196 = Z199;
{
SHORTCARD B_51 = 0, B_52 = Z134.Y1;

if (B_51 <= B_52)
for (Z131 = B_51;; Z131 += 1) {
if (ZpmCQk_26(Z134.Y0->A[Z131], (ZpmCQ_2)Z198)) {
INC(Z194);
}
if (Z131 >= B_52) break;
}
}
return Z194 == 1;
}

static void Z204
# ifdef HAVE_ARGS
(CARDINAL Z156)
# else
(Z156)
CARDINAL Z156;
# endif
{
(*Z202)((LONGINT)Z131, (LONGINT)Z156);
}

void ZolB7FQk_40
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134, ZolB7FQk_1 Z199)
# else
(Z134, Z199)
ZolB7FQk_3 Z134;
ZolB7FQk_1 Z199;
# endif
{
Z202 = Z199;
{
SHORTCARD B_53 = 0, B_54 = Z134.Y1;

if (B_53 <= B_54)
for (Z131 = B_53;; Z131 += 1) {
ZpmCQk_31(Z134.Y0->A[Z131], (ZpmCQ_1)Z204);
if (Z131 >= B_54) break;
}
}
}

void ZolB7FQk_41
# ifdef HAVE_ARGS
(ZfM_3 Z206, ZolB7FQk_3 *Z134)
# else
(Z206, Z134)
ZfM_3 Z206;
ZolB7FQk_3 *Z134;
# endif
{
CHAR Z207;

do {
} while (!(ZfM_7(Z206) == '{'));
ZolB7FQk_21(Z134);
for (;;) {
if (ZfM_7(Z206) == '}') {
goto EXIT_1;
}
Z131 = ZfM_8(Z206);
ZolB7FQk_6(Z134, (LONGINT)Z131, ZfM_8(Z206));
Z207 = ZfM_7(Z206);
} EXIT_1:;
}

void ZolB7FQk_42
# ifdef HAVE_ARGS
(ZfM_3 Z206, ZolB7FQk_3 Z134)
# else
(Z206, Z134)
ZfM_3 Z206;
ZolB7FQk_3 Z134;
# endif
{
Z208 = Z206;
ZfM_24(Z206, '{');
ZolB7FQk_40(Z134, (ZolB7FGBG_1)Z210);
ZfM_24(Z206, '}');
}

static void Z210
# ifdef HAVE_ARGS
(INTEGER Z144, INTEGER Z145)
# else
(Z144, Z145)
INTEGER Z144, Z145;
# endif
{
ZfM_24(Z208, ' ');
ZfM_25(Z208, Z144, 1L);
ZfM_24(Z208, ' ');
ZfM_25(Z208, Z145, 1L);
ZfM_24(Z208, ',');
}

void ZolB7FQk_43
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134, INTEGER Z144, ZpmCQk_2 *Z180)
# else
(Z134, Z144, Z180)
ZolB7FQk_3 Z134;
INTEGER Z144;
ZpmCQk_2 *Z180;
# endif
{
ZpmCQk_30(Z180);
{
SHORTCARD B_55 = 0, B_56 = Z134.Y1;

if (B_55 <= B_56)
for (Z131 = B_55;; Z131 += 1) {
if (ZpmCQk_23((LONGCARD)Z144, &Z134.Y0->A[Z131])) {
ZpmCQk_11(Z180, (LONGCARD)Z131);
}
if (Z131 >= B_56) break;
}
}
}

void ZolB7FQk_44
# ifdef HAVE_ARGS
(ZolB7FQk_3 Z134, INTEGER Z144, ZpmCQk_2 *Z180)
# else
(Z134, Z144, Z180)
ZolB7FQk_3 Z134;
INTEGER Z144;
ZpmCQk_2 *Z180;
# endif
{
ZpmCQk_28(Z180, Z134.Y0->A[Z144]);
}

void BEGIN_RelatsC ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_SetsC ();
BEGIN_Relation ();
BEGIN_General ();
BEGIN_IO ();
BEGIN_DynArray ();
BEGIN_SetsC ();
BEGIN_SetsC ();

}
