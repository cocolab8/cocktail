#include "SYSTEM_.h"

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
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

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Tokens
#include "Tokens.h"
#endif


#define Z144	30
#define Z145	31
typedef struct S_1 *Z146;
typedef struct S_1 {
Zfb3DLQ_0 Y0;
ZqxDADwjx_7 Y1;
BOOLEAN Y2;
union {
struct {
ZqxDADwjx_7 Y3;
ZqxDADwjx_7 Y4;
} V_1;
} U_1;
ZijFQQ_3 Y5;
ZqxDADwjx_7 Y6;
Z146 Y7;
} Z147;
static struct S_2 {
ZijFQQ_3 Y0;
ZqxDADwjx_7 Y1;
ZqxDADwjx_7 Y2;
ZijFQQ_3 Y3;
ZqxDADwjx_7 Y4;
} Z156;
static Z146 Z162;
static Z146 Z163;
static Z146 Z164;
static BOOLEAN Z165;
static void Z172 ARGS ((CHAR Z183[], LONGCARD O_1));

void ZqxDADK_0
# ifdef HAVE_ARGS
(ZijFQQ_3 Z157, ZqxDADwjx_7 Z158)
# else
(Z157, Z158)
ZijFQQ_3 Z157;
ZqxDADwjx_7 Z158;
# endif
{
Z156.Y0 = Z157;
Z156.Y1 = Z158;
}

void ZqxDADK_1
# ifdef HAVE_ARGS
(ZqxDADwjx_7 Z159, ZijFQQ_3 Z160, ZqxDADwjx_7 Z161)
# else
(Z159, Z160, Z161)
ZqxDADwjx_7 Z159;
ZijFQQ_3 Z160;
ZqxDADwjx_7 Z161;
# endif
{
Z156.Y2 = Z159;
Z156.Y3 = Z160;
Z156.Y4 = Z161;
}

void ZqxDADK_2
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z148, ZqxDADwjx_7 Z149, BOOLEAN Z150, ZqxDADwjx_7 Z151, ZqxDADwjx_11 Z169, ZqxDADwjx_7 Z152, ZijFQQ_3 Z153, ZqxDADwjx_7 Z154)
# else
(Z148, Z149, Z150, Z151, Z169, Z152, Z153, Z154)
Zfb3DLQ_0 Z148;
ZqxDADwjx_7 Z149;
BOOLEAN Z150;
ZqxDADwjx_7 Z151;
ZqxDADwjx_11 Z169;
ZqxDADwjx_7 Z152;
ZijFQQ_3 Z153;
ZqxDADwjx_7 Z154;
# endif
{
Z146 Z170;
ZqxDADwjx_13 Z171;

if (Z165) {
Z172((STRING)"MakeDeclaration: do not write", 29L);
}
Z170 = (Z146)ZDtgCFKU_1((LONGINT)sizeof (Z147));
if (Z170 == NIL) {
Z172((STRING)"MakeDeclaration: Heap overflow", 30L);
}
Z170->Y0 = Z148;
Z170->Y1 = Z149;
Z170->Y2 = Z150;
Z170->Y7 = NIL;
if (Z150) {
ZqxDADwjx_14(Z148, &Z169, &Z171, Z149);
if (Z171 == ZqxDADwjx_27) {
ZblNKKO_53((LONGCARD)Z144, (LONGCARD)ZblNKKO_42, Z149, (LONGCARD)ZblNKKO_38, ADR (Z148));
return;
} else if (Z171 == ZqxDADwjx_28) {
ZblNKKO_53((LONGCARD)Z145, (LONGCARD)ZblNKKO_42, Z149, (LONGCARD)ZblNKKO_38, ADR (Z148));
return;
}
Z170->U_1.V_1.Y3 = Z151;
Z170->U_1.V_1.Y4 = Z152;
} else {
ZqxDADwjx_15(&Z148, &Z171, Z149);
if (Z171 == ZqxDADwjx_27) {
ZblNKKO_53((LONGCARD)Z144, (LONGCARD)ZblNKKO_42, Z149, (LONGCARD)ZblNKKO_38, ADR (Z148));
return;
}
}
Z170->Y5 = Z153;
Z170->Y6 = Z154;
if (Z164 == NIL) {
Z162 = Z170;
} else {
Z164->Y7 = Z170;
}
Z164 = Z170;
}

void ZqxDADK_3
 ARGS ((void))
{
ZqxDADwjx_13 Z171;

Z163 = Z162;
while (Z163 != NIL) {
if (!Z163->Y2) {
ZqxDADwjx_16(Z163->Y0, &Z171);
if (Z171 == ZqxDADwjx_30) {
Z172((STRING)"CompleteDeclarations: token does not exists", 43L);
} else if (Z171 == ZqxDADwjx_28) {
Z172((STRING)"CompleteDeclarations: token already complete", 44L);
} else if (Z171 == ZqxDADwjx_32) {
Z172((STRING)"CompleteDeclarations: token is nonterminal", 42L);
}
}
Z163 = Z163->Y7;
}
Z163 = Z162;
Z165 = TRUE;
}

void ZqxDADK_4
# ifdef HAVE_ARGS
(ZijFQQ_3 *Z157, ZqxDADwjx_7 *Z158)
# else
(Z157, Z158)
ZijFQQ_3 *Z157;
ZqxDADwjx_7 *Z158;
# endif
{
*Z157 = Z156.Y0;
*Z158 = Z156.Y1;
}

void ZqxDADK_5
# ifdef HAVE_ARGS
(ZqxDADwjx_7 *Z159, ZijFQQ_3 *Z160, ZqxDADwjx_7 *Z161)
# else
(Z159, Z160, Z161)
ZqxDADwjx_7 *Z159;
ZijFQQ_3 *Z160;
ZqxDADwjx_7 *Z161;
# endif
{
*Z159 = Z156.Y2;
*Z160 = Z156.Y3;
*Z161 = Z156.Y4;
}

BOOLEAN ZqxDADK_6
# ifdef HAVE_ARGS
(Zfb3DLQ_0 *Z148, ZqxDADwjx_7 *Z149, BOOLEAN *Z150, ZqxDADwjx_7 *Z151, ZqxDADwjx_7 *Z152, ZijFQQ_3 *Z153, ZqxDADwjx_7 *Z154)
# else
(Z148, Z149, Z150, Z151, Z152, Z153, Z154)
Zfb3DLQ_0 *Z148;
ZqxDADwjx_7 *Z149;
BOOLEAN *Z150;
ZqxDADwjx_7 *Z151;
ZqxDADwjx_7 *Z152;
ZijFQQ_3 *Z153;
ZqxDADwjx_7 *Z154;
# endif
{
if (!Z165) {
Z172((STRING)"GetDeclaration: do not read", 27L);
}
if (Z163 == NIL) {
return FALSE;
} else {
*Z148 = Z163->Y0;
*Z149 = Z163->Y1;
*Z150 = Z163->Y2;
if (*Z150) {
*Z151 = Z163->U_1.V_1.Y3;
*Z152 = Z163->U_1.V_1.Y4;
} else {
Z151->Y0 = 0;
Z151->Y1 = 0;
Z152->Y0 = 0;
Z152->Y1 = 0;
}
*Z153 = Z163->Y5;
*Z154 = Z163->Y6;
Z163 = Z163->Y7;
return TRUE;
}
}

static void Z172
# ifdef HAVE_ARGS
(CHAR Z183[], LONGCARD O_1)
# else
(Z183, O_1)
CHAR Z183[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z184;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z183, O_1, CHAR)
Zp1PEAFD_13(Z183, O_1, &Z184);
ZblNKKO_53((LONGCARD)ZblNKKO_48, (LONGCARD)ZblNKKO_40, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_35, ADR (Z184));
FREE_OPEN_ARRAYS
}

void BEGIN_Tokens ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Lists ();
BEGIN_TokenTab ();
BEGIN_Idents ();
BEGIN_Lists ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_TokenTab ();
BEGIN_rMemory ();
BEGIN_Idents ();
BEGIN_TokenTab ();
BEGIN_Errors ();
BEGIN_Position ();

Z162 = NIL;
Z164 = NIL;
Z163 = NIL;
Z165 = FALSE;
{
register struct S_2 *W_1 = &Z156;

ZijFQQ_5(&W_1->Y0);
W_1->Y1.Y0 = 0;
W_1->Y1.Y1 = 0;
ZijFQQ_5(&W_1->Y3);
W_1->Y4.Y0 = 0;
W_1->Y4.Y1 = 0;
}
}
