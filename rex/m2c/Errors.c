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
static void Z227 ARGS ((ZmtLFGGBG_0 Z136, CARDINAL Z181));
static void Z236 ARGS ((CARDINAL Z180));
static void Z250 ARGS ((CARDINAL Z182, ADDRESS Z223));
static void Z267 ARGS ((ZfM_3 Z268, Zp1PEAFD_2 Z200));
static void Z273 ARGS ((BOOLEAN Z178, CARDINAL Z180, CARDINAL Z181, ZmtLFGGBG_0 Z136, CARDINAL Z182, ADDRESS Z223));
static void Z284 ARGS ((BOOLEAN Z285, CARDINAL Z286, CARDINAL Z287, ZmtLFGGBG_0 Z288, CARDINAL Z289, ADDRESS Z290));
static BOOLEAN Z282 ARGS ((INTEGER Z270, INTEGER Z291));
static void Z283 ARGS ((INTEGER Z270, INTEGER Z291));
static void Z295 ARGS ((void));

void ZblNKKO_42
# ifdef HAVE_ARGS
(CARDINAL Z180, CARDINAL Z181, ZmtLFGGBG_0 Z136)
# else
(Z180, Z181, Z136)
CARDINAL Z180, Z181;
ZmtLFGGBG_0 Z136;
# endif
{
(*Z217)(TRUE, Z180, Z181, Z136, (LONGCARD)ZblNKKO_21, (ADDRESS)NIL);
}

void ZblNKKO_43
# ifdef HAVE_ARGS
(CARDINAL Z180, CARDINAL Z181, ZmtLFGGBG_0 Z136, CARDINAL Z182, ADDRESS Z223)
# else
(Z180, Z181, Z136, Z182, Z223)
CARDINAL Z180, Z181;
ZmtLFGGBG_0 Z136;
CARDINAL Z182;
ADDRESS Z223;
# endif
{
(*Z217)(TRUE, Z180, Z181, Z136, Z182, Z223);
}

void ZblNKKO_44
# ifdef HAVE_ARGS
(CHAR Z225[], LONGCARD O_1, CARDINAL Z181, ZmtLFGGBG_0 Z136)
# else
(Z225, O_1, Z181, Z136)
CHAR Z225[];
LONGCARD O_1;
CARDINAL Z181;
ZmtLFGGBG_0 Z136;
# endif
{
Zp1PEAFD_2 Z200;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z225, O_1, CHAR)
Zp1PEAFD_13(Z225, O_1, &Z200);
(*Z217)(FALSE, (LONGCARD)Zfb3DLQ_2(&Z200), Z181, Z136, (LONGCARD)ZblNKKO_21, (ADDRESS)NIL);
FREE_OPEN_ARRAYS
}

void ZblNKKO_45
# ifdef HAVE_ARGS
(CHAR Z225[], LONGCARD O_2, CARDINAL Z181, ZmtLFGGBG_0 Z136, CARDINAL Z182, ADDRESS Z223)
# else
(Z225, O_2, Z181, Z136, Z182, Z223)
CHAR Z225[];
LONGCARD O_2;
CARDINAL Z181;
ZmtLFGGBG_0 Z136;
CARDINAL Z182;
ADDRESS Z223;
# endif
{
Zp1PEAFD_2 Z200;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z225, O_2, CHAR)
Zp1PEAFD_13(Z225, O_2, &Z200);
(*Z217)(FALSE, (LONGCARD)Zfb3DLQ_2(&Z200), Z181, Z136, Z182, Z223);
FREE_OPEN_ARRAYS
}

static void Z227
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

static void Z236
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

static void Z250
# ifdef HAVE_ARGS
(CARDINAL Z182, ADDRESS Z223)
# else
(Z182, Z223)
CARDINAL Z182;
ADDRESS Z223;
# endif
{
INTEGER *Z251;
SHORTCARD *Z252;
LONGINT *Z253;
CARDINAL *Z254;
REAL *Z255;
BOOLEAN *Z256;
CHAR *Z257;
Ztf1PEAFD_1 *Z258;
Zp1PEAFD_2 *Z259;
Ztf1PEAFD_4 *Z260;
Z176 *Z261;
ZpmCQ_4 *Z262;
Zfb3DLQ_0 *Z263;
Zfb3DLQ_8 *Z264;
ZmtLFGGBG_0 *Z265;
Zp1PEAFD_2 Z266;

if (Z182 == ZblNKKO_21) {
return;
}
ZfM_29(Z218, (STRING)": ", 2L);
switch (Z182) {
case ZblNKKO_22:;
Z251 = (LONGINT *)Z223;
ZfM_25(Z218, *Z251, 0L);
break;
case ZblNKKO_23:;
Z252 = (SHORTCARD *)Z223;
ZfM_25(Z218, (LONGINT)(*Z252), 0L);
break;
case ZblNKKO_24:;
Z253 = (LONGINT *)Z223;
ZfM_25(Z218, *Z253, 0L);
break;
case ZblNKKO_25:;
Z254 = (LONGCARD *)Z223;
ZfM_32(Z218, *Z254, 0L);
break;
case ZblNKKO_26:;
Z255 = (REAL *)Z223;
ZfM_26(Z218, *Z255, 1L, 10L, 1L);
break;
case ZblNKKO_27:;
Z256 = (BOOLEAN *)Z223;
ZfM_27(Z218, *Z256);
break;
case ZblNKKO_28:;
Z257 = (CHAR *)Z223;
ZfM_24(Z218, *Z257);
break;
case ZblNKKO_29:;
Z258 = (SHORTCARD *)Z223;
if (*Z258 < 256) {
ZfM_24(Z218, CHR(*Z258));
} else {
ZfM_29(Z218, (STRING)"\\u", 2L);
ZfM_28(Z218, (LONGCARD)(*Z258), 4L, 16L);
}
break;
case ZblNKKO_30:;
Z259 = (Zp1PEAFD_2 *)Z223;
Z267(Z218, *Z259);
break;
case ZblNKKO_31:;
Z260 = (Ztf1PEAFD_3 *)Z223;
Ztf1PEAFD_23(Z218, Z260);
break;
case ZblNKKO_32:;
Z261 = (Z176 *)Z223;
Zp1PEAFD_13((*Z261).A, 256L, &Z266);
Z267(Z218, Z266);
break;
case ZblNKKO_33:;
Z262 = (ZpmCQ_4 *)Z223;
ZpmCQ_35(Z218, *Z262);
break;
case ZblNKKO_34:;
Z263 = (SHORTCARD *)Z223;
Zfb3DLQ_7(Z218, *Z263);
break;
case ZblNKKO_35:;
Z264 = (SHORTCARD *)Z223;
Zfb3DLQ_13(Z218, *Z264);
break;
case ZblNKKO_36:;
Z265 = (ZmtLFGGBG_0 *)Z223;
ZmtLFGGBG_3(Z218, *Z265);
break;
default:
break;
}
}

static void Z267
# ifdef HAVE_ARGS
(ZfM_3 Z268, Zp1PEAFD_2 Z200)
# else
(Z268, Z200)
ZfM_3 Z268;
Zp1PEAFD_2 Z200;
# endif
{
INTEGER Z269, Z270;
CHAR Z271;

if (ZblNKKO_40) {
Z269 = Zp1PEAFD_7(&Z200);
if (Z269 <= 32) {
Zp1PEAFD_21(Z268, &Z200);
} else {
for (Z270 = 1; Z270 <= 32; Z270 += 1) {
ZfM_24(Z268, Zp1PEAFD_12(&Z200, (Zp1PEAFD_1)Z270));
}
Z270 = 32;
for (;;) {
INC(Z270);
if (Z270 > Z269) {
goto EXIT_1;
}
Z271 = Zp1PEAFD_12(&Z200, (Zp1PEAFD_1)Z270);
if (Z271 == ' ') {
goto EXIT_1;
}
ZfM_24(Z268, Z271);
} EXIT_1:;
if (Z270 < Z269) {
ZfM_29(Z268, (STRING)" ...", 4L);
}
}
} else {
Zp1PEAFD_21(Z268, &Z200);
}
}

static void Z273
# ifdef HAVE_ARGS
(BOOLEAN Z178, CARDINAL Z180, CARDINAL Z181, ZmtLFGGBG_0 Z136, CARDINAL Z182, ADDRESS Z223)
# else
(Z178, Z180, Z181, Z136, Z182, Z223)
BOOLEAN Z178;
CARDINAL Z180, Z181;
ZmtLFGGBG_0 Z136;
CARDINAL Z182;
ADDRESS Z223;
# endif
{
Zp1PEAFD_2 *Z259;

if (Z178) {
if (ZblNKKO_38) {
switch (Z180) {
case ZblNKKO_9:;
Z259 = (Zp1PEAFD_2 *)Z223;
Zp1PEAFD_3(&Z220, Z259);
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
Z259 = (Zp1PEAFD_2 *)Z223;
Zp1PEAFD_5(&Z220, Z259);
Z223 = ADR (Z220);
break;
default:
break;
}
}
if (ZblNKKO_39 && Z136.Y1 != 0) {
if (Z136.Y1 == Z219) {
return;
} else {
Z219 = Z136.Y1;
}
}
}
Z227(Z136, Z181);
if (Z178) {
Z236(Z180);
} else {
Zfb3DLQ_7(Z218, (SHORTCARD)Z180);
}
Z250(Z182, Z223);
ZfM_33(Z218);
ZfM_22(Z218);
if (Z181 == ZblNKKO_14 && !Z216) {
(*ZblNKKO_37)();
}
}

void ZblNKKO_46
# ifdef HAVE_ARGS
(ZfM_3 Z268)
# else
(Z268)
ZfM_3 Z268;
# endif
{
LONGINT Z270;
ADDRESS Z223;
Zp1PEAFD_2 Z279;
Ztf1PEAFD_3 Z280;
Z177 *Z281;

ZpwKP_2(1L, Z215, (ZpwKP_0)Z282, (ZpwKP_1)Z283);
Z218 = Z268;
{
LONGINT B_1 = 1, B_2 = Z215;

if (B_1 <= B_2)
for (Z270 = B_1;; Z270 += 1) {
{
register Z177 *W_1 = &Z213->A[Z270];

switch (W_1->Y5) {
case ZblNKKO_22:;
Z223 = ADR (W_1->U_1.V_2.Y6);
break;
case ZblNKKO_23:;
Z223 = ADR (W_1->U_1.V_3.Y7);
break;
case ZblNKKO_24:;
Z223 = ADR (W_1->U_1.V_4.Y8);
break;
case ZblNKKO_25:;
Z223 = ADR (W_1->U_1.V_5.Y9);
break;
case ZblNKKO_26:;
Z223 = ADR (W_1->U_1.V_6.Y10);
break;
case ZblNKKO_27:;
Z223 = ADR (W_1->U_1.V_7.Y11);
break;
case ZblNKKO_28:;
Z223 = ADR (W_1->U_1.V_8.Y12);
break;
case ZblNKKO_29:;
Z223 = ADR (W_1->U_1.V_9.Y13);
break;
case ZblNKKO_30:;
Zp1PEAFi_3(W_1->U_1.V_10.Y14, &Z279);
Z223 = ADR (Z279);
break;
case ZblNKKO_31:;
Zp1PEAFi_9(W_1->U_1.V_11.Y15, &Z280);
Z223 = ADR (Z280);
break;
case ZblNKKO_33:;
Z223 = (ADDRESS)W_1->U_1.V_13.Y17;
break;
case ZblNKKO_34:;
Z223 = ADR (W_1->U_1.V_14.Y18);
break;
case ZblNKKO_35:;
Z223 = ADR (W_1->U_1.V_15.Y19);
break;
case Z175:;
Z223 = ADR (W_1->U_1.V_16.Y20);
break;
default:
Z223 = (ADDRESS)NIL;
break;
}
if (Z270 == 1 || W_1->Y1 != Z281->Y1 || W_1->Y3 != Z281->Y3 || W_1->Y4 != Z281->Y4 || ZmtLFGGBG_2(W_1->Y0, Z281->Y0) != 0 || W_1->Y5 != Z281->Y5) {
Z273(W_1->Y1, (LONGCARD)W_1->Y3, (LONGCARD)W_1->Y4, W_1->Y0, (LONGCARD)W_1->Y5, Z223);
Z281 = (Z177 *)ADR (Z213->A[Z270]);
}
}
if (Z270 >= B_2) break;
}
}
Z218 = ZfM_2;
}

static void Z284
# ifdef HAVE_ARGS
(BOOLEAN Z285, CARDINAL Z286, CARDINAL Z287, ZmtLFGGBG_0 Z288, CARDINAL Z289, ADDRESS Z290)
# else
(Z285, Z286, Z287, Z288, Z289, Z290)
BOOLEAN Z285;
CARDINAL Z286, Z287;
ZmtLFGGBG_0 Z288;
CARDINAL Z289;
ADDRESS Z290;
# endif
{
INTEGER *Z251;
SHORTCARD *Z252;
LONGINT *Z253;
CARDINAL *Z254;
REAL *Z255;
BOOLEAN *Z256;
CHAR *Z257;
Ztf1PEAFD_1 *Z258;
Zp1PEAFD_2 *Z259;
Ztf1PEAFD_4 *Z260;
Z176 *Z261;
ZpmCQ_4 *Z262;
Zfb3DLQ_0 *Z263;
Zfb3DLQ_8 *Z264;
ZmtLFGGBG_0 *Z265;
Zp1PEAFD_2 Z279;

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

W_2->Y0 = Z288;
W_2->Y1 = Z285;
W_2->Y2 = Z215;
W_2->Y3 = Z286;
W_2->Y4 = Z287;
W_2->Y5 = Z289;
switch (W_2->Y5) {
case ZblNKKO_22:;
Z251 = (LONGINT *)Z290;
W_2->U_1.V_2.Y6 = *Z251;
break;
case ZblNKKO_23:;
Z252 = (SHORTCARD *)Z290;
W_2->U_1.V_3.Y7 = *Z252;
break;
case ZblNKKO_24:;
Z253 = (LONGINT *)Z290;
W_2->U_1.V_4.Y8 = *Z253;
break;
case ZblNKKO_25:;
Z254 = (LONGCARD *)Z290;
W_2->U_1.V_5.Y9 = *Z254;
break;
case ZblNKKO_26:;
Z255 = (REAL *)Z290;
W_2->U_1.V_6.Y10 = *Z255;
break;
case ZblNKKO_27:;
Z256 = (BOOLEAN *)Z290;
W_2->U_1.V_7.Y11 = *Z256;
break;
case ZblNKKO_28:;
Z257 = (CHAR *)Z290;
W_2->U_1.V_8.Y12 = *Z257;
break;
case ZblNKKO_29:;
Z258 = (SHORTCARD *)Z290;
W_2->U_1.V_9.Y13 = *Z258;
break;
case ZblNKKO_30:;
Z259 = (Zp1PEAFD_2 *)Z290;
W_2->U_1.V_10.Y14 = Zp1PEAFi_2(Z259);
break;
case ZblNKKO_31:;
Z260 = (Ztf1PEAFD_3 *)Z290;
W_2->U_1.V_11.Y15 = Zp1PEAFi_8(Z260);
break;
case ZblNKKO_32:;
Z261 = (Z176 *)Z290;
Zp1PEAFD_13((*Z261).A, 256L, &Z279);
W_2->Y5 = ZblNKKO_30;
W_2->U_1.V_12.Y16 = Zp1PEAFi_2(&Z279);
break;
case ZblNKKO_33:;
Z262 = (ZpmCQ_4 *)Z290;
W_2->U_1.V_13.Y17 = (ZpmCQ_4 *)ZDtgCFKU_1((LONGINT)sizeof (ZpmCQ_4));
ZpmCQ_5(W_2->U_1.V_13.Y17, ZpmCQ_16(Z262));
ZpmCQ_30(W_2->U_1.V_13.Y17, *Z262);
break;
case ZblNKKO_34:;
Z263 = (SHORTCARD *)Z290;
W_2->U_1.V_14.Y18 = *Z263;
break;
case ZblNKKO_35:;
Z264 = (SHORTCARD *)Z290;
W_2->U_1.V_15.Y19 = *Z264;
break;
case Z175:;
Z265 = (ZmtLFGGBG_0 *)Z290;
W_2->U_1.V_16.Y20 = *Z265;
break;
default:
break;
}
}
if (Z287 == ZblNKKO_14) {
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
(*ZblNKKO_37)();
}
}

static BOOLEAN Z282
# ifdef HAVE_ARGS
(INTEGER Z270, INTEGER Z291)
# else
(Z270, Z291)
INTEGER Z270, Z291;
# endif
{
INTEGER Z292;

Z292 = ZmtLFGGBG_2(Z213->A[Z270].Y0, Z213->A[Z291].Y0);
if (Z292 == -1) {
return TRUE;
}
if (Z292 == 1) {
return FALSE;
}
return Z213->A[Z270].Y2 < Z213->A[Z291].Y2;
}

static void Z283
# ifdef HAVE_ARGS
(INTEGER Z270, INTEGER Z291)
# else
(Z270, Z291)
INTEGER Z270, Z291;
# endif
{
Z177 Z280;

Z280 = Z213->A[Z270];
Z213->A[Z270] = Z213->A[Z291];
Z213->A[Z291] = Z280;
}

void ZblNKKO_41
# ifdef HAVE_ARGS
(BOOLEAN Z294)
# else
(Z294)
BOOLEAN Z294;
# endif
{
if (Z294) {
Z217 = Z284;
Z215 = 0;
Z219 = 0;
} else {
Z217 = Z273;
}
Z216 = Z294;
}

static void Z295
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

ZblNKKO_37 = Z295;
Z216 = FALSE;
Z218 = ZfM_2;
Z217 = Z273;
Z214 = 0;
Z215 = 0;
Z219 = 0;
ZblNKKO_38 = TRUE;
ZblNKKO_39 = TRUE;
ZblNKKO_40 = TRUE;
}
