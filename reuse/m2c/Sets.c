#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif


#define Z130	sizeof (BITSET)
#define Z131	8
#define Z132	(Z130 * Z131)
#define Z133	-1
static BITSET Z134;
static ZfM_3 Z189;
static void Z191 ARGS ((CARDINAL Z163));

void ZpmCQ_5
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136, CARDINAL Z138)
# else
(Z136, Z138)
ZpmCQ_4 *Z136;
CARDINAL Z138;
# endif
{
LONGINT Z139;

{
register ZpmCQ_4 *W_1 = Z136;

Z139 = (Z138 + Z132) / Z132;
ZarQdhNDD_0((ADDRESS *)&W_1->Y0, &Z139, (LONGINT)Z130);
if (W_1->Y0 == NIL) {
W_1->Y1 = 0;
return;
}
W_1->Y1 = Z138;
W_1->Y2 = Z139 - 1;
ZpmCQ_32(Z136);
}
}

void ZpmCQ_6
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136, CARDINAL Z138)
# else
(Z136, Z138)
ZpmCQ_4 *Z136;
CARDINAL Z138;
# endif
{
ZpmCQ_3 Z145;
CARDINAL Z147;
LONGINT Z139;
CARDINAL Z148, Z149;

{
register ZpmCQ_4 *W_2 = Z136;

Z145 = W_2->Y0;
Z147 = W_2->Y2;
Z139 = (Z138 + Z132) / Z132;
ZarQdhNDD_0((ADDRESS *)&W_2->Y0, &Z139, (LONGINT)Z130);
if (W_2->Y0 == NIL) {
W_2->Y1 = 0;
return;
}
W_2->Y1 = Z138;
W_2->Y2 = Z139 - 1;
Z148 = 0;
Z149 = ZdaDDAD7_3((LONGINT)W_2->Y2, (LONGINT)Z147);
while (Z148 <= Z149) {
W_2->Y0->A[Z148] = Z145->A[Z148];
INC(Z148);
}
while (Z148 <= W_2->Y2) {
W_2->Y0->A[Z148] = 0X0L;
INC(Z148);
}
Z139 = Z147 + 1;
ZarQdhNDD_3((ADDRESS *)&Z145, &Z139, (LONGINT)Z130);
}
}

void ZpmCQ_7
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
LONGINT Z139;

Z139 = Z136->Y2 + 1;
ZarQdhNDD_3((ADDRESS *)&Z136->Y0, &Z139, (LONGINT)Z130);
}

void ZpmCQ_8
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z152, ZpmCQ_4 Z153)
# else
(Z152, Z153)
ZpmCQ_4 *Z152;
ZpmCQ_4 Z153;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_3 = Z152;

Z148 = 0;
while (Z148 <= W_3->Y2) {
W_3->Y0->A[Z148] = W_3->Y0->A[Z148] | Z153.Y0->A[Z148];
INC(Z148);
}
W_3->Y3 = Z133;
W_3->Y4 = ZdaDDAD7_3((LONGINT)W_3->Y4, (LONGINT)Z153.Y4);
W_3->Y5 = ZdaDDAD7_4((LONGINT)W_3->Y5, (LONGINT)Z153.Y5);
}
}

void ZpmCQ_9
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z152, ZpmCQ_4 Z153)
# else
(Z152, Z153)
ZpmCQ_4 *Z152;
ZpmCQ_4 Z153;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_4 = Z152;

Z148 = 0;
while (Z148 <= W_4->Y2) {
W_4->Y0->A[Z148] = SET_DIFF(W_4->Y0->A[Z148], Z153.Y0->A[Z148]);
INC(Z148);
}
W_4->Y3 = Z133;
}
}

void ZpmCQ_10
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z152, ZpmCQ_4 Z153)
# else
(Z152, Z153)
ZpmCQ_4 *Z152;
ZpmCQ_4 Z153;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_5 = Z152;

Z148 = 0;
while (Z148 <= W_5->Y2) {
W_5->Y0->A[Z148] = W_5->Y0->A[Z148] & Z153.Y0->A[Z148];
INC(Z148);
}
W_5->Y3 = Z133;
W_5->Y4 = ZdaDDAD7_4((LONGINT)W_5->Y4, (LONGINT)Z153.Y4);
W_5->Y5 = ZdaDDAD7_3((LONGINT)W_5->Y5, (LONGINT)Z153.Y5);
}
}

void ZpmCQ_11
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z152, ZpmCQ_4 Z153)
# else
(Z152, Z153)
ZpmCQ_4 *Z152;
ZpmCQ_4 Z153;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_6 = Z152;

Z148 = 0;
while (Z148 <= W_6->Y2) {
W_6->Y0->A[Z148] = W_6->Y0->A[Z148] ^ Z153.Y0->A[Z148];
INC(Z148);
}
W_6->Y3 = Z133;
W_6->Y4 = ZdaDDAD7_3((LONGINT)W_6->Y4, (LONGINT)Z153.Y4);
W_6->Y5 = ZdaDDAD7_4((LONGINT)W_6->Y5, (LONGINT)Z153.Y5);
}
}

void ZpmCQ_12
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
INTEGER Z148;
BITSET Z161;

{
register ZpmCQ_4 *W_7 = Z136;

Z148 = 0;
while (Z148 <= (INTEGER)W_7->Y2 - 1) {
W_7->Y0->A[Z148] = SET_DIFF(Z134, W_7->Y0->A[Z148]);
INC(Z148);
}
Z161 = 0X0L;
{
LONGINT B_1 = 0, B_2 = (INTEGER)W_7->Y1 % Z132;

if (B_1 <= B_2)
for (Z148 = B_1;; Z148 += 1) {
INCL(Z161, Z148);
if (Z148 >= B_2) break;
}
}
W_7->Y0->A[W_7->Y2] = SET_DIFF(Z161, W_7->Y0->A[W_7->Y2]);
if (W_7->Y3 != Z133) {
W_7->Y3 = (INTEGER)W_7->Y1 + 1 - W_7->Y3;
}
W_7->Y4 = 0;
W_7->Y5 = W_7->Y1;
}
}

void ZpmCQ_13
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136, CARDINAL Z163)
# else
(Z136, Z163)
ZpmCQ_4 *Z136;
CARDINAL Z163;
# endif
{
{
register ZpmCQ_4 *W_8 = Z136;

INCL(W_8->Y0->A[Z163 / Z132], Z163 % Z132);
W_8->Y3 = Z133;
if (W_8->Y4 > Z163) {
W_8->Y4 = Z163;
}
if (W_8->Y5 < Z163) {
W_8->Y5 = Z163;
}
}
}

void ZpmCQ_14
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136, CARDINAL Z163)
# else
(Z136, Z163)
ZpmCQ_4 *Z136;
CARDINAL Z163;
# endif
{
{
register ZpmCQ_4 *W_9 = Z136;

EXCL(W_9->Y0->A[Z163 / Z132], Z163 % Z132);
W_9->Y3 = Z133;
if (Z163 == W_9->Y4 && Z163 < W_9->Y1) {
INC(W_9->Y4);
}
if (Z163 == W_9->Y5 && Z163 > 0) {
DEC(W_9->Y5);
}
}
}

CARDINAL ZpmCQ_15
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_10 = Z136;

if (W_10->Y3 == Z133) {
W_10->Y3 = 0;
{
LONGCARD B_3 = W_10->Y4, B_4 = W_10->Y5;

if (B_3 <= B_4)
for (Z148 = B_3;; Z148 += 1) {
if (ZpmCQ_25(Z148, Z136)) {
INC(W_10->Y3);
}
if (Z148 >= B_4) break;
}
}
}
return W_10->Y3;
}
}

CARDINAL ZpmCQ_16
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
return Z136->Y1;
}

CARDINAL ZpmCQ_17
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_11 = Z136;

Z148 = W_11->Y4;
while (Z148 <= W_11->Y5) {
if (ZpmCQ_25(Z148, Z136)) {
W_11->Y4 = Z148;
return Z148;
}
INC(Z148);
}
return 0;
}
}

CARDINAL ZpmCQ_18
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_12 = Z136;

Z148 = W_12->Y5;
while (Z148 >= W_12->Y4) {
if (ZpmCQ_25(Z148, Z136)) {
W_12->Y5 = Z148;
return Z148;
}
DEC(Z148);
}
return 0;
}
}

CARDINAL ZpmCQ_19
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
return ZpmCQ_17(Z136);
}

CARDINAL ZpmCQ_20
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
CARDINAL Z148;

Z148 = ZpmCQ_17(Z136);
ZpmCQ_14(Z136, Z148);
return Z148;
}

BOOLEAN ZpmCQ_21
# ifdef HAVE_ARGS
(ZpmCQ_4 Z152, ZpmCQ_4 Z153)
# else
(Z152, Z153)
ZpmCQ_4 Z152, Z153;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_13 = &Z152;

Z148 = 0;
while (Z148 <= W_13->Y2) {
if (!SET_IS_SUBSET1(W_13->Y0->A[Z148], Z153.Y0->A[Z148])) {
return FALSE;
}
INC(Z148);
}
return TRUE;
}
}

BOOLEAN ZpmCQ_22
# ifdef HAVE_ARGS
(ZpmCQ_4 Z152, ZpmCQ_4 Z153)
# else
(Z152, Z153)
ZpmCQ_4 Z152, Z153;
# endif
{
return ZpmCQ_21(Z152, Z153) && ZpmCQ_24(Z152, Z153);
}

BOOLEAN ZpmCQ_23
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z152, ZpmCQ_4 *Z153)
# else
(Z152, Z153)
ZpmCQ_4 *Z152, *Z153;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_14 = Z152;

Z148 = 0;
while (Z148 <= W_14->Y2) {
if (W_14->Y0->A[Z148] != Z153->Y0->A[Z148]) {
return FALSE;
}
INC(Z148);
}
return TRUE;
}
}

BOOLEAN ZpmCQ_24
# ifdef HAVE_ARGS
(ZpmCQ_4 Z152, ZpmCQ_4 Z153)
# else
(Z152, Z153)
ZpmCQ_4 Z152, Z153;
# endif
{
return !ZpmCQ_23(&Z152, &Z153);
}

BOOLEAN ZpmCQ_25
# ifdef HAVE_ARGS
(CARDINAL Z163, ZpmCQ_4 *Z136)
# else
(Z163, Z136)
CARDINAL Z163;
ZpmCQ_4 *Z136;
# endif
{
return IN(Z163 % Z132, Z136->Y0->A[Z163 / Z132]);
}

BOOLEAN ZpmCQ_26
# ifdef HAVE_ARGS
(ZpmCQ_4 Z136)
# else
(Z136)
ZpmCQ_4 Z136;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_15 = &Z136;

if (W_15->Y4 <= W_15->Y5) {
Z148 = 0;
while (Z148 <= W_15->Y2) {
if (W_15->Y0->A[Z148] != 0X0L) {
return FALSE;
}
INC(Z148);
}
}
return TRUE;
}
}

BOOLEAN ZpmCQ_27
# ifdef HAVE_ARGS
(ZpmCQ_4 Z136, ZpmCQ_2 Z177)
# else
(Z136, Z177)
ZpmCQ_4 Z136;
ZpmCQ_2 Z177;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_16 = &Z136;

{
LONGCARD B_5 = W_16->Y4, B_6 = W_16->Y5;

if (B_5 <= B_6)
for (Z148 = B_5;; Z148 += 1) {
if (ZpmCQ_25(Z148, &Z136) && !(*Z177)(Z148)) {
return FALSE;
}
if (Z148 >= B_6) break;
}
}
return TRUE;
}
}

BOOLEAN ZpmCQ_28
# ifdef HAVE_ARGS
(ZpmCQ_4 Z136, ZpmCQ_2 Z177)
# else
(Z136, Z177)
ZpmCQ_4 Z136;
ZpmCQ_2 Z177;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_17 = &Z136;

{
LONGCARD B_7 = W_17->Y4, B_8 = W_17->Y5;

if (B_7 <= B_8)
for (Z148 = B_7;; Z148 += 1) {
if (ZpmCQ_25(Z148, &Z136) && (*Z177)(Z148)) {
return TRUE;
}
if (Z148 >= B_8) break;
}
}
return FALSE;
}
}

BOOLEAN ZpmCQ_29
# ifdef HAVE_ARGS
(ZpmCQ_4 Z136, ZpmCQ_2 Z177)
# else
(Z136, Z177)
ZpmCQ_4 Z136;
ZpmCQ_2 Z177;
# endif
{
CARDINAL Z148, Z181;

{
register ZpmCQ_4 *W_18 = &Z136;

Z181 = 0;
{
LONGCARD B_9 = W_18->Y4, B_10 = W_18->Y5;

if (B_9 <= B_10)
for (Z148 = B_9;; Z148 += 1) {
if (ZpmCQ_25(Z148, &Z136) && (*Z177)(Z148)) {
INC(Z181);
}
if (Z148 >= B_10) break;
}
}
return Z181 == 1;
}
}

void ZpmCQ_30
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z152, ZpmCQ_4 Z153)
# else
(Z152, Z153)
ZpmCQ_4 *Z152;
ZpmCQ_4 Z153;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_19 = Z152;

Z148 = 0;
while (Z148 <= W_19->Y2) {
W_19->Y0->A[Z148] = Z153.Y0->A[Z148];
INC(Z148);
}
W_19->Y3 = Z153.Y3;
W_19->Y4 = Z153.Y4;
W_19->Y5 = Z153.Y5;
}
}

void ZpmCQ_31
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136, CARDINAL Z163)
# else
(Z136, Z163)
ZpmCQ_4 *Z136;
CARDINAL Z163;
# endif
{
{
register ZpmCQ_4 *W_20 = Z136;

ZpmCQ_32(Z136);
ZpmCQ_13(Z136, Z163);
W_20->Y3 = 1;
W_20->Y4 = Z163;
W_20->Y5 = Z163;
}
}

void ZpmCQ_32
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_21 = Z136;

Z148 = 0;
while (Z148 <= W_21->Y2) {
W_21->Y0->A[Z148] = 0X0L;
INC(Z148);
}
W_21->Y3 = 0;
W_21->Y4 = W_21->Y1;
W_21->Y5 = 0;
}
}

void ZpmCQ_33
# ifdef HAVE_ARGS
(ZpmCQ_4 Z136, ZpmCQ_1 Z177)
# else
(Z136, Z177)
ZpmCQ_4 Z136;
ZpmCQ_1 Z177;
# endif
{
CARDINAL Z148;

{
register ZpmCQ_4 *W_22 = &Z136;

{
LONGCARD B_11 = W_22->Y4, B_12 = W_22->Y5;

if (B_11 <= B_12)
for (Z148 = B_11;; Z148 += 1) {
if (ZpmCQ_25(Z148, &Z136)) {
(*Z177)(Z148);
}
if (Z148 >= B_12) break;
}
}
}
}

void ZpmCQ_34
# ifdef HAVE_ARGS
(ZfM_3 Z187, ZpmCQ_4 *Z136)
# else
(Z187, Z136)
ZfM_3 Z187;
ZpmCQ_4 *Z136;
# endif
{
CARDINAL Z188;

do {
} while (!(ZfM_7(Z187) == '{'));
ZpmCQ_32(Z136);
Z188 = 0;
for (;;) {
if (ZfM_7(Z187) == '}') {
goto EXIT_1;
}
ZpmCQ_13(Z136, (LONGCARD)ZfM_8(Z187));
INC(Z188);
} EXIT_1:;
Z136->Y3 = Z188;
}

void ZpmCQ_35
# ifdef HAVE_ARGS
(ZfM_3 Z187, ZpmCQ_4 Z136)
# else
(Z187, Z136)
ZfM_3 Z187;
ZpmCQ_4 Z136;
# endif
{
if (Z136.Y0 != NIL) {
Z189 = Z187;
ZfM_24(Z187, '{');
ZpmCQ_33(Z136, (ZpmCQ_1)Z191);
ZfM_24(Z187, '}');
} else {
ZfM_29(Z187, (STRING)"NULL", 4L);
}
}

static void Z191
# ifdef HAVE_ARGS
(CARDINAL Z163)
# else
(Z163)
CARDINAL Z163;
# endif
{
ZfM_24(Z189, ' ');
ZfM_25(Z189, (LONGINT)Z163, 0L);
}

void BEGIN_Sets ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_General ();
BEGIN_DynArray ();
BEGIN_IO ();

Z134 = SET_cRNG (0, Z132 - 1);
}
