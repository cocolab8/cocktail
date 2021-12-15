#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif


#define Z126	'\n'
static BOOLEAN Z127;
static struct S_1 {
CHAR A[15 + 1];
} Z128;
static void Z129 ARGS ((void));
static CARDINAL Z150 ARGS ((Ztf1PEAFD_1 Z151));
#define Z168	2147483647
#define Z169	(Z168 / 10)
struct S_2 {
CHAR A[10 + 1];
};

static void Z129
 ARGS ((void))
{
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"string too long, max. 255", 25L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}

void Ztf1PEAFD_5
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z132, Ztf1PEAFD_4 *Z133)
# else
(Z132, Z133)
Ztf1PEAFD_4 *Z132, *Z133;
# endif
{
Ztf1PEAFD_2 Z135;

{
register Ztf1PEAFD_3 *W_1 = Z133;

{
Ztf1PEAFD_2 B_1 = 1, B_2 = W_1->Y1;

if (B_1 <= B_2)
for (Z135 = B_1;; Z135 += 1) {
Z132->Y0.A[Z135] = W_1->Y0.A[Z135];
if (Z135 >= B_2) break;
}
}
Z132->Y1 = W_1->Y1;
}
}

void Ztf1PEAFD_6
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z140)
# else
(Z140)
Ztf1PEAFD_4 *Z140;
# endif
{
Z140->Y1 = 0;
Z127 = FALSE;
}

void Ztf1PEAFD_7
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z132, Ztf1PEAFD_4 *Z133)
# else
(Z132, Z133)
Ztf1PEAFD_4 *Z132, *Z133;
# endif
{
Ztf1PEAFD_2 Z135;

if (Z132->Y1 + Z133->Y1 > Ztf1PEAFD_0) {
Z129();
} else {
{
register Ztf1PEAFD_3 *W_2 = Z132;

{
Ztf1PEAFD_2 B_3 = 1, B_4 = Z133->Y1;

if (B_3 <= B_4)
for (Z135 = B_3;; Z135 += 1) {
W_2->Y0.A[W_2->Y1 + Z135] = Z133->Y0.A[Z135];
if (Z135 >= B_4) break;
}
}
INC1(W_2->Y1, Z133->Y1);
}
}
}

void Ztf1PEAFD_8
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z140, Ztf1PEAFD_1 Z144)
# else
(Z140, Z144)
Ztf1PEAFD_4 *Z140;
Ztf1PEAFD_1 Z144;
# endif
{
if (Z140->Y1 == Ztf1PEAFD_0) {
if (!Z127) {
Z129();
Z127 = TRUE;
}
} else {
INC(Z140->Y1);
Z140->Y0.A[Z140->Y1] = Z144;
}
}

CARDINAL Ztf1PEAFD_9
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z140)
# else
(Z140)
Ztf1PEAFD_4 *Z140;
# endif
{
return Z140->Y1;
}

BOOLEAN Ztf1PEAFD_10
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z132, Ztf1PEAFD_4 *Z133)
# else
(Z132, Z133)
Ztf1PEAFD_4 *Z132, *Z133;
# endif
{
Ztf1PEAFD_2 Z135;

if (Z132->Y1 != Z133->Y1) {
return FALSE;
} else {
{
Ztf1PEAFD_2 B_5 = 1, B_6 = Z132->Y1;

if (B_5 <= B_6)
for (Z135 = B_5;; Z135 += 1) {
if (Z132->Y0.A[Z135] != Z133->Y0.A[Z135]) {
return FALSE;
}
if (Z135 >= B_6) break;
}
}
}
return TRUE;
}

BOOLEAN Ztf1PEAFD_11
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z132, Ztf1PEAFD_4 *Z133)
# else
(Z132, Z133)
Ztf1PEAFD_4 *Z132, *Z133;
# endif
{
INTEGER Z135;
CARDINAL Z148, Z149;

{
LONGINT B_7 = 1, B_8 = ZdaDDAD7_3((LONGINT)Z132->Y1, (LONGINT)Z133->Y1);

if (B_7 <= B_8)
for (Z135 = B_7;; Z135 += 1) {
Z148 = Z150(Z132->Y0.A[Z135]);
Z149 = Z150(Z133->Y0.A[Z135]);
if (Z148 < Z149) {
return TRUE;
} else if (Z148 > Z149) {
return FALSE;
}
if (Z135 >= B_8) break;
}
}
return Z132->Y1 <= Z133->Y1;
}

static CARDINAL Z150
# ifdef HAVE_ARGS
(Ztf1PEAFD_1 Z151)
# else
(Z151)
Ztf1PEAFD_1 Z151;
# endif
{
return ORD(Z151);
}

void Ztf1PEAFD_12
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z132, Ztf1PEAFD_4 *Z133)
# else
(Z132, Z133)
Ztf1PEAFD_4 *Z132, *Z133;
# endif
{
Ztf1PEAFD_4 Z153;

Ztf1PEAFD_5(&Z153, Z132);
Ztf1PEAFD_5(Z132, Z133);
Ztf1PEAFD_5(Z133, &Z153);
}

void Ztf1PEAFD_13
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z132, Ztf1PEAFD_2 Z155, Ztf1PEAFD_2 Z156, Ztf1PEAFD_4 *Z133)
# else
(Z132, Z155, Z156, Z133)
Ztf1PEAFD_4 *Z132;
Ztf1PEAFD_2 Z155, Z156;
Ztf1PEAFD_4 *Z133;
# endif
{
Ztf1PEAFD_2 Z135;

{
register Ztf1PEAFD_3 *W_3 = Z133;

W_3->Y1 = 0;
{
Ztf1PEAFD_2 B_9 = Z155, B_10 = Z156;

if (B_9 <= B_10)
for (Z135 = B_9;; Z135 += 1) {
INC(W_3->Y1);
W_3->Y0.A[W_3->Y1] = Z132->Y0.A[Z135];
if (Z135 >= B_10) break;
}
}
}
}

Ztf1PEAFD_1 Ztf1PEAFD_14
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z140, Ztf1PEAFD_2 Z135)
# else
(Z140, Z135)
Ztf1PEAFD_4 *Z140;
Ztf1PEAFD_2 Z135;
# endif
{
return Z140->Y0.A[Z135];
}

void Ztf1PEAFD_15
# ifdef HAVE_ARGS
(Ztf1PEAFD_1 Z159[], LONGCARD O_1, Ztf1PEAFD_4 *Z140)
# else
(Z159, O_1, Z140)
Ztf1PEAFD_1 Z159[];
LONGCARD O_1;
Ztf1PEAFD_4 *Z140;
# endif
{
Ztf1PEAFD_2 Z135;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (SHORTCARD), 1)
COPY_OPEN_ARRAY (Z159, O_1, SHORTCARD)
Z135 = 0;
for (;;) {
if (Z159[Z135] == 0) {
goto EXIT_1;
}
Z140->Y0.A[Z135 + 1] = Z159[Z135];
INC(Z135);
if (Z135 > (O_1 - 1)) {
goto EXIT_1;
}
} EXIT_1:;
Z140->Y1 = Z135;
FREE_OPEN_ARRAYS
}

void Ztf1PEAFD_16
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z140, Ztf1PEAFD_1 Z159[], LONGCARD O_2)
# else
(Z140, Z159, O_2)
Ztf1PEAFD_4 *Z140;
Ztf1PEAFD_1 Z159[];
LONGCARD O_2;
# endif
{
Ztf1PEAFD_2 Z135;

{
Ztf1PEAFD_2 B_11 = 1, B_12 = Z140->Y1;

if (B_11 <= B_12)
for (Z135 = B_11;; Z135 += 1) {
Z159[Z135 - 1] = Z140->Y0.A[Z135];
if (Z135 >= B_12) break;
}
}
Z159[Z140->Y1] = 0;
}

INTEGER Ztf1PEAFD_17
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z140)
# else
(Z140)
Ztf1PEAFD_4 *Z140;
# endif
{
Ztf1PEAFD_2 Z135, Z162;
INTEGER Z163;
BOOLEAN Z164;

switch (Z140->Y0.A[1]) {
case ORD('+'):;
Z164 = FALSE;
Z162 = 2;
break;
case ORD('-'):;
Z164 = TRUE;
Z162 = 2;
break;
default:
Z164 = FALSE;
Z162 = 1;
break;
}
Z163 = 0;
{
Ztf1PEAFD_2 B_13 = Z162, B_14 = Z140->Y1;

if (B_13 <= B_14)
for (Z135 = B_13;; Z135 += 1) {
Z163 = Z163 * 10 + (INTEGER)(ORD(Z140->Y0.A[Z135]) - ORD('0'));
if (Z135 >= B_14) break;
}
}
if (Z164) {
return -Z163;
} else {
return Z163;
}
}

CARDINAL Ztf1PEAFD_18
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z140, CARDINAL Z166)
# else
(Z140, Z166)
Ztf1PEAFD_4 *Z140;
CARDINAL Z166;
# endif
{
Ztf1PEAFD_2 Z135;
CARDINAL Z163;
CHAR Z151;

Z163 = 0;
{
Ztf1PEAFD_2 B_15 = 1, B_16 = Z140->Y1;

if (B_15 <= B_16)
for (Z135 = B_15;; Z135 += 1) {
Z151 = CHR(Z140->Y0.A[Z135]);
if ('A' <= Z151 && Z151 <= 'F') {
Z163 = Z163 * Z166 + ORD(Z151) - ORD('A') + 10;
} else if ('a' <= Z151 && Z151 <= 'f') {
Z163 = Z163 * Z166 + ORD(Z151) - ORD('a') + 10;
} else {
Z163 = Z163 * Z166 + ORD(Z151) - ORD('0');
}
if (Z135 >= B_16) break;
}
}
return Z163;
}

REAL Ztf1PEAFD_19
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z140)
# else
(Z140)
Ztf1PEAFD_4 *Z140;
# endif
{
REAL Z163;
LONGCARD Z170;
INTEGER Z171;
BOOLEAN Z172;
BOOLEAN Z173;
CARDINAL Z174;
CARDINAL Z175;
CHAR Z151;
Ztf1PEAFD_2 Z135;

Z172 = FALSE;
Z170 = 0;
Z171 = 0;
Z174 = 0;
Z175 = 0;
Z135 = 0;
Ztf1PEAFD_8(Z140, (SHORTCARD)ORD(' '));
INC(Z135);
Z151 = CHR(Z140->Y0.A[Z135]);
switch (Z151) {
case '+':;
INC(Z135);
Z151 = CHR(Z140->Y0.A[Z135]);
break;
case '-':;
INC(Z135);
Z151 = CHR(Z140->Y0.A[Z135]);
Z172 = TRUE;
break;
case 'E':;
case 'e':;
Z170 = 1;
break;
default:
break;
}
while ('0' <= Z151 && Z151 <= '9') {
if (Z170 <= Z169) {
Z170 = 10 * Z170;
if (Z170 <= Z168 - (ORD(Z151) - ORD('0'))) {
INC1(Z170, ORD(Z151) - ORD('0'));
} else {
INC(Z175);
}
} else {
INC(Z175);
}
INC(Z135);
Z151 = CHR(Z140->Y0.A[Z135]);
}
if (Z151 == '.') {
INC(Z135);
Z151 = CHR(Z140->Y0.A[Z135]);
}
while ('0' <= Z151 && Z151 <= '9') {
if (Z170 <= Z169) {
Z170 = 10 * Z170;
if (Z170 <= Z168 - (ORD(Z151) - ORD('0'))) {
INC1(Z170, ORD(Z151) - ORD('0'));
} else {
INC(Z175);
}
} else {
INC(Z175);
}
INC(Z174);
INC(Z135);
Z151 = CHR(Z140->Y0.A[Z135]);
}
if (Z151 == 'E') {
INC(Z135);
Z151 = CHR(Z140->Y0.A[Z135]);
switch (Z151) {
case '+':;
Z173 = FALSE;
INC(Z135);
Z151 = CHR(Z140->Y0.A[Z135]);
break;
case '-':;
Z173 = TRUE;
INC(Z135);
Z151 = CHR(Z140->Y0.A[Z135]);
break;
default:
Z173 = FALSE;
break;
}
while ('0' <= Z151 && Z151 <= '9') {
Z171 = 10 * Z171 + (INTEGER)(ORD(Z151) - ORD('0'));
INC(Z135);
Z151 = CHR(Z140->Y0.A[Z135]);
}
if (Z173) {
Z171 = -Z171;
}
}
DEC1(Z171, Z174 - Z175);
Z163 = FLOAT(Z170) * ZdaDDAD7_11(Z171);
if (Z172) {
return -Z163;
} else {
return Z163;
}
}

void Ztf1PEAFD_20
# ifdef HAVE_ARGS
(INTEGER Z163, Ztf1PEAFD_4 *Z140)
# else
(Z163, Z140)
INTEGER Z163;
Ztf1PEAFD_4 *Z140;
# endif
{
INTEGER Z135, Z177;
CARDINAL Z178;
struct S_2 Z179;

if (Z163 < 0) {
Z140->Y0.A[1] = ORD('-');
Z177 = 1;
Z163 = -Z163;
} else {
Z177 = 0;
}
Z178 = 0;
do {
INC(Z178);
Z179.A[Z178] = Z128.A[Z163 % 10];
Z163 = Z163 / 10;
} while (!(Z163 == 0));
for (Z135 = (INTEGER)Z178; Z135 >= 1; Z135 += -1) {
INC(Z177);
Z140->Y0.A[Z177] = ORD(Z179.A[Z135]);
}
Z140->Y1 = Z177;
}

void Ztf1PEAFD_21
# ifdef HAVE_ARGS
(ZfM_3 Z181, Ztf1PEAFD_4 *Z140, Ztf1PEAFD_2 Z182)
# else
(Z181, Z140, Z182)
ZfM_3 Z181;
Ztf1PEAFD_4 *Z140;
Ztf1PEAFD_2 Z182;
# endif
{
Ztf1PEAFD_2 Z135;

{
Ztf1PEAFD_2 B_17 = 1, B_18 = Z182;

if (B_17 <= B_18)
for (Z135 = B_17;; Z135 += 1) {
Z140->Y0.A[Z135] = ORD(ZfM_7(Z181));
if (Z135 >= B_18) break;
}
}
Z140->Y1 = Z182;
}

void Ztf1PEAFD_22
# ifdef HAVE_ARGS
(ZfM_3 Z181, Ztf1PEAFD_4 *Z140)
# else
(Z181, Z140)
ZfM_3 Z181;
Ztf1PEAFD_4 *Z140;
# endif
{
Ztf1PEAFD_2 Z135;
CHAR Z151;

Z135 = 0;
for (;;) {
Z151 = ZfM_7(Z181);
if (Z151 == Z126) {
goto EXIT_2;
}
if (Z135 == Ztf1PEAFD_0) {
do {
} while (!(ZfM_7(Z181) == Z126));
goto EXIT_2;
}
INC(Z135);
Z140->Y0.A[Z135] = ORD(Z151);
} EXIT_2:;
Z140->Y1 = Z135;
}

void Ztf1PEAFD_23
# ifdef HAVE_ARGS
(ZfM_3 Z181, Ztf1PEAFD_4 *Z140)
# else
(Z181, Z140)
ZfM_3 Z181;
Ztf1PEAFD_4 *Z140;
# endif
{
Ztf1PEAFD_2 Z135;

{
Ztf1PEAFD_2 B_19 = 1, B_20 = Z140->Y1;

if (B_19 <= B_20)
for (Z135 = B_19;; Z135 += 1) {
ZfM_24(Z181, CHR(Z140->Y0.A[Z135]));
if (Z135 >= B_20) break;
}
}
}

void Ztf1PEAFD_24
# ifdef HAVE_ARGS
(ZfM_3 Z181, Ztf1PEAFD_4 *Z140)
# else
(Z181, Z140)
ZfM_3 Z181;
Ztf1PEAFD_4 *Z140;
# endif
{
Ztf1PEAFD_23(Z181, Z140);
ZfM_33(Z181);
}

void BEGIN_WStrings ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_General ();
BEGIN_IO ();
BEGIN_IO ();

Z128.A[0] = '0';
Z128.A[1] = '1';
Z128.A[2] = '2';
Z128.A[3] = '3';
Z128.A[4] = '4';
Z128.A[5] = '5';
Z128.A[6] = '6';
Z128.A[7] = '7';
Z128.A[8] = '8';
Z128.A[9] = '9';
Z128.A[10] = 'A';
Z128.A[11] = 'B';
Z128.A[12] = 'C';
Z128.A[13] = 'D';
Z128.A[14] = 'E';
Z128.A[15] = 'F';
}
