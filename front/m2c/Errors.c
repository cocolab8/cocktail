#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Listing
#include "Listing.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_SysError
#include "SysError.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

struct Errors_1 ZblNKKO_51;
BITSET ZblNKKO_57;
struct Errors_2 ZblNKKO_58;

#define Z171	0
#define Z172	'\t'
#define Z173	-1
#define Z174	160
#define Z175	16
#define Z176	17
static BOOLEAN Z177;
static ZblNKKO_49 Z178;
static struct S_1 {
Zp1PEAFi_1 A[ZblNKKO_50 + 1];
} Z180;
static struct S_2 {
Zp1PEAFi_1 A[Z174 + 1];
} Z182;
static struct S_3 {
Zp1PEAFi_1 A[ZblNKKO_50 + 1];
} Z183;
static CARDINAL Z184;
static void Z194 ARGS ((CARDINAL Z186, CARDINAL Z187, CARDINAL Z195, CARDINAL Z196));
static void Z198 ARGS ((CARDINAL Z189, ADDRESS *Z190));
struct S_5 {
CHAR A[255 + 1];
};
static void Z197 ARGS ((CARDINAL Z189, ADDRESS Z190));
struct S_4 {
CHAR A[255 + 1];
};
static void Z244 ARGS ((ZfM_3 Z205, ZpmCQ_4 Z206));
static void Z208 ARGS ((Zp1PEAFD_2 Y1_73, CARDINAL *Z184, Zp1PEAFD_2 *Z246));
static void Z199 ARGS ((void));

void ZblNKKO_52
# ifdef HAVE_ARGS
(CARDINAL Z186, CARDINAL Z187, ZmtLFGGBG_0 Z168)
# else
(Z186, Z187, Z168)
CARDINAL Z186, Z187;
ZmtLFGGBG_0 Z168;
# endif
{
ZblNKKO_53(Z186, Z187, Z168, (LONGCARD)Z171, (ADDRESS)NIL);
}

void ZblNKKO_53
# ifdef HAVE_ARGS
(CARDINAL Z186, CARDINAL Z187, ZmtLFGGBG_0 Z168, CARDINAL Z189, ADDRESS Z190)
# else
(Z186, Z187, Z168, Z189, Z190)
CARDINAL Z186, Z187;
ZmtLFGGBG_0 Z168;
CARDINAL Z189;
ADDRESS Z190;
# endif
{
INC(ZblNKKO_51.A[Z187]);
if (IN(Z187, ZblNKKO_57)) {
Z177 = FALSE;
if (Z178 == ZblNKKO_59) {
Z194(Z186, Z187, (LONGCARD)Z168.Y0, (LONGCARD)Z168.Y1);
Z197(Z189, Z190);
ZfM_33((ZDz6VQCC_4)ZfM_2);
} else {
Z198(Z189, &Z190);
ZijFQGAF_4(Z186, Z187, (LONGCARD)Z168.Y0, (LONGCARD)Z168.Y1, Z189, Z190);
}
}
if (Z187 < 3) {
Z199();
}
}

void ZblNKKO_55
# ifdef HAVE_ARGS
(ZblNKKO_49 Z201)
# else
(Z201)
ZblNKKO_49 Z201;
# endif
{
Z178 = Z201;
switch (Z178) {
case ZblNKKO_61:;
ZijFQGAF_3 = ZijFQGAF_8;
break;
default:
ZijFQGAF_3 = ZijFQGAF_7;
break;
}
}

void ZblNKKO_54
 ARGS ((void))
{
CARDINAL Z184;
ZfM_3 Z205;
Zp1PEAFD_2 Z206;
Zp1PEAFD_2 Y2_73;

Z205 = ZfM_4(ZblNKKO_58.A, 256L);
if (Zp6VmlNKK_0(Z205)) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Fatal error: cannot open ", 25L);
ZfM_29((ZDz6VQCC_4)ZfM_2, ZblNKKO_58.A, 256L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
return;
}
for (;;) {
if (ZfM_19(Z205)) {
goto EXIT_1;
}
Zp1PEAFD_20(Z205, &Y2_73);
if (Zp1PEAFD_12(&Y2_73, 1) == '$') {
goto EXIT_1;
}
if (Zp1PEAFD_12(&Y2_73, 1) != '%') {
Z208(Y2_73, &Z184, &Z206);
if (Z184 > ZblNKKO_50) {
ZblNKKO_53((LONGCARD)Z175, (LONGCARD)ZblNKKO_42, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_35, ADR (Y2_73));
} else {
Z180.A[Z184] = Zp1PEAFi_2(&Z206);
}
}
} EXIT_1:;
for (;;) {
if (ZfM_19(Z205)) {
goto EXIT_2;
}
Zp1PEAFD_20(Z205, &Y2_73);
if (Zp1PEAFD_12(&Y2_73, 1) == '$') {
goto EXIT_2;
}
if (Zp1PEAFD_12(&Y2_73, 1) != '%') {
Z208(Y2_73, &Z184, &Z206);
if (Z184 > Z174) {
ZblNKKO_53((LONGCARD)Z176, (LONGCARD)ZblNKKO_42, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_35, ADR (Y2_73));
} else {
Z182.A[Z184] = Zp1PEAFi_2(&Z206);
}
}
} EXIT_2:;
for (;;) {
if (ZfM_19(Z205)) {
goto EXIT_3;
}
Zp1PEAFD_20(Z205, &Y2_73);
if (Zp1PEAFD_12(&Y2_73, 1) == '$') {
goto EXIT_3;
}
if (Zp1PEAFD_12(&Y2_73, 1) != '%') {
Z208(Y2_73, &Z184, &Z206);
if (Z184 > ZblNKKO_50) {
ZblNKKO_53((LONGCARD)Z175, (LONGCARD)ZblNKKO_42, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_35, ADR (Y2_73));
} else {
Z183.A[Z184] = Zp1PEAFi_2(&Z206);
}
}
} EXIT_3:;
ZfM_5(Z205);
}

void ZblNKKO_56
 ARGS ((void))
{
CARDINAL Z184;
Zp1PEAFi_1 Z212;
CARDINAL Z186, Z187, Z195, Z196, Z189;
ADDRESS Z190;

if (Z177) {
return;
}
while (ZijFQGAF_5()) {
ZijFQGAF_6(&Z186, &Z187, &Z195, &Z196, &Z189, &Z190);
Z194(Z186, Z187, Z195, Z196);
Z197(Z189, Z190);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
for (Z184 = 0; Z184 <= ZblNKKO_50; Z184 += 1) {
if (ZblNKKO_51.A[Z184] > 0) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"  ", 2L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZblNKKO_51.A[Z184], 1L);
ZfM_24((ZDz6VQCC_4)ZfM_2, ' ');
Z212 = Z183.A[Z184];
if (Z212 == Z173) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"in error class ", 15L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z184, 1L);
} else {
Zp1PEAFi_6((ZDz6VQCC_4)ZfM_2, Z212);
}
}
}
ZfM_33((ZDz6VQCC_4)ZfM_2);
}

static void Z194
# ifdef HAVE_ARGS
(CARDINAL Z186, CARDINAL Z187, CARDINAL Z195, CARDINAL Z196)
# else
(Z186, Z187, Z195, Z196)
CARDINAL Z186, Z187, Z195, Z196;
# endif
{
Zp1PEAFi_1 Z212;

if (Z178 != ZblNKKO_61 && Z195 != 0) {
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z195, 3L);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)", ", 2L);
}
if (Z196 != 0) {
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z196, 2L);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": ", 2L);
}
if (Z187 > ZblNKKO_50) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error class: ", 13L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z187, 1L);
} else {
Z212 = Z180.A[Z187];
if (Z212 == Z173) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error class: ", 13L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z187, 1L);
} else {
Zp1PEAFi_6((ZDz6VQCC_4)ZfM_2, Z212);
}
}
if (Z186 > Z174) {
if (Z186 >= ZblNKKO_47) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" system error code: ", 20L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)(Z186 - ZblNKKO_47), 1L);
} else {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" error code: ", 13L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z186, 1L);
}
} else {
Z212 = Z182.A[Z186];
if (Z212 == Z173) {
if (Z186 >= ZblNKKO_47) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" system error code: ", 20L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)(Z186 - ZblNKKO_47), 1L);
} else {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" error code: ", 13L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z186, 1L);
}
} else {
Zp1PEAFi_6((ZDz6VQCC_4)ZfM_2, Z212);
}
}
}

static void Z198
# ifdef HAVE_ARGS
(CARDINAL Z189, ADDRESS *Z190)
# else
(Z189, Z190)
CARDINAL Z189;
ADDRESS *Z190;
# endif
{
INTEGER *Z214, *Z215;
SHORTCARD *Z216, *Z217;
LONGINT *Z218, *Z219;
REAL *Z220, *Z221;
BOOLEAN *Z222, *Z223;
CHAR *Z224, *Z225;
Zp1PEAFD_2 *Z226, *Z227;
struct S_5 *Z228, *Z229;
ZpmCQ_4 *Z230, *Z231;
Zfb3DLQ_0 *Z232, *Z233;

if (Z189 == Z171) {
return;
}
switch (Z189) {
case ZblNKKO_29:;
Z214 = (LONGINT *)ZDtgCFKU_1((LONGINT)sizeof (INTEGER));
Z215 = (LONGINT *)(*Z190);
*Z214 = *Z215;
*Z190 = (ADDRESS)Z214;
break;
case ZblNKKO_30:;
Z216 = (SHORTCARD *)ZDtgCFKU_1((LONGINT)sizeof (SHORTCARD));
Z217 = (SHORTCARD *)(*Z190);
*Z216 = *Z217;
*Z190 = (ADDRESS)Z216;
break;
case ZblNKKO_31:;
Z218 = (LONGINT *)ZDtgCFKU_1((LONGINT)sizeof (LONGINT));
Z219 = (LONGINT *)(*Z190);
*Z218 = *Z219;
*Z190 = (ADDRESS)Z218;
break;
case ZblNKKO_32:;
Z220 = (REAL *)ZDtgCFKU_1((LONGINT)sizeof (REAL));
Z221 = (REAL *)(*Z190);
*Z220 = *Z221;
*Z190 = (ADDRESS)Z220;
break;
case ZblNKKO_33:;
Z222 = (BOOLEAN *)ZDtgCFKU_1((LONGINT)sizeof (BOOLEAN));
Z223 = (BOOLEAN *)(*Z190);
*Z222 = *Z223;
*Z190 = (ADDRESS)Z222;
break;
case ZblNKKO_34:;
Z224 = (CHAR *)ZDtgCFKU_1((LONGINT)sizeof (CHAR));
Z225 = (CHAR *)(*Z190);
*Z224 = *Z225;
*Z190 = (ADDRESS)Z224;
break;
case ZblNKKO_35:;
Z226 = (Zp1PEAFD_2 *)ZDtgCFKU_1((LONGINT)sizeof (Zp1PEAFD_2));
Z227 = (Zp1PEAFD_2 *)(*Z190);
Zp1PEAFD_3(Z226, Z227);
*Z190 = (ADDRESS)Z226;
break;
case ZblNKKO_36:;
Z228 = (struct S_5 *)ZDtgCFKU_1(256L);
Z229 = (struct S_5 *)(*Z190);
*Z228 = *Z229;
*Z190 = (ADDRESS)Z228;
break;
case ZblNKKO_38:;
Z232 = (SHORTCARD *)ZDtgCFKU_1((LONGINT)sizeof (Zfb3DLQ_0));
Z233 = (SHORTCARD *)(*Z190);
*Z232 = *Z233;
*Z190 = (ADDRESS)Z232;
break;
case ZblNKKO_39:;
Z230 = (ZpmCQ_4 *)ZDtgCFKU_1((LONGINT)sizeof (ZpmCQ_4));
Z231 = (ZpmCQ_4 *)(*Z190);
ZpmCQ_5(Z230, Z231->Y1);
ZpmCQ_30(Z230, *Z231);
*Z190 = (ADDRESS)Z230;
break;
default:
break;
}
}

static void Z197
# ifdef HAVE_ARGS
(CARDINAL Z189, ADDRESS Z190)
# else
(Z189, Z190)
CARDINAL Z189;
ADDRESS Z190;
# endif
{
INTEGER *Z215;
SHORTCARD *Z217;
LONGINT *Z219;
REAL *Z221;
BOOLEAN *Z223;
CHAR *Z225;
Zp1PEAFD_2 *Z227;
struct S_4 *Z229;
ZpmCQ_4 *Z231;
Zfb3DLQ_0 *Z233;

if (Z189 == Z171) {
return;
}
ZfM_24((ZDz6VQCC_4)ZfM_2, ' ');
switch (Z189) {
case ZblNKKO_29:;
Z215 = (LONGINT *)Z190;
ZfM_25((ZDz6VQCC_4)ZfM_2, *Z215, 1L);
break;
case ZblNKKO_30:;
Z217 = (SHORTCARD *)Z190;
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)(*Z217), 1L);
break;
case ZblNKKO_31:;
Z219 = (LONGINT *)Z190;
ZfM_31((ZDz6VQCC_4)ZfM_2, *Z219, 1L);
break;
case ZblNKKO_32:;
Z221 = (REAL *)Z190;
ZfM_26((ZDz6VQCC_4)ZfM_2, *Z221, 1L, 10L, 1L);
break;
case ZblNKKO_33:;
Z223 = (BOOLEAN *)Z190;
ZfM_27((ZDz6VQCC_4)ZfM_2, *Z223);
break;
case ZblNKKO_34:;
Z225 = (CHAR *)Z190;
ZfM_24((ZDz6VQCC_4)ZfM_2, *Z225);
break;
case ZblNKKO_35:;
Z227 = (Zp1PEAFD_2 *)Z190;
Zp1PEAFD_21((ZDz6VQCC_4)ZfM_2, Z227);
break;
case ZblNKKO_36:;
Z229 = (struct S_4 *)Z190;
ZfM_29((ZDz6VQCC_4)ZfM_2, (*Z229).A, 256L);
break;
case ZblNKKO_38:;
Z233 = (SHORTCARD *)Z190;
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_2, *Z233);
break;
case ZblNKKO_39:;
Z231 = (ZpmCQ_4 *)Z190;
Z244((ZDz6VQCC_4)ZfM_2, *Z231);
break;
default:
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Info Class: ", 12L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z189, 1L);
break;
}
}

static void Z244
# ifdef HAVE_ARGS
(ZfM_3 Z205, ZpmCQ_4 Z206)
# else
(Z205, Z206)
ZfM_3 Z205;
ZpmCQ_4 Z206;
# endif
{
CARDINAL Z184;
ZqxDADwjx_13 Z245;

{
LONGCARD B_1 = 0, B_2 = ZqxDADwjx_5;

if (B_1 <= B_2)
for (Z184 = B_1;; Z184 += 1) {
if (ZpmCQ_25(Z184, &Z206)) {
ZfM_29(Z205, (STRING)" ", 1L);
Zfb3DLQ_7(Z205, ZqxDADwjx_21((ZqxDADwjx_10)Z184, &Z245));
}
if (Z184 >= B_2) break;
}
}
}

static void Z208
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Y1_73, CARDINAL *Z184, Zp1PEAFD_2 *Z246)
# else
(Y1_73, Z184, Z246)
Zp1PEAFD_2 Y1_73;
CARDINAL *Z184;
Zp1PEAFD_2 *Z246;
# endif
{
CARDINAL Z247, Z248, Z249;
Zp1PEAFD_2 Z206;

Z248 = 1;
Z249 = 1;
Z247 = Zp1PEAFD_7(&Y1_73);
for (;;) {
if (Z249 > Z247) {
goto EXIT_4;
}
if (Zp1PEAFD_12(&Y1_73, (Zp1PEAFD_1)Z249) == Z172) {
goto EXIT_4;
}
INC(Z249);
} EXIT_4:;
DEC(Z249);
if (Z248 > Z249) {
*Z184 = 0;
} else {
Zp1PEAFD_11(&Y1_73, (Zp1PEAFD_1)Z248, (Zp1PEAFD_1)Z249, &Z206);
*Z184 = Zp1PEAFD_15(&Z206);
}
Z248 = Z249 + 1;
for (;;) {
if (Z248 > Z247) {
goto EXIT_5;
}
if (Zp1PEAFD_12(&Y1_73, (Zp1PEAFD_1)Z248) != Z172) {
goto EXIT_5;
}
INC(Z248);
} EXIT_5:;
Z249 = Z248;
for (;;) {
if (Z249 > Z247) {
goto EXIT_6;
}
if (Zp1PEAFD_12(&Y1_73, (Zp1PEAFD_1)Z249) == Z172) {
goto EXIT_6;
}
INC(Z249);
} EXIT_6:;
DEC(Z249);
if (Z248 > Z249) {
Zp1PEAFD_4(Z246);
} else {
Zp1PEAFD_11(&Y1_73, (Zp1PEAFD_1)Z248, (Zp1PEAFD_1)Z249, Z246);
}
}

static void Z199
 ARGS ((void))
{
ZblNKKO_56();
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
BEGIN_Listing ();
BEGIN_rMemory ();
BEGIN_Sets ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_SysError ();
BEGIN_rSystem ();
BEGIN_TokenTab ();
BEGIN_Position ();
BEGIN_Strings ();

Z177 = TRUE;
Z178 = ZblNKKO_60;
(void) strncpy ((char *)ZblNKKO_58.A, "ErrorTab", sizeof (ZblNKKO_58.A));
ZblNKKO_57 = SET_cRNG (0, ZblNKKO_50);
for (Z184 = 0; Z184 <= ZblNKKO_50; Z184 += 1) {
ZblNKKO_51.A[Z184] = 0;
}
for (Z184 = 0; Z184 <= ZblNKKO_50; Z184 += 1) {
Z180.A[Z184] = Z173;
}
for (Z184 = 0; Z184 <= Z174; Z184 += 1) {
Z182.A[Z184] = Z173;
}
for (Z184 = 0; Z184 <= ZblNKKO_50; Z184 += 1) {
Z183.A[Z184] = Z173;
}
}
