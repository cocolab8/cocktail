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

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif


#define Z126	'\n'
static BOOLEAN Z127;
static struct S_1 {
CHAR A[15 + 1];
} Z128;
static void Z129 ARGS ((void));
static CARDINAL Z149 ARGS ((CHAR Z150));
#define Z167	2147483647
#define Z168	(Z167 / 10)
struct S_2 {
CHAR A[10 + 1];
};

static void Z129
 ARGS ((void))
{
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"string too long, max. 255", 25L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}

void Zp1PEAFD_3
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z132, Zp1PEAFD_2 *Z133)
# else
(Z132, Z133)
Zp1PEAFD_2 *Z132, *Z133;
# endif
{
Zp1PEAFD_1 Z135;

{
register Zp1PEAFD_2 *W_1 = Z133;

{
Zp1PEAFD_1 B_1 = 1, B_2 = W_1->Y1;

if (B_1 <= B_2)
for (Z135 = B_1;; Z135 += 1) {
Z132->Y0.A[Z135] = W_1->Y0.A[Z135];
if (Z135 >= B_2) break;
}
}
Z132->Y1 = W_1->Y1;
}
}

void Zp1PEAFD_4
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z140)
# else
(Z140)
Zp1PEAFD_2 *Z140;
# endif
{
Z140->Y1 = 0;
Z127 = FALSE;
}

void Zp1PEAFD_5
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z132, Zp1PEAFD_2 *Z133)
# else
(Z132, Z133)
Zp1PEAFD_2 *Z132, *Z133;
# endif
{
Zp1PEAFD_1 Z135;

if (Z132->Y1 + Z133->Y1 > Zp1PEAFD_0) {
Z129();
} else {
{
register Zp1PEAFD_2 *W_2 = Z132;

{
Zp1PEAFD_1 B_3 = 1, B_4 = Z133->Y1;

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

void Zp1PEAFD_6
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z140, CHAR Z144)
# else
(Z140, Z144)
Zp1PEAFD_2 *Z140;
CHAR Z144;
# endif
{
if (Z140->Y1 == Zp1PEAFD_0) {
if (!Z127) {
Z129();
Z127 = TRUE;
}
} else {
INC(Z140->Y1);
Z140->Y0.A[Z140->Y1] = Z144;
}
}

CARDINAL Zp1PEAFD_7
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z140)
# else
(Z140)
Zp1PEAFD_2 *Z140;
# endif
{
return Z140->Y1;
}

BOOLEAN Zp1PEAFD_8
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z132, Zp1PEAFD_2 *Z133)
# else
(Z132, Z133)
Zp1PEAFD_2 *Z132, *Z133;
# endif
{
Zp1PEAFD_1 Z135;

if (Z132->Y1 != Z133->Y1) {
return FALSE;
} else {
{
Zp1PEAFD_1 B_5 = 1, B_6 = Z132->Y1;

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

BOOLEAN Zp1PEAFD_9
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z132, Zp1PEAFD_2 *Z133)
# else
(Z132, Z133)
Zp1PEAFD_2 *Z132, *Z133;
# endif
{
INTEGER Z135;
CARDINAL Z147, Z148;

{
LONGINT B_7 = 1, B_8 = ZdaDDAD7_3((LONGINT)Z132->Y1, (LONGINT)Z133->Y1);

if (B_7 <= B_8)
for (Z135 = B_7;; Z135 += 1) {
Z147 = Z149(Z132->Y0.A[Z135]);
Z148 = Z149(Z133->Y0.A[Z135]);
if (Z147 < Z148) {
return TRUE;
} else if (Z147 > Z148) {
return FALSE;
}
if (Z135 >= B_8) break;
}
}
return Z132->Y1 <= Z133->Y1;
}

static CARDINAL Z149
# ifdef HAVE_ARGS
(CHAR Z150)
# else
(Z150)
CHAR Z150;
# endif
{
return ORD(Z150);
}

void Zp1PEAFD_10
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z132, Zp1PEAFD_2 *Z133)
# else
(Z132, Z133)
Zp1PEAFD_2 *Z132, *Z133;
# endif
{
Zp1PEAFD_2 Z152;

Zp1PEAFD_3(&Z152, Z132);
Zp1PEAFD_3(Z132, Z133);
Zp1PEAFD_3(Z133, &Z152);
}

void Zp1PEAFD_11
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z132, Zp1PEAFD_1 Z154, Zp1PEAFD_1 Z155, Zp1PEAFD_2 *Z133)
# else
(Z132, Z154, Z155, Z133)
Zp1PEAFD_2 *Z132;
Zp1PEAFD_1 Z154, Z155;
Zp1PEAFD_2 *Z133;
# endif
{
Zp1PEAFD_1 Z135;

{
register Zp1PEAFD_2 *W_3 = Z133;

W_3->Y1 = 0;
{
Zp1PEAFD_1 B_9 = Z154, B_10 = Z155;

if (B_9 <= B_10)
for (Z135 = B_9;; Z135 += 1) {
INC(W_3->Y1);
W_3->Y0.A[W_3->Y1] = Z132->Y0.A[Z135];
if (Z135 >= B_10) break;
}
}
}
}

CHAR Zp1PEAFD_12
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z140, Zp1PEAFD_1 Z135)
# else
(Z140, Z135)
Zp1PEAFD_2 *Z140;
Zp1PEAFD_1 Z135;
# endif
{
return Z140->Y0.A[Z135];
}

void Zp1PEAFD_13
# ifdef HAVE_ARGS
(CHAR Z158[], LONGCARD O_1, Zp1PEAFD_2 *Z140)
# else
(Z158, O_1, Z140)
CHAR Z158[];
LONGCARD O_1;
Zp1PEAFD_2 *Z140;
# endif
{
Zp1PEAFD_1 Z135;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z158, O_1, CHAR)
Z135 = 0;
for (;;) {
if (Z158[Z135] == '\0') {
goto EXIT_1;
}
Z140->Y0.A[Z135 + 1] = Z158[Z135];
INC(Z135);
if (Z135 > (O_1 - 1)) {
goto EXIT_1;
}
} EXIT_1:;
Z140->Y1 = Z135;
FREE_OPEN_ARRAYS
}

void Zp1PEAFD_14
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z140, CHAR Z158[], LONGCARD O_2)
# else
(Z140, Z158, O_2)
Zp1PEAFD_2 *Z140;
CHAR Z158[];
LONGCARD O_2;
# endif
{
Zp1PEAFD_1 Z135;

{
Zp1PEAFD_1 B_11 = 1, B_12 = Z140->Y1;

if (B_11 <= B_12)
for (Z135 = B_11;; Z135 += 1) {
Z158[Z135 - 1] = Z140->Y0.A[Z135];
if (Z135 >= B_12) break;
}
}
Z158[Z140->Y1] = '\0';
}

INTEGER Zp1PEAFD_15
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z140)
# else
(Z140)
Zp1PEAFD_2 *Z140;
# endif
{
Zp1PEAFD_1 Z135, Z161;
INTEGER Z162;
BOOLEAN Z163;

switch (Z140->Y0.A[1]) {
case '+':;
Z163 = FALSE;
Z161 = 2;
break;
case '-':;
Z163 = TRUE;
Z161 = 2;
break;
default:
Z163 = FALSE;
Z161 = 1;
break;
}
Z162 = 0;
{
Zp1PEAFD_1 B_13 = Z161, B_14 = Z140->Y1;

if (B_13 <= B_14)
for (Z135 = B_13;; Z135 += 1) {
Z162 = Z162 * 10 + (INTEGER)(ORD(Z140->Y0.A[Z135]) - ORD('0'));
if (Z135 >= B_14) break;
}
}
if (Z163) {
return -Z162;
} else {
return Z162;
}
}

CARDINAL Zp1PEAFD_16
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z140, CARDINAL Z165)
# else
(Z140, Z165)
Zp1PEAFD_2 *Z140;
CARDINAL Z165;
# endif
{
Zp1PEAFD_1 Z135;
CARDINAL Z162;
CHAR Z150;

Z162 = 0;
{
Zp1PEAFD_1 B_15 = 1, B_16 = Z140->Y1;

if (B_15 <= B_16)
for (Z135 = B_15;; Z135 += 1) {
Z150 = Z140->Y0.A[Z135];
if ('A' <= Z150 && Z150 <= 'F') {
Z162 = Z162 * Z165 + ORD(Z150) - ORD('A') + 10;
} else if ('a' <= Z150 && Z150 <= 'f') {
Z162 = Z162 * Z165 + ORD(Z150) - ORD('a') + 10;
} else {
Z162 = Z162 * Z165 + ORD(Z150) - ORD('0');
}
if (Z135 >= B_16) break;
}
}
return Z162;
}

REAL Zp1PEAFD_17
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z140)
# else
(Z140)
Zp1PEAFD_2 *Z140;
# endif
{
REAL Z162;
LONGCARD Z169;
INTEGER Z170;
BOOLEAN Z171;
BOOLEAN Z172;
CARDINAL Z173;
CARDINAL Z174;
CHAR Z150;
Zp1PEAFD_1 Z135;

Z171 = FALSE;
Z169 = 0;
Z170 = 0;
Z173 = 0;
Z174 = 0;
Z135 = 0;
Zp1PEAFD_6(Z140, ' ');
INC(Z135);
Z150 = Z140->Y0.A[Z135];
switch (Z150) {
case '+':;
INC(Z135);
Z150 = Z140->Y0.A[Z135];
break;
case '-':;
INC(Z135);
Z150 = Z140->Y0.A[Z135];
Z171 = TRUE;
break;
case 'E':;
case 'e':;
Z169 = 1;
break;
default:
break;
}
while ('0' <= Z150 && Z150 <= '9') {
if (Z169 <= Z168) {
Z169 = 10 * Z169;
if (Z169 <= Z167 - (ORD(Z150) - ORD('0'))) {
INC1(Z169, ORD(Z150) - ORD('0'));
} else {
INC(Z174);
}
} else {
INC(Z174);
}
INC(Z135);
Z150 = Z140->Y0.A[Z135];
}
if (Z150 == '.') {
INC(Z135);
Z150 = Z140->Y0.A[Z135];
}
while ('0' <= Z150 && Z150 <= '9') {
if (Z169 <= Z168) {
Z169 = 10 * Z169;
if (Z169 <= Z167 - (ORD(Z150) - ORD('0'))) {
INC1(Z169, ORD(Z150) - ORD('0'));
} else {
INC(Z174);
}
} else {
INC(Z174);
}
INC(Z173);
INC(Z135);
Z150 = Z140->Y0.A[Z135];
}
if (Z150 == 'E') {
INC(Z135);
Z150 = Z140->Y0.A[Z135];
switch (Z150) {
case '+':;
Z172 = FALSE;
INC(Z135);
Z150 = Z140->Y0.A[Z135];
break;
case '-':;
Z172 = TRUE;
INC(Z135);
Z150 = Z140->Y0.A[Z135];
break;
default:
Z172 = FALSE;
break;
}
while ('0' <= Z150 && Z150 <= '9') {
Z170 = 10 * Z170 + (INTEGER)(ORD(Z150) - ORD('0'));
INC(Z135);
Z150 = Z140->Y0.A[Z135];
}
if (Z172) {
Z170 = -Z170;
}
}
DEC1(Z170, Z173 - Z174);
Z162 = FLOAT(Z169) * ZdaDDAD7_11(Z170);
if (Z171) {
return -Z162;
} else {
return Z162;
}
}

void Zp1PEAFD_18
# ifdef HAVE_ARGS
(INTEGER Z162, Zp1PEAFD_2 *Z140)
# else
(Z162, Z140)
INTEGER Z162;
Zp1PEAFD_2 *Z140;
# endif
{
INTEGER Z135, Z176;
CARDINAL Z177;
struct S_2 Z178;

if (Z162 < 0) {
Z140->Y0.A[1] = '-';
Z176 = 1;
Z162 = -Z162;
} else {
Z176 = 0;
}
Z177 = 0;
do {
INC(Z177);
Z178.A[Z177] = Z128.A[Z162 % 10];
Z162 = Z162 / 10;
} while (!(Z162 == 0));
for (Z135 = (INTEGER)Z177; Z135 >= 1; Z135 += -1) {
INC(Z176);
Z140->Y0.A[Z176] = Z178.A[Z135];
}
Z140->Y1 = Z176;
}

void Zp1PEAFD_19
# ifdef HAVE_ARGS
(ZfM_3 Z180, Zp1PEAFD_2 *Z140, Zp1PEAFD_1 Z181)
# else
(Z180, Z140, Z181)
ZfM_3 Z180;
Zp1PEAFD_2 *Z140;
Zp1PEAFD_1 Z181;
# endif
{
Zp1PEAFD_1 Z135;

{
Zp1PEAFD_1 B_17 = 1, B_18 = Z181;

if (B_17 <= B_18)
for (Z135 = B_17;; Z135 += 1) {
Z140->Y0.A[Z135] = ZfM_7(Z180);
if (Z135 >= B_18) break;
}
}
Z140->Y1 = Z181;
}

void Zp1PEAFD_20
# ifdef HAVE_ARGS
(ZfM_3 Z180, Zp1PEAFD_2 *Z140)
# else
(Z180, Z140)
ZfM_3 Z180;
Zp1PEAFD_2 *Z140;
# endif
{
Zp1PEAFD_1 Z135;
CHAR Z150;

Z135 = 0;
for (;;) {
Z150 = ZfM_7(Z180);
if (Z150 == Z126) {
goto EXIT_2;
}
# if defined _MSC_VER | defined MSDOS | defined __BORLANDC__
if (Z150 == '\r') { ZfM_7 (Z180); goto EXIT_2; }
# endif
if (Z135 == Zp1PEAFD_0) {
do {
} while (!(ZfM_7(Z180) == Z126));
goto EXIT_2;
}
INC(Z135);
Z140->Y0.A[Z135] = Z150;
} EXIT_2:;
Z140->Y1 = Z135;
}

void Zp1PEAFD_21
# ifdef HAVE_ARGS
(ZfM_3 Z180, Zp1PEAFD_2 *Z140)
# else
(Z180, Z140)
ZfM_3 Z180;
Zp1PEAFD_2 *Z140;
# endif
{
Zp1PEAFD_1 Z135;

{
Zp1PEAFD_1 B_19 = 1, B_20 = Z140->Y1;

if (B_19 <= B_20)
for (Z135 = B_19;; Z135 += 1) {
ZfM_24(Z180, Z140->Y0.A[Z135]);
if (Z135 >= B_20) break;
}
}
}

void Zp1PEAFD_22
# ifdef HAVE_ARGS
(ZfM_3 Z180, Zp1PEAFD_2 *Z140)
# else
(Z180, Z140)
ZfM_3 Z180;
Zp1PEAFD_2 *Z140;
# endif
{
Zp1PEAFD_21(Z180, Z140);
ZfM_33(Z180);
}

void BEGIN_Strings ARGS ((void))
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
