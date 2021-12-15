#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_ArgCheck
#include "ArgCheck.h"
#endif

#ifndef DEFINITION_Codes
#include "Codes.h"
#endif

INTEGER ZggD3B_1, ZggD3B_2, ZggD3B_3;

#define Z152	-1
#define Z153	200
#define Z154	100
#define Z155	20
#define Z156	20
typedef struct S_1 {
ZggD3B_4 Y0;
} Z157;
typedef struct S_2 {
Zfb3DLQ_0 Y0, Y1;
} Z160;
static struct S_3 {
Z157 A[1000 + 1];
} *Z163;
static LONGINT Z164;
static Zfb3DLQ_0 Z165;
static struct S_4 {
Z160 A[1000 + 1];
} *Z166;
static LONGINT Z167;
static ZggD3B_4 Z168;
static ZggD3B_4 Z169, Z170;
static INTEGER Z171;
static struct S_5 {
ZpmCQ_4 A[1000 + 1];
} *Z172;
static LONGINT Z173;
static INTEGER Z174;
static struct S_6 {
ZpmCQ_4 A[1000 + 1];
} *Z175;
static LONGINT Z176;
static INTEGER Z177;
static ZggD3B_4 Z187 ARGS ((void));
static void Z182 ARGS ((Zfb3DLQ_0 Z179));
static void Z183 ARGS ((ZggD3B_4 Z181));
static ZfM_3 Z203;
static void Z204 ARGS ((CARDINAL Z206));

void ZggD3B_5
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z179, Zfb3DLQ_0 Z180, ZggD3B_4 Z181)
# else
(Z179, Z180, Z181)
Zfb3DLQ_0 Z179;
Zfb3DLQ_0 Z180;
ZggD3B_4 Z181;
# endif
{
Z182(Z179);
Z183(Z181);
Z163->A[Z179].Y0 = Z181;
Z166->A[Z181].Y0 = Z179;
Z166->A[Z181].Y1 = Z180;
if (Z181 > Z169) {
Z169 = Z181;
}
}

ZggD3B_4 ZggD3B_6
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z179)
# else
(Z179)
Zfb3DLQ_0 Z179;
# endif
{
Z182(Z179);
return Z163->A[Z179].Y0;
}

Zfb3DLQ_0 ZggD3B_7
# ifdef HAVE_ARGS
(ZggD3B_4 Z181)
# else
(Z181)
ZggD3B_4 Z181;
# endif
{
Z183(Z181);
return Z166->A[Z181].Y0;
}

Zfb3DLQ_0 ZggD3B_8
# ifdef HAVE_ARGS
(ZggD3B_4 Z181)
# else
(Z181)
ZggD3B_4 Z181;
# endif
{
Z183(Z181);
return Z166->A[Z181].Y1;
}

BOOLEAN ZggD3B_10
# ifdef HAVE_ARGS
(ZggD3B_4 Z181)
# else
(Z181)
ZggD3B_4 Z181;
# endif
{
return ZggD3B_7(Z181) != Zpky9FDA_4;
}

BOOLEAN ZggD3B_9
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z179)
# else
(Z179)
Zfb3DLQ_0 Z179;
# endif
{
return ZggD3B_6(Z179) != Z152;
}

void ZggD3B_11
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z179, Zfb3DLQ_0 Z180)
# else
(Z179, Z180)
Zfb3DLQ_0 Z179;
Zfb3DLQ_0 Z180;
# endif
{
ZggD3B_5(Z179, Z180, Z187());
}

static ZggD3B_4 Z187
 ARGS ((void))
{
for (;;) {
Z183(Z170);
if (!ZggD3B_10(Z170)) {
return Z170;
}
INC(Z170);
} EXIT_1:;
}

ZggD3B_4 ZggD3B_12
 ARGS ((void))
{
return Z169;
}

static void Z182
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z179)
# else
(Z179)
Zfb3DLQ_0 Z179;
# endif
{
Zfb3DLQ_0 Z189;

if (Z179 >= Z165) {
Z189 = Z165;
if (Z165 == 0) {
ZarQdhNDD_0((ADDRESS *)&Z163, &Z164, (LONGINT)sizeof (Z157));
Z165 = Z164;
}
while (Z179 >= Z165) {
ZarQdhNDD_2((ADDRESS *)&Z163, &Z164, (LONGINT)sizeof (Z157));
Z165 = Z164;
}
while (Z189 < Z165) {
{
register Z157 *W_1 = &Z163->A[Z189];

W_1->Y0 = Z152;
}
INC(Z189);
}
}
}

static void Z183
# ifdef HAVE_ARGS
(ZggD3B_4 Z181)
# else
(Z181)
ZggD3B_4 Z181;
# endif
{
ZggD3B_4 Z189;

if (Z181 >= Z168) {
Z189 = Z168;
if (Z168 == 0) {
ZarQdhNDD_0((ADDRESS *)&Z166, &Z167, (LONGINT)sizeof (Z160));
Z168 = Z167;
}
while (Z181 >= Z168) {
ZarQdhNDD_2((ADDRESS *)&Z166, &Z167, (LONGINT)sizeof (Z160));
Z168 = Z167;
}
while (Z189 < Z168) {
{
register Z160 *W_2 = &Z166->A[Z189];

W_2->Y0 = Zpky9FDA_4;
}
INC(Z189);
}
}
}

INTEGER ZggD3B_13
# ifdef HAVE_ARGS
(ZpmCQ_4 Z191)
# else
(Z191)
ZpmCQ_4 Z191;
# endif
{
INTEGER Z192;
ZpmCQ_4 Z114;
Zfb3DLQ_0 Z193;

ZpmCQ_5(&Z114, (LONGCARD)Z169);
if (!ZpmCQ_26(Z191)) {
{
SHORTCARD B_1 = ZpmCQ_17(&Z191), B_2 = ZpmCQ_18(&Z191);

if (B_1 <= B_2)
for (Z193 = B_1;; Z193 += 1) {
if (ZpmCQ_25((LONGCARD)Z193, &Z191) && Z193 != Zpky9FDA_2) {
ZpmCQ_13(&Z114, (LONGCARD)ZggD3B_6(Z193));
}
if (Z193 >= B_2) break;
}
}
}
Z192 = ZggD3B_1;
for (;;) {
if (Z192 == ZggD3B_0) {
goto EXIT_2;
}
if (ZpmCQ_23(&Z172->A[Z192], &Z114)) {
goto EXIT_2;
}
DEC(Z192);
} EXIT_2:;
if (Z192 == ZggD3B_0) {
INC(ZggD3B_1);
Z192 = ZggD3B_1;
if (ZggD3B_1 >= Z174) {
if (Z174 == 0) {
ZarQdhNDD_0((ADDRESS *)&Z172, &Z173, (LONGINT)sizeof (ZpmCQ_4));
Z174 = Z173;
} else {
ZarQdhNDD_2((ADDRESS *)&Z172, &Z173, (LONGINT)sizeof (ZpmCQ_4));
Z174 = Z173;
}
}
Z172->A[Z192] = Z114;
} else {
ZpmCQ_7(&Z114);
}
return Z192;
}

INTEGER ZggD3B_14
# ifdef HAVE_ARGS
(ZpmCQ_4 Z191)
# else
(Z191)
ZpmCQ_4 Z191;
# endif
{
INTEGER Z192;
ZpmCQ_4 Z114;
Zfb3DLQ_0 Z193;

ZpmCQ_5(&Z114, (LONGCARD)Z169);
{
SHORTCARD B_3 = ZpmCQ_17(&Z191), B_4 = ZpmCQ_18(&Z191);

if (B_3 <= B_4)
for (Z193 = B_3;; Z193 += 1) {
if (ZpmCQ_25((LONGCARD)Z193, &Z191) && Z193 != Zpky9FDA_2) {
ZpmCQ_13(&Z114, (LONGCARD)ZggD3B_6(Z193));
}
if (Z193 >= B_4) break;
}
}
Z192 = ZggD3B_2;
for (;;) {
if (Z192 == ZggD3B_0) {
goto EXIT_3;
}
if (ZpmCQ_23(&Z175->A[Z192], &Z114)) {
goto EXIT_3;
}
DEC(Z192);
} EXIT_3:;
if (Z192 == ZggD3B_0) {
INC(ZggD3B_2);
Z192 = ZggD3B_2;
if (ZggD3B_2 >= Z177) {
if (Z177 == 0) {
ZarQdhNDD_0((ADDRESS *)&Z175, &Z176, (LONGINT)sizeof (ZpmCQ_4));
Z177 = Z176;
} else {
ZarQdhNDD_2((ADDRESS *)&Z175, &Z176, (LONGINT)sizeof (ZpmCQ_4));
Z177 = Z176;
}
}
Z175->A[Z192] = Z114;
} else {
ZpmCQ_7(&Z114);
}
return Z192;
}

void ZggD3B_15
# ifdef HAVE_ARGS
(INTEGER Z199, ZpmCQ_4 *Z191)
# else
(Z199, Z191)
INTEGER Z199;
ZpmCQ_4 *Z191;
# endif
{
ZpmCQ_30(Z191, Z172->A[Z199]);
}

void ZggD3B_16
# ifdef HAVE_ARGS
(INTEGER Z199, ZpmCQ_4 *Z191)
# else
(Z199, Z191)
INTEGER Z199;
ZpmCQ_4 *Z191;
# endif
{
if (Z199 > ZggD3B_2) {
ZpmCQ_32(Z191);
} else {
ZpmCQ_30(Z191, Z175->A[Z199]);
}
}

void ZggD3B_17
# ifdef HAVE_ARGS
(ZfM_3 Z202, INTEGER Z199)
# else
(Z202, Z199)
ZfM_3 Z202;
INTEGER Z199;
# endif
{
ZpmCQ_4 Z191;

if (Z199 == ZggD3B_0) {
return;
}
ZpmCQ_5(&Z191, (LONGCARD)ZggD3B_12());
ZggD3B_16(Z199, &Z191);
Z203 = Z202;
Z171 = 0;
ZpmCQ_33(Z191, (ZpmCQ_1)Z204);
ZpmCQ_7(&Z191);
}

void ZggD3B_18
# ifdef HAVE_ARGS
(ZfM_3 Z202, INTEGER Z199)
# else
(Z202, Z199)
ZfM_3 Z202;
INTEGER Z199;
# endif
{
ZpmCQ_4 Z191;

if (Z199 == ZggD3B_0) {
return;
}
ZpmCQ_5(&Z191, (LONGCARD)ZggD3B_12());
ZggD3B_15(Z199, &Z191);
Z203 = Z202;
Z171 = 0;
ZpmCQ_33(Z191, (ZpmCQ_1)Z204);
ZpmCQ_7(&Z191);
}

static void Z204
# ifdef HAVE_ARGS
(CARDINAL Z206)
# else
(Z206)
CARDINAL Z206;
# endif
{
ZfM_29(Z203, (STRING)" ", 1L);
ZggD3B_19(Z203, ZggD3B_7((LONGINT)Z206));
INC(Z171);
if (Z171 == 10) {
ZfM_33(Z203);
Z171 = 0;
}
}

void ZggD3B_19
# ifdef HAVE_ARGS
(ZfM_3 Z202, Zfb3DLQ_0 Z208)
# else
(Z202, Z208)
ZfM_3 Z202;
Zfb3DLQ_0 Z208;
# endif
{
Zp1PEAFD_2 Z209;
CARDINAL Z210;
CHAR Z211, Z212;

Zfb3DLQ_3(Z208, &Z209);
Z211 = Zp1PEAFD_12(&Z209, 1);
ZfM_24(Z202, Z211);
{
LONGCARD B_5 = 2, B_6 = Zp1PEAFD_7(&Z209);

if (B_5 <= B_6)
for (Z210 = B_5;; Z210 += 1) {
Z212 = Zp1PEAFD_12(&Z209, (Zp1PEAFD_1)Z210);
if (ZehCfg728_7 == ZehCfg728_12 && (Z211 == '/' && Z212 == '*' || Z211 == '*' && Z212 == '/') || ZehCfg728_7 == ZehCfg728_13 && (Z211 == '(' && Z212 == '*' || Z211 == '*' && Z212 == ')')) {
ZfM_24(Z202, ' ');
}
ZfM_24(Z202, Z212);
Z211 = Z212;
if (Z210 >= B_6) break;
}
}
}

void BEGIN_Codes ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_IO ();
BEGIN_DynArray ();
BEGIN_Idents ();
BEGIN_Scanner ();
BEGIN_Sets ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_ArgCheck ();

Z164 = Z153;
Z165 = 0;
Z167 = Z154;
Z168 = 0;
Z173 = Z155;
Z174 = 0;
Z176 = Z156;
Z177 = 0;
Z170 = 1;
Z169 = 0;
ZggD3B_2 = -1;
ZggD3B_1 = -1;
}
