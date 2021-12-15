#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_General
#include "General.h"
#endif

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

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Tree2
#include "Tree2.h"
#endif


static void Z153 ARGS ((Zp1PEAFi_1 Z154));
static void Z159 ARGS ((Zp1PEAFi_1 *Z154));
static ZfM_3 Z157;
typedef Zq0A4_185 *Z166;
static SHORTCARD Z167;
static SHORTCARD Z168;
static CHAR Z169;
static Zp1PEAFD_2 Z160;
#define Z170	32
static LONGINT Z171;
static struct S_1 {
Zq0A4_185 A[50000 + 1];
} *Z172;
static INTEGER Z173;
static SHORTINT Z174;
static SHORTCARD Z175 ARGS ((Zq0A4_185 Z176));
static Zq0A4_185 Z179 ARGS ((SHORTCARD Z167));
#define Z180	((CHAR)'\374')
#define Z181	((CHAR)'\375')
#define Z182	((CHAR)'\376')
#define Z183	((CHAR)'\377')
static void Z187 ARGS ((Z166 Z186));
static void Z189 ARGS ((BYTE Z202[], LONGCARD O_1));
static void Z192 ARGS ((Zfb3DLQ_0 *Z177));

static void Z153
# ifdef HAVE_ARGS
(Zp1PEAFi_1 Z154)
# else
(Z154)
Zp1PEAFi_1 Z154;
# endif
{
Zp1PEAFi_6(Z157, Z154);
ZfM_33(Z157);
}

static void Z159
# ifdef HAVE_ARGS
(Zp1PEAFi_1 *Z154)
# else
(Z154)
Zp1PEAFi_1 *Z154;
# endif
{
Zp1PEAFD_2 Z160;

Zp1PEAFD_20(Z157, &Z160);
if (Zp1PEAFD_7(&Z160) == 0) {
*Z154 = Zp1PEAFi_0;
} else {
*Z154 = Zp1PEAFi_2(&Z160);
}
}

static SHORTCARD Z175
# ifdef HAVE_ARGS
(Zq0A4_185 Z176)
# else
(Z176)
Zq0A4_185 Z176;
# endif
{
INTEGER Z177;

{
LONGINT B_1 = 1, B_2 = Z173;

if (B_1 <= B_2)
for (Z177 = B_1;; Z177 += 1) {
if (Z172->A[Z177] == Z176) {
return Z177;
}
if (Z177 >= B_2) break;
}
}
INC(Z173);
if (Z173 == Z171) {
ZarQdhNDD_2((ADDRESS *)&Z172, &Z171, (LONGINT)sizeof (Zq0A4_185));
}
Z172->A[Z173] = Z176;
return Z173;
}

static Zq0A4_185 Z179
# ifdef HAVE_ARGS
(SHORTCARD Z167)
# else
(Z167)
SHORTCARD Z167;
# endif
{
return Z172->A[Z167];
}

Zq0A4_185 Zq0A4L_2
# ifdef HAVE_ARGS
(ZfM_3 Z185)
# else
(Z185)
ZfM_3 Z185;
# endif
{
Zq0A4_185 Z186;

Z157 = Z185;
if (Z174 == 0) {
Z173 = 0;
}
INC(Z174);
Z187((Z166)ADR (Z186));
DEC(Z174);
return Z186;
}

static void Z187
# ifdef HAVE_ARGS
(Z166 Z186)
# else
(Z186)
Z166 Z186;
# endif
{
for (;;) {
Z169 = ZfM_7(Z157);
switch (Z169) {
case Z180:;
*Z186 = Zq0A4_53;
return;
break;
case Z183:;
Z189((WORD *)&Z167, (LONGCARD)sizeof (Z167));
*Z186 = Z179(Z167);
return;
break;
case Z182:;
Z189((WORD *)&Z167, (LONGCARD)sizeof (Z167));
Z168 = ORD(ZfM_7(Z157));
*Z186 = Zq0A4_406(Z168);
if (Z167 != Z175(*Z186)) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Tree2: error in GetTree", 23L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*Zq0A4_396)();
}
break;
default:
Z168 = ORD(Z169);
*Z186 = Zq0A4_406(Z168);
break;
}
switch (Z168) {
case Zq0A4_56:;
Z192(&(*Z186)->U_1.V_5.Y4.Y1);
Z189((WORD *)&(*Z186)->U_1.V_5.Y4.Y2, (LONGCARD)sizeof ((*Z186)->U_1.V_5.Y4.Y2));
Z187((Z166)ADR ((*Z186)->U_1.V_5.Y4.Y3));
Z187((Z166)ADR ((*Z186)->U_1.V_5.Y4.Y4));
Z187((Z166)ADR ((*Z186)->U_1.V_5.Y4.Y6));
Z186 = (Z166)ADR ((*Z186)->U_1.V_5.Y4.Y5);
break;
case Zq0A4_59:;
Z186 = (Z166)ADR ((*Z186)->U_1.V_8.Y7.Y1);
break;
case Zq0A4_60:;
Z192(&(*Z186)->U_1.V_9.Y8.Y2);
Z192(&(*Z186)->U_1.V_9.Y8.Y3);
Z192(&(*Z186)->U_1.V_9.Y8.Y4);
Z189((WORD *)&(*Z186)->U_1.V_9.Y8.Y5, (LONGCARD)sizeof ((*Z186)->U_1.V_9.Y8.Y5));
Z159(&(*Z186)->U_1.V_9.Y8.Y6);
Z186 = (Z166)ADR ((*Z186)->U_1.V_9.Y8.Y1);
break;
case Zq0A4_61:;
Z192(&(*Z186)->U_1.V_10.Y9.Y2);
Z192(&(*Z186)->U_1.V_10.Y9.Y3);
Z192(&(*Z186)->U_1.V_10.Y9.Y4);
Z189((WORD *)&(*Z186)->U_1.V_10.Y9.Y5, (LONGCARD)sizeof ((*Z186)->U_1.V_10.Y9.Y5));
Z159(&(*Z186)->U_1.V_10.Y9.Y6);
Z187((Z166)ADR ((*Z186)->U_1.V_10.Y9.Y7));
Z186 = (Z166)ADR ((*Z186)->U_1.V_10.Y9.Y1);
break;
case Zq0A4_62:;
Z192(&(*Z186)->U_1.V_11.Y10.Y2);
Z192(&(*Z186)->U_1.V_11.Y10.Y3);
Z192(&(*Z186)->U_1.V_11.Y10.Y4);
Z189((WORD *)&(*Z186)->U_1.V_11.Y10.Y5, (LONGCARD)sizeof ((*Z186)->U_1.V_11.Y10.Y5));
Z159(&(*Z186)->U_1.V_11.Y10.Y6);
Z187((Z166)ADR ((*Z186)->U_1.V_11.Y10.Y7));
Z186 = (Z166)ADR ((*Z186)->U_1.V_11.Y10.Y1);
break;
case Zq0A4_63:;
Z186 = (Z166)ADR ((*Z186)->U_1.V_12.Y11.Y1);
break;
case Zq0A4_64:;
Z186 = (Z166)ADR ((*Z186)->U_1.V_13.Y12.Y1);
break;
case Zq0A4_65:;
Z186 = (Z166)ADR ((*Z186)->U_1.V_14.Y13.Y1);
break;
case Zq0A4_66:;
Z186 = (Z166)ADR ((*Z186)->U_1.V_15.Y14.Y1);
break;
case Zq0A4_67:;
Z186 = (Z166)ADR ((*Z186)->U_1.V_16.Y15.Y1);
break;
default:
return;
break;
}
} EXIT_1:;
}

static void Z189
# ifdef HAVE_ARGS
(BYTE Z202[], LONGCARD O_1)
# else
(Z202, O_1)
BYTE Z202[];
LONGCARD O_1;
# endif
{
INTEGER Z177;

Z177 = ZfM_6(Z157, ADR1 (Z202), (LONGCARD)((INTEGER)(O_1 - 1) + 1));
}

static void Z192
# ifdef HAVE_ARGS
(Zfb3DLQ_0 *Z177)
# else
(Z177)
Zfb3DLQ_0 *Z177;
# endif
{
Zp1PEAFD_2 Z160;

Zp1PEAFD_20(Z157, &Z160);
*Z177 = Zfb3DLQ_2(&Z160);
}

void Zq0A4L_3
 ARGS ((void))
{
}

void Zq0A4L_4
 ARGS ((void))
{
}

void BEGIN_Tree2 ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Tree ();
BEGIN_Strings ();
BEGIN_IO ();
BEGIN_rSystem ();
BEGIN_General ();
BEGIN_rMemory ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Layout ();
BEGIN_StringM ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Tree ();
BEGIN_Tree ();

Z174 = 0;
Z171 = Z170;
ZarQdhNDD_0((ADDRESS *)&Z172, &Z171, (LONGINT)sizeof (Zq0A4_185));
Zq0A4L_3();
}
