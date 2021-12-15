#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
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

#ifndef DEFINITION_Pointers
#include "Pointers.h"
#endif

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

#ifndef DEFINITION_WriteTok
#include "WriteTok.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Actions
#include "Actions.h"
#endif

Zfb3DLQ_0 ZeYAGBGK_1;
Zfb3DLQ_0 ZeYAGBGK_2;

#define Z153	'\n'
typedef struct S_1 {
ZijFQQ_3 Y0;
ZqxDADwjx_7 Y1;
ZijFQQ_3 Y2;
ZqxDADwjx_7 Y3;
} Z154;
static ZeYAGBGK_0 Z159;
static struct S_2 {
ZqxDADwjx_7 A[ZeYAGBGK_15 + 1];
} Z161;
static struct S_3 {
Z154 A[ZeYAGBGK_15 + 1];
} Z162;
static struct S_4 {
ZijFQQ_3 A[ZeYAGBGK_15 + 1];
} Z163;
static struct S_5 {
ZqxDADwjx_7 A[ZeYAGBGK_15 + 1];
} Z164;
static ZqxDADwjx_7 Z165;
struct S_1_WriteSemanticAction;
static void Z189 ARGS ((struct S_1_WriteSemanticAction *link));
struct S_1_WriteSemanticAction {
ZfM_3 *Z177;
CARDINAL *Z183;
Zp1PEAFD_1 *Z185;
};

void ZeYAGBGK_3
# ifdef HAVE_ARGS
(ZeYAGBGK_0 Z167, ZqxDADwjx_7 Z168, ZijFQQ_3 Z169, ZqxDADwjx_7 Z170)
# else
(Z167, Z168, Z169, Z170)
ZeYAGBGK_0 Z167;
ZqxDADwjx_7 Z168;
ZijFQQ_3 Z169;
ZqxDADwjx_7 Z170;
# endif
{
Z161.A[Z167] = Z168;
Z163.A[Z167] = Z169;
Z164.A[Z167] = Z170;
}

void ZeYAGBGK_4
# ifdef HAVE_ARGS
(ZeYAGBGK_0 Z167, ZqxDADwjx_7 *Z168, ZijFQQ_3 *Z169, ZqxDADwjx_7 *Z170)
# else
(Z167, Z168, Z169, Z170)
ZeYAGBGK_0 Z167;
ZqxDADwjx_7 *Z168;
ZijFQQ_3 *Z169;
ZqxDADwjx_7 *Z170;
# endif
{
*Z168 = Z161.A[Z167];
*Z169 = Z163.A[Z167];
*Z170 = Z164.A[Z167];
}

void ZeYAGBGK_5
# ifdef HAVE_ARGS
(ZeYAGBGK_0 Z167, ZijFQQ_3 Z173, ZqxDADwjx_7 Z174, ZijFQQ_3 Z169, ZqxDADwjx_7 Z170)
# else
(Z167, Z173, Z174, Z169, Z170)
ZeYAGBGK_0 Z167;
ZijFQQ_3 Z173;
ZqxDADwjx_7 Z174;
ZijFQQ_3 Z169;
ZqxDADwjx_7 Z170;
# endif
{
{
register Z154 *W_1 = &Z162.A[Z167];

W_1->Y0 = Z173;
W_1->Y1 = Z174;
W_1->Y2 = Z169;
W_1->Y3 = Z170;
}
}

void ZeYAGBGK_6
# ifdef HAVE_ARGS
(ZeYAGBGK_0 Z167, ZijFQQ_3 *Z173, ZqxDADwjx_7 *Z174, ZijFQQ_3 *Z169, ZqxDADwjx_7 *Z170)
# else
(Z167, Z173, Z174, Z169, Z170)
ZeYAGBGK_0 Z167;
ZijFQQ_3 *Z173;
ZqxDADwjx_7 *Z174;
ZijFQQ_3 *Z169;
ZqxDADwjx_7 *Z170;
# endif
{
{
register Z154 *W_2 = &Z162.A[Z167];

*Z173 = W_2->Y0;
*Z174 = W_2->Y1;
*Z169 = W_2->Y2;
*Z170 = W_2->Y3;
}
}

void ZeYAGBGK_7
# ifdef HAVE_ARGS
(ZeYAGBGK_0 Z167, ZfM_3 Z177, BOOLEAN Z178)
# else
(Z167, Z177, Z178)
ZeYAGBGK_0 Z167;
ZfM_3 Z177;
BOOLEAN Z178;
# endif
{
if (Z162.A[Z167].Y1.Y0 != 0) {
switch (Zt3EGCnxD_1) {
case Zt3EGCnxD_4:;
ZfM_29(Z177, (STRING)"(* line ", 8L);
ZfM_25(Z177, (LONGINT)Z162.A[Z167].Y1.Y0, 0L);
ZfM_29(Z177, (STRING)" \"", 2L);
ZfM_29(Z177, Zt3EGCnxD_2.A, 256L);
ZfM_29(Z177, (STRING)"\" *)", 4L);
ZfM_33(Z177);
break;
case Zt3EGCnxD_5:;
if (Z178) {
ZfM_29(Z177, (STRING)"# line ", 7L);
ZfM_25(Z177, (LONGINT)Z162.A[Z167].Y1.Y0, 0L);
ZfM_29(Z177, (STRING)" \"", 2L);
ZfM_29(Z177, Zt3EGCnxD_2.A, 256L);
ZfM_24(Z177, '"');
ZfM_33(Z177);
} else {
ZfM_29(Z177, (STRING)"/* line ", 8L);
ZfM_25(Z177, (LONGINT)Z162.A[Z167].Y1.Y0, 0L);
ZfM_29(Z177, (STRING)" \"", 2L);
ZfM_29(Z177, Zt3EGCnxD_2.A, 256L);
ZfM_29(Z177, (STRING)"\" */", 4L);
ZfM_33(Z177);
}
break;
case Zt3EGCnxD_6:;
ZfM_29(Z177, (STRING)"-- line ", 8L);
ZfM_25(Z177, (LONGINT)Z162.A[Z167].Y1.Y0, 0L);
ZfM_29(Z177, (STRING)" \"", 2L);
ZfM_29(Z177, Zt3EGCnxD_2.A, 256L);
ZfM_24(Z177, '"');
ZfM_33(Z177);
break;
}
}
ZeYAGBGK_8(Z177, Z162.A[Z167].Y0, 0L);
}

static void Z189
# ifdef HAVE_ARGS
(struct S_1_WriteSemanticAction *link)
# else
(link)
struct S_1_WriteSemanticAction *link;
# endif
{
{
Zp1PEAFD_1 B_1 = 1, B_2 = *link->Z183;

if (B_1 <= B_2)
for (*link->Z185 = B_1;; *link->Z185 += 1) {
ZfM_24(*link->Z177, ' ');
ZfM_24(*link->Z177, ' ');
if (*link->Z185 >= B_2) break;
}
}
}

void ZeYAGBGK_8
# ifdef HAVE_ARGS
(ZfM_3 Z177, ZijFQQ_3 Z173, CARDINAL Z183)
# else
(Z177, Z173, Z183)
ZfM_3 Z177;
ZijFQQ_3 Z173;
CARDINAL Z183;
# endif
{
CHAR Z169;
Zp1PEAFD_2 Z184;
Zp1PEAFD_1 Z185;
Zp1PEAFD_1 Z186, Z187;
CHAR Z188;
struct S_1_WriteSemanticAction frame;

frame.Z177 = &Z177;
frame.Z183 = &Z183;
frame.Z185 = &Z185;
Z186 = 2;
while (!ZijFQQ_12(Z173)) {
Zp1PEAFi_3((Zp1PEAFi_1)PTRINT(ZijFQQ_8(Z173)), &Z184);
ZijFQQ_9(&Z173);
Z187 = Zp1PEAFD_7(&Z184);
if (ZijFQQ_12(Z173)) {
DEC(Z187);
}
Z189(&frame);
Z185 = Z186;
while (Z185 <= Z187) {
Z169 = Zp1PEAFD_12(&Z184, Z185);
INC(Z185);
if (Z169 == '\\') {
ZfM_24(Z177, Zp1PEAFD_12(&Z184, Z185));
INC(Z185);
} else if (Z169 == '"' || Z169 == '\'') {
Z188 = Z169;
ZfM_24(Z177, Z169);
do {
Z169 = Zp1PEAFD_12(&Z184, Z185);
INC(Z185);
ZfM_24(Z177, Z169);
if (Zt3EGCnxD_1 == Zt3EGCnxD_5 && Z169 == '\\') {
ZfM_24(Z177, Zp1PEAFD_12(&Z184, Z185));
INC(Z185);
}
} while (!(Z169 == Z188));
} else {
ZfM_24(Z177, Z169);
}
}
Z186 = 1;
}
ZfM_33(Z177);
}

void ZeYAGBGK_9
# ifdef HAVE_ARGS
(ZfM_3 Z191, ZijFQQ_3 Z192)
# else
(Z191, Z192)
ZfM_3 Z191;
ZijFQQ_3 Z192;
# endif
{
while (!ZijFQQ_12(Z192)) {
Zp1PEAFi_6(Z191, (Zp1PEAFi_1)PTRINT(ZijFQQ_8(Z192)));
ZijFQQ_9(&Z192);
}
}

void ZeYAGBGK_10
 ARGS ((void))
{
ZijFQQ_3 Z194;
ZqxDADwjx_7 Z195;
ZijFQQ_3 Z196;
ZqxDADwjx_7 Z197;
Zp1PEAFD_2 Z184, Z198;

ZijFQQ_5(&Z194);
Z195.Y0 = 0;
Z195.Y1 = 0;
ZijFQQ_5(&Z196);
Z197.Y0 = 0;
Z197.Y1 = 0;
Zp1PEAFD_13((STRING)"{", 1L, &Z184);
Zp1PEAFD_6(&Z184, Z153);
ZijFQQ_7(&Z194, INTPTR((LONGCARD)Zp1PEAFi_2(&Z184)));
switch (Zt3EGCnxD_1) {
case Zt3EGCnxD_4:;
Zp1PEAFD_13((STRING)"TYPE tParsAttribute = RECORD Scan: ", 35L, &Z184);
if (ZeYAGBGK_1 != Zfb3DLQ_1) {
Zfb3DLQ_3(ZeYAGBGK_1, &Z198);
} else {
Zp1PEAFD_13((STRING)"Scanner", 7L, &Z198);
}
Zp1PEAFD_5(&Z184, &Z198);
Zp1PEAFD_13((STRING)".tScanAttribute; END;", 21L, &Z198);
Zp1PEAFD_5(&Z184, &Z198);
Zp1PEAFD_6(&Z184, Z153);
ZijFQQ_7(&Z194, INTPTR((LONGCARD)Zp1PEAFi_2(&Z184)));
break;
case Zt3EGCnxD_5:;
Zp1PEAFD_13((STRING)"typedef struct { ", 17L, &Z184);
if (ZeYAGBGK_1 != Zfb3DLQ_1) {
Zfb3DLQ_3(ZeYAGBGK_1, &Z198);
Zp1PEAFD_5(&Z184, &Z198);
Zp1PEAFD_6(&Z184, '_');
}
Zp1PEAFD_13((STRING)"tScanAttribute Scan; } tParsAttribute;", 38L, &Z198);
Zp1PEAFD_5(&Z184, &Z198);
Zp1PEAFD_6(&Z184, Z153);
ZijFQQ_7(&Z194, INTPTR((LONGCARD)Zp1PEAFi_2(&Z184)));
break;
case Zt3EGCnxD_6:;
break;
}
Zp1PEAFD_13((STRING)"}", 1L, &Z184);
ZijFQQ_7(&Z194, INTPTR((LONGCARD)Zp1PEAFi_2(&Z184)));
ZeYAGBGK_5(ZeYAGBGK_12, Z194, Z195, Z196, Z197);
}

void BEGIN_Actions ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_TokenTab ();
BEGIN_StringM ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_IO ();
BEGIN_Lists ();
BEGIN_IO ();
BEGIN_Lists ();
BEGIN_rMemory ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Pointers ();
BEGIN_TokenTab ();
BEGIN_WriteTok ();
BEGIN_Lists ();
BEGIN_Idents ();

Z165.Y0 = 0;
Z165.Y1 = 0;
for (Z159 = ZeYAGBGK_11; Z159 <= ZeYAGBGK_15; Z159 += 1) {
Z161.A[Z159] = Z165;
ZijFQQ_5(&Z163.A[Z159]);
Z164.A[Z159] = Z165;
ZijFQQ_5(&Z162.A[Z159].Y0);
Z162.A[Z159].Y1 = Z165;
ZijFQQ_5(&Z162.A[Z159].Y2);
Z162.A[Z159].Y3 = Z165;
}
}
