#include "SYSTEM_.h"

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Rules
#include "Rules.h"
#endif

Zo1KBB_6 Zo1KBB_8;

#define Z147	41
#define Z148	42
#define Z149	32
typedef struct S_1 *_6;
typedef struct S_1 {
Zo1KBB_0 Y0;
union {
struct {
Zo1KBB_6 Y1;
} V_1;
struct {
Zo1KBB_6 Y2, Y3;
} V_2;
struct {
ZijFQQ_3 Y4;
} V_3;
struct {
ZqxDADwjx_10 Y5;
} V_4;
} U_1;
ZqxDADwjx_7 Y6, Y7;
ADDRESS Y8;
BOOLEAN Y9;
ZqxDADwjx_7 Y10;
Zfb3DLQ_0 Y11;
ZqxDADwjx_7 Y12;
} Z151;
typedef struct S_2 *_7;
typedef struct S_2 {
ZqxDADwjx_9 Y0;
ZqxDADwjx_7 Y1;
ZqxDADwjx_7 Y2;
Zo1KBB_6 Y3;
ZqxDADwjx_7 Y4;
ZijFQQ_3 Y5;
ZqxDADwjx_7 Y6;
BOOLEAN Y7;
union {
struct {
ZqxDADwjx_7 Y8;
SHORTCARD Y9;
ZqxDADwjx_11 Y10;
ZqxDADwjx_7 Y11;
} V_1;
} U_1;
Zo1KBB_7 Y12;
} Z176;
static struct S_3 {
ZqxDADwjx_7 Y0;
ZijFQQ_3 Y1;
ZqxDADwjx_7 Y2;
} Z186;
static Zo1KBB_7 Z188, Z189, Z190;
static BOOLEAN Z191;
static Zo1KBB_6 Z220 ARGS ((ZqxDADwjx_7 Z194, ZqxDADwjx_7 Z205, Zo1KBB_6 Z208, Zo1KBB_6 Z209));
static void Z197 ARGS ((CHAR Z245[], LONGCARD O_1));

Zo1KBB_6 Zo1KBB_9
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z193, ZqxDADwjx_7 Z194)
# else
(Z193, Z194)
Zfb3DLQ_0 Z193;
ZqxDADwjx_7 Z194;
# endif
{
Zo1KBB_6 Z195;
ZqxDADwjx_10 Z196;

Z195 = (Zo1KBB_6)ZDtgCFKU_1((LONGINT)sizeof (Z151));
if (Z195 == NIL) {
Z197((STRING)"MakeLeafNode: Heap overflow", 27L);
}
((_6)Z195)->Y6 = Z194;
((_6)Z195)->Y8 = (ADDRESS)NIL;
Z196 = ZqxDADwjx_17(Z193, Z194);
if (ZqxDADwjx_19(Z196) == ZqxDADwjx_33) {
((_6)Z195)->Y0 = Zo1KBB_41;
((_6)Z195)->U_1.V_4.Y5 = Z196;
} else {
((_6)Z195)->Y0 = Zo1KBB_42;
((_6)Z195)->U_1.V_4.Y5 = Z196;
}
return Z195;
}

Zo1KBB_6 Zo1KBB_10
# ifdef HAVE_ARGS
(ZijFQQ_3 Z165, ZqxDADwjx_7 Z194)
# else
(Z165, Z194)
ZijFQQ_3 Z165;
ZqxDADwjx_7 Z194;
# endif
{
Zo1KBB_6 Z195;
Zp1PEAFD_2 Z200;

Z195 = (Zo1KBB_6)ZDtgCFKU_1((LONGINT)sizeof (Z151));
if (Z195 == NIL) {
Zp1PEAFD_13((STRING)"MakeActionNode : Heap overflow", 30L, &Z200);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, Z194, (LONGCARD)ZblNKKO_35, ADR (Z200));
}
((_6)Z195)->Y8 = (ADDRESS)NIL;
((_6)Z195)->Y0 = Zo1KBB_40;
((_6)Z195)->U_1.V_3.Y4 = Z165;
((_6)Z195)->Y6 = Z194;
return Z195;
}

Zo1KBB_6 Zo1KBB_11
# ifdef HAVE_ARGS
(Zo1KBB_1 Z152, ZqxDADwjx_7 Z194, Zo1KBB_6 Z158)
# else
(Z152, Z194, Z158)
Zo1KBB_1 Z152;
ZqxDADwjx_7 Z194;
Zo1KBB_6 Z158;
# endif
{
Zo1KBB_6 Z195;
Zp1PEAFD_2 Z200;

Z195 = (Zo1KBB_6)ZDtgCFKU_1((LONGINT)sizeof (Z151));
if (Z195 == NIL) {
Zp1PEAFD_13((STRING)" MakeUnaryNode : Heap overflow", 30L, &Z200);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, Z194, (LONGCARD)ZblNKKO_35, ADR (Z200));
}
((_6)Z195)->Y8 = (ADDRESS)NIL;
((_6)Z195)->Y0 = Z152;
((_6)Z195)->Y6 = Z194;
((_6)Z195)->U_1.V_1.Y1 = Z158;
return Z195;
}

Zo1KBB_6 Zo1KBB_12
# ifdef HAVE_ARGS
(Zo1KBB_2 Z152, ZqxDADwjx_7 Z194, ZqxDADwjx_7 Z205, Zo1KBB_6 Z158)
# else
(Z152, Z194, Z205, Z158)
Zo1KBB_2 Z152;
ZqxDADwjx_7 Z194, Z205;
Zo1KBB_6 Z158;
# endif
{
Zo1KBB_6 Z195;
Zp1PEAFD_2 Z200;

Z195 = (Zo1KBB_6)ZDtgCFKU_1((LONGINT)sizeof (Z151));
if (Z195 == NIL) {
Zp1PEAFD_13((STRING)"MakeBracketNode : Heap overflow", 31L, &Z200);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, Z194, (LONGCARD)ZblNKKO_35, ADR (Z200));
}
((_6)Z195)->Y8 = (ADDRESS)NIL;
((_6)Z195)->Y0 = Z152;
((_6)Z195)->Y6 = Z194;
((_6)Z195)->Y7 = Z205;
((_6)Z195)->U_1.V_1.Y1 = Z158;
return Z195;
}

Zo1KBB_6 Zo1KBB_13
# ifdef HAVE_ARGS
(Zo1KBB_3 Z152, ZqxDADwjx_7 Z194, Zo1KBB_6 Z208, Zo1KBB_6 Z209)
# else
(Z152, Z194, Z208, Z209)
Zo1KBB_3 Z152;
ZqxDADwjx_7 Z194;
Zo1KBB_6 Z208, Z209;
# endif
{
Zo1KBB_6 Z195;
Zp1PEAFD_2 Z200;

Z195 = (Zo1KBB_6)ZDtgCFKU_1((LONGINT)sizeof (Z151));
if (Z195 == NIL) {
Zp1PEAFD_13((STRING)"MakeBinaryNode : Heap overflow", 30L, &Z200);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, Z194, (LONGCARD)ZblNKKO_35, ADR (Z200));
}
((_6)Z195)->Y8 = (ADDRESS)NIL;
((_6)Z195)->Y0 = Z152;
((_6)Z195)->Y6 = Z194;
((_6)Z195)->U_1.V_2.Y2 = Z208;
((_6)Z195)->U_1.V_2.Y3 = Z209;
if (Z152 == Zo1KBB_38) {
((_6)Z195)->Y9 = FALSE;
}
return Z195;
}

Zo1KBB_6 Zo1KBB_14
# ifdef HAVE_ARGS
(ZqxDADwjx_7 Z194, Zo1KBB_6 Z208, Zo1KBB_6 Z209, BOOLEAN Z171, ZqxDADwjx_7 Z172, Zfb3DLQ_0 Z173, ZqxDADwjx_7 Z174)
# else
(Z194, Z208, Z209, Z171, Z172, Z173, Z174)
ZqxDADwjx_7 Z194;
Zo1KBB_6 Z208, Z209;
BOOLEAN Z171;
ZqxDADwjx_7 Z172;
Zfb3DLQ_0 Z173;
ZqxDADwjx_7 Z174;
# endif
{
Zo1KBB_6 Z195;
Zp1PEAFD_2 Z200;

Z195 = (Zo1KBB_6)ZDtgCFKU_1((LONGINT)sizeof (Z151));
if (Z195 == NIL) {
Zp1PEAFD_13((STRING)"MakePrioAlternativeNode : Heap overflow", 39L, &Z200);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, Z194, (LONGCARD)ZblNKKO_35, ADR (Z200));
}
((_6)Z195)->Y9 = Z171;
((_6)Z195)->Y10 = Z172;
((_6)Z195)->Y11 = Z173;
((_6)Z195)->Y12 = Z174;
((_6)Z195)->Y8 = (ADDRESS)NIL;
((_6)Z195)->Y0 = Zo1KBB_38;
((_6)Z195)->Y6 = Z194;
((_6)Z195)->U_1.V_2.Y2 = Z208;
((_6)Z195)->U_1.V_2.Y3 = Z209;
return Z195;
}

void Zo1KBB_15
# ifdef HAVE_ARGS
(ZqxDADwjx_7 Z194, ZqxDADwjx_7 Z212, Zo1KBB_6 *Z213, Zo1KBB_6 Z214)
# else
(Z194, Z212, Z213, Z214)
ZqxDADwjx_7 Z194, Z212;
Zo1KBB_6 *Z213;
Zo1KBB_6 Z214;
# endif
{
Zo1KBB_6 Z215, Z216;

if (*Z213 == Zo1KBB_8 || Zo1KBB_20(*Z213) != Zo1KBB_39) {
*Z213 = Z220(Z194, Z212, *Z213, Z214);
} else {
Z216 = *Z213;
for (;;) {
Z215 = ((_6)Z216)->U_1.V_2.Y3;
if (Zo1KBB_20(Z215) != Zo1KBB_39) {
goto EXIT_1;
}
Z216 = Z215;
} EXIT_1:;
((_6)Z216)->U_1.V_2.Y3 = Z220(((_6)Z215)->Y6, Z212, Z215, Z214);
}
}

static Zo1KBB_6 Z220
# ifdef HAVE_ARGS
(ZqxDADwjx_7 Z194, ZqxDADwjx_7 Z205, Zo1KBB_6 Z208, Zo1KBB_6 Z209)
# else
(Z194, Z205, Z208, Z209)
ZqxDADwjx_7 Z194;
ZqxDADwjx_7 Z205;
Zo1KBB_6 Z208, Z209;
# endif
{
Zo1KBB_6 Z195;
Zp1PEAFD_2 Z200;

Z195 = (Zo1KBB_6)ZDtgCFKU_1((LONGINT)sizeof (Z151));
if (Z195 == NIL) {
Zp1PEAFD_13((STRING)"MakeArtificialNode : Heap overflow", 34L, &Z200);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, Z194, (LONGCARD)ZblNKKO_35, ADR (Z200));
}
((_6)Z195)->Y8 = (ADDRESS)NIL;
((_6)Z195)->Y0 = Zo1KBB_39;
((_6)Z195)->Y6 = Z194;
((_6)Z195)->Y7 = Z205;
((_6)Z195)->U_1.V_2.Y2 = Z208;
((_6)Z195)->U_1.V_2.Y3 = Z209;
return Z195;
}

void Zo1KBB_16
# ifdef HAVE_ARGS
(Zo1KBB_6 Z213, ADDRESS Z222)
# else
(Z213, Z222)
Zo1KBB_6 Z213;
ADDRESS Z222;
# endif
{
if (Z213 != NIL) {
((_6)Z213)->Y8 = Z222;
} else {
Z197((STRING)"PutNodeSpecial : You tried to access an empty node", 50L);
}
}

void Zo1KBB_17
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z177, ZqxDADwjx_7 Z178, ZqxDADwjx_7 Z179, Zo1KBB_6 Z180, ZijFQQ_3 Z182, ZqxDADwjx_7 Z183, ZqxDADwjx_7 Z181, BOOLEAN Z171, ZqxDADwjx_7 Z172, Zfb3DLQ_0 Z173, ZqxDADwjx_7 Z174)
# else
(Z177, Z178, Z179, Z180, Z182, Z183, Z181, Z171, Z172, Z173, Z174)
Zfb3DLQ_0 Z177;
ZqxDADwjx_7 Z178;
ZqxDADwjx_7 Z179;
Zo1KBB_6 Z180;
ZijFQQ_3 Z182;
ZqxDADwjx_7 Z183;
ZqxDADwjx_7 Z181;
BOOLEAN Z171;
ZqxDADwjx_7 Z172;
Zfb3DLQ_0 Z173;
ZqxDADwjx_7 Z174;
# endif
{
Zo1KBB_7 Z224;
ZqxDADwjx_13 Z225;
ZqxDADwjx_10 Z226;
ZqxDADwjx_10 Z196;
Zp1PEAFD_2 Z200;

Z191 = FALSE;
Z226 = ZqxDADwjx_17(Z177, Z178);
if (ZqxDADwjx_19(Z226) == ZqxDADwjx_33) {
ZblNKKO_53((LONGCARD)Z148, (LONGCARD)ZblNKKO_42, Z178, (LONGCARD)ZblNKKO_38, ADR (Z177));
} else {
ZqxDADwjx_18(Z177, Z178);
Z224 = (Zo1KBB_7)ZDtgCFKU_1((LONGINT)sizeof (Z176));
if (Z224 == NIL) {
Zp1PEAFD_13((STRING)"MakeRule : Heap overflow", 24L, &Z200);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, Z178, (LONGCARD)ZblNKKO_35, ADR (Z200));
}
((_7)Z224)->Y0 = Z226;
((_7)Z224)->Y1 = Z178;
((_7)Z224)->Y2 = Z179;
((_7)Z224)->Y4 = Z181;
((_7)Z224)->Y3 = Z180;
((_7)Z224)->Y5 = Z182;
((_7)Z224)->Y6 = Z183;
((_7)Z224)->Y7 = Z171;
((_7)Z224)->U_1.V_1.Y9 = 0;
if (Z171) {
((_7)Z224)->U_1.V_1.Y8 = Z172;
((_7)Z224)->U_1.V_1.Y11 = Z174;
Z196 = ZqxDADwjx_20(Z173, &Z225);
if (Z225 != ZqxDADwjx_26) {
ZblNKKO_53((LONGCARD)Z149, (LONGCARD)ZblNKKO_42, Z174, (LONGCARD)ZblNKKO_38, ADR (Z173));
} else {
((_7)Z224)->U_1.V_1.Y10 = Z196;
((_7)Z224)->U_1.V_1.Y9 = ZqxDADwjx_24(Z196);
if (((_7)Z224)->U_1.V_1.Y9 == 0) {
ZblNKKO_53((LONGCARD)Z147, (LONGCARD)ZblNKKO_42, Z174, (LONGCARD)ZblNKKO_38, ADR (Z173));
}
}
}
if (Z190 != NIL) {
((_7)Z190)->Y12 = Z224;
} else {
Z188 = Z224;
}
((_7)Z224)->Y12 = (Zo1KBB_7)NIL;
Z190 = Z224;
}
}

void Zo1KBB_18
# ifdef HAVE_ARGS
(ZqxDADwjx_7 Z187, ZijFQQ_3 Z182, ZqxDADwjx_7 Z183)
# else
(Z187, Z182, Z183)
ZqxDADwjx_7 Z187;
ZijFQQ_3 Z182;
ZqxDADwjx_7 Z183;
# endif
{
Z186.Y0 = Z187;
Z186.Y1 = Z182;
Z186.Y2 = Z183;
}

void Zo1KBB_19
 ARGS ((void))
{
Z191 = TRUE;
Z189 = Z188;
}

Zo1KBB_0 Zo1KBB_20
# ifdef HAVE_ARGS
(Zo1KBB_6 Z213)
# else
(Z213)
Zo1KBB_6 Z213;
# endif
{
if (Z213 == NIL) {
return Zo1KBB_43;
} else {
return ((_6)Z213)->Y0;
}
}

void Zo1KBB_21
# ifdef HAVE_ARGS
(Zo1KBB_6 Z213, ZqxDADwjx_10 *Z232, ZqxDADwjx_7 *Z194)
# else
(Z213, Z232, Z194)
Zo1KBB_6 Z213;
ZqxDADwjx_10 *Z232;
ZqxDADwjx_7 *Z194;
# endif
{
if (Zo1KBB_20(Z213) != Zo1KBB_41 && Zo1KBB_20(Z213) != Zo1KBB_42) {
Z197((STRING)"GetLeafNode : Wrong Node Type", 29L);
}
if (Z213 != NIL) {
*Z232 = ((_6)Z213)->U_1.V_4.Y5;
*Z194 = ((_6)Z213)->Y6;
} else {
Z197((STRING)"GetLeafNode : Node empty", 24L);
}
}

void Zo1KBB_22
# ifdef HAVE_ARGS
(Zo1KBB_6 Z213, ZijFQQ_3 *Z165, ZqxDADwjx_7 *Z194)
# else
(Z213, Z165, Z194)
Zo1KBB_6 Z213;
ZijFQQ_3 *Z165;
ZqxDADwjx_7 *Z194;
# endif
{
if (Zo1KBB_20(Z213) != Zo1KBB_40) {
Z197((STRING)"GetActionNode : Wrong Node Type", 31L);
}
if (Z213 != NIL) {
*Z165 = ((_6)Z213)->U_1.V_3.Y4;
*Z194 = ((_6)Z213)->Y6;
} else {
Z197((STRING)"GetActionNode : Node empty", 26L);
}
}

void Zo1KBB_23
# ifdef HAVE_ARGS
(Zo1KBB_6 Z213, ZqxDADwjx_7 *Z194, Zo1KBB_6 *Z158)
# else
(Z213, Z194, Z158)
Zo1KBB_6 Z213;
ZqxDADwjx_7 *Z194;
Zo1KBB_6 *Z158;
# endif
{
if (Zo1KBB_20(Z213) != Zo1KBB_33 && Zo1KBB_20(Z213) != Zo1KBB_32) {
Z197((STRING)"GetUnaryNode : Wrong Node Type", 30L);
}
if (Z213 != NIL) {
*Z194 = ((_6)Z213)->Y6;
*Z158 = ((_6)Z213)->U_1.V_1.Y1;
} else {
Z197((STRING)"GetUnaryNode : Node empty", 25L);
}
}

void Zo1KBB_24
# ifdef HAVE_ARGS
(Zo1KBB_6 Z213, ZqxDADwjx_7 *Z194, ZqxDADwjx_7 *Z205, Zo1KBB_6 *Z158)
# else
(Z213, Z194, Z205, Z158)
Zo1KBB_6 Z213;
ZqxDADwjx_7 *Z194, *Z205;
Zo1KBB_6 *Z158;
# endif
{
if (Zo1KBB_20(Z213) != Zo1KBB_35 && Zo1KBB_20(Z213) != Zo1KBB_34) {
Z197((STRING)"GetBracketNode : Wrong Node Type", 32L);
}
if (Z213 != NIL) {
*Z194 = ((_6)Z213)->Y6;
*Z205 = ((_6)Z213)->Y7;
*Z158 = ((_6)Z213)->U_1.V_1.Y1;
} else {
Z197((STRING)"GetBracketNode : Node empty", 27L);
}
}

void Zo1KBB_25
# ifdef HAVE_ARGS
(Zo1KBB_6 Z213, ZqxDADwjx_7 *Z194, Zo1KBB_6 *Z208, Zo1KBB_6 *Z209)
# else
(Z213, Z194, Z208, Z209)
Zo1KBB_6 Z213;
ZqxDADwjx_7 *Z194;
Zo1KBB_6 *Z208, *Z209;
# endif
{
if (Zo1KBB_20(Z213) != Zo1KBB_36 && Zo1KBB_20(Z213) != Zo1KBB_37 && Zo1KBB_20(Z213) != Zo1KBB_38 && Zo1KBB_20(Z213) != Zo1KBB_39) {
Z197((STRING)"GetBinaryNode : Wrong Node Type", 31L);
}
if (Z213 != NIL) {
*Z194 = ((_6)Z213)->Y6;
*Z208 = ((_6)Z213)->U_1.V_2.Y2;
*Z209 = ((_6)Z213)->U_1.V_2.Y3;
} else {
Z197((STRING)"GetBinaryNode : Node empty", 26L);
}
}

void Zo1KBB_26
# ifdef HAVE_ARGS
(Zo1KBB_6 Z213, ZqxDADwjx_7 *Z194, Zo1KBB_6 *Z208, Zo1KBB_6 *Z209, BOOLEAN *Z171, ZqxDADwjx_7 *Z172, Zfb3DLQ_0 *Z173, ZqxDADwjx_7 *Z174)
# else
(Z213, Z194, Z208, Z209, Z171, Z172, Z173, Z174)
Zo1KBB_6 Z213;
ZqxDADwjx_7 *Z194;
Zo1KBB_6 *Z208;
Zo1KBB_6 *Z209;
BOOLEAN *Z171;
ZqxDADwjx_7 *Z172;
Zfb3DLQ_0 *Z173;
ZqxDADwjx_7 *Z174;
# endif
{
if (Zo1KBB_20(Z213) != Zo1KBB_38) {
Z197((STRING)"GetPrioAlternativeNode : Wrong Node Type", 40L);
}
if (Z213 != NIL) {
*Z194 = ((_6)Z213)->Y6;
*Z208 = ((_6)Z213)->U_1.V_2.Y2;
*Z209 = ((_6)Z213)->U_1.V_2.Y3;
*Z171 = ((_6)Z213)->Y9;
*Z172 = ((_6)Z213)->Y10;
*Z173 = ((_6)Z213)->Y11;
*Z174 = ((_6)Z213)->Y12;
} else {
Z197((STRING)"GetPrioAlternativeNode : Node empty", 35L);
}
}

void Zo1KBB_27
# ifdef HAVE_ARGS
(Zo1KBB_6 Z213, ZqxDADwjx_7 *Z194, ZqxDADwjx_7 *Z205, Zo1KBB_6 *Z208, Zo1KBB_6 *Z209)
# else
(Z213, Z194, Z205, Z208, Z209)
Zo1KBB_6 Z213;
ZqxDADwjx_7 *Z194;
ZqxDADwjx_7 *Z205;
Zo1KBB_6 *Z208, *Z209;
# endif
{
if (Zo1KBB_20(Z213) != Zo1KBB_39) {
Z197((STRING)"GetArtificialNode : Wrong Node Type", 35L);
}
if (Z213 != NIL) {
*Z194 = ((_6)Z213)->Y6;
*Z205 = ((_6)Z213)->Y7;
*Z208 = ((_6)Z213)->U_1.V_2.Y2;
*Z209 = ((_6)Z213)->U_1.V_2.Y3;
} else {
Z197((STRING)"GetArtificialNode : Node empty", 30L);
}
}

ADDRESS Zo1KBB_28
# ifdef HAVE_ARGS
(Zo1KBB_6 Z213)
# else
(Z213)
Zo1KBB_6 Z213;
# endif
{
if (Z213 != NIL) {
return ((_6)Z213)->Y8;
} else {
Z197((STRING)"GetNodeSpecial : Node empty", 27L);
return (ADDRESS)NIL;
}
}

BOOLEAN Zo1KBB_29
# ifdef HAVE_ARGS
(ZqxDADwjx_9 *Z177, ZqxDADwjx_7 *Z178, ZqxDADwjx_7 *Z179, Zo1KBB_6 *Z180, ZijFQQ_3 *Z182, ZqxDADwjx_7 *Z183, ZqxDADwjx_7 *Z181, BOOLEAN *Z171, ZqxDADwjx_7 *Z172, ZqxDADwjx_11 *Z173, ZqxDADwjx_7 *Z174)
# else
(Z177, Z178, Z179, Z180, Z182, Z183, Z181, Z171, Z172, Z173, Z174)
ZqxDADwjx_9 *Z177;
ZqxDADwjx_7 *Z178;
ZqxDADwjx_7 *Z179;
Zo1KBB_6 *Z180;
ZijFQQ_3 *Z182;
ZqxDADwjx_7 *Z183;
ZqxDADwjx_7 *Z181;
BOOLEAN *Z171;
ZqxDADwjx_7 *Z172;
ZqxDADwjx_11 *Z173;
ZqxDADwjx_7 *Z174;
# endif
{
if (!Z191) {
Z197((STRING)"GetRule : You must not read here", 32L);
}
if (Z189 == NIL) {
return FALSE;
} else {
*Z177 = ((_7)Z189)->Y0;
*Z178 = ((_7)Z189)->Y1;
*Z179 = ((_7)Z189)->Y2;
*Z181 = ((_7)Z189)->Y4;
*Z180 = ((_7)Z189)->Y3;
*Z182 = ((_7)Z189)->Y5;
*Z183 = ((_7)Z189)->Y6;
if (((_7)Z189)->Y7) {
*Z172 = ((_7)Z189)->U_1.V_1.Y8;
*Z173 = ((_7)Z189)->U_1.V_1.Y10;
*Z174 = ((_7)Z189)->U_1.V_1.Y11;
} else {
Z172->Y0 = 0;
Z172->Y1 = 0;
*Z173 = 0;
Z174->Y0 = 0;
Z174->Y1 = 0;
}
*Z171 = ((_7)Z189)->Y7;
Z189 = ((_7)Z189)->Y12;
return TRUE;
}
}

BOOLEAN Zo1KBB_30
# ifdef HAVE_ARGS
(ZqxDADwjx_9 *Z177, Zo1KBB_6 *Z180, BOOLEAN *Z171)
# else
(Z177, Z180, Z171)
ZqxDADwjx_9 *Z177;
Zo1KBB_6 *Z180;
BOOLEAN *Z171;
# endif
{
if (!Z191) {
Z197((STRING)"GetEssentialRule : You must not read here", 41L);
}
if (Z189 == NIL) {
return FALSE;
} else {
*Z177 = ((_7)Z189)->Y0;
*Z180 = ((_7)Z189)->Y3;
*Z171 = ((_7)Z189)->Y7;
Z189 = ((_7)Z189)->Y12;
return TRUE;
}
}

void Zo1KBB_31
# ifdef HAVE_ARGS
(ZqxDADwjx_7 *Z187, ZijFQQ_3 *Z182, ZqxDADwjx_7 *Z183)
# else
(Z187, Z182, Z183)
ZqxDADwjx_7 *Z187;
ZijFQQ_3 *Z182;
ZqxDADwjx_7 *Z183;
# endif
{
*Z187 = Z186.Y0;
*Z182 = Z186.Y1;
*Z183 = Z186.Y2;
}

static void Z197
# ifdef HAVE_ARGS
(CHAR Z245[], LONGCARD O_1)
# else
(Z245, O_1)
CHAR Z245[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z200;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z245, O_1, CHAR)
Zp1PEAFD_13(Z245, O_1, &Z200);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_35, ADR (Z200));
FREE_OPEN_ARRAYS
}

void BEGIN_Rules ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Lists ();
BEGIN_TokenTab ();
BEGIN_Idents ();
BEGIN_Lists ();
BEGIN_TokenTab ();
BEGIN_rMemory ();
BEGIN_Idents ();
BEGIN_Errors ();
BEGIN_Strings ();
BEGIN_Position ();

Z189 = (Zo1KBB_7)NIL;
Z190 = (Zo1KBB_7)NIL;
Z188 = (Zo1KBB_7)NIL;
Z186.Y0.Y0 = 0;
Z186.Y0.Y1 = 0;
ZijFQQ_5(&Z186.Y1);
Z186.Y2.Y0 = 0;
Z186.Y2.Y1 = 0;
Zo1KBB_8 = (Zo1KBB_6)NIL;
}
