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
#define Z176	59
#define Z177	20
#define Z178	21
#define Z179	22
#define Z180	23
#define Z181	24
#define Z182	25
#define Z183	26
#define Z184	27
#define Z185	28
#define Z186	29
#define Z187	30
#define Z188	31
#define Z189	32
#define Z190	33
#define Z191	34
#define Z192	35
#define Z193	36
#define Z194	37
#define Z195	38
#define Z196	39
#define Z197	40
#define Z198	41
#define Z199	42
#define Z200	43
#define Z201	44
#define Z202	45
#define Z203	46
#define Z204	47
#define Z205	48
#define Z206	49
#define Z207	50
#define Z208	51
#define Z209	52
#define Z210	53
#define Z211	54
#define Z212	60
#define Z213	61
#define Z214	62
#define Z215	63
#define Z216	64
#define Z217	65
#define Z218	66
#define Z219	67
#define Z220	68
#define Z221	69
#define Z222	70
#define Z223	71
#define Z224	72
#define Z225	73
#define Z226	74
typedef struct S_1 {
CHAR A[255 + 1];
} Z227;
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
} Z228;
static struct S_3 {
Z228 A[1000000 + 1];
} *Z264;
static LONGINT Z265;
static LONGINT Z266;
static BOOLEAN Z267;
static void (*Z268) ARGS ((BOOLEAN, CARDINAL, CARDINAL, ZmtLFGGBG_0, CARDINAL, ADDRESS));
static ZfM_3 Z269;
static SHORTCARD Z270;
static Zp1PEAFD_2 Z271;
static void Z278 ARGS ((ZmtLFGGBG_0 Z136, CARDINAL Z232));
static void Z287 ARGS ((CARDINAL Z231));
static void Z301 ARGS ((CARDINAL Z233, ADDRESS Z274));
static void Z318 ARGS ((ZfM_3 Z319, Zp1PEAFD_2 Z251));
static void Z324 ARGS ((BOOLEAN Z229, CARDINAL Z231, CARDINAL Z232, ZmtLFGGBG_0 Z136, CARDINAL Z233, ADDRESS Z274));
static void Z335 ARGS ((BOOLEAN Z336, CARDINAL Z337, CARDINAL Z338, ZmtLFGGBG_0 Z339, CARDINAL Z340, ADDRESS Z341));
static BOOLEAN Z333 ARGS ((INTEGER Z321, INTEGER Z342));
static void Z334 ARGS ((INTEGER Z321, INTEGER Z342));
static void Z346 ARGS ((void));

void ZblNKKO_42
# ifdef HAVE_ARGS
(CARDINAL Z231, CARDINAL Z232, ZmtLFGGBG_0 Z136)
# else
(Z231, Z232, Z136)
CARDINAL Z231, Z232;
ZmtLFGGBG_0 Z136;
# endif
{
(*Z268)(TRUE, Z231, Z232, Z136, (LONGCARD)ZblNKKO_21, (ADDRESS)NIL);
}

void ZblNKKO_43
# ifdef HAVE_ARGS
(CARDINAL Z231, CARDINAL Z232, ZmtLFGGBG_0 Z136, CARDINAL Z233, ADDRESS Z274)
# else
(Z231, Z232, Z136, Z233, Z274)
CARDINAL Z231, Z232;
ZmtLFGGBG_0 Z136;
CARDINAL Z233;
ADDRESS Z274;
# endif
{
(*Z268)(TRUE, Z231, Z232, Z136, Z233, Z274);
}

void ZblNKKO_44
# ifdef HAVE_ARGS
(CHAR Z276[], LONGCARD O_1, CARDINAL Z232, ZmtLFGGBG_0 Z136)
# else
(Z276, O_1, Z232, Z136)
CHAR Z276[];
LONGCARD O_1;
CARDINAL Z232;
ZmtLFGGBG_0 Z136;
# endif
{
Zp1PEAFD_2 Z251;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z276, O_1, CHAR)
Zp1PEAFD_13(Z276, O_1, &Z251);
(*Z268)(FALSE, (LONGCARD)Zfb3DLQ_2(&Z251), Z232, Z136, (LONGCARD)ZblNKKO_21, (ADDRESS)NIL);
FREE_OPEN_ARRAYS
}

void ZblNKKO_45
# ifdef HAVE_ARGS
(CHAR Z276[], LONGCARD O_2, CARDINAL Z232, ZmtLFGGBG_0 Z136, CARDINAL Z233, ADDRESS Z274)
# else
(Z276, O_2, Z232, Z136, Z233, Z274)
CHAR Z276[];
LONGCARD O_2;
CARDINAL Z232;
ZmtLFGGBG_0 Z136;
CARDINAL Z233;
ADDRESS Z274;
# endif
{
Zp1PEAFD_2 Z251;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z276, O_2, CHAR)
Zp1PEAFD_13(Z276, O_2, &Z251);
(*Z268)(FALSE, (LONGCARD)Zfb3DLQ_2(&Z251), Z232, Z136, Z233, Z274);
FREE_OPEN_ARRAYS
}

static void Z278
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z136, CARDINAL Z232)
# else
(Z136, Z232)
ZmtLFGGBG_0 Z136;
CARDINAL Z232;
# endif
{
if (ZmtLFGGBG_2(Z136, ZmtLFGGBG_1) == 0) {
ZibDRNS_2(Z269, 10L);
} else {
ZmtLFGGBG_3(Z269, Z136);
ZfM_29(Z269, (STRING)": ", 2L);
}
switch (Z232) {
case ZblNKKO_13:;
ZfM_29(Z269, (STRING)"            ", 12L);
break;
case ZblNKKO_14:;
ZfM_29(Z269, (STRING)"Fatal       ", 12L);
break;
case ZblNKKO_15:;
ZfM_29(Z269, (STRING)"Restriction ", 12L);
break;
case ZblNKKO_16:;
ZfM_29(Z269, (STRING)"Error       ", 12L);
break;
case ZblNKKO_17:;
ZfM_29(Z269, (STRING)"Warning     ", 12L);
break;
case ZblNKKO_18:;
ZfM_29(Z269, (STRING)"Repair      ", 12L);
break;
case ZblNKKO_19:;
ZfM_29(Z269, (STRING)"Note        ", 12L);
break;
case ZblNKKO_20:;
ZfM_29(Z269, (STRING)"Information ", 12L);
break;
default:
ZfM_29(Z269, (STRING)"Error class: ", 13L);
ZfM_25(Z269, (LONGINT)Z232, 0L);
break;
}
}

static void Z287
# ifdef HAVE_ARGS
(CARDINAL Z231)
# else
(Z231)
CARDINAL Z231;
# endif
{
switch (Z231) {
case ZblNKKO_0:;
break;
case ZblNKKO_1:;
ZfM_29(Z269, (STRING)"syntax error", 12L);
break;
case ZblNKKO_2:;
ZfM_29(Z269, (STRING)"expected tokens", 15L);
break;
case ZblNKKO_3:;
ZfM_29(Z269, (STRING)"restart point", 13L);
break;
case ZblNKKO_4:;
ZfM_29(Z269, (STRING)"token inserted ", 15L);
break;
case ZblNKKO_5:;
ZfM_29(Z269, (STRING)"parse table mismatch", 20L);
break;
case ZblNKKO_6:;
ZfM_29(Z269, (STRING)"cannot open parse table", 23L);
break;
case ZblNKKO_7:;
ZfM_29(Z269, (STRING)"cannot read parse table", 23L);
break;
case ZblNKKO_8:;
ZfM_29(Z269, (STRING)"too many messages", 17L);
break;
case ZblNKKO_9:;
ZfM_29(Z269, (STRING)"token found    ", 15L);
break;
case ZblNKKO_10:;
ZfM_29(Z269, (STRING)"found/expected ", 15L);
break;
case ZblNKKO_11:;
ZfM_29(Z269, (STRING)"Tcl/Tk ", 7L);
break;
case ZblNKKO_12:;
ZfM_29(Z269, (STRING)"ConfigureTree: unknown parameter", 32L);
break;
case Z176:;
ZfM_29(Z269, (STRING)"costs have to be > 0", 20L);
break;
case Z177:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"assignment with incorrect left hand side", 40L);
break;
case Z178:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"copy rule with incorrect left hand side", 39L);
break;
case Z179:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"block with incorrect left hand side", 35L);
break;
case Z180:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"check without statement", 23L);
break;
case Z181:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"inherited use of synthesized attribute", 38L);
break;
case Z182:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"attribute multiply computed", 27L);
break;
case Z183:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"attribute not declared", 22L);
break;
case Z184:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"selector not declared", 21L);
break;
case Z185:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"synthesized use of inherited attribute", 38L);
break;
case Z186:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"copy rule insertions inherited", 30L);
break;
case Z187:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"copy rule insertions synthesized", 32L);
break;
case Z188:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"copy rule insertions threaded", 29L);
break;
case Z189:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"module not declared", 19L);
break;
case Z190:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"terminal code multiply used", 27L);
break;
case Z191:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"node type not declared", 22L);
break;
case Z192:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"only one reverse in node type", 29L);
break;
case Z193:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"node type multiply declared", 27L);
break;
case Z194:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"variant selector multiply declared", 34L);
break;
case Z195:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"selector multiply declared", 26L);
break;
case Z196:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"child name has to be different from class name", 46L);
break;
case Z197:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"child name has to be different from super class name", 52L);
break;
case Z198:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"attribute name has to be different from class name", 50L);
break;
case Z199:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"attribute name has to be different from super class name", 56L);
break;
case Z200:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"precedence not declared", 23L);
break;
case Z201:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"precedence multiply declared", 28L);
break;
case Z202:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"abstract type required", 22L);
break;
case Z203:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"child required", 14L);
break;
case Z204:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"attribute never set", 19L);
break;
case Z205:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"attribute never used", 20L);
break;
case Z206:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"input attribute is set", 22L);
break;
case Z207:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"attribute synthesized as well as inherited", 42L);
break;
case Z208:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"node type not used", 18L);
break;
case Z209:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"inherited attributes only at base classes", 41L);
break;
case Z210:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"attribute computation missing", 29L);
break;
case Z211:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"cycle in local dependencies DP", 30L);
break;
case Z212:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"grammar is in normal form", 25L);
break;
case Z213:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"grammar is not in normal form", 29L);
break;
case Z214:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"switched on option L", 20L);
break;
case Z215:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"grammar is SAG", 14L);
break;
case Z216:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"grammar is LAG", 14L);
break;
case Z217:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"grammar is OAG", 14L);
break;
case Z218:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"grammar is DNC", 14L);
break;
case Z219:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"grammar is SNC", 14L);
break;
case Z220:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"grammar is WAG", 14L);
break;
case Z221:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"grammar is not WAG", 18L);
break;
case Z222:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"cycle in SNC", 12L);
break;
case Z223:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"cycle in DNC", 12L);
break;
case Z224:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"cycle in OAG", 12L);
break;
case Z225:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"internal error comp OAG", 23L);
break;
case Z226:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"cycle in WAG", 12L);
break;
default:
ZfM_29(Z269, (STRING)" error code: ", 13L);
ZfM_25(Z269, (LONGINT)Z231, 0L);
break;
}
}

static void Z301
# ifdef HAVE_ARGS
(CARDINAL Z233, ADDRESS Z274)
# else
(Z233, Z274)
CARDINAL Z233;
ADDRESS Z274;
# endif
{
INTEGER *Z302;
SHORTCARD *Z303;
LONGINT *Z304;
CARDINAL *Z305;
REAL *Z306;
BOOLEAN *Z307;
CHAR *Z308;
Ztf1PEAFD_1 *Z309;
Zp1PEAFD_2 *Z310;
Ztf1PEAFD_4 *Z311;
Z227 *Z312;
ZpmCQ_4 *Z313;
Zfb3DLQ_0 *Z314;
Zfb3DLQ_8 *Z315;
ZmtLFGGBG_0 *Z316;
Zp1PEAFD_2 Z317;

if (Z233 == ZblNKKO_21) {
return;
}
ZfM_29(Z269, (STRING)": ", 2L);
switch (Z233) {
case ZblNKKO_22:;
Z302 = (LONGINT *)Z274;
ZfM_25(Z269, *Z302, 0L);
break;
case ZblNKKO_23:;
Z303 = (SHORTCARD *)Z274;
ZfM_25(Z269, (LONGINT)(*Z303), 0L);
break;
case ZblNKKO_24:;
Z304 = (LONGINT *)Z274;
ZfM_25(Z269, *Z304, 0L);
break;
case ZblNKKO_25:;
Z305 = (LONGCARD *)Z274;
ZfM_32(Z269, *Z305, 0L);
break;
case ZblNKKO_26:;
Z306 = (REAL *)Z274;
ZfM_26(Z269, *Z306, 1L, 10L, 1L);
break;
case ZblNKKO_27:;
Z307 = (BOOLEAN *)Z274;
ZfM_27(Z269, *Z307);
break;
case ZblNKKO_28:;
Z308 = (CHAR *)Z274;
ZfM_24(Z269, *Z308);
break;
case ZblNKKO_29:;
Z309 = (SHORTCARD *)Z274;
if (*Z309 < 256) {
ZfM_24(Z269, CHR(*Z309));
} else {
ZfM_29(Z269, (STRING)"\\u", 2L);
ZfM_28(Z269, (LONGCARD)(*Z309), 4L, 16L);
}
break;
case ZblNKKO_30:;
Z310 = (Zp1PEAFD_2 *)Z274;
Z318(Z269, *Z310);
break;
case ZblNKKO_31:;
Z311 = (Ztf1PEAFD_3 *)Z274;
Ztf1PEAFD_23(Z269, Z311);
break;
case ZblNKKO_32:;
Z312 = (Z227 *)Z274;
Zp1PEAFD_13((*Z312).A, 256L, &Z317);
Z318(Z269, Z317);
break;
case ZblNKKO_33:;
Z313 = (ZpmCQ_4 *)Z274;
ZpmCQ_35(Z269, *Z313);
break;
case ZblNKKO_34:;
Z314 = (SHORTCARD *)Z274;
Zfb3DLQ_7(Z269, *Z314);
break;
case ZblNKKO_35:;
Z315 = (SHORTCARD *)Z274;
Zfb3DLQ_13(Z269, *Z315);
break;
case ZblNKKO_36:;
Z316 = (ZmtLFGGBG_0 *)Z274;
ZmtLFGGBG_3(Z269, *Z316);
break;
default:
break;
}
}

static void Z318
# ifdef HAVE_ARGS
(ZfM_3 Z319, Zp1PEAFD_2 Z251)
# else
(Z319, Z251)
ZfM_3 Z319;
Zp1PEAFD_2 Z251;
# endif
{
INTEGER Z320, Z321;
CHAR Z322;

if (ZblNKKO_40) {
Z320 = Zp1PEAFD_7(&Z251);
if (Z320 <= 32) {
Zp1PEAFD_21(Z319, &Z251);
} else {
for (Z321 = 1; Z321 <= 32; Z321 += 1) {
ZfM_24(Z319, Zp1PEAFD_12(&Z251, (Zp1PEAFD_1)Z321));
}
Z321 = 32;
for (;;) {
INC(Z321);
if (Z321 > Z320) {
goto EXIT_1;
}
Z322 = Zp1PEAFD_12(&Z251, (Zp1PEAFD_1)Z321);
if (Z322 == ' ') {
goto EXIT_1;
}
ZfM_24(Z319, Z322);
} EXIT_1:;
if (Z321 < Z320) {
ZfM_29(Z319, (STRING)" ...", 4L);
}
}
} else {
Zp1PEAFD_21(Z319, &Z251);
}
}

static void Z324
# ifdef HAVE_ARGS
(BOOLEAN Z229, CARDINAL Z231, CARDINAL Z232, ZmtLFGGBG_0 Z136, CARDINAL Z233, ADDRESS Z274)
# else
(Z229, Z231, Z232, Z136, Z233, Z274)
BOOLEAN Z229;
CARDINAL Z231, Z232;
ZmtLFGGBG_0 Z136;
CARDINAL Z233;
ADDRESS Z274;
# endif
{
Zp1PEAFD_2 *Z310;

if (Z229) {
if (ZblNKKO_38) {
switch (Z231) {
case ZblNKKO_9:;
Z310 = (Zp1PEAFD_2 *)Z274;
Zp1PEAFD_3(&Z271, Z310);
Zp1PEAFD_6(&Z271, '/');
return;
break;
case ZblNKKO_1:;
case ZblNKKO_3:;
case ZblNKKO_4:;
return;
break;
case ZblNKKO_2:;
Z231 = ZblNKKO_10;
Z232 = ZblNKKO_16;
Z310 = (Zp1PEAFD_2 *)Z274;
Zp1PEAFD_5(&Z271, Z310);
Z274 = ADR (Z271);
break;
default:
break;
}
}
if (ZblNKKO_39 && Z136.Y1 != 0) {
if (Z136.Y1 == Z270) {
return;
} else {
Z270 = Z136.Y1;
}
}
}
Z278(Z136, Z232);
if (Z229) {
Z287(Z231);
} else {
Zfb3DLQ_7(Z269, (SHORTCARD)Z231);
}
Z301(Z233, Z274);
ZfM_33(Z269);
ZfM_22(Z269);
if (Z232 == ZblNKKO_14 && !Z267) {
(*ZblNKKO_37)();
}
}

void ZblNKKO_46
# ifdef HAVE_ARGS
(ZfM_3 Z319)
# else
(Z319)
ZfM_3 Z319;
# endif
{
LONGINT Z321;
ADDRESS Z274;
Zp1PEAFD_2 Z330;
Ztf1PEAFD_3 Z331;
Z228 *Z332;

ZpwKP_2(1L, Z266, (ZpwKP_0)Z333, (ZpwKP_1)Z334);
Z269 = Z319;
{
LONGINT B_1 = 1, B_2 = Z266;

if (B_1 <= B_2)
for (Z321 = B_1;; Z321 += 1) {
{
register Z228 *W_1 = &Z264->A[Z321];

switch (W_1->Y5) {
case ZblNKKO_22:;
Z274 = ADR (W_1->U_1.V_2.Y6);
break;
case ZblNKKO_23:;
Z274 = ADR (W_1->U_1.V_3.Y7);
break;
case ZblNKKO_24:;
Z274 = ADR (W_1->U_1.V_4.Y8);
break;
case ZblNKKO_25:;
Z274 = ADR (W_1->U_1.V_5.Y9);
break;
case ZblNKKO_26:;
Z274 = ADR (W_1->U_1.V_6.Y10);
break;
case ZblNKKO_27:;
Z274 = ADR (W_1->U_1.V_7.Y11);
break;
case ZblNKKO_28:;
Z274 = ADR (W_1->U_1.V_8.Y12);
break;
case ZblNKKO_29:;
Z274 = ADR (W_1->U_1.V_9.Y13);
break;
case ZblNKKO_30:;
Zp1PEAFi_3(W_1->U_1.V_10.Y14, &Z330);
Z274 = ADR (Z330);
break;
case ZblNKKO_31:;
Zp1PEAFi_9(W_1->U_1.V_11.Y15, &Z331);
Z274 = ADR (Z331);
break;
case ZblNKKO_33:;
Z274 = (ADDRESS)W_1->U_1.V_13.Y17;
break;
case ZblNKKO_34:;
Z274 = ADR (W_1->U_1.V_14.Y18);
break;
case ZblNKKO_35:;
Z274 = ADR (W_1->U_1.V_15.Y19);
break;
case Z175:;
Z274 = ADR (W_1->U_1.V_16.Y20);
break;
default:
Z274 = (ADDRESS)NIL;
break;
}
if (Z321 == 1 || W_1->Y1 != Z332->Y1 || W_1->Y3 != Z332->Y3 || W_1->Y4 != Z332->Y4 || ZmtLFGGBG_2(W_1->Y0, Z332->Y0) != 0 || W_1->Y5 != Z332->Y5) {
Z324(W_1->Y1, (LONGCARD)W_1->Y3, (LONGCARD)W_1->Y4, W_1->Y0, (LONGCARD)W_1->Y5, Z274);
Z332 = (Z228 *)ADR (Z264->A[Z321]);
}
}
if (Z321 >= B_2) break;
}
}
Z269 = ZfM_2;
}

static void Z335
# ifdef HAVE_ARGS
(BOOLEAN Z336, CARDINAL Z337, CARDINAL Z338, ZmtLFGGBG_0 Z339, CARDINAL Z340, ADDRESS Z341)
# else
(Z336, Z337, Z338, Z339, Z340, Z341)
BOOLEAN Z336;
CARDINAL Z337, Z338;
ZmtLFGGBG_0 Z339;
CARDINAL Z340;
ADDRESS Z341;
# endif
{
INTEGER *Z302;
SHORTCARD *Z303;
LONGINT *Z304;
CARDINAL *Z305;
REAL *Z306;
BOOLEAN *Z307;
CHAR *Z308;
Ztf1PEAFD_1 *Z309;
Zp1PEAFD_2 *Z310;
Ztf1PEAFD_4 *Z311;
Z227 *Z312;
ZpmCQ_4 *Z313;
Zfb3DLQ_0 *Z314;
Zfb3DLQ_8 *Z315;
ZmtLFGGBG_0 *Z316;
Zp1PEAFD_2 Z330;

INC(Z266);
if (Z266 >= Z265) {
if (Z265 == 0) {
Z265 = Z174;
ZarQdhNDD_0((ADDRESS *)&Z264, &Z265, (LONGINT)sizeof (Z228));
} else {
ZarQdhNDD_2((ADDRESS *)&Z264, &Z265, (LONGINT)sizeof (Z228));
}
}
{
register Z228 *W_2 = &Z264->A[Z266];

W_2->Y0 = Z339;
W_2->Y1 = Z336;
W_2->Y2 = Z266;
W_2->Y3 = Z337;
W_2->Y4 = Z338;
W_2->Y5 = Z340;
switch (W_2->Y5) {
case ZblNKKO_22:;
Z302 = (LONGINT *)Z341;
W_2->U_1.V_2.Y6 = *Z302;
break;
case ZblNKKO_23:;
Z303 = (SHORTCARD *)Z341;
W_2->U_1.V_3.Y7 = *Z303;
break;
case ZblNKKO_24:;
Z304 = (LONGINT *)Z341;
W_2->U_1.V_4.Y8 = *Z304;
break;
case ZblNKKO_25:;
Z305 = (LONGCARD *)Z341;
W_2->U_1.V_5.Y9 = *Z305;
break;
case ZblNKKO_26:;
Z306 = (REAL *)Z341;
W_2->U_1.V_6.Y10 = *Z306;
break;
case ZblNKKO_27:;
Z307 = (BOOLEAN *)Z341;
W_2->U_1.V_7.Y11 = *Z307;
break;
case ZblNKKO_28:;
Z308 = (CHAR *)Z341;
W_2->U_1.V_8.Y12 = *Z308;
break;
case ZblNKKO_29:;
Z309 = (SHORTCARD *)Z341;
W_2->U_1.V_9.Y13 = *Z309;
break;
case ZblNKKO_30:;
Z310 = (Zp1PEAFD_2 *)Z341;
W_2->U_1.V_10.Y14 = Zp1PEAFi_2(Z310);
break;
case ZblNKKO_31:;
Z311 = (Ztf1PEAFD_3 *)Z341;
W_2->U_1.V_11.Y15 = Zp1PEAFi_8(Z311);
break;
case ZblNKKO_32:;
Z312 = (Z227 *)Z341;
Zp1PEAFD_13((*Z312).A, 256L, &Z330);
W_2->Y5 = ZblNKKO_30;
W_2->U_1.V_12.Y16 = Zp1PEAFi_2(&Z330);
break;
case ZblNKKO_33:;
Z313 = (ZpmCQ_4 *)Z341;
W_2->U_1.V_13.Y17 = (ZpmCQ_4 *)ZDtgCFKU_1((LONGINT)sizeof (ZpmCQ_4));
ZpmCQ_5(W_2->U_1.V_13.Y17, ZpmCQ_16(Z313));
ZpmCQ_30(W_2->U_1.V_13.Y17, *Z313);
break;
case ZblNKKO_34:;
Z314 = (SHORTCARD *)Z341;
W_2->U_1.V_14.Y18 = *Z314;
break;
case ZblNKKO_35:;
Z315 = (SHORTCARD *)Z341;
W_2->U_1.V_15.Y19 = *Z315;
break;
case Z175:;
Z316 = (ZmtLFGGBG_0 *)Z341;
W_2->U_1.V_16.Y20 = *Z316;
break;
default:
break;
}
}
if (Z338 == ZblNKKO_14) {
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
(*ZblNKKO_37)();
}
}

static BOOLEAN Z333
# ifdef HAVE_ARGS
(INTEGER Z321, INTEGER Z342)
# else
(Z321, Z342)
INTEGER Z321, Z342;
# endif
{
INTEGER Z343;

Z343 = ZmtLFGGBG_2(Z264->A[Z321].Y0, Z264->A[Z342].Y0);
if (Z343 == -1) {
return TRUE;
}
if (Z343 == 1) {
return FALSE;
}
return Z264->A[Z321].Y2 < Z264->A[Z342].Y2;
}

static void Z334
# ifdef HAVE_ARGS
(INTEGER Z321, INTEGER Z342)
# else
(Z321, Z342)
INTEGER Z321, Z342;
# endif
{
Z228 Z331;

Z331 = Z264->A[Z321];
Z264->A[Z321] = Z264->A[Z342];
Z264->A[Z342] = Z331;
}

void ZblNKKO_41
# ifdef HAVE_ARGS
(BOOLEAN Z345)
# else
(Z345)
BOOLEAN Z345;
# endif
{
if (Z345) {
Z268 = Z335;
Z266 = 0;
Z270 = 0;
} else {
Z268 = Z324;
}
Z267 = Z345;
}

static void Z346
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

ZblNKKO_37 = Z346;
Z267 = FALSE;
Z269 = ZfM_2;
Z268 = Z324;
Z265 = 0;
Z266 = 0;
Z270 = 0;
ZblNKKO_38 = TRUE;
ZblNKKO_39 = FALSE;
ZblNKKO_40 = TRUE;
}
