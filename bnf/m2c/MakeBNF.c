#include "SYSTEM_.h"

#ifndef DEFINITION_Actions
#include "Actions.h"
#endif

#ifndef DEFINITION_ArgCheck
#include "ArgCheck.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Oper
#include "Oper.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Pointers
#include "Pointers.h"
#endif

#ifndef DEFINITION_Tokens
#include "Tokens.h"
#endif

#ifndef DEFINITION_WriteTok
#include "WriteTok.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Rules
#include "Rules.h"
#endif

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_MakeBNF
#include "MakeBNF.h"
#endif


#define Z210	10
#define Z211	65535
#define Z212	15
typedef struct S_1 {
ZqxDADwjx_9 Y0;
Zo1KBB_6 Y1;
} Z213;
typedef LONGCARD Z216;
static struct S_2 {
Z213 A[Z211 + 1];
} *Z217;
static Z216 Z218;
static LONGINT Z219;
static SHORTCARD Z220;
static Zp1PEAFD_2 Z221;
static SHORTCARD Z222;
static struct S_3 {
Zfb3DLQ_0 A[Z212 - 1 + 1];
} Z223;
static void Z227 ARGS ((ZfM_3 Z225));
static void Z228 ARGS ((ZfM_3 Z225, ZeYAGBGK_0 Z240));
static void Z236 ARGS ((ZfM_3 Z225));
static void Z235 ARGS ((ZfM_3 Z225));
static void Z237 ARGS ((ZfM_3 Z225));
static void Z264 ARGS ((ZfM_3 Z225, ZqxDADwjx_9 Z214, Zo1KBB_6 Z215, BOOLEAN Z260, Zfb3DLQ_0 Z262));
static void Z273 ARGS ((ZfM_3 Z225, Zo1KBB_6 Z215, BOOLEAN Z274));
static void Z263 ARGS ((void));
static BOOLEAN Z265 ARGS ((void));
static void Z284 ARGS ((ZqxDADwjx_9 Z214, Zo1KBB_6 Z215));
static void Z266 ARGS ((ZqxDADwjx_9 *Z214, Zo1KBB_6 *Z215));
static void Z283 ARGS ((ZqxDADwjx_9 *Z296, Zfb3DLQ_0 *Z252));
static void Z272 ARGS ((ZfM_3 Z225, ZqxDADwjx_10 Z249));
static void Z251 ARGS ((ZfM_3 Z225, ZqxDADwjx_10 Z249));
static void Z291 ARGS ((ZfM_3 Z225));
static void Z256 ARGS ((ZfM_3 Z225, Zfb3DLQ_0 Z252));
static void Z257 ARGS ((ZfM_3 Z225, Zfb3DLQ_0 Z252));
static void Z245 ARGS ((ZfM_3 Z225, ZijFQQ_3 Z238, ZqxDADwjx_7 Z242, ZqxDADwjx_7 Z243));
static void Z239 ARGS ((ZfM_3 Z225, ZijFQQ_3 Z304, INTEGER Y1_73));
static void Z250 ARGS ((ZfM_3 Z225));
static void Z234 ARGS ((void));
struct S_1_ReserveSymbols;
static void Z226 ARGS ((void));
static void Z310 ARGS ((struct S_1_ReserveSymbols *link, CHAR Z252[], LONGCARD O_1));
struct S_1_ReserveSymbols {
CARDINAL *Z299;
};
static BOOLEAN Z303 ARGS ((Zfb3DLQ_0 Z252));

void Zjc6AcEI_0
# ifdef HAVE_ARGS
(ZfM_3 Z225)
# else
(Z225)
ZfM_3 Z225;
# endif
{
Z226();
Z227(Z225);
if (ZeYAGBGK_1 != Zfb3DLQ_1) {
ZfM_29(Z225, (STRING)"SCANNER ", 8L);
Zfb3DLQ_7(Z225, ZeYAGBGK_1);
ZfM_33(Z225);
}
if (ZeYAGBGK_2 != Zfb3DLQ_1) {
ZfM_29(Z225, (STRING)"PARSER ", 7L);
Zfb3DLQ_7(Z225, ZeYAGBGK_2);
ZfM_33(Z225);
}
Z228(Z225, ZeYAGBGK_11);
Z228(Z225, ZeYAGBGK_12);
Z228(Z225, ZeYAGBGK_13);
Z228(Z225, ZeYAGBGK_14);
Z228(Z225, ZeYAGBGK_15);
Z234();
Z235(Z225);
Z236(Z225);
Z237(Z225);
}

static void Z227
# ifdef HAVE_ARGS
(ZfM_3 Z225)
# else
(Z225)
ZfM_3 Z225;
# endif
{
ZijFQQ_3 Z238;
ZqxDADwjx_7 Z157;

ZqxDADK_4(&Z238, &Z157);
if (!ZijFQQ_12(Z238)) {
Z239(Z225, Z238, 0L);
ZfM_33(Z225);
ZfM_33(Z225);
}
}

static void Z228
# ifdef HAVE_ARGS
(ZfM_3 Z225, ZeYAGBGK_0 Z240)
# else
(Z225, Z240)
ZfM_3 Z225;
ZeYAGBGK_0 Z240;
# endif
{
ZijFQQ_3 Z238;
ZijFQQ_3 Z241;
ZqxDADwjx_7 Z242, Z243;

ZeYAGBGK_4(Z240, &Z242, &Z238, &Z243);
if (Z242.Y0 == 0 && Z242.Y1 == 0) {
return;
}
switch (Z240) {
case ZeYAGBGK_11:;
ZfM_29(Z225, (STRING)"EXPORT", 6L);
break;
case ZeYAGBGK_12:;
ZfM_29(Z225, (STRING)"GLOBAL", 6L);
break;
case ZeYAGBGK_13:;
ZfM_29(Z225, (STRING)"LOCAL", 5L);
break;
case ZeYAGBGK_14:;
ZfM_29(Z225, (STRING)"BEGIN", 5L);
break;
case ZeYAGBGK_15:;
ZfM_29(Z225, (STRING)"CLOSE", 5L);
break;
}
Z245(Z225, Z238, Z242, Z243);
ZfM_33(Z225);
if (ZehCfg728_2) {
return;
}
ZeYAGBGK_6(Z240, &Z241, &Z242, &Z238, &Z243);
if (!ZijFQQ_12(Z241)) {
Z239(Z225, Z241, (LONGINT)Z242.Y0);
Z245(Z225, Z238, Z242, Z243);
ZfM_33(Z225);
}
ZfM_33(Z225);
}

static void Z236
# ifdef HAVE_ARGS
(ZfM_3 Z225)
# else
(Z225)
ZfM_3 Z225;
# endif
{
ZqxDADwjx_7 Z242, Z243, Z246, Z247;
ZijFQQ_3 Z238;
ZltFA_0 Z248;
ZqxDADwjx_10 Z249;

if (ZltFA_6(&Z242, &Z238, &Z243)) {
ZfM_29(Z225, (STRING)"OPER", 4L);
Z245(Z225, Z238, Z242, Z243);
ZfM_33(Z225);
ZltFA_5();
while (ZltFA_7(&Z248, &Z242, &Z238, &Z243)) {
if (Z248 == ZltFA_10) {
ZfM_29(Z225, (STRING)"  RIGHT", 7L);
} else if (Z248 == ZltFA_9) {
ZfM_29(Z225, (STRING)"  LEFT", 6L);
} else {
ZfM_29(Z225, (STRING)"  NONE", 6L);
}
Z247 = Z242;
while (ZltFA_8(&Z249, &Z246)) {
if (Z247.Y0 != Z246.Y0) {
ZfM_33(Z225);
ZfM_29(Z225, (STRING)"    ", 4L);
} else {
Z250(Z225);
}
Z251(Z225, Z249);
Z247 = Z246;
}
Z245(Z225, Z238, Z243, Z247);
ZfM_33(Z225);
}
ZfM_33(Z225);
}
}

static void Z235
# ifdef HAVE_ARGS
(ZfM_3 Z225)
# else
(Z225)
ZfM_3 Z225;
# endif
{
Zfb3DLQ_0 Z252;
ZijFQQ_3 Z238;
ZqxDADwjx_7 Z242, Z243, Z246, Z247;
ZqxDADwjx_13 Z253;
BOOLEAN Z254;
ZqxDADwjx_10 Z255;

ZfM_29(Z225, (STRING)"TOKEN", 5L);
ZqxDADK_5(&Z242, &Z238, &Z243);
Z245(Z225, Z238, Z242, Z243);
ZfM_33(Z225);
while (ZqxDADK_6(&Z252, &Z242, &Z254, &Z243, &Z246, &Z238, &Z247)) {
if (Z254) {
Z255 = ZqxDADwjx_20(Z252, &Z253);
Z256(Z225, Z252);
ZfM_29(Z225, (STRING)"= ", 2L);
ZfM_25(Z225, (LONGINT)Z255, 3L);
} else {
Z257(Z225, Z252);
}
Z245(Z225, Z238, Z242, Z247);
ZfM_33(Z225);
}
ZfM_33(Z225);
}

static void Z237
# ifdef HAVE_ARGS
(ZfM_3 Z225)
# else
(Z225)
ZfM_3 Z225;
# endif
{
ZqxDADwjx_7 Z242, Z243, Z246, Z247, Z258, Z259;
ZijFQQ_3 Z238;
BOOLEAN Z260;
ZqxDADwjx_11 Z261;
Zfb3DLQ_0 Z262;
ZqxDADwjx_9 Z214;
Zo1KBB_6 Z215;
ZqxDADwjx_13 Z253;

if (!ZpmCQ_26(ZmfDOBA_0)) {
ZfM_29(Z225, (STRING)"START", 5L);
while (!ZpmCQ_26(ZmfDOBA_0)) {
ZfM_29(Z225, (STRING)" ", 1L);
Zfb3DLQ_7(Z225, (SHORTCARD)ZpmCQ_20(&ZmfDOBA_0));
}
ZfM_33(Z225);
ZfM_33(Z225);
}
Zo1KBB_31(&Z242, &Z238, &Z243);
ZfM_29(Z225, (STRING)"RULE", 4L);
Z245(Z225, Z238, Z242, Z243);
ZfM_33(Z225);
Zo1KBB_19();
Z263();
while (Zo1KBB_29(&Z214, &Z242, &Z243, &Z215, &Z238, &Z246, &Z247, &Z260, &Z258, &Z261, &Z259)) {
Z220 = 0;
Zfb3DLQ_3(ZqxDADwjx_21(Z214, &Z253), &Z221);
if (Z260) {
Z262 = ZqxDADwjx_21(Z261, &Z253);
} else {
Z262 = 0;
}
ZfM_33(Z225);
Z264(Z225, Z214, Z215, Z260, Z262);
while (!Z265()) {
Z266(&Z214, &Z215);
ZfM_33(Z225);
Z264(Z225, Z214, Z215, FALSE, 0);
}
Z245(Z225, Z238, Z242, Z259);
ZfM_33(Z225);
}
}

static void Z264
# ifdef HAVE_ARGS
(ZfM_3 Z225, ZqxDADwjx_9 Z214, Zo1KBB_6 Z215, BOOLEAN Z260, Zfb3DLQ_0 Z262)
# else
(Z225, Z214, Z215, Z260, Z262)
ZfM_3 Z225;
ZqxDADwjx_9 Z214;
Zo1KBB_6 Z215;
BOOLEAN Z260;
Zfb3DLQ_0 Z262;
# endif
{
Zo1KBB_6 Z267, Z268;
BOOLEAN Z269;
Zfb3DLQ_0 Z270;
ZqxDADwjx_7 Z242, Z243, Z246;

while (Zo1KBB_20(Z215) == Zo1KBB_38) {
Zo1KBB_26(Z215, &Z242, &Z267, &Z268, &Z269, &Z243, &Z270, &Z246);
Z264(Z225, Z214, Z267, Z269, Z270);
ZfM_33(Z225);
Z215 = Z268;
}
Z272(Z225, Z214);
ZfM_29(Z225, (STRING)": ", 2L);
Z273(Z225, Z215, TRUE);
if (Z260) {
ZfM_29(Z225, (STRING)"  PREC ", 7L);
Z257(Z225, Z262);
}
ZfM_29(Z225, (STRING)".", 1L);
}

static void Z273
# ifdef HAVE_ARGS
(ZfM_3 Z225, Zo1KBB_6 Z215, BOOLEAN Z274)
# else
(Z225, Z215, Z274)
ZfM_3 Z225;
Zo1KBB_6 Z215;
BOOLEAN Z274;
# endif
{
ZqxDADwjx_7 Z242, Z243;
ZqxDADwjx_10 Z249;
ZijFQQ_3 Z275;
ZqxDADwjx_9 Z276, Z277;
Zfb3DLQ_0 Z278, Z279;
Zo1KBB_6 Z280, Z267, Z268;
ZijFQQ_3 Z281;

switch (Zo1KBB_20(Z215)) {
case Zo1KBB_32:;
Zo1KBB_23(Z215, &Z242, &Z280);
Z283(&Z276, &Z278);
Z283(&Z277, &Z279);
Z257(Z225, Z278);
Z250(Z225);
Z284(Z277, Z280);
Z284(Z276, Zo1KBB_13(Zo1KBB_36, ZmtLFGGBG_1, Zo1KBB_9(Z278, ZmtLFGGBG_1), Zo1KBB_9(Z279, ZmtLFGGBG_1)));
Z284(Z276, Zo1KBB_9(Z279, ZmtLFGGBG_1));
break;
case Zo1KBB_33:;
Zo1KBB_23(Z215, &Z242, &Z280);
Z283(&Z276, &Z278);
Z257(Z225, Z278);
Z250(Z225);
Z284(Z276, Zo1KBB_13(Zo1KBB_36, ZmtLFGGBG_1, Zo1KBB_9(Z278, ZmtLFGGBG_1), Z280));
Z284(Z276, Zo1KBB_8);
break;
case Zo1KBB_34:;
Zo1KBB_24(Z215, &Z242, &Z243, &Z280);
Z283(&Z276, &Z278);
Z257(Z225, Z278);
Z250(Z225);
Z284(Z276, Z280);
Z284(Z276, Zo1KBB_8);
break;
case Zo1KBB_35:;
Zo1KBB_24(Z215, &Z242, &Z243, &Z280);
Z283(&Z276, &Z278);
Z257(Z225, Z278);
Z250(Z225);
Z284(Z276, Z280);
break;
case Zo1KBB_36:;
Zo1KBB_25(Z215, &Z242, &Z267, &Z268);
Z273(Z225, Z267, FALSE);
Z273(Z225, Z268, Z274);
break;
case Zo1KBB_37:;
Zo1KBB_25(Z215, &Z242, &Z267, &Z268);
Z283(&Z276, &Z278);
Z283(&Z277, &Z279);
Z257(Z225, Z278);
Z250(Z225);
Z257(Z225, Z279);
Z250(Z225);
Z284(Z277, Zo1KBB_13(Zo1KBB_36, ZmtLFGGBG_1, Zo1KBB_9(Z279, ZmtLFGGBG_1), Zo1KBB_13(Zo1KBB_36, ZmtLFGGBG_1, Z268, Zo1KBB_9(Z278, ZmtLFGGBG_1))));
Z284(Z276, Z267);
Z284(Z277, Zo1KBB_8);
break;
case Zo1KBB_38:;
case Zo1KBB_39:;
break;
case Zo1KBB_40:;
if (Z274) {
Zo1KBB_22(Z215, &Z275, &Z242);
if (!ZijFQQ_12(Z275) && !ZehCfg728_2) {
Z281 = Z275;
ZijFQQ_9(&Z281);
if (!ZijFQQ_12(Z281)) {
ZfM_33(Z225);
Z239(Z225, Z275, (LONGINT)Z242.Y0);
ZfM_33(Z225);
Z291(Z225);
} else {
Z239(Z225, Z275, (LONGINT)Z242.Y0);
Z250(Z225);
}
}
} else {
Z283(&Z276, &Z278);
Z257(Z225, Z278);
Z250(Z225);
Z284(Z276, Z215);
}
break;
case Zo1KBB_41:;
case Zo1KBB_42:;
Zo1KBB_21(Z215, &Z249, &Z242);
Z251(Z225, Z249);
Z250(Z225);
break;
case Zo1KBB_43:;
break;
}
}

static void Z263
 ARGS ((void))
{
Z219 = Z210;
ZarQdhNDD_0((ADDRESS *)&Z217, &Z219, (LONGINT)sizeof (Z213));
Z218 = 0;
}

static BOOLEAN Z265
 ARGS ((void))
{
return Z218 == 0;
}

static void Z284
# ifdef HAVE_ARGS
(ZqxDADwjx_9 Z214, Zo1KBB_6 Z215)
# else
(Z214, Z215)
ZqxDADwjx_9 Z214;
Zo1KBB_6 Z215;
# endif
{
Z216 Z295;

INC(Z218);
Z295 = Z219;
if (Z218 >= Z295) {
ZarQdhNDD_2((ADDRESS *)&Z217, &Z219, (LONGINT)sizeof (Z213));
}
Z217->A[Z218].Y0 = Z214;
Z217->A[Z218].Y1 = Z215;
}

static void Z266
# ifdef HAVE_ARGS
(ZqxDADwjx_9 *Z214, Zo1KBB_6 *Z215)
# else
(Z214, Z215)
ZqxDADwjx_9 *Z214;
Zo1KBB_6 *Z215;
# endif
{
*Z214 = Z217->A[Z218].Y0;
*Z215 = Z217->A[Z218].Y1;
DEC(Z218);
}

static void Z283
# ifdef HAVE_ARGS
(ZqxDADwjx_9 *Z296, Zfb3DLQ_0 *Z252)
# else
(Z296, Z252)
ZqxDADwjx_9 *Z296;
Zfb3DLQ_0 *Z252;
# endif
{
Zp1PEAFD_2 Z297;
CARDINAL Z298, Z299, Z300;
ZqxDADwjx_10 Z301;
CHAR Z302;

Z298 = ZqxDADwjx_6;
do {
INC(Z220);
Zp1PEAFD_3(&Z297, &Z221);
Zp1PEAFD_6(&Z297, '_');
Z300 = 1;
while (Z300 <= Z220) {
Z300 = Z300 * 10;
}
Z299 = Z220;
while (Z300 > 1) {
Z300 = Z300 / 10;
Z302 = CHR(ORD('0') + Z299 / Z300);
Z299 = Z299 % Z300;
Zp1PEAFD_6(&Z297, Z302);
}
*Z252 = Zfb3DLQ_2(&Z297);
Z301 = ZqxDADwjx_17(*Z252, ZmtLFGGBG_1);
} while (!(Z298 < ZqxDADwjx_6));
*Z296 = Z301;
}

static void Z272
# ifdef HAVE_ARGS
(ZfM_3 Z225, ZqxDADwjx_10 Z249)
# else
(Z225, Z249)
ZfM_3 Z225;
ZqxDADwjx_10 Z249;
# endif
{
Zfb3DLQ_0 Z252;
ZqxDADwjx_13 Z253;

Z252 = ZqxDADwjx_21(Z249, &Z253);
Z256(Z225, Z252);
}

static void Z251
# ifdef HAVE_ARGS
(ZfM_3 Z225, ZqxDADwjx_10 Z249)
# else
(Z225, Z249)
ZfM_3 Z225;
ZqxDADwjx_10 Z249;
# endif
{
Zfb3DLQ_0 Z252;
ZqxDADwjx_13 Z253;

Z252 = ZqxDADwjx_21(Z249, &Z253);
Z257(Z225, Z252);
}

static void Z291
# ifdef HAVE_ARGS
(ZfM_3 Z225)
# else
(Z225)
ZfM_3 Z225;
# endif
{
SHORTCARD Z299;

{
SHORTCARD B_1 = 1, B_2 = Z222;

if (B_1 <= B_2)
for (Z299 = B_1;; Z299 += 1) {
Z250(Z225);
if (Z299 >= B_2) break;
}
}
}

static void Z256
# ifdef HAVE_ARGS
(ZfM_3 Z225, Zfb3DLQ_0 Z252)
# else
(Z225, Z252)
ZfM_3 Z225;
Zfb3DLQ_0 Z252;
# endif
{
Zp1PEAFD_2 Z297;
SHORTCARD Z299, Z300;

Zfb3DLQ_3(Z252, &Z297);
Z300 = Zp1PEAFD_7(&Z297);
if (Z303(Z252)) {
ZfM_29(Z225, (STRING)"\\", 1L);
Z300 = Z300 + 1;
}
Zp1PEAFD_21(Z225, &Z297);
{
SHORTCARD B_3 = Z300, B_4 = Z222;

if (B_3 <= B_4)
for (Z299 = B_3;; Z299 += 1) {
Z250(Z225);
if (Z299 >= B_4) break;
}
}
}

static void Z257
# ifdef HAVE_ARGS
(ZfM_3 Z225, Zfb3DLQ_0 Z252)
# else
(Z225, Z252)
ZfM_3 Z225;
Zfb3DLQ_0 Z252;
# endif
{
Zp1PEAFD_2 Z297;

if (Z303(Z252)) {
ZfM_29(Z225, (STRING)"\\", 1L);
}
Zfb3DLQ_3(Z252, &Z297);
Zp1PEAFD_21(Z225, &Z297);
}

static void Z245
# ifdef HAVE_ARGS
(ZfM_3 Z225, ZijFQQ_3 Z238, ZqxDADwjx_7 Z242, ZqxDADwjx_7 Z243)
# else
(Z225, Z238, Z242, Z243)
ZfM_3 Z225;
ZijFQQ_3 Z238;
ZqxDADwjx_7 Z242, Z243;
# endif
{
if (!ZijFQQ_12(Z238)) {
if (Z243.Y0 != Z242.Y0) {
ZfM_33(Z225);
} else {
Z250(Z225);
Z250(Z225);
}
Z239(Z225, Z238, 0L);
}
}

static void Z239
# ifdef HAVE_ARGS
(ZfM_3 Z225, ZijFQQ_3 Z304, INTEGER Y1_73)
# else
(Z225, Z304, Y1_73)
ZfM_3 Z225;
ZijFQQ_3 Z304;
INTEGER Y1_73;
# endif
{
Zp1PEAFD_2 Z305;
CARDINAL Z306;
CHAR Z302;

if (!ZijFQQ_12(Z304)) {
Zp1PEAFi_3((Zp1PEAFi_1)PTRINT(ZijFQQ_8(Z304)), &Z305);
ZijFQQ_9(&Z304);
Z302 = Zp1PEAFD_12(&Z305, 1);
ZfM_24(Z225, Z302);
if (Y1_73 != 0 && Z302 == '{') {
switch (Zt3EGCnxD_1) {
case Zt3EGCnxD_4:;
ZfM_29(Z225, (STRING)"(* line ", 8L);
ZfM_25(Z225, Y1_73, 1L);
ZfM_29(Z225, (STRING)" ", 1L);
ZfM_29(Z225, ZehCfg728_3.A, 256L);
ZfM_29(Z225, (STRING)" *)", 3L);
ZfM_33(Z225);
break;
case Zt3EGCnxD_5:;
if (ZehCfg728_0) {
ZfM_29(Z225, (STRING)"# line ", 7L);
ZfM_25(Z225, Y1_73, 1L);
ZfM_29(Z225, (STRING)" \"", 2L);
ZfM_29(Z225, ZehCfg728_4.A, 256L);
ZfM_29(Z225, (STRING)"\"", 1L);
ZfM_33(Z225);
} else {
ZfM_29(Z225, (STRING)"/* line ", 8L);
ZfM_25(Z225, Y1_73, 1L);
ZfM_29(Z225, (STRING)" \"", 2L);
ZfM_29(Z225, ZehCfg728_3.A, 256L);
ZfM_29(Z225, (STRING)"\" */", 4L);
ZfM_33(Z225);
}
break;
case Zt3EGCnxD_6:;
ZfM_29(Z225, (STRING)"-- line ", 8L);
ZfM_25(Z225, Y1_73, 1L);
ZfM_29(Z225, (STRING)" \"", 2L);
ZfM_29(Z225, ZehCfg728_3.A, 256L);
ZfM_29(Z225, (STRING)"\"", 1L);
ZfM_33(Z225);
break;
}
}
{
LONGCARD B_5 = 2, B_6 = Zp1PEAFD_7(&Z305);

if (B_5 <= B_6)
for (Z306 = B_5;; Z306 += 1) {
ZfM_24(Z225, Zp1PEAFD_12(&Z305, (Zp1PEAFD_1)Z306));
if (Z306 >= B_6) break;
}
}
while (!ZijFQQ_12(Z304)) {
Zp1PEAFi_6(Z225, (Zp1PEAFi_1)PTRINT(ZijFQQ_8(Z304)));
ZijFQQ_9(&Z304);
}
}
}

static void Z250
# ifdef HAVE_ARGS
(ZfM_3 Z225)
# else
(Z225)
ZfM_3 Z225;
# endif
{
ZfM_24(Z225, ' ');
}

static void Z234
 ARGS ((void))
{
Zfb3DLQ_0 Z252;
Zp1PEAFD_2 Z297;
ZqxDADwjx_10 Z249;
ZqxDADwjx_13 Z253;

Z222 = 0;
{
ZqxDADwjx_10 B_7 = 1, B_8 = ZqxDADwjx_5;

if (B_7 <= B_8)
for (Z249 = B_7;; Z249 += 1) {
if (ZqxDADwjx_19(Z249) == ZqxDADwjx_33) {
Z252 = ZqxDADwjx_21(Z249, &Z253);
Zfb3DLQ_3(Z252, &Z297);
if (Zp1PEAFD_7(&Z297) > Z222) {
Z222 = Zp1PEAFD_7(&Z297);
}
}
if (Z249 >= B_8) break;
}
}
{
ZqxDADwjx_10 B_9 = ZqxDADwjx_2, B_10 = ZqxDADwjx_6;

if (B_9 <= B_10)
for (Z249 = B_9;; Z249 += 1) {
if (ZqxDADwjx_19(Z249) == ZqxDADwjx_34) {
Z252 = ZqxDADwjx_21(Z249, &Z253);
Zfb3DLQ_3(Z252, &Z297);
if (Zp1PEAFD_7(&Z297) > Z222) {
Z222 = Zp1PEAFD_7(&Z297);
}
}
if (Z249 >= B_10) break;
}
}
INC1(Z222, 3);
}

static void Z310
# ifdef HAVE_ARGS
(struct S_1_ReserveSymbols *link, CHAR Z252[], LONGCARD O_1)
# else
(link, Z252, O_1)
struct S_1_ReserveSymbols *link;
CHAR Z252[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z305;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z252, O_1, CHAR)
Zp1PEAFD_13(Z252, O_1, &Z305);
INC(*link->Z299);
Z223.A[*link->Z299 - 1] = Zfb3DLQ_2(&Z305);
FREE_OPEN_ARRAYS
}

static void Z226
 ARGS ((void))
{
CARDINAL Z299;
struct S_1_ReserveSymbols frame;

frame.Z299 = &Z299;
Z299 = 0;
Z310(&frame, (STRING)"EXPORT", 6L);
Z310(&frame, (STRING)"GLOBAL", 6L);
Z310(&frame, (STRING)"LOCAL", 5L);
Z310(&frame, (STRING)"BEGIN", 5L);
Z310(&frame, (STRING)"CLOSE", 5L);
Z310(&frame, (STRING)"TOKEN", 5L);
Z310(&frame, (STRING)"OPER", 4L);
Z310(&frame, (STRING)"NONE", 4L);
Z310(&frame, (STRING)"LEFT", 4L);
Z310(&frame, (STRING)"RIGHT", 5L);
Z310(&frame, (STRING)"RULE", 4L);
Z310(&frame, (STRING)"PREC", 4L);
Z310(&frame, (STRING)"SCANNER", 7L);
Z310(&frame, (STRING)"PARSER", 6L);
Z310(&frame, (STRING)"START", 5L);
}

static BOOLEAN Z303
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z252)
# else
(Z252)
Zfb3DLQ_0 Z252;
# endif
{
CARDINAL Z299;

for (Z299 = 1; Z299 <= Z212; Z299 += 1) {
if (Z252 == Z223.A[Z299 - 1]) {
return TRUE;
}
}
return FALSE;
}

void BEGIN_MakeBNF ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Actions ();
BEGIN_ArgCheck ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Oper ();
BEGIN_StringM ();
BEGIN_Strings ();
BEGIN_Lists ();
BEGIN_Position ();
BEGIN_Idents ();
BEGIN_Pointers ();
BEGIN_Tokens ();
BEGIN_WriteTok ();
BEGIN_Parser ();
BEGIN_Sets ();
BEGIN_Rules ();
BEGIN_TokenTab ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Sets ();

Z220 = 0;
Zt3EGCnxD_1 = Zt3EGCnxD_4;
}
