#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif


#define Z122	'\n'
#define Z123	'\t'
#define Z124	1024
#define Z125	2147483647
#define Z126	1000000000
#define Z127	(Z125 / 10)
typedef struct S_1 {
CHAR A[Z124 + 1];
} Z128;
typedef struct S_2 {
Z128 *Y0;
SHORTINT Y1;
SHORTINT Y2;
BOOLEAN Y3;
BOOLEAN Y4;
BOOLEAN Y5;
} Z129;
static struct S_3 {
Z129 A[ZDz6VQCC_0 - -1 + 1];
} Z136;
static struct S_4 {
Z128 A[ZfM_2 + 1];
} Z138;
static ZfM_3 Z140;
static struct S_5 {
CHAR A[15 + 1];
} Z141;
static void Z142 ARGS ((ZfM_3 Z143));
struct S_14 {
CHAR A[1000000 + 1];
};
static void Z150 ARGS ((ZfM_3 Z143));
struct S_11 {
CHAR A[1000000 + 1];
};
struct S_10 {
CHAR A[10 + 1];
};
#define Z199	100
struct S_9 {
CARDINAL A[200 + 1];
};
struct S_8 {
CHAR A[32 + 1];
};
struct S_6 {
CHAR A[10 + 1];
};

static void Z142
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
{
register Z129 *W_1 = &Z136.A[Z143 - -1];

if (W_1->Y5) {
ZfM_22((ZDz6VQCC_4)ZfM_1);
ZfM_22((ZDz6VQCC_4)ZfM_2);
}
W_1->Y1 = 0;
W_1->Y2 = rRead(Z143, ADR (W_1->Y0->A[1]), (LONGINT)Z124);
if (W_1->Y2 <= 0) {
W_1->Y2 = 0;
W_1->Y4 = TRUE;
}
}
}

ZfM_3 ZfM_4
# ifdef HAVE_ARGS
(CHAR Z148[], LONGCARD O_1)
# else
(Z148, O_1)
CHAR Z148[];
LONGCARD O_1;
# endif
{
ZfM_3 Z143;

Z143 = OpenInput(Z148, O_1);
if (Z143 < 0) {
} else {
{
register Z129 *W_2 = &Z136.A[Z143 - -1];

if (Z143 <= ZfM_2) {
W_2->Y0 = (Z128 *)ADR (Z138.A[Z143]);
} else {
W_2->Y0 = (Z128 *)ZDtgCFKU_1((LONGINT)(Z124 + 1));
}
W_2->Y1 = 0;
W_2->Y2 = 0;
W_2->Y3 = FALSE;
W_2->Y4 = FALSE;
}
Z150(Z143);
}
return Z143;
}

void ZfM_5
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
{
register Z129 *W_3 = &Z136.A[Z143 - -1];

if (W_3->Y0 != NIL) {
rClose(Z143);
if (Z143 > ZfM_2) {
ZDtgCFKU_2((LONGINT)(Z124 + 1), (ADDRESS)W_3->Y0);
}
W_3->Y0 = NIL;
}
}
}

INTEGER ZfM_6
# ifdef HAVE_ARGS
(ZfM_3 Z143, ADDRESS Z130, CARDINAL Z154)
# else
(Z143, Z130, Z154)
ZfM_3 Z143;
ADDRESS Z130;
CARDINAL Z154;
# endif
{
struct S_14 *Z155;
CARDINAL Z140;

Z155 = (struct S_14 *)Z130;
{
register Z129 *W_4 = &Z136.A[Z143 - -1];

Z140 = 0;
for (;;) {
if (Z140 == Z154) {
return Z140;
}
if (W_4->Y1 == W_4->Y2) {
Z142(Z143);
if (W_4->Y4) {
W_4->Y0->A[1] = '\0';
}
}
INC(W_4->Y1);
Z155->A[Z140] = W_4->Y0->A[W_4->Y1];
if (W_4->Y4) {
return Z140;
}
INC(Z140);
} EXIT_1:;
}
}

CHAR ZfM_7
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
{
register Z129 *W_5 = &Z136.A[Z143 - -1];

if (W_5->Y1 == W_5->Y2) {
Z142(Z143);
if (W_5->Y4) {
W_5->Y0->A[1] = '\0';
}
}
INC(W_5->Y1);
return W_5->Y0->A[W_5->Y1];
}
}

INTEGER ZfM_8
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
INTEGER Z158;
CHAR Z159;
BOOLEAN Z160;

do {
Z159 = ZfM_7(Z143);
} while (!(Z159 != ' ' && Z159 != Z123 && Z159 != Z122));
switch (Z159) {
case '+':;
Z160 = FALSE;
Z159 = ZfM_7(Z143);
break;
case '-':;
Z160 = TRUE;
Z159 = ZfM_7(Z143);
break;
default:
Z160 = FALSE;
break;
}
Z158 = 0;
while ('0' <= Z159 && Z159 <= '9') {
Z158 = 10 * Z158 + (INTEGER)(ORD(Z159) - ORD('0'));
Z159 = ZfM_7(Z143);
}
DEC(Z136.A[Z143 - -1].Y1);
if (Z160) {
return -Z158;
} else {
return Z158;
}
}

REAL ZfM_9
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
REAL Z158;
LONGCARD Z162;
INTEGER Z163;
BOOLEAN Z164;
BOOLEAN Z165;
CARDINAL Z166;
CARDINAL Z167;
CHAR Z159;

Z164 = FALSE;
Z162 = 0;
Z163 = 0;
Z166 = 0;
Z167 = 0;
do {
Z159 = ZfM_7(Z143);
} while (!(Z159 != ' ' && Z159 != Z123 && Z159 != Z122));
switch (Z159) {
case '+':;
Z159 = ZfM_7(Z143);
break;
case '-':;
Z159 = ZfM_7(Z143);
Z164 = TRUE;
break;
case 'E':;
Z162 = 1;
break;
default:
break;
}
while ('0' <= Z159 && Z159 <= '9') {
if (Z162 <= Z127) {
Z162 = 10 * Z162;
if (Z162 <= Z125 - (ORD(Z159) - ORD('0'))) {
INC1(Z162, ORD(Z159) - ORD('0'));
} else {
INC(Z167);
}
} else {
INC(Z167);
}
Z159 = ZfM_7(Z143);
}
if (Z159 == '.') {
Z159 = ZfM_7(Z143);
}
while ('0' <= Z159 && Z159 <= '9') {
if (Z162 <= Z127) {
Z162 = 10 * Z162;
if (Z162 <= Z125 - (ORD(Z159) - ORD('0'))) {
INC1(Z162, ORD(Z159) - ORD('0'));
} else {
INC(Z167);
}
} else {
INC(Z167);
}
INC(Z166);
Z159 = ZfM_7(Z143);
}
if (Z159 == 'E') {
Z159 = ZfM_7(Z143);
switch (Z159) {
case '+':;
Z165 = FALSE;
Z159 = ZfM_7(Z143);
break;
case '-':;
Z165 = TRUE;
Z159 = ZfM_7(Z143);
break;
default:
Z165 = FALSE;
break;
}
while ('0' <= Z159 && Z159 <= '9') {
Z163 = 10 * Z163 + (INTEGER)(ORD(Z159) - ORD('0'));
Z159 = ZfM_7(Z143);
}
if (Z165) {
Z163 = -Z163;
}
}
DEC(Z136.A[Z143 - -1].Y1);
DEC1(Z163, Z166 - Z167);
Z158 = FLOAT(Z162) * ZdaDDAD7_11(Z163);
if (Z164) {
return -Z158;
} else {
return Z158;
}
}

BOOLEAN ZfM_10
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
return ZfM_7(Z143) == 'T';
}

INTEGER ZfM_11
# ifdef HAVE_ARGS
(ZfM_3 Z143, INTEGER Z170)
# else
(Z143, Z170)
ZfM_3 Z143;
INTEGER Z170;
# endif
{
INTEGER Z158;
CHAR Z159;
INTEGER Z171;

do {
Z159 = ZfM_7(Z143);
} while (!(Z159 != ' ' && Z159 != Z123 && Z159 != Z122));
Z158 = 0;
for (;;) {
if ('0' <= Z159 && Z159 <= '9') {
Z171 = ORD(Z159) - ORD('0');
} else if ('A' <= Z159 && Z159 <= 'F') {
Z171 = ORD(Z159) - ORD('A') + 10;
} else {
Z171 = 99;
}
if (Z171 >= Z170) {
goto EXIT_2;
}
Z158 = Z170 * Z158 + Z171;
Z159 = ZfM_7(Z143);
} EXIT_2:;
DEC(Z136.A[Z143 - -1].Y1);
return Z158;
}

void ZfM_12
# ifdef HAVE_ARGS
(ZfM_3 Z143, CHAR Z173[], LONGCARD O_2)
# else
(Z143, Z173, O_2)
ZfM_3 Z143;
CHAR Z173[];
LONGCARD O_2;
# endif
{
CARDINAL Z140;

{
register Z129 *W_6 = &Z136.A[Z143 - -1];

{
LONGCARD B_1 = 0, B_2 = (O_2 - 1);

if (B_1 <= B_2)
for (Z140 = B_1;; Z140 += 1) {
if (W_6->Y1 == W_6->Y2) {
Z142(Z143);
if (W_6->Y4) {
W_6->Y0->A[1] = '\0';
}
}
INC(W_6->Y1);
Z173[Z140] = W_6->Y0->A[W_6->Y1];
if (Z140 >= B_2) break;
}
}
}
}

SHORTINT ZfM_13
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
return ZfM_8(Z143);
}

LONGINT ZfM_14
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
return ZfM_8(Z143);
}

CARDINAL ZfM_15
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
return ZfM_8(Z143);
}

void ZfM_16
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
do {
} while (!(ZfM_7(Z143) == Z122));
}

void ZfM_17
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
DEC(Z136.A[Z143 - -1].Y1);
}

BOOLEAN ZfM_18
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
{
register Z129 *W_7 = &Z136.A[Z143 - -1];

if (W_7->Y1 == W_7->Y2) {
Z142(Z143);
if (W_7->Y4) {
W_7->Y0->A[1] = '\0';
}
}
return W_7->Y0->A[W_7->Y1 + 1] == Z122;
}
}

BOOLEAN ZfM_19
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
CHAR Z159;

Z159 = ZfM_7(Z143);
DEC(Z136.A[Z143 - -1].Y1);
return Z136.A[Z143 - -1].Y4;
}

static void Z150
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
Z136.A[Z143 - -1].Y5 = IsCharacterSpecial(Z143);
}

ZfM_3 ZfM_20
# ifdef HAVE_ARGS
(CHAR Z148[], LONGCARD O_3)
# else
(Z148, O_3)
CHAR Z148[];
LONGCARD O_3;
# endif
{
ZfM_3 Z143;

Z143 = OpenOutput(Z148, O_3);
if (Z143 < 0) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"IO: cannot open file ", 21L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z148, O_3);
ZfM_33((ZDz6VQCC_4)ZfM_2);
} else {
{
register Z129 *W_8 = &Z136.A[Z143 - -1];

if (Z143 <= ZfM_2) {
W_8->Y0 = (Z128 *)ADR (Z138.A[Z143]);
} else {
W_8->Y0 = (Z128 *)ZDtgCFKU_1((LONGINT)(Z124 + 1));
}
W_8->Y1 = 0;
W_8->Y3 = TRUE;
}
Z150(Z143);
}
return Z143;
}

void ZfM_21
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
{
register Z129 *W_9 = &Z136.A[Z143 - -1];

if (W_9->Y0 != NIL) {
ZfM_22(Z143);
rClose(Z143);
if (Z143 > ZfM_2) {
ZDtgCFKU_2((LONGINT)(Z124 + 1), (ADDRESS)W_9->Y0);
}
W_9->Y0 = NIL;
}
}
}

void ZfM_22
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
{
register Z129 *W_10 = &Z136.A[Z143 - -1];

W_10->Y2 = rWrite(Z143, ADR (W_10->Y0->A[1]), (LONGINT)W_10->Y1);
if (W_10->Y1 > 0 && W_10->Y2 < W_10->Y1) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"IO: cannot write file ", 22L);
ZfM_25((ZDz6VQCC_4)ZfM_2, Z143, 0L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
W_10->Y1 = 0;
}
}

INTEGER ZfM_23
# ifdef HAVE_ARGS
(ZfM_3 Z143, ADDRESS Z130, INTEGER Z154)
# else
(Z143, Z130, Z154)
ZfM_3 Z143;
ADDRESS Z130;
INTEGER Z154;
# endif
{
struct S_11 *Z155;
INTEGER Z140;

Z155 = (struct S_11 *)Z130;
{
register Z129 *W_11 = &Z136.A[Z143 - -1];

{
LONGINT B_3 = 0, B_4 = Z154 - 1;

if (B_3 <= B_4)
for (Z140 = B_3;; Z140 += 1) {
INC(W_11->Y1);
W_11->Y0->A[W_11->Y1] = Z155->A[Z140];
if (W_11->Y1 == Z124) {
ZfM_22(Z143);
}
if (Z140 >= B_4) break;
}
}
}
return Z154;
}

void ZfM_24
# ifdef HAVE_ARGS
(ZfM_3 Z143, CHAR Z190)
# else
(Z143, Z190)
ZfM_3 Z143;
CHAR Z190;
# endif
{
{
register Z129 *W_12 = &Z136.A[Z143 - -1];

INC(W_12->Y1);
W_12->Y0->A[W_12->Y1] = Z190;
if (W_12->Y1 == Z124 || W_12->Y5 && Z190 == Z122) {
ZfM_22(Z143);
}
}
}

void ZfM_25
# ifdef HAVE_ARGS
(ZfM_3 Z143, INTEGER Z158, CARDINAL Z191)
# else
(Z143, Z158, Z191)
ZfM_3 Z143;
INTEGER Z158;
CARDINAL Z191;
# endif
{
INTEGER Z140;
CARDINAL Z192, Z193;
CARDINAL Z160;
struct S_10 Z194;

if (Z158 < 0) {
Z160 = 1;
Z192 = (CARDINAL)(-Z158);
} else {
Z160 = 0;
Z192 = Z158;
}
Z193 = 0;
do {
INC(Z193);
Z194.A[Z193] = Z141.A[Z192 % 10];
Z192 = Z192 / 10;
} while (!(Z192 == 0));
{
LONGINT B_5 = 1, B_6 = (INTEGER)(Z191 - Z193 - Z160);

if (B_5 <= B_6)
for (Z140 = B_5;; Z140 += 1) {
ZfM_24(Z143, ' ');
if (Z140 >= B_6) break;
}
}
if (Z160 == 1) {
ZfM_24(Z143, '-');
}
for (Z140 = (INTEGER)Z193; Z140 >= 1; Z140 += -1) {
ZfM_24(Z143, Z194.A[Z140]);
}
}

void ZfM_26
# ifdef HAVE_ARGS
(ZfM_3 Z143, REAL Z158, CARDINAL Z196, CARDINAL Z197, CARDINAL Z198)
# else
(Z143, Z158, Z196, Z197, Z198)
ZfM_3 Z143;
REAL Z158;
CARDINAL Z196, Z197, Z198;
# endif
{
CARDINAL Z140;
INTEGER Z200;
CARDINAL Z201;
CARDINAL Z202;
CARDINAL Z203;
CARDINAL Z204;
struct S_9 Z205;
REAL Z206;
REAL Z207;
LONGCARD Z162;
INTEGER Z163;

Z206 = FLOAT(Z125);
Z207 = FLOAT(Z127);
if (Z158 < 0.0) {
Z204 = 1;
Z158 = -Z158;
} else {
Z204 = 0;
}
if (Z158 == 0.0) {
Z162 = 0;
Z163 = 1;
} else {
Z163 = 10;
while (Z158 > Z206) {
Z158 = Z158 / 10.0;
INC(Z163);
}
while (Z158 <= Z207) {
Z158 = Z158 * 10.0;
DEC(Z163);
}
Z162 = TRUNC(Z158);
if (Z162 < Z126) {
DEC(Z163);
}
}
if (Z198 > 0 || Z163 <= 0) {
Z202 = 1;
} else {
Z202 = Z163;
}
if (Z197 == 0) {
Z197 = 1;
}
Z203 = Z202 + Z197;
Z201 = Z199;
do {
DEC(Z201);
Z205.A[Z201] = Z162 % 10;
Z162 = Z162 / 10;
} while (!(Z162 == 0));
if (Z198 == 0) {
{
LONGINT B_7 = 1, B_8 = 1 - Z163;

if (B_7 <= B_8)
for (Z200 = B_7;; Z200 += 1) {
DEC(Z201);
Z205.A[Z201] = 0;
if (Z200 >= B_8) break;
}
}
}
{
LONGCARD B_9 = Z199, B_10 = Z201 + Z203;

if (B_9 <= B_10)
for (Z140 = B_9;; Z140 += 1) {
Z205.A[Z140] = 0;
if (Z140 >= B_10) break;
}
}
Z205.A[Z201 - 1] = 0;
if (Z205.A[Z201 + Z203] >= 5) {
Z140 = Z201 + Z203 - 1;
while (Z205.A[Z140] == 9) {
Z205.A[Z140] = 0;
DEC(Z140);
}
INC(Z205.A[Z140]);
if (Z140 == Z201 - 1) {
Z201 = Z140;
if (Z198 > 0) {
INC(Z163);
} else if (Z163 > 0) {
INC(Z202);
}
}
}
{
LONGINT B_11 = 1, B_12 = (INTEGER)(Z196 - Z204 - Z202);

if (B_11 <= B_12)
for (Z200 = B_11;; Z200 += 1) {
ZfM_24(Z143, ' ');
if (Z200 >= B_12) break;
}
}
if (Z204 == 1) {
ZfM_24(Z143, '-');
}
{
LONGCARD B_13 = 1, B_14 = Z202;

if (B_13 <= B_14)
for (Z140 = B_13;; Z140 += 1) {
ZfM_24(Z143, Z141.A[Z205.A[Z201]]);
INC(Z201);
if (Z140 >= B_14) break;
}
}
ZfM_24(Z143, '.');
{
LONGCARD B_15 = 1, B_16 = Z197;

if (B_15 <= B_16)
for (Z140 = B_15;; Z140 += 1) {
ZfM_24(Z143, Z141.A[Z205.A[Z201]]);
INC(Z201);
if (Z140 >= B_16) break;
}
}
if (Z198 > 0) {
DEC(Z163);
ZfM_24(Z143, 'E');
if (Z163 < 0) {
ZfM_24(Z143, '-');
Z163 = -Z163;
} else {
ZfM_24(Z143, '+');
}
ZfM_28(Z143, (LONGCARD)Z163, Z198 - 1, 10L);
}
}

void ZfM_27
# ifdef HAVE_ARGS
(ZfM_3 Z143, BOOLEAN Z210)
# else
(Z143, Z210)
ZfM_3 Z143;
BOOLEAN Z210;
# endif
{
if (Z210) {
ZfM_24(Z143, 'T');
} else {
ZfM_24(Z143, 'F');
}
}

void ZfM_28
# ifdef HAVE_ARGS
(ZfM_3 Z143, LONGCARD Z158, CARDINAL Z191, CARDINAL Z170)
# else
(Z143, Z158, Z191, Z170)
ZfM_3 Z143;
LONGCARD Z158;
CARDINAL Z191, Z170;
# endif
{
INTEGER Z140;
CARDINAL Z193;
struct S_8 Z194;

Z193 = 0;
do {
INC(Z193);
Z194.A[Z193] = Z141.A[Z158 % Z170];
Z158 = Z158 / Z170;
} while (!(Z158 == 0));
{
LONGINT B_17 = 1, B_18 = (INTEGER)(Z191 - Z193);

if (B_17 <= B_18)
for (Z140 = B_17;; Z140 += 1) {
ZfM_24(Z143, '0');
if (Z140 >= B_18) break;
}
}
for (Z140 = (INTEGER)Z193; Z140 >= 1; Z140 += -1) {
ZfM_24(Z143, Z194.A[Z140]);
}
}

void ZfM_29
# ifdef HAVE_ARGS
(ZfM_3 Z143, CHAR Z173[], LONGCARD O_4)
# else
(Z143, Z173, O_4)
ZfM_3 Z143;
CHAR Z173[];
LONGCARD O_4;
# endif
{
CARDINAL Z140;
CHAR Z190;

{
register Z129 *W_13 = &Z136.A[Z143 - -1];

{
LONGCARD B_19 = 0, B_20 = (O_4 - 1);

if (B_19 <= B_20)
for (Z140 = B_19;; Z140 += 1) {
Z190 = Z173[Z140];
if (Z190 == '\0') {
return;
}
INC(W_13->Y1);
W_13->Y0->A[W_13->Y1] = Z190;
if (W_13->Y1 == Z124 || W_13->Y5 && Z190 == Z122) {
ZfM_22(Z143);
}
if (Z140 >= B_20) break;
}
}
}
}

void ZfM_30
# ifdef HAVE_ARGS
(ZfM_3 Z143, SHORTINT Z158, CARDINAL Z191)
# else
(Z143, Z158, Z191)
ZfM_3 Z143;
SHORTINT Z158;
CARDINAL Z191;
# endif
{
ZfM_25(Z143, (LONGINT)Z158, Z191);
}

void ZfM_31
# ifdef HAVE_ARGS
(ZfM_3 Z143, LONGINT Z158, CARDINAL Z191)
# else
(Z143, Z158, Z191)
ZfM_3 Z143;
LONGINT Z158;
CARDINAL Z191;
# endif
{
ZfM_25(Z143, Z158, Z191);
}

void ZfM_32
# ifdef HAVE_ARGS
(ZfM_3 Z143, CARDINAL Z158, CARDINAL Z191)
# else
(Z143, Z158, Z191)
ZfM_3 Z143;
CARDINAL Z158;
CARDINAL Z191;
# endif
{
INTEGER Z140;
CARDINAL Z193;
struct S_6 Z194;

Z193 = 0;
do {
INC(Z193);
Z194.A[Z193] = Z141.A[Z158 % 10];
Z158 = Z158 / 10;
} while (!(Z158 == 0));
{
LONGINT B_21 = 1, B_22 = (INTEGER)(Z191 - Z193);

if (B_21 <= B_22)
for (Z140 = B_21;; Z140 += 1) {
ZfM_24(Z143, ' ');
if (Z140 >= B_22) break;
}
}
for (Z140 = (INTEGER)Z193; Z140 >= 1; Z140 += -1) {
ZfM_24(Z143, Z194.A[Z140]);
}
}

void ZfM_33
# ifdef HAVE_ARGS
(ZfM_3 Z143)
# else
(Z143)
ZfM_3 Z143;
# endif
{
# if defined _MSC_VER | defined MSDOS | defined __BORLANDC__
if (Z143 > 2) ZfM_24 (Z143, '\r');
# endif
ZfM_24(Z143, Z122);
}

void ZfM_34
 ARGS ((void))
{
ZfM_3 Z140;

for (Z140 = 0; Z140 <= ZDz6VQCC_0; Z140 += 1) {
if (Z136.A[Z140 - -1].Y3) {
ZfM_21(Z140);
} else {
ZfM_5(Z140);
}
}
}

void BEGIN_IO ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_rSystem ();
BEGIN_General ();
BEGIN_rMemory ();
BEGIN_rSystem ();

Z141.A[0] = '0';
Z141.A[1] = '1';
Z141.A[2] = '2';
Z141.A[3] = '3';
Z141.A[4] = '4';
Z141.A[5] = '5';
Z141.A[6] = '6';
Z141.A[7] = '7';
Z141.A[8] = '8';
Z141.A[9] = '9';
Z141.A[10] = 'A';
Z141.A[11] = 'B';
Z141.A[12] = 'C';
Z141.A[13] = 'D';
Z141.A[14] = 'E';
Z141.A[15] = 'F';
for (Z140 = 0; Z140 <= ZDz6VQCC_0; Z140 += 1) {
{
register Z129 *W_14 = &Z136.A[Z140 - -1];

W_14->Y0 = NIL;
W_14->Y1 = 0;
W_14->Y2 = 0;
W_14->Y3 = FALSE;
W_14->Y4 = FALSE;
W_14->Y5 = FALSE;
}
}
Z136.A[ZfM_0 - -1].Y0 = (Z128 *)ADR (Z138.A[ZfM_0]);
Z136.A[ZfM_1 - -1].Y0 = (Z128 *)ADR (Z138.A[ZfM_1]);
Z136.A[ZfM_2 - -1].Y0 = (Z128 *)ADR (Z138.A[ZfM_2]);
Z136.A[ZfM_0 - -1].Y3 = FALSE;
Z136.A[ZfM_1 - -1].Y3 = TRUE;
Z136.A[ZfM_2 - -1].Y3 = TRUE;
Z150((ZDz6VQCC_4)ZfM_0);
Z150((ZDz6VQCC_4)ZfM_1);
Z150((ZDz6VQCC_4)ZfM_2);
}
