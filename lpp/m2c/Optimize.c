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

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
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

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Order
#include "Order.h"
#endif

#ifndef DEFINITION_Optimize
#include "Optimize.h"
#endif

SHORTCARD ZltNGGGMI_0, ZltNGGGMI_1, ZltNGGGMI_2, ZltNGGGMI_3, ZltNGGGMI_4, ZltNGGGMI_5, ZltNGGGMI_6, ZltNGGGMI_7, ZltNGGGMI_8;
ZfM_3 ZltNGGGMI_9;
BOOLEAN ZltNGGGMI_10;
PROC ZltNGGGMI_11;

typedef struct S_1 {
SHORTCARD Y0, Y1;
} Z177;
static ZpmCQ_4 Z180, Z181, Z182;
static SHORTCARD Z183, Z184, Z185, Z186, Z187, Z188, Z189, Z190, Z191, Z192, Z193, Z194, Z195, Z196;
static Zq0A4_153 Z197, Z198, Z199;
static LONGINT Z200;
static struct S_2 {
Z177 A[10000 + 1];
} *Z201;
static void Z202 ARGS ((CHAR Z203[], LONGCARD O_1));
static BOOLEAN Z206 ARGS ((BYTE Z207[], LONGCARD O_3, BYTE Z208[], LONGCARD O_2));
struct S_5 {
union {
char dummy;
} U_1;
};
static void Z225 ARGS ((Zq0A4_153 Z211));
struct S_4 {
union {
char dummy;
} U_1;
};
struct S_3 {
union {
char dummy;
} U_1;
};
static void Z242 ARGS ((void));

static void Z202
# ifdef HAVE_ARGS
(CHAR Z203[], LONGCARD O_1)
# else
(Z203, O_1)
CHAR Z203[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z203, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module Optimize, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z203, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZltNGGGMI_11)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z206
# ifdef HAVE_ARGS
(BYTE Z207[], LONGCARD O_3, BYTE Z208[], LONGCARD O_2)
# else
(Z207, O_3, Z208, O_2)
BYTE Z207[];
LONGCARD O_3;
BYTE Z208[];
LONGCARD O_2;
# endif
{
INTEGER Z209;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z208, O_2, WORD)
COPY_OPEN_ARRAY (Z207, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z209 = B_1;; Z209 += 1) {
if (Z207[Z209] != Z208[Z209]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z209 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZltNGGGMI_12
# ifdef HAVE_ARGS
(Zq0A4_153 Z211)
# else
(Z211)
Zq0A4_153 Z211;
# endif
{
struct S_5 Z212;

if (Z211 == Zq0A4_97) {
return;
}
if (Z211 != NIL && Z211->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_1 = &Z211->U_1.V_5.Y4;

Z200 = W_1->Y14 + 1;
ZarQdhNDD_0((ADDRESS *)&Z201, &Z200, (LONGINT)sizeof (Z177));
{
SHORTCARD B_3 = 1, B_4 = W_1->Y14;

if (B_3 <= B_4)
for (Z190 = B_3;; Z190 += 1) {
Z201->A[Z190].Y0 = 0;
Z201->A[Z190].Y1 = 0;
if (Z190 >= B_4) break;
}
}
Z195 = 1;
{
SHORTCARD B_5 = 1, B_6 = W_1->Y14;

if (B_5 <= B_6)
for (Z190 = B_5;; Z190 += 1) {
Z191 = W_1->Y15->A[Z190 - 1].Y4;
{
register Zq0A4_199 *W_2 = &W_1->Y15->A[Z191 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_26), W_2->Y3)) {
Z195 = W_2->Y1->U_1.V_10.Y9.Y11;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_7), W_2->Y3)) {
Z201->A[Z191].Y0 = Z195;
INCL(W_2->Y1->U_1.V_10.Y9.Y12, Z195);
}
if (IN(Zq0A4_21, W_2->Y3)) {
Z201->A[Z191].Y0 = Z195;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_26), W_2->Y3) && !IN(Zq0A4_27, W_2->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_26), W_2->Y3)) {
{
SHORTCARD B_7 = 1, B_8 = W_1->Y13;

if (B_7 <= B_8)
for (Z192 = B_7;; Z192 += 1) {
if (ZolB7FGBG_9((LONGINT)Z191, (LONGINT)Z192, W_1->Y16)) {
Z201->A[Z192].Y1 = Z195;
INCL(W_1->Y15->A[Z192 - 1].Y1->U_1.V_10.Y9.Y12, Z195);
}
if (Z192 >= B_8) break;
}
}
{
SHORTCARD B_9 = W_1->Y13 + 1, B_10 = W_1->Y14;

if (B_9 <= B_10)
for (Z192 = B_9;; Z192 += 1) {
if (ZolB7FGBG_9((LONGINT)Z191, (LONGINT)Z192, W_1->Y16)) {
Z201->A[Z192].Y1 = Z195;
}
if (Z192 >= B_10) break;
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_26), W_2->Y3)) {
Z198 = Z211;
Z197 = W_2->Y0;
Z199 = W_2->Y0->U_1.V_10.Y9.Y8;
Z189 = W_2->Y1->U_1.V_10.Y9.Y11;
Z225(Z199);
Zq0A4_184(Z199->U_1.V_5.Y4.Y4, (Zq0A4_170)Z225);
}
}
if (Z190 >= B_6) break;
}
}
{
SHORTCARD B_11 = 1, B_12 = W_1->Y13;

if (B_11 <= B_12)
for (Z190 = B_11;; Z190 += 1) {
{
register Zq0A4_199 *W_3 = &W_1->Y15->A[Z190 - 1];

if (IN(Zq0A4_7, W_3->Y3) && Z201->A[Z190].Y0 < Z201->A[Z190].Y1) {
INCL(W_3->Y1->U_1.V_10.Y9.Y6, Zq0A4_10);
}
}
if (Z190 >= B_12) break;
}
}
{
SHORTCARD B_13 = W_1->Y13 + 1, B_14 = W_1->Y14;

if (B_13 <= B_14)
for (Z190 = B_13;; Z190 += 1) {
if (Z201->A[Z190].Y0 < Z201->A[Z190].Y1) {
{
register Zq0A4_199 *W_4 = &W_1->Y15->A[Z190 - 1];

INCL(W_4->Y1->U_1.V_10.Y9.Y6, Zq0A4_10);
}
}
if (Z190 >= B_14) break;
}
}
ZarQdhNDD_3((ADDRESS *)&Z201, &Z200, (LONGINT)sizeof (Z177));
return;
}
}
}

static void Z225
# ifdef HAVE_ARGS
(Zq0A4_153 Z211)
# else
(Z211)
Zq0A4_153 Z211;
# endif
{
struct S_4 Z212;

if (Z211 == Zq0A4_97) {
return;
}
if (Z211 != NIL && Z211->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_5 = &Z211->U_1.V_5.Y4;

Z196 = 1;
{
SHORTCARD B_15 = 1, B_16 = W_5->Y14;

if (B_15 <= B_16)
for (Z192 = B_15;; Z192 += 1) {
Z193 = W_5->Y15->A[Z192 - 1].Y4;
{
register Zq0A4_199 *W_6 = &W_5->Y15->A[Z193 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_26), W_6->Y3)) {
Z196 = W_6->Y1->U_1.V_10.Y9.Y11;
if (Z196 > Z189) {
return;
}
}
if (!IN(Zq0A4_27, W_6->Y3) && Z189 == Z196) {
{
SHORTCARD B_17 = 1, B_18 = Z199->U_1.V_5.Y4.Y13;

if (B_17 <= B_18)
for (Z194 = B_17;; Z194 += 1) {
if (ZolB7FGBG_9((LONGINT)Z193, (LONGINT)Z194, W_5->Y16)) {
Z201->A[Z198->U_1.V_5.Y4.Y13 + Z197->U_1.V_10.Y9.Y13 + Z194].Y1 = Z195;
}
if (Z194 >= B_18) break;
}
}
}
}
if (Z192 >= B_16) break;
}
}
return;
}
}
}

void ZltNGGGMI_13
# ifdef HAVE_ARGS
(Zq0A4_153 Z211)
# else
(Z211)
Zq0A4_153 Z211;
# endif
{
struct S_3 Z212;

if (Z211 == Zq0A4_97) {
return;
}
if (Z211 != NIL && Z211->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_7 = &Z211->U_1.V_5.Y4;

Z198 = Z211;
Zq0A4_185(W_7->Y3, (Zq0A4_170)ZltNGGGMI_13);
return;
}
}
if (Z211 != NIL && Z211->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_8 = &Z211->U_1.V_10.Y9;

INCL(W_8->Y6, Zq0A4_10);
if (IN(Zq0A4_8, W_8->Y6)) {
INC(ZltNGGGMI_1);
} else {
INC(ZltNGGGMI_0);
}
return;
}
}
if (Z211 != NIL && Z211->U_1.V_1.Y0 == Zq0A4_106) {
{
register Zq0A4_232 *W_9 = &Z211->U_1.V_11.Y10;

if (ZpmCQ_25(ORD('0'), &Zq0A4_171)) {
if (IN(Zq0A4_8, W_9->Y6) || IN(Zq0A4_9, W_9->Y6)) {
INCL(W_9->Y6, Zq0A4_10);
if (IN(Zq0A4_8, W_9->Y6)) {
INC(ZltNGGGMI_2);
} else {
INC(ZltNGGGMI_3);
}
}
if (!IN(Zq0A4_10, W_9->Y6)) {
INCL(W_9->Y6, Zq0A4_11);
}
} else {
INCL(W_9->Y6, Zq0A4_10);
}
if (((SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_9->Y6) != 0X0L) {
EXCL(W_9->Y6, Zq0A4_10);
EXCL(W_9->Y6, Zq0A4_11);
}
if (ZpmCQ_25(ORD('3'), &Zq0A4_171)) {
if (((SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_9)) & W_9->Y6) == 0X0L) {
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z198->U_1.V_5.Y4.Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"	= ", 3L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_9->Y3);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"	", 1L);
if (IN(Zq0A4_10, W_9->Y6)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Tree", 4L);
INC(ZltNGGGMI_4);
} else if (IN(Zq0A4_11, W_9->Y6)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Parameter", 9L);
INC(ZltNGGGMI_5);
} else if (IN(Zq0A4_12, W_9->Y6)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Stack", 5L);
INC(ZltNGGGMI_8);
} else if (IN(Zq0A4_13, W_9->Y6)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Variable", 8L);
INC(ZltNGGGMI_6);
} else if (IN(Zq0A4_14, W_9->Y6)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Demand", 6L);
INC(ZltNGGGMI_7);
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
}
return;
}
}
}

void ZltNGGGMI_14
 ARGS ((void))
{
}

void ZltNGGGMI_15
 ARGS ((void))
{
}

static void Z242
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_Optimize ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_General ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Relation ();
BEGIN_Tree ();
BEGIN_Order ();

ZltNGGGMI_9 = ZfM_1;
ZltNGGGMI_11 = Z242;
ZltNGGGMI_14();
}
