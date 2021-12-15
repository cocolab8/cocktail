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
typedef Zq0A4_153 *Z166;
static SHORTCARD Z167;
static SHORTCARD Z168;
static CHAR Z169;
static Zp1PEAFD_2 Z160;
static void Z170 ARGS ((Zq0A4_153 Z171));
#define Z178	32
static LONGINT Z179;
static struct S_1 {
Zq0A4_153 A[50000 + 1];
} *Z180;
static INTEGER Z181;
static SHORTINT Z182;
static SHORTCARD Z183 ARGS ((Zq0A4_153 Z184));
static Zq0A4_153 Z187 ARGS ((SHORTCARD Z167));
#define Z188	((CHAR)'\374')
#define Z189	((CHAR)'\375')
#define Z190	((CHAR)'\376')
#define Z191	((CHAR)'\377')
static void Z194 ARGS ((Zq0A4_153 Z171));
static void Z196 ARGS ((BYTE Z203[], LONGCARD O_1));
static void Z197 ARGS ((Zfb3DLQ_0 Z185));

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

static void Z170
# ifdef HAVE_ARGS
(Zq0A4_153 Z171)
# else
(Z171)
Zq0A4_153 Z171;
# endif
{
for (;;) {
if (Z171 == Zq0A4_97) {
return;
}
INC(Z171->U_1.V_2.Y1.Y1);
if (Z171->U_1.V_2.Y1.Y1 > 1) {
return;
}
switch (Z171->U_1.V_1.Y0) {
case Zq0A4_100:;
Z170(Z171->U_1.V_5.Y4.Y3);
Z170(Z171->U_1.V_5.Y4.Y4);
Z170(Z171->U_1.V_5.Y4.Y6);
Z171 = Z171->U_1.V_5.Y4.Y5;
break;
case Zq0A4_103:;
Z171 = Z171->U_1.V_8.Y7.Y1;
break;
case Zq0A4_104:;
Z171 = Z171->U_1.V_9.Y8.Y1;
break;
case Zq0A4_105:;
Z170(Z171->U_1.V_10.Y9.Y8);
Z171 = Z171->U_1.V_10.Y9.Y1;
break;
case Zq0A4_106:;
Z170(Z171->U_1.V_11.Y10.Y8);
Z171 = Z171->U_1.V_11.Y10.Y1;
break;
case Zq0A4_107:;
Z171 = Z171->U_1.V_12.Y11.Y1;
break;
case Zq0A4_108:;
Z171 = Z171->U_1.V_13.Y12.Y1;
break;
case Zq0A4_109:;
Z171 = Z171->U_1.V_14.Y13.Y1;
break;
case Zq0A4_110:;
Z171 = Z171->U_1.V_15.Y14.Y1;
break;
case Zq0A4_111:;
Z171 = Z171->U_1.V_16.Y15.Y1;
break;
default:
return;
break;
}
} EXIT_1:;
}

static SHORTCARD Z183
# ifdef HAVE_ARGS
(Zq0A4_153 Z184)
# else
(Z184)
Zq0A4_153 Z184;
# endif
{
INTEGER Z185;

{
LONGINT B_1 = 1, B_2 = Z181;

if (B_1 <= B_2)
for (Z185 = B_1;; Z185 += 1) {
if (Z180->A[Z185] == Z184) {
return Z185;
}
if (Z185 >= B_2) break;
}
}
INC(Z181);
if (Z181 == Z179) {
ZarQdhNDD_2((ADDRESS *)&Z180, &Z179, (LONGINT)sizeof (Zq0A4_153));
}
Z180->A[Z181] = Z184;
return Z181;
}

static Zq0A4_153 Z187
# ifdef HAVE_ARGS
(SHORTCARD Z167)
# else
(Z167)
SHORTCARD Z167;
# endif
{
return Z180->A[Z167];
}

void Zq0A4L_2
# ifdef HAVE_ARGS
(ZfM_3 Z193, Zq0A4_153 Z171)
# else
(Z193, Z171)
ZfM_3 Z193;
Zq0A4_153 Z171;
# endif
{
Z157 = Z193;
if (Z182 == 0) {
Z181 = 0;
}
INC(Z182);
Z170(Z171);
Z194(Z171);
DEC(Z182);
}

static void Z194
# ifdef HAVE_ARGS
(Zq0A4_153 Z171)
# else
(Z171)
Zq0A4_153 Z171;
# endif
{
for (;;) {
if (Z171 == Zq0A4_97) {
ZfM_24(Z157, Z188);
return;
} else if (Z171->U_1.V_2.Y1.Y1 == 0) {
ZfM_24(Z157, Z191);
Z167 = Z183(Z171);
Z196((WORD *)&Z167, (LONGCARD)sizeof (Z167));
return;
} else if (Z171->U_1.V_2.Y1.Y1 > 1) {
ZfM_24(Z157, Z190);
Z167 = Z183(Z171);
Z196((WORD *)&Z167, (LONGCARD)sizeof (Z167));
ZfM_24(Z157, CHR(Z171->U_1.V_1.Y0));
} else {
ZfM_24(Z157, CHR(Z171->U_1.V_1.Y0));
}
Z171->U_1.V_2.Y1.Y1 = 0;
switch (Z171->U_1.V_1.Y0) {
case Zq0A4_100:;
Z197(Z171->U_1.V_5.Y4.Y1);
Z196((WORD *)&Z171->U_1.V_5.Y4.Y2, (LONGCARD)sizeof (Z171->U_1.V_5.Y4.Y2));
Z194(Z171->U_1.V_5.Y4.Y3);
Z194(Z171->U_1.V_5.Y4.Y4);
Z194(Z171->U_1.V_5.Y4.Y6);
Z171 = Z171->U_1.V_5.Y4.Y5;
break;
case Zq0A4_103:;
Z171 = Z171->U_1.V_8.Y7.Y1;
break;
case Zq0A4_104:;
Z197(Z171->U_1.V_9.Y8.Y3);
Z197(Z171->U_1.V_9.Y8.Y4);
Z197(Z171->U_1.V_9.Y8.Y5);
Z196((WORD *)&Z171->U_1.V_9.Y8.Y6, (LONGCARD)sizeof (Z171->U_1.V_9.Y8.Y6));
Z153(Z171->U_1.V_9.Y8.Y7);
Z171 = Z171->U_1.V_9.Y8.Y1;
break;
case Zq0A4_105:;
Z197(Z171->U_1.V_10.Y9.Y3);
Z197(Z171->U_1.V_10.Y9.Y4);
Z197(Z171->U_1.V_10.Y9.Y5);
Z196((WORD *)&Z171->U_1.V_10.Y9.Y6, (LONGCARD)sizeof (Z171->U_1.V_10.Y9.Y6));
Z153(Z171->U_1.V_10.Y9.Y7);
Z194(Z171->U_1.V_10.Y9.Y8);
Z171 = Z171->U_1.V_10.Y9.Y1;
break;
case Zq0A4_106:;
Z197(Z171->U_1.V_11.Y10.Y3);
Z197(Z171->U_1.V_11.Y10.Y4);
Z197(Z171->U_1.V_11.Y10.Y5);
Z196((WORD *)&Z171->U_1.V_11.Y10.Y6, (LONGCARD)sizeof (Z171->U_1.V_11.Y10.Y6));
Z153(Z171->U_1.V_11.Y10.Y7);
Z194(Z171->U_1.V_11.Y10.Y8);
Z171 = Z171->U_1.V_11.Y10.Y1;
break;
case Zq0A4_107:;
Z171 = Z171->U_1.V_12.Y11.Y1;
break;
case Zq0A4_108:;
Z171 = Z171->U_1.V_13.Y12.Y1;
break;
case Zq0A4_109:;
Z171 = Z171->U_1.V_14.Y13.Y1;
break;
case Zq0A4_110:;
Z171 = Z171->U_1.V_15.Y14.Y1;
break;
case Zq0A4_111:;
Z171 = Z171->U_1.V_16.Y15.Y1;
break;
default:
return;
break;
}
} EXIT_2:;
}

static void Z196
# ifdef HAVE_ARGS
(BYTE Z203[], LONGCARD O_1)
# else
(Z203, O_1)
BYTE Z203[];
LONGCARD O_1;
# endif
{
INTEGER Z185;

Z185 = ZfM_23(Z157, ADR1 (Z203), (INTEGER)(O_1 - 1) + 1);
}

static void Z197
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z185)
# else
(Z185)
Zfb3DLQ_0 Z185;
# endif
{
Zp1PEAFD_2 Z160;

Zfb3DLQ_3(Z185, &Z160);
Zp1PEAFD_22(Z157, &Z160);
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

Z182 = 0;
Z179 = Z178;
ZarQdhNDD_0((ADDRESS *)&Z180, &Z179, (LONGINT)sizeof (Zq0A4_153));
Zq0A4L_3();
}
