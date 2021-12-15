#include "SYSTEM_.h"

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

SHORTCARD ZqxDADwjx_5;
SHORTCARD ZqxDADwjx_6;

#define Z131	25
#define Z132	26
#define Z133	ZqxDADwjx_3
#define Z135	Z133
#define Z136	(Z133 + 1)
typedef LONGCARD Z137;
static struct S_1 {
ZqxDADwjx_10 A[Z133 + 1];
} Z138;
static struct S_2 {
ZqxDADwjx_7 A[Z133 + 1];
} Z140;
static struct S_3 {
BOOLEAN A[Z133 + 1];
} Z142;
static struct S_4 {
Z137 A[ZqxDADwjx_3 + 2 + 1];
} Z143;
static struct S_5 {
ZqxDADwjx_12 A[ZqxDADwjx_3 + 2 + 1];
} Z144;
static LONGCARD Z146;
static CARDINAL Z148;
static BOOLEAN Z149;
static ZqxDADwjx_11 Z150;
static ZqxDADwjx_13 Z152;
static Zp1PEAFD_2 Z154;
static ZqxDADwjx_7 Z155;
static void Z170 ARGS ((void));
static void Z190 ARGS ((CHAR Z191[], LONGCARD O_1));

void ZqxDADwjx_14
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z157, ZqxDADwjx_11 *Z150, ZqxDADwjx_13 *Z158, ZqxDADwjx_7 Z155)
# else
(Z157, Z150, Z158, Z155)
Zfb3DLQ_0 Z157;
ZqxDADwjx_11 *Z150;
ZqxDADwjx_13 *Z158;
ZqxDADwjx_7 Z155;
# endif
{
if (Z157 > ZqxDADwjx_3) {
*Z158 = ZqxDADwjx_29;
} else if (Z138.A[Z157] != Z135) {
*Z158 = ZqxDADwjx_27;
*Z150 = Z138.A[Z157];
} else if (Z143.A[*Z150] != Z135) {
*Z158 = ZqxDADwjx_28;
} else {
Z138.A[Z157] = *Z150;
Z143.A[*Z150] = Z157;
*Z158 = ZqxDADwjx_26;
Z140.A[Z157] = Z155;
if (*Z150 > ZqxDADwjx_5) {
ZqxDADwjx_5 = *Z150;
}
}
}

void ZqxDADwjx_15
# ifdef HAVE_ARGS
(Zfb3DLQ_0 *Z157, ZqxDADwjx_13 *Z158, ZqxDADwjx_7 Z155)
# else
(Z157, Z158, Z155)
Zfb3DLQ_0 *Z157;
ZqxDADwjx_13 *Z158;
ZqxDADwjx_7 Z155;
# endif
{
if (Z138.A[*Z157] != Z135) {
*Z158 = ZqxDADwjx_27;
} else {
Z138.A[*Z157] = Z136;
*Z158 = ZqxDADwjx_26;
Z140.A[*Z157] = Z155;
}
}

void ZqxDADwjx_16
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z157, ZqxDADwjx_13 *Z158)
# else
(Z157, Z158)
Zfb3DLQ_0 Z157;
ZqxDADwjx_13 *Z158;
# endif
{
if (Z138.A[Z157] == Z135) {
*Z158 = ZqxDADwjx_30;
} else if (Z138.A[Z157] != Z136) {
if (ZqxDADwjx_19(Z138.A[Z157]) == ZqxDADwjx_34) {
*Z158 = ZqxDADwjx_32;
} else {
*Z158 = ZqxDADwjx_28;
}
} else {
Z170();
if (Z146 <= ZqxDADwjx_1) {
Z138.A[Z157] = Z146;
Z143.A[Z146] = Z157;
if (Z146 > ZqxDADwjx_5) {
ZqxDADwjx_5 = Z146;
}
*Z158 = ZqxDADwjx_26;
} else {
ZblNKKO_53((LONGCARD)Z132, (LONGCARD)ZblNKKO_41, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_38, ADR (Z157));
}
}
}

ZqxDADwjx_10 ZqxDADwjx_17
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z157, ZqxDADwjx_7 Z172)
# else
(Z157, Z172)
Zfb3DLQ_0 Z157;
ZqxDADwjx_7 Z172;
# endif
{
if (Z138.A[Z157] == Z136) {
ZblNKKO_53((LONGCARD)Z131, (LONGCARD)ZblNKKO_40, Z172, (LONGCARD)ZblNKKO_38, ADR (Z157));
} else if (Z138.A[Z157] != Z135) {
if (Z140.A[Z157].Y0 > Z172.Y0 || Z140.A[Z157].Y0 == Z172.Y0 && Z140.A[Z157].Y1 > Z172.Y1) {
if (Z172.Y0 != 0 && Z172.Y1 != 0) {
Z140.A[Z157] = Z172;
}
}
return Z138.A[Z157];
} else {
INC(ZqxDADwjx_6);
if (ZqxDADwjx_6 >= Z133) {
ZblNKKO_53((LONGCARD)Z132, (LONGCARD)ZblNKKO_41, Z172, (LONGCARD)ZblNKKO_38, ADR (Z157));
} else {
Z140.A[Z157] = Z172;
Z138.A[Z157] = ZqxDADwjx_6;
Z143.A[ZqxDADwjx_6] = Z157;
return ZqxDADwjx_6;
}
}
}

void ZqxDADwjx_18
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z157, ZqxDADwjx_7 Z155)
# else
(Z157, Z155)
Zfb3DLQ_0 Z157;
ZqxDADwjx_7 Z155;
# endif
{
if (!Z142.A[Z157]) {
Z140.A[Z157] = Z155;
Z142.A[Z157] = TRUE;
}
}

ZqxDADwjx_8 ZqxDADwjx_19
# ifdef HAVE_ARGS
(ZqxDADwjx_10 Z177)
# else
(Z177)
ZqxDADwjx_10 Z177;
# endif
{
if (Z143.A[Z177] == Z135 || Z177 >= Z133) {
return ZqxDADwjx_35;
} else if (Z177 <= ZqxDADwjx_1) {
return ZqxDADwjx_33;
} else {
return ZqxDADwjx_34;
}
}

ZqxDADwjx_10 ZqxDADwjx_20
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z157, ZqxDADwjx_13 *Z158)
# else
(Z157, Z158)
Zfb3DLQ_0 Z157;
ZqxDADwjx_13 *Z158;
# endif
{
if (Z138.A[Z157] == Z135) {
*Z158 = ZqxDADwjx_30;
} else if (Z138.A[Z157] == Z136) {
*Z158 = ZqxDADwjx_31;
} else {
*Z158 = ZqxDADwjx_26;
}
return Z138.A[Z157];
}

Zfb3DLQ_0 ZqxDADwjx_21
# ifdef HAVE_ARGS
(ZqxDADwjx_10 Z177, ZqxDADwjx_13 *Z158)
# else
(Z177, Z158)
ZqxDADwjx_10 Z177;
ZqxDADwjx_13 *Z158;
# endif
{
if (Z143.A[Z177] == Z135) {
*Z158 = ZqxDADwjx_30;
} else {
*Z158 = ZqxDADwjx_26;
}
return Z143.A[Z177];
}

void ZqxDADwjx_22
# ifdef HAVE_ARGS
(ZqxDADwjx_10 Z177, ZqxDADwjx_7 *Z155)
# else
(Z177, Z155)
ZqxDADwjx_10 Z177;
ZqxDADwjx_7 *Z155;
# endif
{
Zfb3DLQ_0 Z157;

Z157 = Z143.A[Z177];
if (Z157 == Z135) {
Z155->Y0 = 0;
Z155->Y1 = 0;
} else {
*Z155 = Z140.A[Z157];
}
}

void ZqxDADwjx_23
# ifdef HAVE_ARGS
(ZqxDADwjx_10 Z177, ZqxDADwjx_12 Z186)
# else
(Z177, Z186)
ZqxDADwjx_10 Z177;
ZqxDADwjx_12 Z186;
# endif
{
Z144.A[Z177] = Z186;
}

ZqxDADwjx_12 ZqxDADwjx_24
# ifdef HAVE_ARGS
(ZqxDADwjx_10 Z177)
# else
(Z177)
ZqxDADwjx_10 Z177;
# endif
{
return Z144.A[Z177];
}

static void Z170
 ARGS ((void))
{
while (Z143.A[Z146] != Z135 && Z146 < ZqxDADwjx_1 + 1) {
INC(Z146);
}
}

void ZqxDADwjx_25
 ARGS ((void))
{
Z149 = FALSE;
for (Z148 = 0; Z148 <= Z133; Z148 += 1) {
Z143.A[Z148] = Z135;
Z138.A[Z148] = Z135;
Z142.A[Z148] = FALSE;
Z144.A[Z148] = 0;
}
Z146 = 1;
ZqxDADwjx_6 = ZqxDADwjx_1;
Zp1PEAFD_13((STRING)"_EndOfFile", 10L, &Z154);
Z150 = ZqxDADwjx_4;
Z155.Y0 = 0;
Z155.Y1 = 0;
ZqxDADwjx_14(Zfb3DLQ_2(&Z154), &Z150, &Z152, Z155);
if (Z152 != ZqxDADwjx_26) {
Z190((STRING)"TokenTab.InitTokenTable", 23L);
}
ZqxDADwjx_5 = 0;
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
Zp1PEAFD_2 Z154;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z191, O_1, CHAR)
Zp1PEAFD_13(Z191, O_1, &Z154);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_35, ADR (Z154));
FREE_OPEN_ARRAYS
}

void BEGIN_TokenTab ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Position ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Errors ();
BEGIN_Position ();

}
