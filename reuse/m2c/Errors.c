#include "SYSTEM_.h"

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Layout
#include "Layout.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Sort
#include "Sort.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

PROC ZblNKKO_37;
BOOLEAN ZblNKKO_38;
BOOLEAN ZblNKKO_39;
BOOLEAN ZblNKKO_40;

#define Z174	128
#define Z175	ZblNKKO_36
typedef struct S_1 {
CHAR A[255 + 1];
} Z176;
typedef struct S_2 {
ZmtLFGGBG_0 Y0;
BOOLEAN Y1;
SHORTCARD Y2;
SHORTCARD Y3;
SHORTCARD Y4;
SHORTCARD Y5;
union {
struct {
char dummy;
} V_1;
struct {
INTEGER Y6;
} V_2;
struct {
SHORTCARD Y7;
} V_3;
struct {
LONGINT Y8;
} V_4;
struct {
CARDINAL Y9;
} V_5;
struct {
REAL Y10;
} V_6;
struct {
BOOLEAN Y11;
} V_7;
struct {
CHAR Y12;
} V_8;
struct {
Ztf1PEAFD_1 Y13;
} V_9;
struct {
Zp1PEAFi_1 Y14;
} V_10;
struct {
Zp1PEAFi_7 Y15;
} V_11;
struct {
Zp1PEAFi_1 Y16;
} V_12;
struct {
ZpmCQ_4 *Y17;
} V_13;
struct {
Zfb3DLQ_0 Y18;
} V_14;
struct {
Zfb3DLQ_8 Y19;
} V_15;
struct {
ZmtLFGGBG_0 Y20;
} V_16;
} U_1;
} Z177;
static struct S_3 {
Z177 A[1000000 + 1];
} *Z213;
static LONGINT Z214;
static LONGINT Z215;
static BOOLEAN Z216;
static void (*Z217) ARGS ((BOOLEAN, CARDINAL, CARDINAL, ZmtLFGGBG_0, CARDINAL, ADDRESS));
static ZfM_3 Z218;
static SHORTCARD Z219;
static Zp1PEAFD_2 Z220;
static struct S_4 {
CARDINAL A[ZblNKKO_20 + 1];
} Z221;
static void Z233 ARGS ((ZmtLFGGBG_0 Z136, CARDINAL Z181));
static void Z240 ARGS ((CARDINAL Z180));
static void Z254 ARGS ((CARDINAL Z182, ADDRESS Z229));
static void Z271 ARGS ((ZfM_3 Z272, Zp1PEAFD_2 Z200));
static void Z276 ARGS ((BOOLEAN Z178, CARDINAL Z180, CARDINAL Z181, ZmtLFGGBG_0 Z136, CARDINAL Z182, ADDRESS Z229));
static void Z287 ARGS ((BOOLEAN Z288, CARDINAL Z289, CARDINAL Z290, ZmtLFGGBG_0 Z291, CARDINAL Z292, ADDRESS Z293));
static BOOLEAN Z285 ARGS ((INTEGER Z225, INTEGER Z294));
static void Z286 ARGS ((INTEGER Z225, INTEGER Z294));
static void Z299 ARGS ((void));

void ZblNKKO_41
 ARGS ((void))
{
CARDINAL Z225;

for (Z225 = ZblNKKO_13; Z225 <= ZblNKKO_20; Z225 += 1) {
Z221.A[Z225] = 0;
}
Z215 = 0;
Z219 = 0;
}

void ZblNKKO_42
 ARGS ((void))
{
if (Z214 > 0) {
ZarQdhNDD_3((ADDRESS *)&Z213, &Z214, (LONGINT)sizeof (Z177));
Z214 = 0;
}
}

void ZblNKKO_44
# ifdef HAVE_ARGS
(CARDINAL Z180, CARDINAL Z181, ZmtLFGGBG_0 Z136)
# else
(Z180, Z181, Z136)
CARDINAL Z180, Z181;
ZmtLFGGBG_0 Z136;
# endif
{
INC(Z221.A[Z181]);
(*Z217)(TRUE, Z180, Z181, Z136, (LONGCARD)ZblNKKO_21, (ADDRESS)NIL);
}

void ZblNKKO_45
# ifdef HAVE_ARGS
(CARDINAL Z180, CARDINAL Z181, ZmtLFGGBG_0 Z136, CARDINAL Z182, ADDRESS Z229)
# else
(Z180, Z181, Z136, Z182, Z229)
CARDINAL Z180, Z181;
ZmtLFGGBG_0 Z136;
CARDINAL Z182;
ADDRESS Z229;
# endif
{
INC(Z221.A[Z181]);
(*Z217)(TRUE, Z180, Z181, Z136, Z182, Z229);
}

void ZblNKKO_46
# ifdef HAVE_ARGS
(CHAR Z231[], LONGCARD O_1, CARDINAL Z181, ZmtLFGGBG_0 Z136)
# else
(Z231, O_1, Z181, Z136)
CHAR Z231[];
LONGCARD O_1;
CARDINAL Z181;
ZmtLFGGBG_0 Z136;
# endif
{
Zp1PEAFD_2 Z200;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z231, O_1, CHAR)
INC(Z221.A[Z181]);
Zp1PEAFD_13(Z231, O_1, &Z200);
(*Z217)(FALSE, (LONGCARD)Zfb3DLQ_2(&Z200), Z181, Z136, (LONGCARD)ZblNKKO_21, (ADDRESS)NIL);
FREE_OPEN_ARRAYS
}

void ZblNKKO_47
# ifdef HAVE_ARGS
(CHAR Z231[], LONGCARD O_2, CARDINAL Z181, ZmtLFGGBG_0 Z136, CARDINAL Z182, ADDRESS Z229)
# else
(Z231, O_2, Z181, Z136, Z182, Z229)
CHAR Z231[];
LONGCARD O_2;
CARDINAL Z181;
ZmtLFGGBG_0 Z136;
CARDINAL Z182;
ADDRESS Z229;
# endif
{
Zp1PEAFD_2 Z200;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z231, O_2, CHAR)
INC(Z221.A[Z181]);
Zp1PEAFD_13(Z231, O_2, &Z200);
(*Z217)(FALSE, (LONGCARD)Zfb3DLQ_2(&Z200), Z181, Z136, Z182, Z229);
FREE_OPEN_ARRAYS
}

static void Z233
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z136, CARDINAL Z181)
# else
(Z136, Z181)
ZmtLFGGBG_0 Z136;
CARDINAL Z181;
# endif
{
if (ZmtLFGGBG_2(Z136, ZmtLFGGBG_1) == 0) {
ZibDRNS_2(Z218, 10L);
} else {
ZmtLFGGBG_3(Z218, Z136);
ZfM_29(Z218, (STRING)": ", 2L);
}
switch (Z181) {
case ZblNKKO_13:;
ZfM_29(Z218, (STRING)"            ", 12L);
break;
case ZblNKKO_14:;
ZfM_29(Z218, (STRING)"Fatal       ", 12L);
break;
case ZblNKKO_15:;
ZfM_29(Z218, (STRING)"Restriction ", 12L);
break;
case ZblNKKO_16:;
ZfM_29(Z218, (STRING)"Error       ", 12L);
break;
case ZblNKKO_17:;
ZfM_29(Z218, (STRING)"Warning     ", 12L);
break;
case ZblNKKO_18:;
ZfM_29(Z218, (STRING)"Repair      ", 12L);
break;
case ZblNKKO_19:;
ZfM_29(Z218, (STRING)"Note        ", 12L);
break;
case ZblNKKO_20:;
ZfM_29(Z218, (STRING)"Information ", 12L);
break;
default:
ZfM_29(Z218, (STRING)"Error class: ", 13L);
ZfM_25(Z218, (LONGINT)Z181, 0L);
break;
}
}

static void Z240
# ifdef HAVE_ARGS
(CARDINAL Z180)
# else
(Z180)
CARDINAL Z180;
# endif
{
switch (Z180) {
case ZblNKKO_0:;
break;
case ZblNKKO_1:;
ZfM_29(Z218, (STRING)"syntax error", 12L);
break;
case ZblNKKO_2:;
ZfM_29(Z218, (STRING)"expected tokens", 15L);
break;
case ZblNKKO_3:;
ZfM_29(Z218, (STRING)"restart point", 13L);
break;
case ZblNKKO_4:;
ZfM_29(Z218, (STRING)"token inserted ", 15L);
break;
case ZblNKKO_5:;
ZfM_29(Z218, (STRING)"parse table mismatch", 20L);
break;
case ZblNKKO_6:;
ZfM_29(Z218, (STRING)"cannot open parse table", 23L);
break;
case ZblNKKO_7:;
ZfM_29(Z218, (STRING)"cannot read parse table", 23L);
break;
case ZblNKKO_8:;
ZfM_29(Z218, (STRING)"too many messages", 17L);
break;
case ZblNKKO_9:;
ZfM_29(Z218, (STRING)"token found    ", 15L);
break;
case ZblNKKO_10:;
ZfM_29(Z218, (STRING)"found/expected ", 15L);
break;
case ZblNKKO_11:;
ZfM_29(Z218, (STRING)"Tcl/Tk ", 7L);
break;
case ZblNKKO_12:;
ZfM_29(Z218, (STRING)"ConfigureTree: unknown parameter", 32L);
break;
default:
ZfM_29(Z218, (STRING)" error code: ", 13L);
ZfM_25(Z218, (LONGINT)Z180, 0L);
break;
}
}

static void Z254
# ifdef HAVE_ARGS
(CARDINAL Z182, ADDRESS Z229)
# else
(Z182, Z229)
CARDINAL Z182;
ADDRESS Z229;
# endif
{
INTEGER *Z255;
SHORTCARD *Z256;
LONGINT *Z257;
CARDINAL *Z258;
REAL *Z259;
BOOLEAN *Z260;
CHAR *Z261;
Ztf1PEAFD_1 *Z262;
Zp1PEAFD_2 *Z263;
Ztf1PEAFD_4 *Z264;
Z176 *Z265;
ZpmCQ_4 *Z266;
Zfb3DLQ_0 *Z267;
Zfb3DLQ_8 *Z268;
ZmtLFGGBG_0 *Z269;
Zp1PEAFD_2 Z270;

if (Z182 == ZblNKKO_21) {
return;
}
ZfM_29(Z218, (STRING)": ", 2L);
switch (Z182) {
case ZblNKKO_22:;
Z255 = (LONGINT *)Z229;
ZfM_25(Z218, *Z255, 0L);
break;
case ZblNKKO_23:;
Z256 = (SHORTCARD *)Z229;
ZfM_25(Z218, (LONGINT)(*Z256), 0L);
break;
case ZblNKKO_24:;
Z257 = (LONGINT *)Z229;
ZfM_25(Z218, *Z257, 0L);
break;
case ZblNKKO_25:;
Z258 = (LONGCARD *)Z229;
ZfM_32(Z218, *Z258, 0L);
break;
case ZblNKKO_26:;
Z259 = (REAL *)Z229;
ZfM_26(Z218, *Z259, 1L, 10L, 1L);
break;
case ZblNKKO_27:;
Z260 = (BOOLEAN *)Z229;
ZfM_27(Z218, *Z260);
break;
case ZblNKKO_28:;
Z261 = (CHAR *)Z229;
ZfM_24(Z218, *Z261);
break;
case ZblNKKO_29:;
Z262 = (SHORTCARD *)Z229;
if (*Z262 < 256) {
ZfM_24(Z218, CHR(*Z262));
} else {
ZfM_29(Z218, (STRING)"\\u", 2L);
ZfM_28(Z218, (LONGCARD)(*Z262), 4L, 16L);
}
break;
case ZblNKKO_30:;
Z263 = (Zp1PEAFD_2 *)Z229;
Z271(Z218, *Z263);
break;
case ZblNKKO_31:;
Z264 = (Ztf1PEAFD_3 *)Z229;
Ztf1PEAFD_23(Z218, Z264);
break;
case ZblNKKO_32:;
Z265 = (Z176 *)Z229;
Zp1PEAFD_13((*Z265).A, 256L, &Z270);
Z271(Z218, Z270);
break;
case ZblNKKO_33:;
Z266 = (ZpmCQ_4 *)Z229;
ZpmCQ_35(Z218, *Z266);
break;
case ZblNKKO_34:;
Z267 = (SHORTCARD *)Z229;
Zfb3DLQ_7(Z218, *Z267);
break;
case ZblNKKO_35:;
Z268 = (SHORTCARD *)Z229;
Zfb3DLQ_13(Z218, *Z268);
break;
case ZblNKKO_36:;
Z269 = (ZmtLFGGBG_0 *)Z229;
ZmtLFGGBG_3(Z218, *Z269);
break;
default:
break;
}
}

static void Z271
# ifdef HAVE_ARGS
(ZfM_3 Z272, Zp1PEAFD_2 Z200)
# else
(Z272, Z200)
ZfM_3 Z272;
Zp1PEAFD_2 Z200;
# endif
{
INTEGER Z273, Z225;
CHAR Z274;

if (ZblNKKO_40) {
Z273 = Zp1PEAFD_7(&Z200);
if (Z273 <= 32) {
Zp1PEAFD_21(Z272, &Z200);
} else {
for (Z225 = 1; Z225 <= 32; Z225 += 1) {
ZfM_24(Z272, Zp1PEAFD_12(&Z200, (Zp1PEAFD_1)Z225));
}
Z225 = 32;
for (;;) {
INC(Z225);
if (Z225 > Z273) {
goto EXIT_1;
}
Z274 = Zp1PEAFD_12(&Z200, (Zp1PEAFD_1)Z225);
if (Z274 == ' ') {
goto EXIT_1;
}
ZfM_24(Z272, Z274);
} EXIT_1:;
if (Z225 < Z273) {
ZfM_29(Z272, (STRING)" ...", 4L);
}
}
} else {
Zp1PEAFD_21(Z272, &Z200);
}
}

static void Z276
# ifdef HAVE_ARGS
(BOOLEAN Z178, CARDINAL Z180, CARDINAL Z181, ZmtLFGGBG_0 Z136, CARDINAL Z182, ADDRESS Z229)
# else
(Z178, Z180, Z181, Z136, Z182, Z229)
BOOLEAN Z178;
CARDINAL Z180, Z181;
ZmtLFGGBG_0 Z136;
CARDINAL Z182;
ADDRESS Z229;
# endif
{
Zp1PEAFD_2 *Z263;

if (Z178) {
if (ZblNKKO_38) {
switch (Z180) {
case ZblNKKO_9:;
Z263 = (Zp1PEAFD_2 *)Z229;
Zp1PEAFD_3(&Z220, Z263);
Zp1PEAFD_6(&Z220, '/');
return;
break;
case ZblNKKO_1:;
case ZblNKKO_3:;
case ZblNKKO_4:;
return;
break;
case ZblNKKO_2:;
Z180 = ZblNKKO_10;
Z181 = ZblNKKO_16;
Z263 = (Zp1PEAFD_2 *)Z229;
Zp1PEAFD_5(&Z220, Z263);
Z229 = ADR (Z220);
break;
default:
break;
}
}
if (ZblNKKO_39 && Z136.Y0 != 0) {
if (Z136.Y0 == Z219) {
return;
} else {
Z219 = Z136.Y0;
}
}
}
Z233(Z136, Z181);
if (Z178) {
Z240(Z180);
} else {
Zfb3DLQ_7(Z218, (SHORTCARD)Z180);
}
Z254(Z182, Z229);
ZfM_33(Z218);
ZfM_22(Z218);
if (Z181 == ZblNKKO_14 && !Z216) {
(*ZblNKKO_37)();
}
}

void ZblNKKO_48
# ifdef HAVE_ARGS
(ZfM_3 Z272)
# else
(Z272)
ZfM_3 Z272;
# endif
{
LONGINT Z225;
ADDRESS Z229;
Zp1PEAFD_2 Z282;
Ztf1PEAFD_3 Z283;
Z177 *Z284;

ZpwKP_2(1L, Z215, (ZpwKP_0)Z285, (ZpwKP_1)Z286);
Z219 = 0;
Z218 = Z272;
{
LONGINT B_1 = 1, B_2 = Z215;

if (B_1 <= B_2)
for (Z225 = B_1;; Z225 += 1) {
{
register Z177 *W_1 = &Z213->A[Z225];

switch (W_1->Y5) {
case ZblNKKO_22:;
Z229 = ADR (W_1->U_1.V_2.Y6);
break;
case ZblNKKO_23:;
Z229 = ADR (W_1->U_1.V_3.Y7);
break;
case ZblNKKO_24:;
Z229 = ADR (W_1->U_1.V_4.Y8);
break;
case ZblNKKO_25:;
Z229 = ADR (W_1->U_1.V_5.Y9);
break;
case ZblNKKO_26:;
Z229 = ADR (W_1->U_1.V_6.Y10);
break;
case ZblNKKO_27:;
Z229 = ADR (W_1->U_1.V_7.Y11);
break;
case ZblNKKO_28:;
Z229 = ADR (W_1->U_1.V_8.Y12);
break;
case ZblNKKO_29:;
Z229 = ADR (W_1->U_1.V_9.Y13);
break;
case ZblNKKO_30:;
Zp1PEAFi_3(W_1->U_1.V_10.Y14, &Z282);
Z229 = ADR (Z282);
break;
case ZblNKKO_31:;
Zp1PEAFi_9(W_1->U_1.V_11.Y15, &Z283);
Z229 = ADR (Z283);
break;
case ZblNKKO_33:;
Z229 = (ADDRESS)W_1->U_1.V_13.Y17;
break;
case ZblNKKO_34:;
Z229 = ADR (W_1->U_1.V_14.Y18);
break;
case ZblNKKO_35:;
Z229 = ADR (W_1->U_1.V_15.Y19);
break;
case Z175:;
Z229 = ADR (W_1->U_1.V_16.Y20);
break;
default:
Z229 = (ADDRESS)NIL;
break;
}
if (Z225 == 1 || W_1->Y1 != Z284->Y1 || W_1->Y3 != Z284->Y3 || W_1->Y4 != Z284->Y4 || ZmtLFGGBG_2(W_1->Y0, Z284->Y0) != 0 || W_1->Y5 != Z284->Y5) {
Z276(W_1->Y1, (LONGCARD)W_1->Y3, (LONGCARD)W_1->Y4, W_1->Y0, (LONGCARD)W_1->Y5, Z229);
Z284 = (Z177 *)ADR (Z213->A[Z225]);
}
}
if (Z225 >= B_2) break;
}
}
Z218 = ZfM_2;
}

static void Z287
# ifdef HAVE_ARGS
(BOOLEAN Z288, CARDINAL Z289, CARDINAL Z290, ZmtLFGGBG_0 Z291, CARDINAL Z292, ADDRESS Z293)
# else
(Z288, Z289, Z290, Z291, Z292, Z293)
BOOLEAN Z288;
CARDINAL Z289, Z290;
ZmtLFGGBG_0 Z291;
CARDINAL Z292;
ADDRESS Z293;
# endif
{
INTEGER *Z255;
SHORTCARD *Z256;
LONGINT *Z257;
CARDINAL *Z258;
REAL *Z259;
BOOLEAN *Z260;
CHAR *Z261;
Ztf1PEAFD_1 *Z262;
Zp1PEAFD_2 *Z263;
Ztf1PEAFD_4 *Z264;
Z176 *Z265;
ZpmCQ_4 *Z266;
Zfb3DLQ_0 *Z267;
Zfb3DLQ_8 *Z268;
ZmtLFGGBG_0 *Z269;
Zp1PEAFD_2 Z282;

INC(Z215);
if (Z215 >= Z214) {
if (Z214 == 0) {
Z214 = Z174;
ZarQdhNDD_0((ADDRESS *)&Z213, &Z214, (LONGINT)sizeof (Z177));
} else {
ZarQdhNDD_2((ADDRESS *)&Z213, &Z214, (LONGINT)sizeof (Z177));
}
}
{
register Z177 *W_2 = &Z213->A[Z215];

W_2->Y0 = Z291;
W_2->Y1 = Z288;
W_2->Y2 = Z215;
W_2->Y3 = Z289;
W_2->Y4 = Z290;
W_2->Y5 = Z292;
switch (W_2->Y5) {
case ZblNKKO_22:;
Z255 = (LONGINT *)Z293;
W_2->U_1.V_2.Y6 = *Z255;
break;
case ZblNKKO_23:;
Z256 = (SHORTCARD *)Z293;
W_2->U_1.V_3.Y7 = *Z256;
break;
case ZblNKKO_24:;
Z257 = (LONGINT *)Z293;
W_2->U_1.V_4.Y8 = *Z257;
break;
case ZblNKKO_25:;
Z258 = (LONGCARD *)Z293;
W_2->U_1.V_5.Y9 = *Z258;
break;
case ZblNKKO_26:;
Z259 = (REAL *)Z293;
W_2->U_1.V_6.Y10 = *Z259;
break;
case ZblNKKO_27:;
Z260 = (BOOLEAN *)Z293;
W_2->U_1.V_7.Y11 = *Z260;
break;
case ZblNKKO_28:;
Z261 = (CHAR *)Z293;
W_2->U_1.V_8.Y12 = *Z261;
break;
case ZblNKKO_29:;
Z262 = (SHORTCARD *)Z293;
W_2->U_1.V_9.Y13 = *Z262;
break;
case ZblNKKO_30:;
Z263 = (Zp1PEAFD_2 *)Z293;
W_2->U_1.V_10.Y14 = Zp1PEAFi_2(Z263);
break;
case ZblNKKO_31:;
Z264 = (Ztf1PEAFD_3 *)Z293;
W_2->U_1.V_11.Y15 = Zp1PEAFi_8(Z264);
break;
case ZblNKKO_32:;
Z265 = (Z176 *)Z293;
Zp1PEAFD_13((*Z265).A, 256L, &Z282);
W_2->Y5 = ZblNKKO_30;
W_2->U_1.V_12.Y16 = Zp1PEAFi_2(&Z282);
break;
case ZblNKKO_33:;
Z266 = (ZpmCQ_4 *)Z293;
W_2->U_1.V_13.Y17 = (ZpmCQ_4 *)ZDtgCFKU_1((LONGINT)sizeof (ZpmCQ_4));
ZpmCQ_5(W_2->U_1.V_13.Y17, ZpmCQ_16(Z266));
ZpmCQ_30(W_2->U_1.V_13.Y17, *Z266);
break;
case ZblNKKO_34:;
Z267 = (SHORTCARD *)Z293;
W_2->U_1.V_14.Y18 = *Z267;
break;
case ZblNKKO_35:;
Z268 = (SHORTCARD *)Z293;
W_2->U_1.V_15.Y19 = *Z268;
break;
case Z175:;
Z269 = (ZmtLFGGBG_0 *)Z293;
W_2->U_1.V_16.Y20 = *Z269;
break;
default:
break;
}
}
if (Z290 == ZblNKKO_14) {
ZblNKKO_48((ZDz6VQCC_4)ZfM_2);
(*ZblNKKO_37)();
}
}

static BOOLEAN Z285
# ifdef HAVE_ARGS
(INTEGER Z225, INTEGER Z294)
# else
(Z225, Z294)
INTEGER Z225, Z294;
# endif
{
INTEGER Z295;

Z295 = ZmtLFGGBG_2(Z213->A[Z225].Y0, Z213->A[Z294].Y0);
if (Z295 == -1) {
return TRUE;
}
if (Z295 == 1) {
return FALSE;
}
return Z213->A[Z225].Y2 < Z213->A[Z294].Y2;
}

static void Z286
# ifdef HAVE_ARGS
(INTEGER Z225, INTEGER Z294)
# else
(Z225, Z294)
INTEGER Z225, Z294;
# endif
{
Z177 Z283;

Z283 = Z213->A[Z225];
Z213->A[Z225] = Z213->A[Z294];
Z213->A[Z294] = Z283;
}

void ZblNKKO_43
# ifdef HAVE_ARGS
(BOOLEAN Z297)
# else
(Z297)
BOOLEAN Z297;
# endif
{
if (Z297) {
Z217 = Z287;
Z215 = 0;
Z219 = 0;
} else {
Z217 = Z276;
}
Z216 = Z297;
}

CARDINAL ZblNKKO_49
# ifdef HAVE_ARGS
(CARDINAL Z181)
# else
(Z181)
CARDINAL Z181;
# endif
{
return Z221.A[Z181];
}

static void Z299
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_Errors ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Position ();
BEGIN_IO ();
BEGIN_rMemory ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Layout ();
BEGIN_Position ();
BEGIN_StringM ();
BEGIN_Strings ();
BEGIN_WStrings ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Sort ();
BEGIN_rSystem ();
BEGIN_Strings ();
BEGIN_WStrings ();

ZblNKKO_37 = Z299;
Z216 = FALSE;
Z218 = ZfM_2;
Z217 = Z276;
Z214 = 0;
Z215 = 0;
Z219 = 0;
ZblNKKO_38 = TRUE;
ZblNKKO_39 = TRUE;
ZblNKKO_40 = TRUE;
}
