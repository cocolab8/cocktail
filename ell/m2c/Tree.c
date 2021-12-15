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

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

Zfb3DLQ_0 Zq0A4_1, Zq0A4_2;
Zq0A4_43 Zq0A4_96;
LONGCARD Zq0A4_97;
Zq0A4_57 Zq0A4_98;
ADDRESS Zq0A4_99, Zq0A4_100;
struct Tree_41 Zq0A4_101;
struct Tree_42 Zq0A4_102;
PROC Zq0A4_103;
BOOLEAN Zq0A4_104, Zq0A4_105;
INTEGER Zq0A4_106;
SHORTCARD Zq0A4_107, Zq0A4_108, Zq0A4_109;
Zp1PEAFD_2 Zq0A4_110;

static Zp1PEAFD_2 Z139;
static ZfM_3 Z140;
static SHORTCARD Z141, Z142;
typedef Zq0A4_43 *Z271;
static SHORTCARD Z272;
static SHORTCARD Z157;
static CHAR Z273;
static Zp1PEAFD_2 Z274;
#define Z275	((CHAR)'\374')
#define Z276	((CHAR)'\375')
#define Z277	((CHAR)'\376')
#define Z278	((CHAR)'\377')
static BOOLEAN Z291 ARGS ((CHAR Z292[], LONGCARD O_4, CHAR Z293[], LONGCARD O_3));
static void Z313 ARGS ((void));

Zq0A4_43 Zq0A4_111
 ARGS ((void))
{
Zq0A4_57 Z145;

Z145 = Zq0A4_98;
Zq0A4_98 = (Zq0A4_57)ZDtgCFKU_1((LONGINT)sizeof (Zq0A4_58));
Zq0A4_98->Y1 = Z145;
Zq0A4_99 = ADR (Zq0A4_98->Y0);
Zq0A4_100 = Zq0A4_99 + (Zq0A4_42 - Z141 + 1);
INC1(Zq0A4_97, Zq0A4_42);
return (Zq0A4_43)Zq0A4_99;
}

Zq0A4_43 Zq0A4_112
# ifdef HAVE_ARGS
(SHORTCARD Z157)
# else
(Z157)
SHORTCARD Z157;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Z157]);
Z158->U_1.V_1.Y0 = Z157;
Z158->U_1.V_2.Y1.Y1 = 0;
return Z158;
}

BOOLEAN Zq0A4_113
# ifdef HAVE_ARGS
(Zq0A4_43 Z164, SHORTCARD Z157)
# else
(Z164, Z157)
Zq0A4_43 Z164;
SHORTCARD Z157;
# endif
{
return Z164 != Zq0A4_5 && Z157 <= Z164->U_1.V_1.Y0 && Z164->U_1.V_1.Y0 <= Zq0A4_102.A[Z157];
}

Zq0A4_43 Zq0A4_114
# ifdef HAVE_ARGS
(Zq0A4_43 Z168, Zq0A4_43 Z169, Zq0A4_43 Z170)
# else
(Z168, Z169, Z170)
Zq0A4_43 Z168;
Zq0A4_43 Z169;
Zq0A4_43 Z170;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_6]);
Z158->U_1.V_1.Y0 = Zq0A4_6;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_59 *W_1 = &Z158->U_1.V_3.Y2;

W_1->Y1 = Z168;
W_1->Y2 = Z169;
W_1->Y3 = Z170;
}
return Z158;
}

Zq0A4_43 Zq0A4_115
 ARGS ((void))
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_7]);
Z158->U_1.V_1.Y0 = Zq0A4_7;
Z158->U_1.V_2.Y1.Y1 = 0;
return Z158;
}

Zq0A4_43 Zq0A4_116
 ARGS ((void))
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_8]);
Z158->U_1.V_1.Y0 = Zq0A4_8;
Z158->U_1.V_2.Y1.Y1 = 0;
return Z158;
}

Zq0A4_43 Zq0A4_117
# ifdef HAVE_ARGS
(Zq0A4_43 Z168, Zq0A4_43 Z179)
# else
(Z168, Z179)
Zq0A4_43 Z168;
Zq0A4_43 Z179;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_9]);
Z158->U_1.V_1.Y0 = Zq0A4_9;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_62 *W_2 = &Z158->U_1.V_6.Y5;

W_2->Y1 = Z168;
W_2->Y2 = Z179;
}
return Z158;
}

Zq0A4_43 Zq0A4_118
 ARGS ((void))
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_10]);
Z158->U_1.V_1.Y0 = Zq0A4_10;
Z158->U_1.V_2.Y1.Y1 = 0;
return Z158;
}

Zq0A4_43 Zq0A4_119
# ifdef HAVE_ARGS
(Zq0A4_43 Z184)
# else
(Z184)
Zq0A4_43 Z184;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_11]);
Z158->U_1.V_1.Y0 = Zq0A4_11;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_64 *W_3 = &Z158->U_1.V_8.Y7;

W_3->Y1 = Z184;
}
return Z158;
}

Zq0A4_43 Zq0A4_120
# ifdef HAVE_ARGS
(Zq0A4_43 Z184)
# else
(Z184)
Zq0A4_43 Z184;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_12]);
Z158->U_1.V_1.Y0 = Zq0A4_12;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_65 *W_4 = &Z158->U_1.V_9.Y8;

W_4->Y1 = Z184;
}
return Z158;
}

Zq0A4_43 Zq0A4_121
# ifdef HAVE_ARGS
(Zq0A4_43 Z184)
# else
(Z184)
Zq0A4_43 Z184;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_13]);
Z158->U_1.V_1.Y0 = Zq0A4_13;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_66 *W_5 = &Z158->U_1.V_10.Y9;

W_5->Y1 = Z184;
}
return Z158;
}

Zq0A4_43 Zq0A4_122
# ifdef HAVE_ARGS
(Zq0A4_43 Z184)
# else
(Z184)
Zq0A4_43 Z184;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_14]);
Z158->U_1.V_1.Y0 = Zq0A4_14;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_67 *W_6 = &Z158->U_1.V_11.Y10;

W_6->Y1 = Z184;
}
return Z158;
}

Zq0A4_43 Zq0A4_123
# ifdef HAVE_ARGS
(Zq0A4_43 Z184)
# else
(Z184)
Zq0A4_43 Z184;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_15]);
Z158->U_1.V_1.Y0 = Zq0A4_15;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_68 *W_7 = &Z158->U_1.V_12.Y11;

W_7->Y1 = Z184;
}
return Z158;
}

Zq0A4_43 Zq0A4_124
 ARGS ((void))
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_16]);
Z158->U_1.V_1.Y0 = Zq0A4_16;
Z158->U_1.V_2.Y1.Y1 = 0;
return Z158;
}

Zq0A4_43 Zq0A4_125
 ARGS ((void))
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_17]);
Z158->U_1.V_1.Y0 = Zq0A4_17;
Z158->U_1.V_2.Y1.Y1 = 0;
return Z158;
}

Zq0A4_43 Zq0A4_126
# ifdef HAVE_ARGS
(Zq0A4_43 Z184, Zq0A4_43 Z199)
# else
(Z184, Z199)
Zq0A4_43 Z184;
Zq0A4_43 Z199;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_18]);
Z158->U_1.V_1.Y0 = Zq0A4_18;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_71 *W_8 = &Z158->U_1.V_15.Y14;

W_8->Y1 = Z184;
W_8->Y2 = Z199;
}
return Z158;
}

Zq0A4_43 Zq0A4_127
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zp1PEAFi_1 Z204)
# else
(Z203, Z204)
ZmtLFGGBG_0 Z203;
Zp1PEAFi_1 Z204;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_19]);
Z158->U_1.V_1.Y0 = Zq0A4_19;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_72 *W_9 = &Z158->U_1.V_16.Y15;

W_9->Y1 = Z203;
W_9->Y2 = Z204;
}
return Z158;
}

Zq0A4_43 Zq0A4_128
 ARGS ((void))
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_20]);
Z158->U_1.V_1.Y0 = Zq0A4_20;
Z158->U_1.V_2.Y1.Y1 = 0;
return Z158;
}

Zq0A4_43 Zq0A4_129
 ARGS ((void))
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_21]);
Z158->U_1.V_1.Y0 = Zq0A4_21;
Z158->U_1.V_2.Y1.Y1 = 0;
return Z158;
}

Zq0A4_43 Zq0A4_130
# ifdef HAVE_ARGS
(Zq0A4_43 Z169, Zq0A4_43 Z212)
# else
(Z169, Z212)
Zq0A4_43 Z169;
Zq0A4_43 Z212;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_22]);
Z158->U_1.V_1.Y0 = Zq0A4_22;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_75 *W_10 = &Z158->U_1.V_19.Y18;

W_10->Y1 = Z169;
W_10->Y2 = Z212;
}
return Z158;
}

Zq0A4_43 Zq0A4_131
# ifdef HAVE_ARGS
(Zq0A4_43 Z216, Zfb3DLQ_0 Z217, ZmtLFGGBG_0 Z203, INTEGER Z218)
# else
(Z216, Z217, Z203, Z218)
Zq0A4_43 Z216;
Zfb3DLQ_0 Z217;
ZmtLFGGBG_0 Z203;
INTEGER Z218;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_23]);
Z158->U_1.V_1.Y0 = Zq0A4_23;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_76 *W_11 = &Z158->U_1.V_20.Y19;

W_11->Y1 = Z216;
W_11->Y2 = Z217;
W_11->Y3 = Z203;
W_11->Y4 = Z218;
}
return Z158;
}

Zq0A4_43 Zq0A4_132
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zfb3DLQ_0 Z224, BOOLEAN Z225)
# else
(Z203, Z224, Z225)
ZmtLFGGBG_0 Z203;
Zfb3DLQ_0 Z224;
BOOLEAN Z225;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_24]);
Z158->U_1.V_1.Y0 = Zq0A4_24;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_77 *W_12 = &Z158->U_1.V_21.Y20;

W_12->Y1 = Z203;
W_12->Y2 = Z224;
W_12->Y3 = Z225;
}
return Z158;
}

Zq0A4_43 Zq0A4_133
 ARGS ((void))
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_25]);
Z158->U_1.V_1.Y0 = Zq0A4_25;
Z158->U_1.V_2.Y1.Y1 = 0;
return Z158;
}

Zq0A4_43 Zq0A4_134
 ARGS ((void))
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_26]);
Z158->U_1.V_1.Y0 = Zq0A4_26;
Z158->U_1.V_2.Y1.Y1 = 0;
return Z158;
}

Zq0A4_43 Zq0A4_135
# ifdef HAVE_ARGS
(Zq0A4_43 Z170, Zq0A4_43 Z233)
# else
(Z170, Z233)
Zq0A4_43 Z170;
Zq0A4_43 Z233;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_27]);
Z158->U_1.V_1.Y0 = Zq0A4_27;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_80 *W_13 = &Z158->U_1.V_24.Y23;

W_13->Y1 = Z170;
W_13->Y2 = Z233;
}
return Z158;
}

Zq0A4_43 Zq0A4_136
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zq0A4_43 Z216, Zq0A4_43 Z184, Zq0A4_43 Z237)
# else
(Z203, Z216, Z184, Z237)
ZmtLFGGBG_0 Z203;
Zq0A4_43 Z216;
Zq0A4_43 Z184;
Zq0A4_43 Z237;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_28]);
Z158->U_1.V_1.Y0 = Zq0A4_28;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_81 *W_14 = &Z158->U_1.V_25.Y24;

W_14->Y1 = Z203;
W_14->Y2 = Z216;
W_14->Y3 = Z184;
W_14->Y4 = Z237;
}
return Z158;
}

Zq0A4_43 Zq0A4_137
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203)
# else
(Z203)
ZmtLFGGBG_0 Z203;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_29]);
Z158->U_1.V_1.Y0 = Zq0A4_29;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_82 *W_15 = &Z158->U_1.V_26.Y25;

W_15->Y1 = Z203;
}
return Z158;
}

Zq0A4_43 Zq0A4_138
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zq0A4_43 Z237)
# else
(Z203, Z237)
ZmtLFGGBG_0 Z203;
Zq0A4_43 Z237;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_30]);
Z158->U_1.V_1.Y0 = Zq0A4_30;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_83 *W_16 = &Z158->U_1.V_27.Y26;

W_16->Y1 = Z203;
W_16->Y11 = Z237;
}
return Z158;
}

Zq0A4_43 Zq0A4_139
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zq0A4_43 Z237)
# else
(Z203, Z237)
ZmtLFGGBG_0 Z203;
Zq0A4_43 Z237;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_31]);
Z158->U_1.V_1.Y0 = Zq0A4_31;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_84 *W_17 = &Z158->U_1.V_28.Y27;

W_17->Y1 = Z203;
W_17->Y11 = Z237;
}
return Z158;
}

Zq0A4_43 Zq0A4_140
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zq0A4_43 Z237)
# else
(Z203, Z237)
ZmtLFGGBG_0 Z203;
Zq0A4_43 Z237;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_32]);
Z158->U_1.V_1.Y0 = Zq0A4_32;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_85 *W_18 = &Z158->U_1.V_29.Y28;

W_18->Y1 = Z203;
W_18->Y11 = Z237;
}
return Z158;
}

Zq0A4_43 Zq0A4_141
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zq0A4_43 Z248, Zq0A4_43 Z249)
# else
(Z203, Z248, Z249)
ZmtLFGGBG_0 Z203;
Zq0A4_43 Z248;
Zq0A4_43 Z249;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_33]);
Z158->U_1.V_1.Y0 = Zq0A4_33;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_86 *W_19 = &Z158->U_1.V_30.Y29;

W_19->Y1 = Z203;
W_19->Y11 = Z248;
W_19->Y12 = Z249;
}
return Z158;
}

Zq0A4_43 Zq0A4_142
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zq0A4_43 Z184)
# else
(Z203, Z184)
ZmtLFGGBG_0 Z203;
Zq0A4_43 Z184;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_34]);
Z158->U_1.V_1.Y0 = Zq0A4_34;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_87 *W_20 = &Z158->U_1.V_31.Y30;

W_20->Y1 = Z203;
W_20->Y11 = Z184;
}
return Z158;
}

Zq0A4_43 Zq0A4_143
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zq0A4_43 Z216)
# else
(Z203, Z216)
ZmtLFGGBG_0 Z203;
Zq0A4_43 Z216;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_35]);
Z158->U_1.V_1.Y0 = Zq0A4_35;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_88 *W_21 = &Z158->U_1.V_32.Y31;

W_21->Y1 = Z203;
W_21->Y11 = Z216;
}
return Z158;
}

Zq0A4_43 Zq0A4_144
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203)
# else
(Z203)
ZmtLFGGBG_0 Z203;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_36]);
Z158->U_1.V_1.Y0 = Zq0A4_36;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_89 *W_22 = &Z158->U_1.V_33.Y32;

W_22->Y1 = Z203;
}
return Z158;
}

Zq0A4_43 Zq0A4_145
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203)
# else
(Z203)
ZmtLFGGBG_0 Z203;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_37]);
Z158->U_1.V_1.Y0 = Zq0A4_37;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_90 *W_23 = &Z158->U_1.V_34.Y33;

W_23->Y1 = Z203;
W_23->C_0_default = Zq0A4_5;
}
return Z158;
}

Zq0A4_43 Zq0A4_146
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zq0A4_43 Z262, Zq0A4_43 Z237)
# else
(Z203, Z262, Z237)
ZmtLFGGBG_0 Z203;
Zq0A4_43 Z262;
Zq0A4_43 Z237;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_38]);
Z158->U_1.V_1.Y0 = Zq0A4_38;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_91 *W_24 = &Z158->U_1.V_35.Y34;

W_24->Y1 = Z203;
W_24->Y13 = Z262;
W_24->Y14 = Z237;
}
return Z158;
}

Zq0A4_43 Zq0A4_147
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203)
# else
(Z203)
ZmtLFGGBG_0 Z203;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_39]);
Z158->U_1.V_1.Y0 = Zq0A4_39;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_92 *W_25 = &Z158->U_1.V_36.Y35;

W_25->Y1 = Z203;
}
return Z158;
}

Zq0A4_43 Zq0A4_148
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203)
# else
(Z203)
ZmtLFGGBG_0 Z203;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_40]);
Z158->U_1.V_1.Y0 = Zq0A4_40;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_93 *W_26 = &Z158->U_1.V_37.Y36;

W_26->Y1 = Z203;
}
return Z158;
}

Zq0A4_43 Zq0A4_149
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z203, Zq0A4_43 Z269, Zq0A4_43 Z237)
# else
(Z203, Z269, Z237)
ZmtLFGGBG_0 Z203;
Zq0A4_43 Z269;
Zq0A4_43 Z237;
# endif
{
Zq0A4_43 Z158;

Z158 = (Zq0A4_43)Zq0A4_99;
if ((ADDRESS)Z158 >= Zq0A4_100) {
Z158 = Zq0A4_111();
}
INC1(Zq0A4_99, Zq0A4_101.A[Zq0A4_41]);
Z158->U_1.V_1.Y0 = Zq0A4_41;
Z158->U_1.V_2.Y1.Y1 = 0;
{
register Zq0A4_94 *W_27 = &Z158->U_1.V_38.Y37;

W_27->Y1 = Z203;
W_27->Y11 = Z269;
W_27->Y12 = Z237;
}
return Z158;
}

Zq0A4_43 Zq0A4_150
# ifdef HAVE_ARGS
(Zq0A4_43 Z280)
# else
(Z280)
Zq0A4_43 Z280;
# endif
{
Zq0A4_43 Z281, Z282, Z283;

Z281 = Z280;
Z283 = Z280;
for (;;) {
switch (Z280->U_1.V_1.Y0) {
case Zq0A4_9:;
Z282 = Z280->U_1.V_6.Y5.Y1;
Z280->U_1.V_6.Y5.Y1 = Z281;
break;
case Zq0A4_18:;
Z282 = Z280->U_1.V_15.Y14.Y1;
Z280->U_1.V_15.Y14.Y1 = Z281;
break;
case Zq0A4_22:;
Z282 = Z280->U_1.V_19.Y18.Y1;
Z280->U_1.V_19.Y18.Y1 = Z281;
break;
case Zq0A4_27:;
Z282 = Z280->U_1.V_24.Y23.Y1;
Z280->U_1.V_24.Y23.Y1 = Z281;
break;
case Zq0A4_38:;
Z282 = Z280->U_1.V_35.Y34.Y13;
Z280->U_1.V_35.Y34.Y13 = Z281;
break;
case Zq0A4_41:;
Z282 = Z280->U_1.V_38.Y37.Y11;
Z280->U_1.V_38.Y37.Y11 = Z281;
break;
default:
goto EXIT_1;
break;
}
Z281 = Z280;
Z280 = Z282;
} EXIT_1:;
switch (Z283->U_1.V_1.Y0) {
case Zq0A4_9:;
Z283->U_1.V_6.Y5.Y1 = Z280;
break;
case Zq0A4_18:;
Z283->U_1.V_15.Y14.Y1 = Z280;
break;
case Zq0A4_22:;
Z283->U_1.V_19.Y18.Y1 = Z280;
break;
case Zq0A4_27:;
Z283->U_1.V_24.Y23.Y1 = Z280;
break;
case Zq0A4_38:;
Z283->U_1.V_35.Y34.Y13 = Z280;
break;
case Zq0A4_41:;
Z283->U_1.V_38.Y37.Y11 = Z280;
break;
default:
break;
}
return Z281;
}

void Zq0A4_151
# ifdef HAVE_ARGS
(Zq0A4_43 Z158, Zq0A4_44 Z285)
# else
(Z158, Z285)
Zq0A4_43 Z158;
Zq0A4_44 Z285;
# endif
{
Zq0A4_43 Z287;

for (;;) {
if (Z158 == Zq0A4_5) {
return;
}
Z287 = Z158;
switch (Z158->U_1.V_1.Y0) {
case Zq0A4_9:;
Z158 = Z158->U_1.V_6.Y5.Y1;
break;
case Zq0A4_18:;
Z158 = Z158->U_1.V_15.Y14.Y1;
break;
case Zq0A4_22:;
Z158 = Z158->U_1.V_19.Y18.Y1;
break;
case Zq0A4_27:;
Z158 = Z158->U_1.V_24.Y23.Y1;
break;
case Zq0A4_38:;
Z158 = Z158->U_1.V_35.Y34.Y13;
break;
case Zq0A4_41:;
Z158 = Z158->U_1.V_38.Y37.Y11;
break;
default:
return;
break;
}
(*Z285)(Z287);
} EXIT_2:;
}

static BOOLEAN Z291
# ifdef HAVE_ARGS
(CHAR Z292[], LONGCARD O_4, CHAR Z293[], LONGCARD O_3)
# else
(Z292, O_4, Z293, O_3)
CHAR Z292[];
LONGCARD O_4;
CHAR Z293[];
LONGCARD O_3;
# endif
{
INTEGER Z142;

if ((O_4 - 1) != (O_3 - 1)) {
return FALSE;
}
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_4 - 1);

if (B_1 <= B_2)
for (Z142 = B_1;; Z142 += 1) {
if (Z292[Z142] != Z293[Z142]) {
return FALSE;
}
if (Z142 >= B_2) break;
}
}
return TRUE;
}

void Zq0A4_152
# ifdef HAVE_ARGS
(CHAR Z289[], LONGCARD O_2, CHAR Z290[], LONGCARD O_1)
# else
(Z289, O_2, Z290, O_1)
CHAR Z289[];
LONGCARD O_2;
CHAR Z290[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z294;

Zp1PEAFD_13(Z290, O_1, &Z294);
if (Z291(Z289, O_2, (STRING)"CheckReportNoTree", 17L)) {
Zq0A4_104 = Zp1PEAFD_15(&Z294) != 0;
} else if (Z291(Z289, O_2, (STRING)"CheckReportNodes", 16L)) {
Zq0A4_105 = Zp1PEAFD_15(&Z294) != 0;
} else if (Z291(Z289, O_2, (STRING)"DrawBoxHeight", 13L)) {
Zq0A4_109 = Zp1PEAFD_15(&Z294);
} else if (Z291(Z289, O_2, (STRING)"DrawBoxWidth", 12L)) {
Zq0A4_108 = Zp1PEAFD_15(&Z294);
} else if (Z291(Z289, O_2, (STRING)"DrawDepth", 9L)) {
Zq0A4_106 = Zp1PEAFD_15(&Z294);
} else if (Z291(Z289, O_2, (STRING)"DrawLength", 10L)) {
Zq0A4_107 = Zp1PEAFD_15(&Z294);
} else if (Z291(Z289, O_2, (STRING)"DrawFileName", 12L)) {
Zp1PEAFD_3(&Zq0A4_110, &Z294);
} else if (Z291(Z289, O_2, (STRING)"TreatTVAasChild", 15L)) {
} else {
ZblNKKO_45((LONGCARD)ZblNKKO_12, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR1 (Z289));
}
}

void Zq0A4_153
 ARGS ((void))
{
Zq0A4_1 = Zfb3DLQ_1;
Zp1PEAFD_13((STRING)"Parser", 6L, &Z139);
Zq0A4_2 = Zfb3DLQ_2(&Z139);
}

void Zq0A4_154
 ARGS ((void))
{
}

static void Z313
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_Tree ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Strings ();
BEGIN_IO ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_StringM ();
BEGIN_Position ();
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
BEGIN_Idents ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Position ();
BEGIN_IO ();

Zq0A4_98 = NIL;
Zq0A4_99 = (ADDRESS)NIL;
Zq0A4_100 = (ADDRESS)NIL;
Zq0A4_97 = 0;
Zq0A4_103 = Z313;
Zq0A4_104 = TRUE;
Zq0A4_105 = TRUE;
Zq0A4_106 = 6;
Zq0A4_107 = 256;
Zq0A4_108 = 60;
Zq0A4_109 = 20;
Zp1PEAFD_4(&Zq0A4_110);
Zq0A4_101.A[Zq0A4_6] = sizeof (Zq0A4_59);
Zq0A4_101.A[Zq0A4_7] = sizeof (Zq0A4_60);
Zq0A4_101.A[Zq0A4_8] = sizeof (Zq0A4_61);
Zq0A4_101.A[Zq0A4_9] = sizeof (Zq0A4_62);
Zq0A4_101.A[Zq0A4_10] = sizeof (Zq0A4_63);
Zq0A4_101.A[Zq0A4_11] = sizeof (Zq0A4_64);
Zq0A4_101.A[Zq0A4_12] = sizeof (Zq0A4_65);
Zq0A4_101.A[Zq0A4_13] = sizeof (Zq0A4_66);
Zq0A4_101.A[Zq0A4_14] = sizeof (Zq0A4_67);
Zq0A4_101.A[Zq0A4_15] = sizeof (Zq0A4_68);
Zq0A4_101.A[Zq0A4_16] = sizeof (Zq0A4_69);
Zq0A4_101.A[Zq0A4_17] = sizeof (Zq0A4_70);
Zq0A4_101.A[Zq0A4_18] = sizeof (Zq0A4_71);
Zq0A4_101.A[Zq0A4_19] = sizeof (Zq0A4_72);
Zq0A4_101.A[Zq0A4_20] = sizeof (Zq0A4_73);
Zq0A4_101.A[Zq0A4_21] = sizeof (Zq0A4_74);
Zq0A4_101.A[Zq0A4_22] = sizeof (Zq0A4_75);
Zq0A4_101.A[Zq0A4_23] = sizeof (Zq0A4_76);
Zq0A4_101.A[Zq0A4_24] = sizeof (Zq0A4_77);
Zq0A4_101.A[Zq0A4_25] = sizeof (Zq0A4_78);
Zq0A4_101.A[Zq0A4_26] = sizeof (Zq0A4_79);
Zq0A4_101.A[Zq0A4_27] = sizeof (Zq0A4_80);
Zq0A4_101.A[Zq0A4_28] = sizeof (Zq0A4_81);
Zq0A4_101.A[Zq0A4_29] = sizeof (Zq0A4_82);
Zq0A4_101.A[Zq0A4_30] = sizeof (Zq0A4_83);
Zq0A4_101.A[Zq0A4_31] = sizeof (Zq0A4_84);
Zq0A4_101.A[Zq0A4_32] = sizeof (Zq0A4_85);
Zq0A4_101.A[Zq0A4_33] = sizeof (Zq0A4_86);
Zq0A4_101.A[Zq0A4_34] = sizeof (Zq0A4_87);
Zq0A4_101.A[Zq0A4_35] = sizeof (Zq0A4_88);
Zq0A4_101.A[Zq0A4_36] = sizeof (Zq0A4_89);
Zq0A4_101.A[Zq0A4_37] = sizeof (Zq0A4_90);
Zq0A4_101.A[Zq0A4_38] = sizeof (Zq0A4_91);
Zq0A4_101.A[Zq0A4_39] = sizeof (Zq0A4_92);
Zq0A4_101.A[Zq0A4_40] = sizeof (Zq0A4_93);
Zq0A4_101.A[Zq0A4_41] = sizeof (Zq0A4_94);
Z141 = 0;
for (Z142 = 1; Z142 <= 36; Z142 += 1) {
Zq0A4_101.A[Z142] = (LONGINT)((BITSET)(Zq0A4_101.A[Z142] + (CARDINAL)ZdaDDAD7_1 - 1) & ZdaDDAD7_2);
Z141 = ZdaDDAD7_4((LONGINT)Zq0A4_101.A[Z142], (LONGINT)Z141);
}
Zq0A4_102.A[Zq0A4_6] = Zq0A4_6;
Zq0A4_102.A[Zq0A4_7] = Zq0A4_9;
Zq0A4_102.A[Zq0A4_8] = Zq0A4_8;
Zq0A4_102.A[Zq0A4_9] = Zq0A4_9;
Zq0A4_102.A[Zq0A4_10] = Zq0A4_15;
Zq0A4_102.A[Zq0A4_11] = Zq0A4_11;
Zq0A4_102.A[Zq0A4_12] = Zq0A4_12;
Zq0A4_102.A[Zq0A4_13] = Zq0A4_13;
Zq0A4_102.A[Zq0A4_14] = Zq0A4_14;
Zq0A4_102.A[Zq0A4_15] = Zq0A4_15;
Zq0A4_102.A[Zq0A4_16] = Zq0A4_18;
Zq0A4_102.A[Zq0A4_17] = Zq0A4_17;
Zq0A4_102.A[Zq0A4_18] = Zq0A4_18;
Zq0A4_102.A[Zq0A4_19] = Zq0A4_19;
Zq0A4_102.A[Zq0A4_20] = Zq0A4_22;
Zq0A4_102.A[Zq0A4_21] = Zq0A4_21;
Zq0A4_102.A[Zq0A4_22] = Zq0A4_22;
Zq0A4_102.A[Zq0A4_23] = Zq0A4_23;
Zq0A4_102.A[Zq0A4_24] = Zq0A4_24;
Zq0A4_102.A[Zq0A4_25] = Zq0A4_27;
Zq0A4_102.A[Zq0A4_26] = Zq0A4_26;
Zq0A4_102.A[Zq0A4_27] = Zq0A4_27;
Zq0A4_102.A[Zq0A4_28] = Zq0A4_28;
Zq0A4_102.A[Zq0A4_29] = Zq0A4_41;
Zq0A4_102.A[Zq0A4_30] = Zq0A4_30;
Zq0A4_102.A[Zq0A4_31] = Zq0A4_31;
Zq0A4_102.A[Zq0A4_32] = Zq0A4_32;
Zq0A4_102.A[Zq0A4_33] = Zq0A4_33;
Zq0A4_102.A[Zq0A4_34] = Zq0A4_34;
Zq0A4_102.A[Zq0A4_35] = Zq0A4_35;
Zq0A4_102.A[Zq0A4_36] = Zq0A4_38;
Zq0A4_102.A[Zq0A4_37] = Zq0A4_37;
Zq0A4_102.A[Zq0A4_38] = Zq0A4_38;
Zq0A4_102.A[Zq0A4_39] = Zq0A4_41;
Zq0A4_102.A[Zq0A4_40] = Zq0A4_40;
Zq0A4_102.A[Zq0A4_41] = Zq0A4_41;
Zq0A4_153();
}
