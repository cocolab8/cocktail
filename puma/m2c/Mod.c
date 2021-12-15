#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
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

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_Optimize
#include "Optimize.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Mod
#include "Mod.h"
#endif

ZfM_3 ZjqD_0;
BOOLEAN ZjqD_1;
PROC ZjqD_2;

static enum {Z164, Z165, Z166} Z163;
static CARDINAL Z167, Z168;
static INTEGER Z169;
static Zq0A4_185 Z170, Z171, Z172, Z173, Z174;
static Zfb3DLQ_0 Z175;
static BOOLEAN Z176;
static Zq0A4_252 Z177;
static void Z178 ARGS ((ZmtLFGGBG_0 Z179));
static void Z182 ARGS ((Zq0A4_185 Z183, Zq0A4_185 Z184));
static void Z213 ARGS ((Zq0A4_185 Z183));
static void Z211 ARGS ((Zq0A4_185 Z183));
static void Z234 ARGS ((Zq0A4_185 Z183));
static void Z208 ARGS ((Zq0A4_185 Z183));
static void Z238 ARGS ((CARDINAL Z167));
static void Z237 ARGS ((Zq0A4_185 Z183, Zq0A4_185 Z184));
static void Z240 ARGS ((Zq0A4_185 Z183, Zq0A4_185 Z184));
static void Z239 ARGS ((Zq0A4_185 Z184));
static INTEGER Z244 ARGS ((Zq0A4_185 Z183, INTEGER Z169));
static INTEGER Z245 ARGS ((Zq0A4_185 Z183, INTEGER Z169));
static INTEGER Z247 ARGS ((Zq0A4_185 Z183, INTEGER Z169));
static void Z210 ARGS ((Zq0A4_185 Z183));
static void Z255 ARGS ((Zq0A4_185 Z183, Zq0A4_185 Z184));
static void Z257 ARGS ((CHAR Z258[], LONGCARD O_1));
static BOOLEAN Z261 ARGS ((BYTE Z262[], LONGCARD O_3, BYTE Z263[], LONGCARD O_2));
struct S_16 {
union {
char dummy;
} U_1;
};
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z286 ARGS ((Zq0A4_185 Z287));
struct S_14 {
union {
char dummy;
} U_1;
};
struct S_12 {
union {
struct {
struct S_13 {
Zfb3DLQ_0 Y0;
} Y0;
} V_1;
} U_1;
};
static void Z299 ARGS ((Zq0A4_185 Z351));
struct S_11 {
union {
char dummy;
} U_1;
};
static void Z293 ARGS ((Zq0A4_185 Z352));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z302 ARGS ((Zq0A4_185 Z183));
struct S_9 {
union {
char dummy;
} U_1;
};
static void Z304 ARGS ((Zq0A4_185 Z183));
struct S_8 {
union {
char dummy;
} U_1;
};
static void Z314 ARGS ((Zq0A4_185 Z183));
struct S_7 {
union {
char dummy;
} U_1;
};
static void Z357 ARGS ((Zq0A4_185 Z358, Zq0A4_185 Z359));
struct S_6 {
union {
char dummy;
} U_1;
};
static void Z306 ARGS ((Zq0A4_185 Z183));
struct S_5 {
union {
char dummy;
} U_1;
};
static void Z363 ARGS ((Zq0A4_185 Z183));
struct S_3 {
union {
struct {
struct S_4 {
CARDINAL Y0;
} Y0;
} V_1;
} U_1;
};
static void Z249 ARGS ((Zq0A4_185 Z372, Zq0A4_185 Z373));
struct S_2 {
union {
char dummy;
} U_1;
};
static void Z251 ARGS ((Zq0A4_185 Z374, Zq0A4_185 Z375));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z378 ARGS ((void));

static void Z178
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z179)
# else
(Z179)
ZmtLFGGBG_0 Z179;
# endif
{
if (Z179.Y0 != 0) {
ZfM_29(Zq0A4_217, (STRING)"(* line ", 8L);
Zq0A4_240((LONGINT)Z179.Y0);
ZfM_29(Zq0A4_217, (STRING)" \"", 2L);
Zq0A4_237(Z179.Y2);
ZfM_29(Zq0A4_217, (STRING)"\" *)", 4L);
ZfM_33(Zq0A4_217);
}
}

static void Z182
# ifdef HAVE_ARGS
(Zq0A4_185 Z183, Zq0A4_185 Z184)
# else
(Z183, Z184)
Zq0A4_185 Z183, Z184;
# endif
{
Zfb3DLQ_0 Z185;
Zq0A4_185 Z186;

if (Z183->U_1.V_1.Y0 == Zq0A4_108 || Z184->U_1.V_1.Y0 != Zq0A4_159) {
return;
}
Z186 = Z183->U_1.V_58.Y57.Y1;
switch (Z186->U_1.V_1.Y0) {
case Zq0A4_114:;
{
register Zq0A4_318 *W_1 = &Z186->U_1.V_63.Y62;

Z185 = W_1->Y9->U_1.V_5.Y4.Y8->U_1.V_111.Y110.Y1->U_1.V_35.Y34.Y1;
if (Z184->U_1.V_108.Y107.Y3->U_1.V_1.Y0 == Zq0A4_163 || ZpmCQ_24(W_1->Y9->U_1.V_5.Y4.Y8->U_1.V_111.Y110.Y2, Z184->U_1.V_108.Y107.Y3->U_1.V_111.Y110.Y2)) {
if (W_1->Y9->U_1.V_5.Y4.Y4->U_1.V_1.Y0 == Zq0A4_55) {
ZfM_29(Zq0A4_217, (STRING)"      IF (", 10L);
ZjqD_5(W_1->Y4);
ZfM_29(Zq0A4_217, (STRING)" = NIL) OR (", 12L);
ZjqD_5(W_1->Y4);
ZfM_29(Zq0A4_217, (STRING)"^.Kind # ", 9L);
} else {
ZfM_29(Zq0A4_217, (STRING)"      IF NOT ", 13L);
Zq0A4_237(Z185);
ZfM_29(Zq0A4_217, (STRING)".IsType (", 9L);
ZjqD_5(W_1->Y4);
ZfM_29(Zq0A4_217, (STRING)", ", 2L);
}
Zq0A4_237(Z185);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(W_1->Y9->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_217, (STRING)") THEN EXIT; END;", 17L);
ZfM_33(Zq0A4_217);
}
Z182(W_1->Y7, W_1->Y9->U_1.V_5.Y4.Y7);
}
break;
case Zq0A4_115:;
{
register Zq0A4_319 *W_2 = &Z186->U_1.V_64.Y63;

if (W_2->Y6 != Zq0A4_53) {
{
register Zq0A4_363 *W_3 = &W_2->Y6->U_1.V_108.Y107;

ZfM_29(Zq0A4_217, (STRING)"      IF NOT (equal", 19L);
ZjqD_5(W_3->Y3);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
ZjqD_5(W_3->Y4);
ZfM_29(Zq0A4_217, (STRING)", ", 2L);
ZjqD_5(Z186->U_1.V_64.Y63.Y4);
ZfM_29(Zq0A4_217, (STRING)")) THEN EXIT; END;", 18L);
ZfM_33(Zq0A4_217);
}
}
}
break;
case Zq0A4_116:;
ZfM_29(Zq0A4_217, (STRING)"      IF ", 9L);
ZjqD_5(Z186->U_1.V_65.Y64.Y4);
ZfM_29(Zq0A4_217, (STRING)" # NIL THEN EXIT; END;", 22L);
ZfM_33(Zq0A4_217);
break;
case Zq0A4_117:;
break;
case Zq0A4_118:;
return;
break;
case Zq0A4_119:;
{
register Zq0A4_323 *W_4 = &Z186->U_1.V_68.Y67;

Z208(W_4->Y5);
ZfM_29(Zq0A4_217, (STRING)"      IF NOT (equal", 19L);
ZjqD_5(Z184->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
ZjqD_5(W_4->Y4);
ZfM_29(Zq0A4_217, (STRING)", ", 2L);
Z210(W_4->Y5);
ZfM_29(Zq0A4_217, (STRING)")) THEN EXIT; END;", 18L);
ZfM_33(Zq0A4_217);
Z211(W_4->Y5);
}
break;
}
Z182(Z183->U_1.V_58.Y57.Y2, Z184->U_1.V_108.Y107.Y1);
}

static void Z213
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
if (Z183->U_1.V_1.Y0 == Zq0A4_121) {
return;
}
if (Z183->U_1.V_71.Y70.Y1->U_1.V_1.Y0 == Zq0A4_118) {
return;
}
Z211(Z183->U_1.V_71.Y70.Y1);
Z213(Z183->U_1.V_71.Y70.Y2);
}

static void Z211
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
switch (Z183->U_1.V_1.Y0) {
case Zq0A4_126:;
Z213(Z183->U_1.V_75.Y74.Y4);
break;
case Zq0A4_127:;
break;
case Zq0A4_129:;
break;
case Zq0A4_117:;
break;
case Zq0A4_136:;
break;
case Zq0A4_137:;
break;
case Zq0A4_128:;
break;
case Zq0A4_130:;
{
register Zq0A4_334 *W_5 = &Z183->U_1.V_79.Y78;

Z211(W_5->Y2);
Z213(W_5->Y3);
if (W_5->Y5 != Zq0A4_53) {
Z182(W_5->Y4, W_5->Y5->U_1.V_41.Y40.Y13);
}
}
break;
case Zq0A4_131:;
{
register Zq0A4_335 *W_6 = &Z183->U_1.V_80.Y79;

Z211(W_6->Y2);
Z211(W_6->Y4);
}
break;
case Zq0A4_132:;
case Zq0A4_133:;
Z211(Z183->U_1.V_81.Y80.Y3);
break;
case Zq0A4_134:;
Z211(Z183->U_1.V_83.Y82.Y2);
Z213(Z183->U_1.V_83.Y82.Y3);
break;
case Zq0A4_135:;
Z211(Z183->U_1.V_84.Y83.Y2);
break;
case Zq0A4_138:;
Z211(Z183->U_1.V_87.Y86.Y2);
break;
}
}

static void Z234
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
if (Z183->U_1.V_1.Y0 == Zq0A4_121) {
return;
}
if (Z183->U_1.V_71.Y70.Y1->U_1.V_1.Y0 == Zq0A4_118) {
return;
}
Z208(Z183->U_1.V_71.Y70.Y1);
Z234(Z183->U_1.V_71.Y70.Y2);
}

static void Z208
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
Zfb3DLQ_0 Z185;
CARDINAL Z235;

switch (Z183->U_1.V_1.Y0) {
case Zq0A4_126:;
{
register Zq0A4_330 *W_7 = &Z183->U_1.V_75.Y74;

Z185 = W_7->Y6->U_1.V_5.Y4.Y8->U_1.V_111.Y110.Y1->U_1.V_35.Y34.Y1;
ZfM_29(Zq0A4_217, (STRING)"      yyALLOC (", 15L);
Zq0A4_237(Z185);
ZfM_29(Zq0A4_217, (STRING)",Make", 5L);
Zq0A4_237(Z185);
ZfM_29(Zq0A4_217, (STRING)",", 1L);
Zq0A4_237(W_7->Y7);
ZfM_29(Zq0A4_217, (STRING)",", 1L);
Zq0A4_237(W_7->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_217, (STRING)")", 1L);
ZfM_33(Zq0A4_217);
if (W_7->Y4->U_1.V_1.Y0 == Zq0A4_122) {
ZfM_29(Zq0A4_217, (STRING)"      WITH ", 11L);
Zq0A4_237(W_7->Y7);
ZfM_29(Zq0A4_217, (STRING)"^.", 2L);
Zq0A4_237(W_7->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
Z237(W_7->Y4, W_7->Y6->U_1.V_5.Y4.Y7);
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
}
}
break;
case Zq0A4_127:;
break;
case Zq0A4_129:;
break;
case Zq0A4_117:;
break;
case Zq0A4_136:;
break;
case Zq0A4_137:;
break;
case Zq0A4_128:;
break;
case Zq0A4_130:;
{
register Zq0A4_334 *W_8 = &Z183->U_1.V_79.Y78;

Z208(W_8->Y2);
Z234(W_8->Y3);
}
break;
case Zq0A4_131:;
{
register Zq0A4_335 *W_9 = &Z183->U_1.V_80.Y79;

Z208(W_9->Y2);
Z208(W_9->Y4);
}
break;
case Zq0A4_132:;
case Zq0A4_133:;
Z208(Z183->U_1.V_81.Y80.Y3);
break;
case Zq0A4_134:;
Z208(Z183->U_1.V_83.Y82.Y2);
Z234(Z183->U_1.V_83.Y82.Y3);
break;
case Zq0A4_135:;
Z208(Z183->U_1.V_84.Y83.Y2);
break;
case Zq0A4_138:;
{
register Zq0A4_342 *W_10 = &Z183->U_1.V_87.Y86;

Z208(W_10->Y2);
if (W_10->Y3 != Zfb3DLQ_1) {
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(W_10->Y3);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(W_10->Y2);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
if (W_10->Y4->U_1.V_1.Y0 == Zq0A4_159 && W_10->Y4->U_1.V_108.Y107.Y3->U_1.V_1.Y0 == Zq0A4_162) {
{
register Zq0A4_366 *W_11 = &W_10->Y4->U_1.V_108.Y107.Y3->U_1.V_111.Y110;

Z177 = W_11->Y1->U_1.V_35.Y34.Y9;
Z175 = W_11->Y1->U_1.V_35.Y34.Y1;
Z235 = ZpmCQ_15(&W_11->Y2);
if (Z235 == 1) {
ZfM_29(Zq0A4_217, (STRING)"      IF (", 10L);
Zq0A4_237(W_10->Y3);
ZfM_29(Zq0A4_217, (STRING)" = NIL) OR (", 12L);
Zq0A4_237(W_10->Y3);
ZfM_29(Zq0A4_217, (STRING)"^.Kind # ", 9L);
Zq0A4_237(Z175);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(Z177->A[ZpmCQ_19(&W_11->Y2)]->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_217, (STRING)") THEN EXIT; END;", 17L);
ZfM_33(Zq0A4_217);
} else {
ZfM_29(Zq0A4_217, (STRING)"      IF ", 9L);
Zq0A4_237(W_10->Y3);
ZfM_29(Zq0A4_217, (STRING)" = NIL THEN EXIT; END;", 22L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"      CASE ", 11L);
Zq0A4_237(W_10->Y3);
ZfM_29(Zq0A4_217, (STRING)"^.Kind OF", 9L);
ZfM_33(Zq0A4_217);
ZpmCQ_33(W_11->Y2, (ZpmCQ_1)Z238);
ZfM_29(Zq0A4_217, (STRING)"      ELSE EXIT;", 16L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
}
}
}
}
}
break;
}
}

static void Z238
# ifdef HAVE_ARGS
(CARDINAL Z167)
# else
(Z167)
CARDINAL Z167;
# endif
{
ZfM_29(Zq0A4_217, (STRING)"      | ", 8L);
Zq0A4_237(Z175);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(Z177->A[Z167]->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_217, (STRING)":", 1L);
ZfM_33(Zq0A4_217);
}

static void Z237
# ifdef HAVE_ARGS
(Zq0A4_185 Z183, Zq0A4_185 Z184)
# else
(Z183, Z184)
Zq0A4_185 Z183, Z184;
# endif
{
if (Z183->U_1.V_1.Y0 == Zq0A4_121 || Z184->U_1.V_1.Y0 != Zq0A4_159) {
return;
}
if (Z183->U_1.V_71.Y70.Y1->U_1.V_1.Y0 == Zq0A4_118) {
Z239(Z184);
return;
}
Z240(Z183->U_1.V_71.Y70.Y1, Z184);
Z211(Z183->U_1.V_71.Y70.Y1);
Z237(Z183->U_1.V_71.Y70.Y2, Z184->U_1.V_108.Y107.Y1);
}

static void Z240
# ifdef HAVE_ARGS
(Zq0A4_185 Z183, Zq0A4_185 Z184)
# else
(Z183, Z184)
Zq0A4_185 Z183, Z184;
# endif
{
Zfb3DLQ_0 Z185;

if (Z183->U_1.V_1.Y0 == Zq0A4_126) {
{
register Zq0A4_330 *W_12 = &Z183->U_1.V_75.Y74;

Z185 = W_12->Y6->U_1.V_5.Y4.Y8->U_1.V_111.Y110.Y1->U_1.V_35.Y34.Y1;
ZfM_29(Zq0A4_217, (STRING)"      yyALLOC (", 15L);
Zq0A4_237(Z185);
ZfM_29(Zq0A4_217, (STRING)",Make", 5L);
Zq0A4_237(Z185);
ZfM_29(Zq0A4_217, (STRING)",", 1L);
Zq0A4_237(Z184->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)",", 1L);
Zq0A4_237(W_12->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_217, (STRING)")", 1L);
ZfM_33(Zq0A4_217);
if (W_12->Y4->U_1.V_1.Y0 == Zq0A4_122) {
ZfM_29(Zq0A4_217, (STRING)"      WITH ", 11L);
Zq0A4_237(Z184->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)"^.", 2L);
Zq0A4_237(W_12->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
Z237(W_12->Y4, W_12->Y6->U_1.V_5.Y4.Y7);
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
}
}
} else {
Z208(Z183);
}
switch (Z183->U_1.V_1.Y0) {
case Zq0A4_127:;
case Zq0A4_129:;
case Zq0A4_130:;
case Zq0A4_131:;
case Zq0A4_132:;
case Zq0A4_133:;
case Zq0A4_134:;
case Zq0A4_135:;
case Zq0A4_136:;
case Zq0A4_137:;
case Zq0A4_138:;
case Zq0A4_128:;
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(Z184->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(Z183);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
break;
case Zq0A4_117:;
{
register Zq0A4_363 *W_13 = &Z184->U_1.V_108.Y107;

if (W_13->Y5 != Zq0A4_53 && W_13->Y5->U_1.V_11.Y10.Y6 != Zp1PEAFi_0) {
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(W_13->Y2);
ZfM_29(Zq0A4_217, (STRING)" :=", 3L);
Zp1PEAFi_6(Zq0A4_217, W_13->Y5->U_1.V_11.Y10.Y6);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
} else {
ZfM_29(Zq0A4_217, (STRING)"      begin", 11L);
ZjqD_5(W_13->Y3);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
Zq0A4_237(W_13->Y2);
ZfM_29(Zq0A4_217, (STRING)")", 1L);
ZfM_33(Zq0A4_217);
}
}
break;
default:
break;
}
}

static void Z239
# ifdef HAVE_ARGS
(Zq0A4_185 Z184)
# else
(Z184)
Zq0A4_185 Z184;
# endif
{
if (Z184->U_1.V_1.Y0 == Zq0A4_159) {
{
register Zq0A4_363 *W_14 = &Z184->U_1.V_108.Y107;

if (W_14->Y5 != Zq0A4_53 && W_14->Y5->U_1.V_11.Y10.Y6 != Zp1PEAFi_0) {
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(W_14->Y2);
ZfM_29(Zq0A4_217, (STRING)" :=", 3L);
Zp1PEAFi_6(Zq0A4_217, W_14->Y5->U_1.V_11.Y10.Y6);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
} else {
ZfM_29(Zq0A4_217, (STRING)"      begin", 11L);
ZjqD_5(W_14->Y3);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
Zq0A4_237(W_14->Y2);
ZfM_29(Zq0A4_217, (STRING)")", 1L);
ZfM_33(Zq0A4_217);
}
Z239(W_14->Y1);
}
}
}

static INTEGER Z244
# ifdef HAVE_ARGS
(Zq0A4_185 Z183, INTEGER Z169)
# else
(Z183, Z169)
Zq0A4_185 Z183;
INTEGER Z169;
# endif
{
if (Z183->U_1.V_1.Y0 == Zq0A4_108) {
return Z169;
}
{
register Zq0A4_313 *W_15 = &Z183->U_1.V_58.Y57;

if (W_15->Y1->U_1.V_1.Y0 == Zq0A4_118) {
return Z245(W_15->Y1->U_1.V_67.Y66.Y5, Z169);
} else {
if (Z169 > 0) {
ZfM_29(Zq0A4_217, (STRING)", ", 2L);
}
Zq0A4_237(W_15->Y1->U_1.V_62.Y61.Y2);
return Z244(W_15->Y2, Z169 + 1);
}
}
}

static INTEGER Z245
# ifdef HAVE_ARGS
(Zq0A4_185 Z183, INTEGER Z169)
# else
(Z183, Z169)
Zq0A4_185 Z183;
INTEGER Z169;
# endif
{
if (Z183->U_1.V_1.Y0 == Zq0A4_159) {
if (Z169 > 0) {
ZfM_29(Zq0A4_217, (STRING)", ", 2L);
}
Zq0A4_237(Z183->U_1.V_108.Y107.Y2);
return Z245(Z183->U_1.V_108.Y107.Y1, Z169 + 1);
} else {
return Z169;
}
}

static INTEGER Z247
# ifdef HAVE_ARGS
(Zq0A4_185 Z183, INTEGER Z169)
# else
(Z183, Z169)
Zq0A4_185 Z183;
INTEGER Z169;
# endif
{
if (Z183->U_1.V_1.Y0 == Zq0A4_121) {
return Z169;
}
{
register Zq0A4_326 *W_16 = &Z183->U_1.V_71.Y70;

if (W_16->Y1->U_1.V_1.Y0 == Zq0A4_118) {
return Z245(W_16->Y1->U_1.V_67.Y66.Y5, Z169);
} else {
if (Z169 > 0) {
ZfM_29(Zq0A4_217, (STRING)", ", 2L);
}
Z210(W_16->Y1);
return Z247(W_16->Y2, Z169 + 1);
}
}
}

static void Z210
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
switch (Z183->U_1.V_1.Y0) {
case Zq0A4_126:;
Zq0A4_237(Z183->U_1.V_75.Y74.Y7);
break;
case Zq0A4_129:;
ZfM_29(Zq0A4_217, (STRING)"NIL", 3L);
break;
case Zq0A4_127:;
{
register Zq0A4_331 *W_17 = &Z183->U_1.V_76.Y75;

if (W_17->Y3 != Zq0A4_53) {
ZjqD_5(W_17->Y3->U_1.V_108.Y107.Y4);
} else {
Zq0A4_237(W_17->Y2);
}
}
break;
case Zq0A4_117:;
Zq0A4_237(Z183->U_1.V_66.Y65.Y2);
break;
case Zq0A4_130:;
{
register Zq0A4_334 *W_18 = &Z183->U_1.V_79.Y78;

if (W_18->Y6) {
Z249(W_18->Y3, W_18->Y5->U_1.V_41.Y40.Y12);
Z251(W_18->Y4, W_18->Y5->U_1.V_41.Y40.Y13);
ZfM_29(Zq0A4_217, (STRING)"      EXIT;", 11L);
ZfM_33(Zq0A4_217);
} else {
Z210(W_18->Y2);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
Z169 = Z247(W_18->Y3, 0L);
if (W_18->Y5 != Zq0A4_53) {
Z169 = Z244(W_18->Y4, Z169);
} else {
Z169 = Z247(W_18->Y4, Z169);
}
ZfM_29(Zq0A4_217, (STRING)")", 1L);
}
}
break;
case Zq0A4_131:;
{
register Zq0A4_335 *W_19 = &Z183->U_1.V_80.Y79;

Z210(W_19->Y2);
ZfM_29(Zq0A4_217, (STRING)" ", 1L);
Zq0A4_237(W_19->Y3);
ZfM_29(Zq0A4_217, (STRING)" ", 1L);
Z210(W_19->Y4);
}
break;
case Zq0A4_132:;
Zq0A4_237(Z183->U_1.V_81.Y80.Y2);
ZfM_29(Zq0A4_217, (STRING)" ", 1L);
Z210(Z183->U_1.V_81.Y80.Y3);
break;
case Zq0A4_133:;
Z210(Z183->U_1.V_82.Y81.Y3);
ZfM_29(Zq0A4_217, (STRING)" ", 1L);
Zq0A4_237(Z183->U_1.V_82.Y81.Y2);
break;
case Zq0A4_134:;
Z210(Z183->U_1.V_83.Y82.Y2);
ZfM_29(Zq0A4_217, (STRING)" [", 2L);
Z169 = Z247(Z183->U_1.V_83.Y82.Y3, 0L);
ZfM_29(Zq0A4_217, (STRING)"]", 1L);
break;
case Zq0A4_135:;
ZfM_29(Zq0A4_217, (STRING)"(", 1L);
Z210(Z183->U_1.V_84.Y83.Y2);
ZfM_29(Zq0A4_217, (STRING)")", 1L);
break;
case Zq0A4_138:;
{
register Zq0A4_342 *W_20 = &Z183->U_1.V_87.Y86;

if (W_20->Y3 == Zfb3DLQ_1) {
Z210(Z183->U_1.V_87.Y86.Y2);
} else {
Zq0A4_237(W_20->Y3);
}
}
break;
case Zq0A4_136:;
ZjqD_5(Z183->U_1.V_85.Y84.Y2);
break;
case Zq0A4_137:;
Zp1PEAFi_6(Zq0A4_217, Z183->U_1.V_86.Y85.Y2);
break;
case Zq0A4_128:;
{
register Zq0A4_332 *W_21 = &Z183->U_1.V_77.Y76;

ZjqD_5(W_21->Y4->U_1.V_108.Y107.Y4);
ZfM_29(Zq0A4_217, (STRING)"^.", 2L);
Zq0A4_237(W_21->Y5);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(W_21->Y3);
}
break;
}
}

static void Z255
# ifdef HAVE_ARGS
(Zq0A4_185 Z183, Zq0A4_185 Z184)
# else
(Z183, Z184)
Zq0A4_185 Z183, Z184;
# endif
{
if (Z183->U_1.V_1.Y0 == Zq0A4_108 || Z184->U_1.V_1.Y0 == Zq0A4_158) {
return;
}
switch (Z183->U_1.V_58.Y57.Y1->U_1.V_1.Y0) {
case Zq0A4_114:;
ZfM_29(Zq0A4_217, (STRING)"     WITH ", 10L);
Zq0A4_237(Z184->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)"^.", 2L);
Zq0A4_237(Z183->U_1.V_58.Y57.Y1->U_1.V_63.Y62.Y9->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
break;
case Zq0A4_115:;
case Zq0A4_116:;
case Zq0A4_119:;
case Zq0A4_117:;
break;
default:
return;
break;
}
Z255(Z183->U_1.V_58.Y57.Y2, Z184->U_1.V_108.Y107.Y1);
}

static void Z257
# ifdef HAVE_ARGS
(CHAR Z258[], LONGCARD O_1)
# else
(Z258, O_1)
CHAR Z258[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z258, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module Mod, routine ", 27L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z258, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZjqD_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z261
# ifdef HAVE_ARGS
(BYTE Z262[], LONGCARD O_3, BYTE Z263[], LONGCARD O_2)
# else
(Z262, O_3, Z263, O_2)
BYTE Z262[];
LONGCARD O_3;
BYTE Z263[];
LONGCARD O_2;
# endif
{
INTEGER Z264;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z263, O_2, WORD)
COPY_OPEN_ARRAY (Z262, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z264 = B_1;; Z264 += 1) {
if (Z262[Z264] != Z263[Z264]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z264 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZjqD_3
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
struct S_16 Z266;

for (;;) {
for (;;) {
if (Z183 == Zq0A4_53) {
return;
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_83) {
{
register Zq0A4_287 *W_22 = &Z183->U_1.V_32.Y31;

Z183 = W_22->Y2;
goto EXIT_2;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_86) {
{
register Zq0A4_290 *W_23 = &Z183->U_1.V_35.Y34;

ZfM_29(Zq0A4_217, (STRING)"# ifndef begint", 15L);
Zq0A4_237(W_23->Y1);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define begint", 15L);
Zq0A4_237(W_23->Y1);
ZfM_29(Zq0A4_217, (STRING)"(a)	a := NIL;", 13L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# ifndef equalt", 15L);
Zq0A4_237(W_23->Y1);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define equalt", 15L);
Zq0A4_237(W_23->Y1);
ZfM_29(Zq0A4_217, (STRING)"(a, b)	", 7L);
Zq0A4_237(W_23->Y1);
ZfM_29(Zq0A4_217, (STRING)".IsEqual", 8L);
Zq0A4_237(W_23->Y1);
ZfM_29(Zq0A4_217, (STRING)" (a, b)", 7L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
Z183 = W_23->Y4;
goto EXIT_2;
}
}
return;
} EXIT_2:;
} EXIT_1:;
}

void ZjqD_4
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
struct S_15 Z266;

for (;;) {
for (;;) {
if (Z183 == Zq0A4_53) {
return;
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_83) {
{
register Zq0A4_287 *W_24 = &Z183->U_1.V_32.Y31;

ZfM_29(Zq0A4_217, (STRING)"DEFINITION MODULE ", 18L);
Zq0A4_237(W_24->Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"IMPORT SYSTEM, IO", 17L);
ZjqD_4(W_24->Y2);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z178(W_24->Y6->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_217, W_24->Y6->U_1.V_17.Y16.Y2);
Z178(W_24->Y6->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_217, W_24->Y6->U_1.V_17.Y16.Y1);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"VAR yyf	: IO.tFile;", 19L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"VAR yyb	: BOOLEAN;", 18L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"VAR Exit	: PROC;", 16L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZjqD_4(W_24->Y8);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE Begin", 15L);
Zq0A4_237(W_24->Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE Close", 15L);
Zq0A4_237(W_24->Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"END ", 4L);
Zq0A4_237(W_24->Y1);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
ZfM_33(Zq0A4_217);
return;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_86) {
{
register Zq0A4_290 *W_25 = &Z183->U_1.V_35.Y34;

ZfM_29(Zq0A4_217, (STRING)", ", 2L);
Zq0A4_237(W_25->Y1);
Z183 = W_25->Y4;
goto EXIT_4;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_93) {
for (;;) {
{
register Zq0A4_297 *W_26 = &Z183->U_1.V_42.Y41;

if (!W_26->Y11) {
goto EXIT_5;
}
Z169 = 0;
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE ", 10L);
Zq0A4_237(W_26->Y2);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
ZjqD_4(W_26->Y12);
ZjqD_4(W_26->Y13);
ZfM_29(Zq0A4_217, (STRING)");", 2L);
ZfM_33(Zq0A4_217);
ZjqD_4(W_26->Y1);
return;
}
} EXIT_5:;
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_94) {
for (;;) {
{
register Zq0A4_298 *W_27 = &Z183->U_1.V_43.Y42;

if (!W_27->Y11) {
goto EXIT_6;
}
Z169 = 0;
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE ", 10L);
Zq0A4_237(W_27->Y2);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
ZjqD_4(W_27->Y12);
ZjqD_4(W_27->Y13);
ZfM_29(Zq0A4_217, (STRING)"): ", 3L);
ZjqD_4(W_27->Y18->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZjqD_4(W_27->Y1);
return;
}
} EXIT_6:;
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_95) {
for (;;) {
{
register Zq0A4_299 *W_28 = &Z183->U_1.V_44.Y43;

if (!W_28->Y11) {
goto EXIT_7;
}
Z169 = 0;
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE ", 10L);
Zq0A4_237(W_28->Y2);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
ZjqD_4(W_28->Y12);
ZjqD_4(W_28->Y13);
ZfM_29(Zq0A4_217, (STRING)"): BOOLEAN;", 11L);
ZfM_33(Zq0A4_217);
ZjqD_4(W_28->Y1);
return;
}
} EXIT_7:;
}
if (Zq0A4_407(Z183, Zq0A4_92)) {
{
register Zq0A4_296 *W_29 = &Z183->U_1.V_41.Y40;

Z183 = W_29->Y1;
goto EXIT_4;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_159) {
{
register Zq0A4_363 *W_30 = &Z183->U_1.V_108.Y107;

if (Z169 > 0) {
ZfM_29(Zq0A4_217, (STRING)"; ", 2L);
}
if (W_30->Y4->U_1.V_115.Y114.Y2) {
ZfM_29(Zq0A4_217, (STRING)"VAR ", 4L);
}
Zq0A4_237(W_30->Y2);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(W_30->Y3);
INC(Z169);
Z183 = W_30->Y1;
goto EXIT_4;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_162) {
{
register Zq0A4_366 *W_31 = &Z183->U_1.V_111.Y110;

Zq0A4_237(W_31->Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)".t", 2L);
Zq0A4_237(W_31->Y1->U_1.V_35.Y34.Y1);
return;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_163) {
{
register Zq0A4_367 *W_32 = &Z183->U_1.V_112.Y111;

Zq0A4_237(W_32->Y1);
return;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_164) {
{
register Zq0A4_368 *W_33 = &Z183->U_1.V_113.Y112;

ZjqD_5(W_33->Y1);
return;
}
}
return;
} EXIT_4:;
} EXIT_3:;
}

static void Z286
# ifdef HAVE_ARGS
(Zq0A4_185 Z287)
# else
(Z287)
Zq0A4_185 Z287;
# endif
{
struct S_14 Z266;

for (;;) {
for (;;) {
if (Z287 == Zq0A4_53) {
return;
}
if (Z287 != NIL && Z287->U_1.V_1.Y0 == Zq0A4_89) {
{
register Zq0A4_293 *W_34 = &Z287->U_1.V_38.Y37;

Z286(W_34->Y4);
Z287 = W_34->Y1;
goto EXIT_9;
}
}
if (Z287 != NIL && Z287->U_1.V_1.Y0 == Zq0A4_83) {
{
register Zq0A4_287 *W_35 = &Z287->U_1.V_32.Y31;

ZfM_29(Zq0A4_217, (STRING)", ", 2L);
Zq0A4_237(W_35->Y1);
return;
}
}
return;
} EXIT_9:;
} EXIT_8:;
}

void ZjqD_5
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
struct S_12 Z266;

for (;;) {
for (;;) {
if (Z183 == Zq0A4_53) {
return;
}
if (Z183 != NIL) {
switch (Z183->U_1.V_1.Y0) {
case Zq0A4_83:;
{
register Zq0A4_287 *W_36 = &Z183->U_1.V_32.Y31;

ZfM_29(Zq0A4_217, (STRING)"IMPLEMENTATION MODULE ", 22L);
Zq0A4_237(W_36->Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
if (!ZpmCQ_25(ORD('m'), &Zq0A4_216)) {
ZfM_29(Zq0A4_217, (STRING)"# define yyInline", 17L);
ZfM_33(Zq0A4_217);
}
ZfM_29(Zq0A4_217, (STRING)"# ifdef yyInline", 16L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define yyALLOC(tree, make, ptr, kind) \\", 41L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  ptr := tree.yyPoolFreePtr; \\", 30L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  IF SYSTEM.ADDRESS (ptr) >= tree.yyPoolMaxPtr THEN ptr := tree.yyAlloc (); END; \\", 82L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  INC (tree.yyPoolFreePtr, tree.yyNodeSize [tree.kind]); \\", 58L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  ptr^.Kind := tree.kind; \\", 27L);
ZfM_33(Zq0A4_217);
if (ZpmCQ_25(ORD('L'), &Zq0A4_216)) {
ZfM_29(Zq0A4_217, (STRING)"  ptr^.yyHead.yyParent := NIL; \\", 32L);
ZfM_33(Zq0A4_217);
}
ZfM_29(Zq0A4_217, (STRING)"  ptr^.yyHead.yyMark := 0;", 26L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# else", 6L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define yyALLOC(tree, make, ptr, kind) ptr := tree.make (tree.kind);", 69L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"IMPORT SYSTEM, rSystem, IO", 26L);
ZjqD_4(W_36->Y2);
Z286(W_36->Y4);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z178(W_36->Y6->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_217, W_36->Y6->U_1.V_17.Y16.Y3);
ZfM_29(Zq0A4_217, (STRING)"VAR", 3L);
ZfM_33(Zq0A4_217);
Z293(W_36->Y7);
ZfM_29(Zq0A4_217, (STRING)"# include \"yy", 13L);
Zq0A4_237(W_36->Y1);
ZfM_29(Zq0A4_217, (STRING)".h\"", 3L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# ifndef yyWrite", 16L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define yyWrite(s) IO.WriteS (yyf, s)", 38L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# ifndef yyWriteNl", 18L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# define yyWriteNl IO.WriteNl (yyf)", 35L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE yyAbort (yyFunction: ARRAY OF CHAR);", 46L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  IO.WriteS (IO.StdError, 'Error: module ", 41L);
Zq0A4_237(W_36->Y1);
ZfM_29(Zq0A4_217, (STRING)", routine ');", 13L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  IO.WriteS (IO.StdError, yyFunction);", 38L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  IO.WriteS (IO.StdError, ' failed');", 37L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  IO.WriteNl (IO.StdError);", 27L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  Exit;", 7L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" END yyAbort;", 13L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE yyIsEqual (yya, yyb: ARRAY OF SYSTEM.BYTE): BOOLEAN;", 62L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" VAR yyi	: INTEGER;", 19L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  FOR yyi := 0 TO INTEGER (HIGH (yya)) DO", 41L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"   IF yya [yyi] # yyb [yyi] THEN RETURN FALSE; END;", 51L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  RETURN TRUE;", 14L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" END yyIsEqual;", 15L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZjqD_5(W_36->Y8);
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE Begin", 15L);
Zq0A4_237(W_36->Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_217);
Z178(W_36->Y6->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_217, W_36->Y6->U_1.V_17.Y16.Y5);
ZfM_29(Zq0A4_217, (STRING)" END Begin", 10L);
Zq0A4_237(W_36->Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE Close", 15L);
Zq0A4_237(W_36->Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_217);
Z178(W_36->Y6->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_217, W_36->Y6->U_1.V_17.Y16.Y6);
ZfM_29(Zq0A4_217, (STRING)" END Close", 10L);
Zq0A4_237(W_36->Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE yyExit;", 17L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  IO.CloseIO; rSystem.rExit (1);", 32L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" END yyExit;", 12L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" yyf	:= IO.StdOutput;", 21L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)" Exit	:= yyExit;", 16L);
ZfM_33(Zq0A4_217);
Z299(W_36->Y7);
ZfM_29(Zq0A4_217, (STRING)" Begin", 6L);
Zq0A4_237(W_36->Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"END ", 4L);
Zq0A4_237(W_36->Y1);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
ZfM_33(Zq0A4_217);
return;
}
break;
case Zq0A4_93:;
{
register Zq0A4_297 *W_37 = &Z183->U_1.V_42.Y41;

Z169 = 0;
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE ", 10L);
Zq0A4_237(W_37->Y2);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
ZjqD_4(W_37->Y12);
ZjqD_4(W_37->Y13);
ZfM_29(Zq0A4_217, (STRING)");", 2L);
ZfM_33(Zq0A4_217);
Z178(W_37->Y8);
ZqnGVQ_5(Zq0A4_217, W_37->Y7);
ZfM_29(Zq0A4_217, (STRING)" VAR yyTempo: RECORD CASE : INTEGER OF", 38L);
ZfM_33(Zq0A4_217);
Z163 = Z164;
Z172 = W_37->Y12;
Z173 = W_37->Y13;
Z302(W_37->Y10);
ZfM_29(Zq0A4_217, (STRING)" END; END;", 10L);
ZfM_33(Zq0A4_217);
Z302(W_37->Y9);
ZfM_29(Zq0A4_217, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_217);
Z299(W_37->Y9);
if (W_37->Y16) {
ZfM_29(Zq0A4_217, (STRING)"  LOOP LOOP", 11L);
ZfM_33(Zq0A4_217);
}
if (ZpmCQ_25(ORD('n'), &Zq0A4_216)) {
Z304(W_37->Y12);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_216)) {
ZjqD_5(W_37->Y10);
if (ZpmCQ_25(ORD('f'), &Zq0A4_216) && !W_37->Y17) {
ZfM_29(Zq0A4_217, (STRING)"  yyAbort ('", 12L);
Zq0A4_237(W_37->Y2);
ZfM_29(Zq0A4_217, (STRING)"');", 3L);
ZfM_33(Zq0A4_217);
}
} else {
Z176 = FALSE;
Z306(W_37->Y15);
if (ZpmCQ_25(ORD('f'), &Zq0A4_216) && !W_37->Y17 && !ZltNGGGMI_7(W_37->Y15)) {
ZfM_29(Zq0A4_217, (STRING)"  yyAbort ('", 12L);
Zq0A4_237(W_37->Y2);
ZfM_29(Zq0A4_217, (STRING)"');", 3L);
ZfM_33(Zq0A4_217);
}
if (W_37->Y16) {
ZfM_29(Zq0A4_217, (STRING)"   RETURN;", 10L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  END; END;", 11L);
ZfM_33(Zq0A4_217);
}
}
ZfM_29(Zq0A4_217, (STRING)" END ", 5L);
Zq0A4_237(W_37->Y2);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
Z183 = W_37->Y1;
goto EXIT_11;
}
break;
case Zq0A4_94:;
{
register Zq0A4_298 *W_38 = &Z183->U_1.V_43.Y42;

Z169 = 0;
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE ", 10L);
Zq0A4_237(W_38->Y2);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
ZjqD_4(W_38->Y12);
ZjqD_4(W_38->Y13);
ZfM_29(Zq0A4_217, (STRING)"): ", 3L);
ZjqD_4(W_38->Y18->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z178(W_38->Y8);
ZqnGVQ_5(Zq0A4_217, W_38->Y7);
ZfM_29(Zq0A4_217, (STRING)" VAR yyTempo: RECORD CASE : INTEGER OF", 38L);
ZfM_33(Zq0A4_217);
Z163 = Z165;
Z172 = W_38->Y12;
Z173 = W_38->Y13;
Z174 = W_38->Y18;
Z302(W_38->Y10);
ZfM_29(Zq0A4_217, (STRING)" END; END;", 10L);
ZfM_33(Zq0A4_217);
Z302(W_38->Y9);
ZfM_29(Zq0A4_217, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_217);
Z299(W_38->Y9);
if (ZpmCQ_25(ORD('b'), &Zq0A4_216)) {
ZjqD_5(W_38->Y10);
ZfM_29(Zq0A4_217, (STRING)"  yyAbort ('", 12L);
Zq0A4_237(W_38->Y2);
ZfM_29(Zq0A4_217, (STRING)"');", 3L);
ZfM_33(Zq0A4_217);
} else {
if (W_38->Y16) {
ZfM_29(Zq0A4_217, (STRING)"  LOOP LOOP", 11L);
ZfM_33(Zq0A4_217);
}
Z176 = FALSE;
Z306(W_38->Y15);
if (!ZltNGGGMI_7(W_38->Y15)) {
ZfM_29(Zq0A4_217, (STRING)"  yyAbort ('", 12L);
Zq0A4_237(W_38->Y2);
ZfM_29(Zq0A4_217, (STRING)"');", 3L);
ZfM_33(Zq0A4_217);
}
if (W_38->Y16) {
ZfM_29(Zq0A4_217, (STRING)"  END; END;", 11L);
ZfM_33(Zq0A4_217);
}
}
ZfM_29(Zq0A4_217, (STRING)" END ", 5L);
Zq0A4_237(W_38->Y2);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
Z183 = W_38->Y1;
goto EXIT_11;
}
break;
case Zq0A4_95:;
{
register Zq0A4_299 *W_39 = &Z183->U_1.V_44.Y43;

Z169 = 0;
ZfM_29(Zq0A4_217, (STRING)"PROCEDURE ", 10L);
Zq0A4_237(W_39->Y2);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
ZjqD_4(W_39->Y12);
ZjqD_4(W_39->Y13);
ZfM_29(Zq0A4_217, (STRING)"): BOOLEAN;", 11L);
ZfM_33(Zq0A4_217);
Z178(W_39->Y8);
ZqnGVQ_5(Zq0A4_217, W_39->Y7);
ZfM_29(Zq0A4_217, (STRING)" VAR yyTempo: RECORD CASE : INTEGER OF", 38L);
ZfM_33(Zq0A4_217);
Z163 = Z166;
Z172 = W_39->Y12;
Z173 = W_39->Y13;
Z302(W_39->Y10);
ZfM_29(Zq0A4_217, (STRING)" END; END;", 10L);
ZfM_33(Zq0A4_217);
Z302(W_39->Y9);
ZfM_29(Zq0A4_217, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_217);
Z299(W_39->Y9);
if (W_39->Y16) {
ZfM_29(Zq0A4_217, (STRING)"  LOOP LOOP", 11L);
ZfM_33(Zq0A4_217);
}
if (ZpmCQ_25(ORD('n'), &Zq0A4_216)) {
Z304(W_39->Y12);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_216)) {
ZjqD_5(W_39->Y10);
ZfM_29(Zq0A4_217, (STRING)"  RETURN FALSE;", 15L);
ZfM_33(Zq0A4_217);
} else {
Z176 = FALSE;
Z306(W_39->Y15);
if (!ZltNGGGMI_7(W_39->Y15)) {
ZfM_29(Zq0A4_217, (STRING)"  RETURN FALSE;", 15L);
ZfM_33(Zq0A4_217);
}
if (W_39->Y16) {
ZfM_29(Zq0A4_217, (STRING)"  END; END;", 11L);
ZfM_33(Zq0A4_217);
}
}
ZfM_29(Zq0A4_217, (STRING)" END ", 5L);
Zq0A4_237(W_39->Y2);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
Z183 = W_39->Y1;
goto EXIT_11;
}
break;
case Zq0A4_106:;
{
register Zq0A4_310 *W_40 = &Z183->U_1.V_55.Y54;

Z178(W_40->Y1);
if (IN(Zq0A4_244, W_40->Y10) || W_40->Y11) {
ZfM_29(Zq0A4_217, (STRING)"    WITH yyTempo.yyR", 20L);
Zq0A4_240((LONGINT)W_40->Y8);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
}
ZfM_29(Zq0A4_217, (STRING)"   LOOP", 7L);
ZfM_33(Zq0A4_217);
Z182(W_40->Y2, Z172);
if (ZpmCQ_25(ORD('w'), &Zq0A4_216) && Z183->U_1.V_55.Y54.Y5->U_1.V_1.Y0 != Zq0A4_140) {
Z255(W_40->Y2, Z172);
}
ZjqD_5(Z183->U_1.V_55.Y54.Y5);
if (!Z183->U_1.V_55.Y54.Y5->U_1.V_88.Y87.Y1) {
Z237(W_40->Y3, Z173);
switch (Z163) {
case Z164:;
ZfM_29(Zq0A4_217, (STRING)"      RETURN;", 13L);
ZfM_33(Zq0A4_217);
break;
case Z165:;
Z208(W_40->Y4);
if (IN(Zq0A4_245, W_40->Y10) && W_40->Y4->U_1.V_1.Y0 != Zq0A4_126 && Z183->U_1.V_1.Y0 != Zq0A4_117) {
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(W_40->Y7);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(W_40->Y4);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z211(W_40->Y4);
ZfM_29(Zq0A4_217, (STRING)"      RETURN ", 13L);
Zq0A4_237(W_40->Y7);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
} else {
Z211(W_40->Y4);
ZfM_29(Zq0A4_217, (STRING)"      RETURN ", 13L);
Z210(W_40->Y4);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
}
break;
case Z166:;
ZfM_29(Zq0A4_217, (STRING)"      RETURN TRUE;", 18L);
ZfM_33(Zq0A4_217);
break;
}
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_216) && Z183->U_1.V_55.Y54.Y5->U_1.V_1.Y0 != Zq0A4_140) {
Z314(W_40->Y2);
}
ZfM_29(Zq0A4_217, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_217);
if (IN(Zq0A4_244, W_40->Y10) || W_40->Y11) {
ZfM_29(Zq0A4_217, (STRING)"    END;", 8L);
ZfM_33(Zq0A4_217);
}
ZfM_33(Zq0A4_217);
Z183 = W_40->Y6;
goto EXIT_11;
}
break;
case Zq0A4_142:;
{
register Zq0A4_346 *W_41 = &Z183->U_1.V_91.Y90;

Z178(W_41->Y5);
Z208(W_41->Y7);
if (W_41->Y7->U_1.V_1.Y0 == Zq0A4_130 && W_41->Y7->U_1.V_79.Y78.Y6) {
Z210(W_41->Y7);
} else {
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Z210(W_41->Y7);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z211(W_41->Y7);
ZjqD_5(W_41->Y6);
}
return;
}
break;
case Zq0A4_143:;
{
register Zq0A4_347 *W_42 = &Z183->U_1.V_92.Y91;

Z178(W_42->Y5);
Z208(W_42->Y7);
if (W_42->Y7->U_1.V_1.Y0 == Zq0A4_130 && W_42->Y7->U_1.V_79.Y78.Y6) {
Z210(W_42->Y7);
} else {
ZfM_29(Zq0A4_217, (STRING)"      IF NOT (", 14L);
Z210(W_42->Y7);
ZfM_29(Zq0A4_217, (STRING)") THEN EXIT; END;", 17L);
ZfM_33(Zq0A4_217);
Z211(W_42->Y7);
ZjqD_5(W_42->Y6);
}
return;
}
break;
case Zq0A4_141:;
case Zq0A4_144:;
case Zq0A4_145:;
case Zq0A4_146:;
case Zq0A4_147:;
case Zq0A4_148:;
case Zq0A4_149:;
case Zq0A4_150:;
case Zq0A4_151:;
case Zq0A4_152:;
case Zq0A4_153:;
case Zq0A4_154:;
case Zq0A4_155:;
case Zq0A4_156:;
if (Z183->U_1.V_90.Y89.Y2 == FALSE) {
return;
}
break;
default:
break;
}
}
if (Z183 != NIL) {
switch (Z183->U_1.V_1.Y0) {
case Zq0A4_144:;
{
register Zq0A4_348 *W_43 = &Z183->U_1.V_93.Y92;

Z178(W_43->Y5);
Z208(W_43->Y7);
Z208(W_43->Y8);
if (W_43->Y10 != Zq0A4_53) {
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
ZjqD_5(W_43->Y10->U_1.V_108.Y107.Y4);
} else {
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Z210(W_43->Y7);
}
ZfM_29(Zq0A4_217, (STRING)" ", 1L);
Zq0A4_237(W_43->Y9);
ZfM_29(Zq0A4_217, (STRING)" ", 1L);
Z210(W_43->Y8);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z211(W_43->Y7);
Z211(W_43->Y8);
Z183 = W_43->Y6;
goto EXIT_11;
}
break;
case Zq0A4_101:;
{
register Zq0A4_305 *W_44 = &Z183->U_1.V_50.Y49;

Z183 = W_44->Y1;
goto EXIT_11;
}
break;
case Zq0A4_102:;
{
register Zq0A4_306 *W_45 = &Z183->U_1.V_51.Y50;

Z178(W_45->Y3);
Z208(W_45->Y6);
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(W_45->Y2);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(W_45->Y6);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z211(W_45->Y6);
Z183 = W_45->Y1;
goto EXIT_11;
}
break;
case Zq0A4_145:;
{
register Zq0A4_349 *W_46 = &Z183->U_1.V_94.Y93;

Z178(W_46->Y5);
if (W_46->Y9 != Zfb3DLQ_1) {
Z234(W_46->Y7);
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
ZjqD_5(W_46->Y10->U_1.V_108.Y107.Y4);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(W_46->Y7->U_1.V_71.Y70.Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z213(W_46->Y7);
}
Z182(W_46->Y8, W_46->Y10);
Z183 = W_46->Y6;
goto EXIT_11;
}
break;
case Zq0A4_146:;
{
register Zq0A4_350 *W_47 = &Z183->U_1.V_95.Y94;

Z178(W_47->Y5);
ZfM_29(Zq0A4_217, (STRING)"      yyb := FALSE;", 19L);
ZfM_33(Zq0A4_217);
if (W_47->Y7->U_1.V_1.Y0 != Zq0A4_125) {
Z208(W_47->Y7);
ZfM_29(Zq0A4_217, (STRING)"      IF ", 9L);
Z210(W_47->Y7);
ZfM_29(Zq0A4_217, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_217);
Z211(W_47->Y7);
}
if (W_47->Y12 != Zfb3DLQ_1) {
Z234(W_47->Y8);
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
ZjqD_5(W_47->Y13->U_1.V_108.Y107.Y4);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(W_47->Y8->U_1.V_71.Y70.Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z213(W_47->Y8);
}
ZfM_29(Zq0A4_217, (STRING)"      LOOP", 10L);
ZfM_33(Zq0A4_217);
Z182(W_47->Y9, W_47->Y13);
ZfM_29(Zq0A4_217, (STRING)"      yyb := TRUE; EXIT;", 24L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
if (W_47->Y7->U_1.V_1.Y0 != Zq0A4_125) {
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
}
ZfM_29(Zq0A4_217, (STRING)"      IF yyb THEN", 17L);
ZfM_33(Zq0A4_217);
if (W_47->Y14) {
ZfM_29(Zq0A4_217, (STRING)"      WITH yyT", 14L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
ZjqD_5(W_47->Y10);
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
} else {
ZjqD_5(W_47->Y10);
}
if (W_47->Y11->U_1.V_1.Y0 != Zq0A4_140) {
ZfM_29(Zq0A4_217, (STRING)"      ELSE", 10L);
ZfM_33(Zq0A4_217);
if (W_47->Y15) {
ZfM_29(Zq0A4_217, (STRING)"      WITH yyE", 14L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
ZjqD_5(W_47->Y11);
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
} else {
ZjqD_5(W_47->Y11);
}
}
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
Z183 = W_47->Y6;
goto EXIT_11;
}
break;
case Zq0A4_147:;
{
register Zq0A4_351 *W_48 = &Z183->U_1.V_96.Y95;

Z178(W_48->Y5);
Z208(W_48->Y7);
if (ZltNGGGMI_5(W_48->Y7)) {
ZfM_29(Zq0A4_217, (STRING)"      yyb := ", 13L);
Z210(W_48->Y7);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z211(W_48->Y7);
ZfM_29(Zq0A4_217, (STRING)"      IF yyb THEN", 17L);
ZfM_33(Zq0A4_217);
} else {
ZfM_29(Zq0A4_217, (STRING)"      IF ", 9L);
Z210(W_48->Y7);
ZfM_29(Zq0A4_217, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_217);
}
if (W_48->Y10) {
ZfM_29(Zq0A4_217, (STRING)"      WITH yyT", 14L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
ZjqD_5(W_48->Y8);
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
} else {
ZjqD_5(W_48->Y8);
}
if (W_48->Y9->U_1.V_1.Y0 != Zq0A4_140) {
ZfM_29(Zq0A4_217, (STRING)"      ELSE", 10L);
ZfM_33(Zq0A4_217);
if (W_48->Y11) {
ZfM_29(Zq0A4_217, (STRING)"      WITH yyE", 14L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
ZjqD_5(W_48->Y9);
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
} else {
ZjqD_5(W_48->Y9);
}
}
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
Z183 = W_48->Y6;
goto EXIT_11;
}
break;
case Zq0A4_148:;
{
register Zq0A4_352 *W_49 = &Z183->U_1.V_97.Y96;

Z178(W_49->Y5);
ZjqD_1 = FALSE;
for (;;) {
if (Z183->U_1.V_97.Y96.Y7 == NIL || Z183->U_1.V_97.Y96.Y7->U_1.V_1.Y0 != Zq0A4_153) {
goto EXIT_12;
}
ZjqD_1 = TRUE;
goto EXIT_12;
} EXIT_12:;
if (ZjqD_1) {
ZfM_29(Zq0A4_217, (STRING)"      WITH yyF", 14L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
}
ZjqD_5(Z183->U_1.V_97.Y96.Y7);
Z208(W_49->Y8);
ZfM_29(Zq0A4_217, (STRING)"      WHILE ", 12L);
Z210(W_49->Y8);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
Z211(W_49->Y8);
if (W_49->Y11) {
ZfM_29(Zq0A4_217, (STRING)"      WITH yyS", 14L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
ZjqD_5(W_49->Y10);
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
} else {
ZjqD_5(W_49->Y10);
}
ZjqD_5(W_49->Y9);
ZjqD_1 = FALSE;
for (;;) {
if (Z183->U_1.V_97.Y96.Y7 == NIL || Z183->U_1.V_97.Y96.Y7->U_1.V_1.Y0 != Zq0A4_153) {
goto EXIT_13;
}
ZjqD_1 = TRUE;
goto EXIT_13;
} EXIT_13:;
if (ZjqD_1) {
ZfM_29(Zq0A4_217, (STRING)"      END; END;", 15L);
ZfM_33(Zq0A4_217);
} else {
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
}
Z183 = W_49->Y6;
goto EXIT_11;
}
break;
case Zq0A4_149:;
{
register struct S_13 *W_50 = &Z266.U_1.V_1.Y0;

{
register Zq0A4_353 *W_51 = &Z183->U_1.V_98.Y97;

Z178(W_51->Y5);
ZjqD_1 = FALSE;
for (;;) {
if (Z183->U_1.V_98.Y97.Y7 == NIL || Z183->U_1.V_98.Y97.Y7->U_1.V_1.Y0 != Zq0A4_153) {
goto EXIT_14;
}
if (Z183->U_1.V_98.Y97.Y7->U_1.V_102.Y101.Y7 == NIL || Z183->U_1.V_98.Y97.Y7->U_1.V_102.Y101.Y7->U_1.V_1.Y0 != Zq0A4_101) {
goto EXIT_14;
}
ZjqD_1 = TRUE;
goto EXIT_14;
} EXIT_14:;
if (ZjqD_1) {
ZfM_29(Zq0A4_217, (STRING)"      WITH yyF", 14L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
W_50->Y0 = Z183->U_1.V_98.Y97.Y7->U_1.V_102.Y101.Y7->U_1.V_50.Y49.Y2;
} else {
ZjqD_1 = FALSE;
for (;;) {
if (Z183->U_1.V_98.Y97.Y7 == NIL || Z183->U_1.V_98.Y97.Y7->U_1.V_1.Y0 != Zq0A4_142) {
goto EXIT_15;
}
if (Z183->U_1.V_98.Y97.Y7->U_1.V_91.Y90.Y7 == NIL || Z183->U_1.V_98.Y97.Y7->U_1.V_91.Y90.Y7->U_1.V_1.Y0 != Zq0A4_127) {
goto EXIT_15;
}
ZjqD_1 = TRUE;
goto EXIT_15;
} EXIT_15:;
if (ZjqD_1) {
W_50->Y0 = Z183->U_1.V_98.Y97.Y7->U_1.V_91.Y90.Y7->U_1.V_76.Y75.Y2;
}
}
Z208(W_51->Y8);
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(W_50->Y0);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(W_51->Y8);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z211(W_51->Y8);
ZfM_29(Zq0A4_217, (STRING)"      WHILE ", 12L);
Zq0A4_237(W_51->Y11->U_1.V_111.Y110.Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)".IsType (", 9L);
Zq0A4_237(W_50->Y0);
ZfM_29(Zq0A4_217, (STRING)", ", 2L);
Zq0A4_237(W_51->Y11->U_1.V_111.Y110.Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(W_51->Y10);
ZfM_29(Zq0A4_217, (STRING)") DO", 4L);
ZfM_33(Zq0A4_217);
if (W_51->Y13) {
ZfM_29(Zq0A4_217, (STRING)"      WITH yyS", 14L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
ZjqD_5(W_51->Y9);
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
} else {
ZjqD_5(W_51->Y9);
}
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(W_50->Y0);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Zq0A4_237(W_50->Y0);
ZfM_29(Zq0A4_217, (STRING)"^.", 2L);
Zq0A4_237(W_51->Y10);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(W_51->Y12);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
ZjqD_1 = FALSE;
for (;;) {
if (Z183->U_1.V_98.Y97.Y7 == NIL || Z183->U_1.V_98.Y97.Y7->U_1.V_1.Y0 != Zq0A4_153) {
goto EXIT_16;
}
ZjqD_1 = TRUE;
goto EXIT_16;
} EXIT_16:;
if (ZjqD_1) {
ZfM_29(Zq0A4_217, (STRING)"      END; END;", 15L);
ZfM_33(Zq0A4_217);
} else {
ZfM_29(Zq0A4_217, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_217);
}
Z183 = W_51->Y6;
goto EXIT_11;
}
}
break;
case Zq0A4_150:;
for (;;) {
{
register Zq0A4_354 *W_52 = &Z183->U_1.V_99.Y98;

if (!(W_52->Y7->U_1.V_1.Y0 == Zq0A4_121)) {
goto EXIT_17;
}
if (!IN(Zq0A4_250, W_52->Y10)) {
Z237(W_52->Y9->U_1.V_55.Y54.Y3, Z173);
Z178(W_52->Y5);
ZfM_29(Zq0A4_217, (STRING)"   RETURN;", 10L);
ZfM_33(Zq0A4_217);
}
return;
}
} EXIT_17:;
{
register Zq0A4_354 *W_53 = &Z183->U_1.V_99.Y98;

Z237(W_53->Y9->U_1.V_55.Y54.Y3, Z173);
Z178(W_53->Y5);
Z208(W_53->Y7);
if (IN(Zq0A4_250, W_53->Y10)) {
Z210(W_53->Y7);
} else {
if (IN(Zq0A4_245, W_53->Y10) && W_53->Y7->U_1.V_1.Y0 != Zq0A4_126 && Z183->U_1.V_1.Y0 != Zq0A4_117) {
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(W_53->Y8);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(W_53->Y7);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z211(W_53->Y7);
ZfM_29(Zq0A4_217, (STRING)"      RETURN ", 13L);
Zq0A4_237(W_53->Y8);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
} else {
Z211(W_53->Y7);
ZfM_29(Zq0A4_217, (STRING)"      RETURN ", 13L);
Z210(W_53->Y7);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
}
}
return;
}
break;
case Zq0A4_151:;
{
register Zq0A4_355 *W_54 = &Z183->U_1.V_100.Y99;

Z178(W_54->Y5);
ZfM_29(Zq0A4_217, (STRING)"      EXIT;", 11L);
ZfM_33(Zq0A4_217);
return;
}
break;
case Zq0A4_152:;
{
register Zq0A4_356 *W_55 = &Z183->U_1.V_101.Y100;

Z178(W_55->Y5);
ZfM_29(Zq0A4_217, (STRING)"      RETURN", 12L);
if (Z163 == Z166) {
ZfM_29(Zq0A4_217, (STRING)" FALSE", 6L);
}
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
return;
}
break;
case Zq0A4_153:;
{
register Zq0A4_357 *W_56 = &Z183->U_1.V_102.Y101;

ZjqD_5(W_56->Y7);
Z183 = W_56->Y6;
goto EXIT_11;
}
break;
case Zq0A4_154:;
{
register Zq0A4_358 *W_57 = &Z183->U_1.V_103.Y102;

Z178(W_57->Y5);
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
ZjqD_5(W_57->Y7);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z183 = W_57->Y6;
goto EXIT_11;
}
break;
case Zq0A4_155:;
{
register Zq0A4_359 *W_58 = &Z183->U_1.V_104.Y103;

Z178(W_58->Y5);
ZfM_29(Zq0A4_217, (STRING)"      yyWriteNl;", 16L);
ZfM_33(Zq0A4_217);
Z183 = W_58->Y6;
goto EXIT_11;
}
break;
case Zq0A4_156:;
{
register Zq0A4_360 *W_59 = &Z183->U_1.V_105.Y104;

Z178(W_59->Y5);
ZfM_29(Zq0A4_217, (STRING)"      yyWrite (", 15L);
Zp1PEAFi_6(Zq0A4_217, W_59->Y7);
ZfM_29(Zq0A4_217, (STRING)");", 2L);
ZfM_33(Zq0A4_217);
Z183 = W_59->Y6;
goto EXIT_11;
}
break;
case Zq0A4_73:;
{
register Zq0A4_277 *W_60 = &Z183->U_1.V_22.Y21;

if (W_60->Y4 != Zq0A4_53) {
ZjqD_5(W_60->Y4->U_1.V_108.Y107.Y4);
} else {
Zq0A4_237(W_60->Y2);
}
Z183 = W_60->Y1;
goto EXIT_11;
}
break;
case Zq0A4_75:;
{
register Zq0A4_279 *W_61 = &Z183->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_217, W_61->Y2);
Z183 = W_61->Y1;
goto EXIT_11;
}
break;
case Zq0A4_76:;
{
register Zq0A4_280 *W_62 = &Z183->U_1.V_25.Y24;

ZjqD_5(W_62->Y2);
Z183 = W_62->Y1;
goto EXIT_11;
}
break;
case Zq0A4_79:;
{
register Zq0A4_283 *W_63 = &Z183->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_217, W_63->Y1);
Z183 = W_63->Y2;
goto EXIT_11;
}
break;
case Zq0A4_72:;
{
register Zq0A4_276 *W_64 = &Z183->U_1.V_21.Y20;

ZjqD_5(W_64->Y5->U_1.V_108.Y107.Y4);
ZfM_29(Zq0A4_217, (STRING)"^.", 2L);
Zq0A4_237(W_64->Y6);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(W_64->Y3);
Z183 = W_64->Y1;
goto EXIT_11;
}
break;
case Zq0A4_168:;
{
register Zq0A4_372 *W_65 = &Z183->U_1.V_117.Y116;

ZjqD_5(W_65->Y1);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(W_65->Y2);
return;
}
break;
case Zq0A4_167:;
{
register Zq0A4_371 *W_66 = &Z183->U_1.V_116.Y115;

ZjqD_5(W_66->Y1);
ZfM_29(Zq0A4_217, (STRING)"^.", 2L);
Zq0A4_237(W_66->Y2);
return;
}
break;
case Zq0A4_166:;
{
register Zq0A4_370 *W_67 = &Z183->U_1.V_115.Y114;

Zq0A4_237(W_67->Y1);
return;
}
break;
case Zq0A4_162:;
{
register Zq0A4_366 *W_68 = &Z183->U_1.V_111.Y110;

ZfM_29(Zq0A4_217, (STRING)"t", 1L);
Zq0A4_237(W_68->Y1->U_1.V_35.Y34.Y1);
return;
}
break;
case Zq0A4_163:;
{
register Zq0A4_367 *W_69 = &Z183->U_1.V_112.Y111;

Zq0A4_237(W_69->Y1);
return;
}
break;
case Zq0A4_164:;
{
register Zq0A4_368 *W_70 = &Z183->U_1.V_113.Y112;

Z183 = W_70->Y1;
goto EXIT_11;
}
break;
default:
break;
}
}
return;
} EXIT_11:;
} EXIT_10:;
}

static void Z299
# ifdef HAVE_ARGS
(Zq0A4_185 Z351)
# else
(Z351)
Zq0A4_185 Z351;
# endif
{
struct S_11 Z266;

for (;;) {
for (;;) {
if (Z351 == Zq0A4_53) {
return;
}
if (Z351 != NIL && Z351->U_1.V_1.Y0 == Zq0A4_101) {
{
register Zq0A4_305 *W_71 = &Z351->U_1.V_50.Y49;

Z351 = W_71->Y1;
goto EXIT_19;
}
}
if (Z351 != NIL && Z351->U_1.V_1.Y0 == Zq0A4_102) {
{
register Zq0A4_306 *W_72 = &Z351->U_1.V_51.Y50;

Z178(W_72->Y3);
Z208(W_72->Y6);
ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_72->Y2);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(W_72->Y6);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z351 = W_72->Y1;
goto EXIT_19;
}
}
return;
} EXIT_19:;
} EXIT_18:;
}

static void Z293
# ifdef HAVE_ARGS
(Zq0A4_185 Z352)
# else
(Z352)
Zq0A4_185 Z352;
# endif
{
struct S_10 Z266;

for (;;) {
for (;;) {
if (Z352 == Zq0A4_53) {
return;
}
if (Z352 != NIL && Z352->U_1.V_1.Y0 == Zq0A4_101) {
{
register Zq0A4_305 *W_73 = &Z352->U_1.V_50.Y49;

Z178(W_73->Y3);
ZfM_29(Zq0A4_217, (STRING)" ", 1L);
Zq0A4_237(W_73->Y2);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(W_73->Y5->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z352 = W_73->Y1;
goto EXIT_21;
}
}
if (Z352 != NIL && Z352->U_1.V_1.Y0 == Zq0A4_102) {
{
register Zq0A4_306 *W_74 = &Z352->U_1.V_51.Y50;

Z178(W_74->Y3);
ZfM_29(Zq0A4_217, (STRING)" ", 1L);
Zq0A4_237(W_74->Y2);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(W_74->Y5->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z302(W_74->Y6);
Z352 = W_74->Y1;
goto EXIT_21;
}
}
return;
} EXIT_21:;
} EXIT_20:;
}

static void Z302
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
struct S_9 Z266;

for (;;) {
for (;;) {
if (Z183 == Zq0A4_53) {
return;
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_159) {
for (;;) {
{
register Zq0A4_363 *W_75 = &Z183->U_1.V_108.Y107;

ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_75->Y2);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(W_75->Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
goto EXIT_24;
}
} EXIT_24:;
{
register Zq0A4_363 *W_76 = &Z183->U_1.V_108.Y107;

Z183 = Z183->U_1.V_108.Y107.Y1;
goto EXIT_23;
}
}
if (Zq0A4_407(Z183, Zq0A4_99)) {
for (;;) {
{
register Zq0A4_303 *W_77 = &Z183->U_1.V_48.Y47;

ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_77->Y2);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(W_77->Y5->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
goto EXIT_25;
}
} EXIT_25:;
}
if (Z183 != NIL) {
switch (Z183->U_1.V_1.Y0) {
case Zq0A4_106:;
{
register Zq0A4_310 *W_78 = &Z183->U_1.V_55.Y54;

if (IN(Zq0A4_244, W_78->Y10) || W_78->Y11) {
ZfM_29(Zq0A4_217, (STRING)" | ", 3L);
Zq0A4_240((LONGINT)W_78->Y8);
ZfM_29(Zq0A4_217, (STRING)": yyR", 5L);
Zq0A4_240((LONGINT)W_78->Y8);
ZfM_29(Zq0A4_217, (STRING)": RECORD", 8L);
ZfM_33(Zq0A4_217);
Z302(W_78->Y2);
Z302(W_78->Y3);
if (Z163 == Z165) {
Z302(W_78->Y4);
if (IN(Zq0A4_245, W_78->Y10) && W_78->Y4->U_1.V_1.Y0 != Zq0A4_126 && W_78->Y4->U_1.V_1.Y0 != Zq0A4_117) {
ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_78->Y7);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(Z174->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
}
}
Z302(W_78->Y5);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
}
Z183 = W_78->Y6;
goto EXIT_23;
}
break;
case Zq0A4_145:;
for (;;) {
{
register Zq0A4_349 *W_79 = &Z183->U_1.V_94.Y93;

if (!(W_79->Y9 != Zfb3DLQ_1)) {
goto EXIT_26;
}
ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_79->Y9);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(W_79->Y10->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
goto EXIT_26;
}
} EXIT_26:;
{
register Zq0A4_349 *W_80 = &Z183->U_1.V_94.Y93;

Z302(Z183->U_1.V_94.Y93.Y7);
Z302(Z183->U_1.V_94.Y93.Y8);
Z183 = Z183->U_1.V_94.Y93.Y6;
goto EXIT_23;
}
break;
case Zq0A4_146:;
{
register Zq0A4_350 *W_81 = &Z183->U_1.V_95.Y94;

if (W_81->Y12 != Zfb3DLQ_1) {
ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_81->Y12);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(W_81->Y13->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
}
Z302(W_81->Y7);
Z302(W_81->Y8);
Z302(W_81->Y9);
if (W_81->Y14) {
ZfM_29(Zq0A4_217, (STRING)"  yyT", 5L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)": RECORD", 8L);
ZfM_33(Zq0A4_217);
Z302(W_81->Y10);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
} else {
Z302(W_81->Y10);
}
if (W_81->Y11->U_1.V_1.Y0 != Zq0A4_140) {
if (W_81->Y15) {
ZfM_29(Zq0A4_217, (STRING)"  yyE", 5L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)": RECORD", 8L);
ZfM_33(Zq0A4_217);
Z302(W_81->Y11);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
} else {
Z302(W_81->Y11);
}
}
Z183 = W_81->Y6;
goto EXIT_23;
}
break;
case Zq0A4_147:;
{
register Zq0A4_351 *W_82 = &Z183->U_1.V_96.Y95;

Z302(W_82->Y7);
if (W_82->Y10) {
ZfM_29(Zq0A4_217, (STRING)"  yyT", 5L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)": RECORD", 8L);
ZfM_33(Zq0A4_217);
Z302(W_82->Y8);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
} else {
Z302(W_82->Y8);
}
if (W_82->Y9->U_1.V_1.Y0 != Zq0A4_140) {
if (W_82->Y11) {
ZfM_29(Zq0A4_217, (STRING)"  yyE", 5L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)": RECORD", 8L);
ZfM_33(Zq0A4_217);
Z302(W_82->Y9);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
} else {
Z302(W_82->Y9);
}
}
Z183 = W_82->Y6;
goto EXIT_23;
}
break;
case Zq0A4_148:;
{
register Zq0A4_352 *W_83 = &Z183->U_1.V_97.Y96;

ZjqD_1 = FALSE;
for (;;) {
if (Z183->U_1.V_97.Y96.Y7 == NIL || Z183->U_1.V_97.Y96.Y7->U_1.V_1.Y0 != Zq0A4_153) {
goto EXIT_27;
}
ZjqD_1 = TRUE;
goto EXIT_27;
} EXIT_27:;
if (ZjqD_1) {
ZfM_29(Zq0A4_217, (STRING)"  yyF", 5L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)": RECORD", 8L);
ZfM_33(Zq0A4_217);
Z302(Z183->U_1.V_97.Y96.Y7);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
}
Z302(W_83->Y8);
Z302(W_83->Y9);
if (W_83->Y11) {
ZfM_29(Zq0A4_217, (STRING)"  yyS", 5L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)": RECORD", 8L);
ZfM_33(Zq0A4_217);
Z302(W_83->Y10);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
} else {
Z302(W_83->Y10);
}
Z183 = W_83->Y6;
goto EXIT_23;
}
break;
case Zq0A4_149:;
{
register Zq0A4_353 *W_84 = &Z183->U_1.V_98.Y97;

ZjqD_1 = FALSE;
for (;;) {
if (Z183->U_1.V_98.Y97.Y7 == NIL || Z183->U_1.V_98.Y97.Y7->U_1.V_1.Y0 != Zq0A4_153) {
goto EXIT_28;
}
ZjqD_1 = TRUE;
goto EXIT_28;
} EXIT_28:;
if (ZjqD_1) {
ZfM_29(Zq0A4_217, (STRING)"  yyF", 5L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)": RECORD", 8L);
ZfM_33(Zq0A4_217);
Z302(Z183->U_1.V_98.Y97.Y7);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
}
Z302(W_84->Y8);
if (W_84->Y13) {
ZfM_29(Zq0A4_217, (STRING)"  yyS", 5L);
Zq0A4_240((LONGINT)(LONGCARD)Z183);
ZfM_29(Zq0A4_217, (STRING)": RECORD", 8L);
ZfM_33(Zq0A4_217);
Z302(W_84->Y9);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
} else {
Z302(W_84->Y9);
}
Z183 = W_84->Y6;
goto EXIT_23;
}
break;
case Zq0A4_150:;
for (;;) {
{
register Zq0A4_354 *W_85 = &Z183->U_1.V_99.Y98;

if (!(W_85->Y8 != Zfb3DLQ_1)) {
goto EXIT_29;
}
ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_85->Y8);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(Z174->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
goto EXIT_29;
}
} EXIT_29:;
{
register Zq0A4_354 *W_86 = &Z183->U_1.V_99.Y98;

Z302(Z183->U_1.V_99.Y98.Y7);
Z183 = Z183->U_1.V_99.Y98.Y6;
goto EXIT_23;
}
break;
case Zq0A4_109:;
for (;;) {
{
register Zq0A4_313 *W_87 = &Z183->U_1.V_58.Y57;

if (!(W_87->Y1->U_1.V_62.Y61.Y2 != Zfb3DLQ_1)) {
goto EXIT_30;
}
if (!(W_87->Y1->U_1.V_1.Y0 != Zq0A4_117)) {
goto EXIT_30;
}
ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_87->Y1->U_1.V_62.Y61.Y2);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(W_87->Y1->U_1.V_62.Y61.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
goto EXIT_30;
}
} EXIT_30:;
{
register Zq0A4_313 *W_88 = &Z183->U_1.V_58.Y57;

Z302(Z183->U_1.V_58.Y57.Y1);
Z183 = Z183->U_1.V_58.Y57.Y2;
goto EXIT_23;
}
break;
case Zq0A4_118:;
{
register Zq0A4_322 *W_89 = &Z183->U_1.V_67.Y66;

Z183 = W_89->Y5;
goto EXIT_23;
}
break;
case Zq0A4_117:;
for (;;) {
{
register Zq0A4_321 *W_90 = &Z183->U_1.V_66.Y65;

if (!(W_90->Y2 != Zfb3DLQ_1)) {
goto EXIT_31;
}
ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_90->Y2);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(W_90->Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
return;
}
} EXIT_31:;
break;
case Zq0A4_119:;
{
register Zq0A4_323 *W_91 = &Z183->U_1.V_68.Y67;

Z183 = W_91->Y5;
goto EXIT_23;
}
break;
case Zq0A4_126:;
for (;;) {
{
register Zq0A4_330 *W_92 = &Z183->U_1.V_75.Y74;

if (!(W_92->Y7 != Zfb3DLQ_1)) {
goto EXIT_32;
}
ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_92->Y7);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(W_92->Y8);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
goto EXIT_32;
}
} EXIT_32:;
{
register Zq0A4_330 *W_93 = &Z183->U_1.V_75.Y74;

Z302(Z183->U_1.V_75.Y74.Y3);
Z183 = Z183->U_1.V_75.Y74.Y4;
goto EXIT_23;
}
break;
case Zq0A4_138:;
if (Z183->U_1.V_87.Y86.Y4 != NIL && Z183->U_1.V_87.Y86.Y4->U_1.V_1.Y0 == Zq0A4_159) {
for (;;) {
{
register Zq0A4_342 *W_94 = &Z183->U_1.V_87.Y86;

if (!(W_94->Y3 != Zfb3DLQ_1)) {
goto EXIT_33;
}
Z302(W_94->Y2);
ZfM_29(Zq0A4_217, (STRING)"  ", 2L);
Zq0A4_237(W_94->Y3);
ZfM_29(Zq0A4_217, (STRING)": ", 2L);
ZjqD_4(Z183->U_1.V_87.Y86.Y4->U_1.V_108.Y107.Y3);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
return;
}
} EXIT_33:;
}
{
register Zq0A4_342 *W_95 = &Z183->U_1.V_87.Y86;

Z183 = Z183->U_1.V_87.Y86.Y2;
goto EXIT_23;
}
break;
case Zq0A4_100:;
{
register Zq0A4_304 *W_96 = &Z183->U_1.V_49.Y48;

Z183 = Z183->U_1.V_49.Y48.Y1;
goto EXIT_23;
}
break;
case Zq0A4_101:;
{
register Zq0A4_305 *W_97 = &Z183->U_1.V_50.Y49;

Z183 = Z183->U_1.V_50.Y49.Y1;
goto EXIT_23;
}
break;
case Zq0A4_102:;
{
register Zq0A4_306 *W_98 = &Z183->U_1.V_51.Y50;

Z302(Z183->U_1.V_51.Y50.Y6);
Z183 = Z183->U_1.V_51.Y50.Y1;
goto EXIT_23;
}
break;
case Zq0A4_99:;
{
register Zq0A4_303 *W_99 = &Z183->U_1.V_48.Y47;

Z183 = Z183->U_1.V_48.Y47.Y1;
goto EXIT_23;
}
break;
case Zq0A4_114:;
{
register Zq0A4_318 *W_100 = &Z183->U_1.V_63.Y62;

Z302(Z183->U_1.V_63.Y62.Y6);
Z183 = Z183->U_1.V_63.Y62.Y7;
goto EXIT_23;
}
break;
case Zq0A4_123:;
{
register Zq0A4_327 *W_101 = &Z183->U_1.V_72.Y71;

Z302(Z183->U_1.V_72.Y71.Y1);
Z183 = Z183->U_1.V_72.Y71.Y2;
goto EXIT_23;
}
break;
case Zq0A4_122:;
{
register Zq0A4_326 *W_102 = &Z183->U_1.V_71.Y70;

Z302(Z183->U_1.V_71.Y70.Y1);
Z183 = Z183->U_1.V_71.Y70.Y2;
goto EXIT_23;
}
break;
case Zq0A4_130:;
{
register Zq0A4_334 *W_103 = &Z183->U_1.V_79.Y78;

Z302(Z183->U_1.V_79.Y78.Y2);
Z302(Z183->U_1.V_79.Y78.Y3);
Z183 = Z183->U_1.V_79.Y78.Y4;
goto EXIT_23;
}
break;
case Zq0A4_131:;
{
register Zq0A4_335 *W_104 = &Z183->U_1.V_80.Y79;

Z302(Z183->U_1.V_80.Y79.Y2);
Z183 = Z183->U_1.V_80.Y79.Y4;
goto EXIT_23;
}
break;
case Zq0A4_132:;
{
register Zq0A4_336 *W_105 = &Z183->U_1.V_81.Y80;

Z183 = Z183->U_1.V_81.Y80.Y3;
goto EXIT_23;
}
break;
case Zq0A4_133:;
{
register Zq0A4_337 *W_106 = &Z183->U_1.V_82.Y81;

Z183 = Z183->U_1.V_82.Y81.Y3;
goto EXIT_23;
}
break;
case Zq0A4_134:;
{
register Zq0A4_338 *W_107 = &Z183->U_1.V_83.Y82;

Z302(Z183->U_1.V_83.Y82.Y2);
Z183 = Z183->U_1.V_83.Y82.Y3;
goto EXIT_23;
}
break;
case Zq0A4_135:;
{
register Zq0A4_339 *W_108 = &Z183->U_1.V_84.Y83;

Z183 = Z183->U_1.V_84.Y83.Y2;
goto EXIT_23;
}
break;
case Zq0A4_136:;
return;
break;
case Zq0A4_142:;
{
register Zq0A4_346 *W_109 = &Z183->U_1.V_91.Y90;

Z302(Z183->U_1.V_91.Y90.Y7);
Z183 = Z183->U_1.V_91.Y90.Y6;
goto EXIT_23;
}
break;
case Zq0A4_143:;
{
register Zq0A4_347 *W_110 = &Z183->U_1.V_92.Y91;

Z302(Z183->U_1.V_92.Y91.Y7);
Z183 = Z183->U_1.V_92.Y91.Y6;
goto EXIT_23;
}
break;
case Zq0A4_144:;
{
register Zq0A4_348 *W_111 = &Z183->U_1.V_93.Y92;

Z302(Z183->U_1.V_93.Y92.Y7);
Z302(Z183->U_1.V_93.Y92.Y8);
Z183 = Z183->U_1.V_93.Y92.Y6;
goto EXIT_23;
}
break;
case Zq0A4_151:;
{
register Zq0A4_355 *W_112 = &Z183->U_1.V_100.Y99;

Z183 = Z183->U_1.V_100.Y99.Y6;
goto EXIT_23;
}
break;
case Zq0A4_152:;
{
register Zq0A4_356 *W_113 = &Z183->U_1.V_101.Y100;

Z183 = Z183->U_1.V_101.Y100.Y6;
goto EXIT_23;
}
break;
case Zq0A4_153:;
{
register Zq0A4_357 *W_114 = &Z183->U_1.V_102.Y101;

Z302(Z183->U_1.V_102.Y101.Y7);
Z183 = Z183->U_1.V_102.Y101.Y6;
goto EXIT_23;
}
break;
case Zq0A4_154:;
{
register Zq0A4_358 *W_115 = &Z183->U_1.V_103.Y102;

Z183 = Z183->U_1.V_103.Y102.Y6;
goto EXIT_23;
}
break;
case Zq0A4_155:;
{
register Zq0A4_359 *W_116 = &Z183->U_1.V_104.Y103;

Z183 = Z183->U_1.V_104.Y103.Y6;
goto EXIT_23;
}
break;
case Zq0A4_156:;
{
register Zq0A4_360 *W_117 = &Z183->U_1.V_105.Y104;

Z183 = Z183->U_1.V_105.Y104.Y6;
goto EXIT_23;
}
break;
case Zq0A4_141:;
{
register Zq0A4_345 *W_118 = &Z183->U_1.V_90.Y89;

Z183 = Z183->U_1.V_90.Y89.Y6;
goto EXIT_23;
}
break;
case Zq0A4_160:;
{
register Zq0A4_364 *W_119 = &Z183->U_1.V_109.Y108;

Z183 = Z183->U_1.V_109.Y108.Y1;
goto EXIT_23;
}
break;
default:
break;
}
}
return;
} EXIT_23:;
} EXIT_22:;
}

static void Z304
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
struct S_8 Z266;

for (;;) {
for (;;) {
if (Z183 == Zq0A4_53) {
return;
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_159) {
{
register Zq0A4_363 *W_120 = &Z183->U_1.V_108.Y107;

Z175 = W_120->Y2;
Z304(W_120->Y3);
Z183 = W_120->Y1;
goto EXIT_35;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_162) {
{
register Zq0A4_366 *W_121 = &Z183->U_1.V_111.Y110;

ZfM_29(Zq0A4_217, (STRING)"  IF ", 5L);
Zq0A4_237(Z175);
ZfM_29(Zq0A4_217, (STRING)" = ", 3L);
Zq0A4_237(W_121->Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)".No", 3L);
Zq0A4_237(W_121->Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)" THEN RETURN", 12L);
if (Z163 == Z166) {
ZfM_29(Zq0A4_217, (STRING)" FALSE", 6L);
}
ZfM_29(Zq0A4_217, (STRING)"; END;", 6L);
ZfM_33(Zq0A4_217);
return;
}
}
return;
} EXIT_35:;
} EXIT_34:;
}

static void Z314
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
struct S_7 Z266;

for (;;) {
for (;;) {
if (Z183 == Zq0A4_53) {
return;
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_109) {
{
register Zq0A4_313 *W_122 = &Z183->U_1.V_58.Y57;

Z314(W_122->Y1);
Z183 = W_122->Y2;
goto EXIT_37;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_114) {
{
register Zq0A4_318 *W_123 = &Z183->U_1.V_63.Y62;

ZfM_29(Zq0A4_217, (STRING)"     END;", 9L);
ZfM_33(Zq0A4_217);
return;
}
}
return;
} EXIT_37:;
} EXIT_36:;
}

static void Z357
# ifdef HAVE_ARGS
(Zq0A4_185 Z358, Zq0A4_185 Z359)
# else
(Z358, Z359)
Zq0A4_185 Z358;
Zq0A4_185 Z359;
# endif
{
struct S_6 Z266;

if (Z358 == Zq0A4_53) {
return;
}
if (Z359 == Zq0A4_53) {
return;
}
if (Z358 != NIL && Z358->U_1.V_1.Y0 == Zq0A4_176) {
for (;;) {
{
register Zq0A4_380 *W_124 = &Z358->U_1.V_125.Y124;

if (!ZltNGGGMI_5(W_124->Y3)) {
goto EXIT_38;
}
Z306(Z358);
ZfM_29(Zq0A4_217, (STRING)"    LOOP", 8L);
ZfM_33(Zq0A4_217);
Z211(Z358->U_1.V_125.Y124.Y3);
Z306(Z359);
ZfM_29(Zq0A4_217, (STRING)"    EXIT; END;", 14L);
ZfM_33(Zq0A4_217);
return;
}
} EXIT_38:;
}
Z306(Z358);
Z306(Z359);
return;
}

static void Z306
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
struct S_5 Z266;

for (;;) {
for (;;) {
if (Z183 == Zq0A4_53) {
return;
}
if (Z183 != NIL) {
switch (Z183->U_1.V_1.Y0) {
case Zq0A4_179:;
{
register Zq0A4_383 *W_125 = &Z183->U_1.V_128.Y127;

if (W_125->Y4 == 0) {
if (!Z176 && W_125->Y3->U_1.V_1.Y0 == Zq0A4_176 && ZltNGGGMI_6(W_125->Y1, &Z170)) {
ZfM_29(Zq0A4_217, (STRING)"    WITH yyTempo.yyR", 20L);
Zq0A4_240((LONGINT)Z170->U_1.V_55.Y54.Y8);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
Z176 = TRUE;
Z357(W_125->Y3, W_125->Y1);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"    END;", 8L);
ZfM_33(Zq0A4_217);
} else {
ZltNGGGMI_8(W_125->Y1, &Z170);
Z357(W_125->Y3, W_125->Y1);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
}
Z176 = FALSE;
Z306(W_125->Y2);
} else {
Z167 = W_125->Y4;
Z363(Z183);
}
return;
}
break;
case Zq0A4_180:;
for (;;) {
{
register Zq0A4_384 *W_126 = &Z183->U_1.V_129.Y128;

Z306(W_126->Y2);
if (!IN(Zq0A4_246, W_126->Y2->U_1.V_55.Y54.Y10)) {
goto EXIT_41;
}
Z176 = FALSE;
Z306(W_126->Y1);
return;
}
} EXIT_41:;
break;
case Zq0A4_172:;
{
register Zq0A4_376 *W_127 = &Z183->U_1.V_121.Y120;

ZfM_29(Zq0A4_217, (STRING)"  IF (", 6L);
ZjqD_5(W_127->Y2);
ZfM_29(Zq0A4_217, (STRING)" # NIL) AND (", 13L);
ZjqD_5(W_127->Y2);
ZfM_29(Zq0A4_217, (STRING)"^.Kind = ", 9L);
Zq0A4_237(W_127->Y3->U_1.V_111.Y110.Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(W_127->Y4);
ZfM_29(Zq0A4_217, (STRING)") THEN", 6L);
ZfM_33(Zq0A4_217);
return;
}
break;
case Zq0A4_173:;
{
register Zq0A4_377 *W_128 = &Z183->U_1.V_122.Y121;

ZfM_29(Zq0A4_217, (STRING)"  IF ", 5L);
Zq0A4_237(W_128->Y3->U_1.V_111.Y110.Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)".IsType (", 9L);
ZjqD_5(W_128->Y2);
ZfM_29(Zq0A4_217, (STRING)", ", 2L);
Zq0A4_237(W_128->Y3->U_1.V_111.Y110.Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(W_128->Y4);
ZfM_29(Zq0A4_217, (STRING)") THEN", 6L);
ZfM_33(Zq0A4_217);
return;
}
break;
case Zq0A4_174:;
{
register Zq0A4_378 *W_129 = &Z183->U_1.V_123.Y122;

ZfM_29(Zq0A4_217, (STRING)"  IF ", 5L);
ZjqD_5(W_129->Y2);
ZfM_29(Zq0A4_217, (STRING)" = NIL THEN", 11L);
ZfM_33(Zq0A4_217);
return;
}
break;
case Zq0A4_175:;
{
register Zq0A4_379 *W_130 = &Z183->U_1.V_124.Y123;

ZfM_29(Zq0A4_217, (STRING)"  IF (equal", 11L);
ZjqD_5(W_130->Y4);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
ZjqD_5(W_130->Y2);
ZfM_29(Zq0A4_217, (STRING)", ", 2L);
ZjqD_5(W_130->Y3);
ZfM_29(Zq0A4_217, (STRING)")) THEN", 7L);
ZfM_33(Zq0A4_217);
return;
}
break;
case Zq0A4_176:;
{
register Zq0A4_380 *W_131 = &Z183->U_1.V_125.Y124;

Z208(W_131->Y3);
ZfM_29(Zq0A4_217, (STRING)"  IF (equal", 11L);
ZjqD_5(W_131->Y4);
ZfM_29(Zq0A4_217, (STRING)" (", 2L);
ZjqD_5(W_131->Y2);
ZfM_29(Zq0A4_217, (STRING)", ", 2L);
Z210(W_131->Y3);
ZfM_29(Zq0A4_217, (STRING)")) THEN", 7L);
ZfM_33(Zq0A4_217);
return;
}
break;
case Zq0A4_106:;
{
register Zq0A4_310 *W_132 = &Z183->U_1.V_55.Y54;

Z178(W_132->Y1);
if ((IN(Zq0A4_244, W_132->Y10) || W_132->Y11) && !Z176) {
ZfM_29(Zq0A4_217, (STRING)"    WITH yyTempo.yyR", 20L);
Zq0A4_240((LONGINT)W_132->Y8);
ZfM_29(Zq0A4_217, (STRING)" DO", 3L);
ZfM_33(Zq0A4_217);
}
if (IN(Zq0A4_246, W_132->Y10)) {
ZfM_29(Zq0A4_217, (STRING)"   LOOP", 7L);
ZfM_33(Zq0A4_217);
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_216) && Z183->U_1.V_55.Y54.Y5->U_1.V_1.Y0 != Zq0A4_140) {
Z255(W_132->Y2, Z172);
}
ZjqD_5(Z183->U_1.V_55.Y54.Y5);
if (IN(Zq0A4_250, W_132->Y10) && !IN(Zq0A4_246, W_132->Y10)) {
if (Z163 == Z165) {
Z237(W_132->Y3, Z173);
Z208(W_132->Y4);
Z210(W_132->Y4);
}
} else if (!Z183->U_1.V_55.Y54.Y5->U_1.V_88.Y87.Y1) {
Z237(W_132->Y3, Z173);
switch (Z163) {
case Z164:;
ZfM_29(Zq0A4_217, (STRING)"      RETURN;", 13L);
ZfM_33(Zq0A4_217);
break;
case Z165:;
Z208(W_132->Y4);
if (IN(Zq0A4_245, W_132->Y10) && W_132->Y4->U_1.V_1.Y0 != Zq0A4_126 && Z183->U_1.V_1.Y0 != Zq0A4_117) {
ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(W_132->Y7);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(W_132->Y4);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z211(W_132->Y4);
ZfM_29(Zq0A4_217, (STRING)"      RETURN ", 13L);
Zq0A4_237(W_132->Y7);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
} else {
Z211(W_132->Y4);
ZfM_29(Zq0A4_217, (STRING)"      RETURN ", 13L);
Z210(W_132->Y4);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
}
break;
case Z166:;
ZfM_29(Zq0A4_217, (STRING)"      RETURN TRUE;", 18L);
ZfM_33(Zq0A4_217);
break;
}
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_216) && Z183->U_1.V_55.Y54.Y5->U_1.V_1.Y0 != Zq0A4_140) {
Z314(W_132->Y2);
}
if (IN(Zq0A4_246, W_132->Y10)) {
ZfM_29(Zq0A4_217, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_217);
}
if ((IN(Zq0A4_244, W_132->Y10) || W_132->Y11) && !Z176) {
ZfM_29(Zq0A4_217, (STRING)"    END;", 8L);
ZfM_33(Zq0A4_217);
}
ZfM_33(Zq0A4_217);
return;
}
break;
default:
break;
}
}
return;
} EXIT_40:;
} EXIT_39:;
}

static void Z363
# ifdef HAVE_ARGS
(Zq0A4_185 Z183)
# else
(Z183)
Zq0A4_185 Z183;
# endif
{
struct S_3 Z266;

if (Z183 == Zq0A4_53) {
return;
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_179) {
{
register struct S_4 *W_133 = &Z266.U_1.V_1.Y0;

{
register Zq0A4_383 *W_134 = &Z183->U_1.V_128.Y127;

ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  IF ", 5L);
ZjqD_5(W_134->Y3->U_1.V_120.Y119.Y2);
ZfM_29(Zq0A4_217, (STRING)" # NIL THEN", 11L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  CASE ", 7L);
ZjqD_5(W_134->Y3->U_1.V_120.Y119.Y2);
ZfM_29(Zq0A4_217, (STRING)"^.Kind OF", 9L);
ZfM_33(Zq0A4_217);
W_133->Y0 = Z167;
while (W_133->Y0 > 0) {
if (!ZpmCQ_26(Z183->U_1.V_128.Y127.Y3->U_1.V_122.Y121.Y3->U_1.V_111.Y110.Y2)) {
Z363(Z183->U_1.V_128.Y127.Y3);
Z306(Z183->U_1.V_128.Y127.Y1);
}
Z183 = Z183->U_1.V_128.Y127.Y2;
DEC(W_133->Y0);
}
ZfM_29(Zq0A4_217, (STRING)"  ELSE END;", 11L);
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_217);
ZfM_33(Zq0A4_217);
Z306(Z183);
return;
}
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_172) {
{
register Zq0A4_376 *W_135 = &Z183->U_1.V_121.Y120;

ZfM_29(Zq0A4_217, (STRING)"  | ", 4L);
Zq0A4_237(W_135->Y3->U_1.V_111.Y110.Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(W_135->Y4);
ZfM_29(Zq0A4_217, (STRING)":", 1L);
ZfM_33(Zq0A4_217);
return;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_173) {
{
register Zq0A4_377 *W_136 = &Z183->U_1.V_122.Y121;

{
register Zq0A4_366 *W_137 = &W_136->Y3->U_1.V_111.Y110;

Z171 = ZpmC89LG6_5(W_137->Y1->U_1.V_35.Y34.Y5, ZpmCQ_17(&W_137->Y2));
ZfM_29(Zq0A4_217, (STRING)"  | ", 4L);
Zq0A4_237(W_137->Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(Z171->U_1.V_5.Y4.Y1);
Z363(W_136->Y3);
ZfM_29(Zq0A4_217, (STRING)":", 1L);
ZfM_33(Zq0A4_217);
}
return;
}
}
if (Z183 != NIL && Z183->U_1.V_1.Y0 == Zq0A4_162) {
{
register Zq0A4_366 *W_138 = &Z183->U_1.V_111.Y110;

{
LONGCARD B_3 = ZpmCQ_17(&W_138->Y2) + 1, B_4 = ZpmCQ_18(&W_138->Y2);

if (B_3 <= B_4)
for (Z168 = B_3;; Z168 += 1) {
if (ZpmCQ_25(Z168, &W_138->Y2)) {
Z171 = W_138->Y1->U_1.V_35.Y34.Y9->A[Z168];
ZfM_33(Zq0A4_217);
ZfM_29(Zq0A4_217, (STRING)"  , ", 4L);
Zq0A4_237(W_138->Y1->U_1.V_35.Y34.Y1);
ZfM_29(Zq0A4_217, (STRING)".", 1L);
Zq0A4_237(Z171->U_1.V_5.Y4.Y1);
}
if (Z168 >= B_4) break;
}
}
return;
}
}
}

static void Z249
# ifdef HAVE_ARGS
(Zq0A4_185 Z372, Zq0A4_185 Z373)
# else
(Z372, Z373)
Zq0A4_185 Z372;
Zq0A4_185 Z373;
# endif
{
struct S_2 Z266;

for (;;) {
for (;;) {
if (Z372 == Zq0A4_53) {
return;
}
if (Z373 == Zq0A4_53) {
return;
}
if (Zq0A4_407(Z372, Zq0A4_122)) {
for (;;) {
{
register Zq0A4_326 *W_139 = &Z372->U_1.V_71.Y70;

if (!(Z372->U_1.V_71.Y70.Y1->U_1.V_1.Y0 == Zq0A4_118)) {
goto EXIT_44;
}
Z249(Z372->U_1.V_71.Y70.Y1->U_1.V_67.Y66.Y5, Z373);
return;
}
} EXIT_44:;
if (Z372->U_1.V_71.Y70.Y1 != NIL && Z372->U_1.V_71.Y70.Y1->U_1.V_1.Y0 == Zq0A4_127) {
if (Z373 != NIL && Z373->U_1.V_1.Y0 == Zq0A4_159) {
for (;;) {
{
register Zq0A4_326 *W_140 = &Z372->U_1.V_71.Y70;

{
register Zq0A4_363 *W_141 = &Z373->U_1.V_108.Y107;

if (!(Z372->U_1.V_71.Y70.Y1->U_1.V_76.Y75.Y3 != Zq0A4_53 && Z372->U_1.V_71.Y70.Y1->U_1.V_76.Y75.Y3->U_1.V_108.Y107.Y4->U_1.V_1.Y0 == Zq0A4_166 && Z372->U_1.V_71.Y70.Y1->U_1.V_76.Y75.Y3->U_1.V_108.Y107.Y4->U_1.V_115.Y114.Y1 == Z373->U_1.V_108.Y107.Y2)) {
goto EXIT_45;
}
Z249(Z372->U_1.V_71.Y70.Y2, Z373->U_1.V_108.Y107.Y1);
return;
}
}
} EXIT_45:;
}
}
if (Z373 != NIL && Z373->U_1.V_1.Y0 == Zq0A4_159) {
if (Z373->U_1.V_108.Y107.Y4 != NIL && Z373->U_1.V_108.Y107.Y4->U_1.V_1.Y0 == Zq0A4_166) {
if (Z373->U_1.V_108.Y107.Y4->U_1.V_115.Y114.Y2 == FALSE) {
for (;;) {
{
register Zq0A4_326 *W_142 = &Z372->U_1.V_71.Y70;

{
register Zq0A4_363 *W_143 = &Z373->U_1.V_108.Y107;

if (!(Z372->U_1.V_71.Y70.Y1->U_1.V_1.Y0 == Zq0A4_117)) {
goto EXIT_46;
}
Z249(Z372->U_1.V_71.Y70.Y2, Z373->U_1.V_108.Y107.Y1);
return;
}
}
} EXIT_46:;
}
}
{
register Zq0A4_326 *W_144 = &Z372->U_1.V_71.Y70;

{
register Zq0A4_363 *W_145 = &Z373->U_1.V_108.Y107;

ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(Z373->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Z210(Z372->U_1.V_71.Y70.Y1);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z372 = Z372->U_1.V_71.Y70.Y2;
Z373 = Z373->U_1.V_108.Y107.Y1;
goto EXIT_43;
}
}
}
}
if (Z372 != NIL && Z372->U_1.V_1.Y0 == Zq0A4_159) {
if (Z373 != NIL && Z373->U_1.V_1.Y0 == Zq0A4_159) {
if (Z373->U_1.V_108.Y107.Y4 != NIL && Z373->U_1.V_108.Y107.Y4->U_1.V_1.Y0 == Zq0A4_166) {
if (Z373->U_1.V_108.Y107.Y4->U_1.V_115.Y114.Y2 == TRUE) {
{
register Zq0A4_363 *W_146 = &Z372->U_1.V_108.Y107;

{
register Zq0A4_363 *W_147 = &Z373->U_1.V_108.Y107;

ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(Z373->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Zq0A4_237(Z372->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z372 = Z372->U_1.V_108.Y107.Y1;
Z373 = Z373->U_1.V_108.Y107.Y1;
goto EXIT_43;
}
}
}
}
{
register Zq0A4_363 *W_148 = &Z372->U_1.V_108.Y107;

{
register Zq0A4_363 *W_149 = &Z373->U_1.V_108.Y107;

Z372 = Z372->U_1.V_108.Y107.Y1;
Z373 = Z373->U_1.V_108.Y107.Y1;
goto EXIT_43;
}
}
}
}
return;
} EXIT_43:;
} EXIT_42:;
}

static void Z251
# ifdef HAVE_ARGS
(Zq0A4_185 Z374, Zq0A4_185 Z375)
# else
(Z374, Z375)
Zq0A4_185 Z374;
Zq0A4_185 Z375;
# endif
{
struct S_1 Z266;

for (;;) {
for (;;) {
if (Z374 == Zq0A4_53) {
return;
}
if (Z375 == Zq0A4_53) {
return;
}
if (Z374 != NIL && Z374->U_1.V_1.Y0 == Zq0A4_109) {
if (Z374->U_1.V_58.Y57.Y1 != NIL && Z374->U_1.V_58.Y57.Y1->U_1.V_1.Y0 == Zq0A4_118) {
{
register Zq0A4_313 *W_150 = &Z374->U_1.V_58.Y57;

Z374 = Z374->U_1.V_58.Y57.Y1->U_1.V_67.Y66.Y5;
goto EXIT_48;
}
}
if (Z374->U_1.V_58.Y57.Y1 != NIL && Z374->U_1.V_58.Y57.Y1->U_1.V_1.Y0 == Zq0A4_117) {
if (Z375 != NIL && Z375->U_1.V_1.Y0 == Zq0A4_159) {
{
register Zq0A4_313 *W_151 = &Z374->U_1.V_58.Y57;

{
register Zq0A4_363 *W_152 = &Z375->U_1.V_108.Y107;

ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(Z375->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Zq0A4_237(Z374->U_1.V_58.Y57.Y1->U_1.V_66.Y65.Y2);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z374 = Z374->U_1.V_58.Y57.Y2;
Z375 = Z375->U_1.V_108.Y107.Y1;
goto EXIT_48;
}
}
}
}
if (Z374->U_1.V_58.Y57.Y1 != NIL && Z374->U_1.V_58.Y57.Y1->U_1.V_1.Y0 == Zq0A4_115) {
if (Z374->U_1.V_58.Y57.Y1->U_1.V_64.Y63.Y4 != NIL && Z374->U_1.V_58.Y57.Y1->U_1.V_64.Y63.Y4->U_1.V_1.Y0 == Zq0A4_166) {
if (Z375 != NIL && Z375->U_1.V_1.Y0 == Zq0A4_159) {
for (;;) {
{
register Zq0A4_313 *W_153 = &Z374->U_1.V_58.Y57;

{
register Zq0A4_363 *W_154 = &Z375->U_1.V_108.Y107;

if (!(Z374->U_1.V_58.Y57.Y1->U_1.V_64.Y63.Y4->U_1.V_115.Y114.Y1 == Z375->U_1.V_108.Y107.Y2)) {
goto EXIT_49;
}
Z251(Z374->U_1.V_58.Y57.Y2, Z375->U_1.V_108.Y107.Y1);
return;
}
}
} EXIT_49:;
}
}
if (Z375 != NIL && Z375->U_1.V_1.Y0 == Zq0A4_159) {
{
register Zq0A4_313 *W_155 = &Z374->U_1.V_58.Y57;

{
register Zq0A4_363 *W_156 = &Z375->U_1.V_108.Y107;

ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(Z375->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
ZjqD_5(Z374->U_1.V_58.Y57.Y1->U_1.V_64.Y63.Y4);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z374 = Z374->U_1.V_58.Y57.Y2;
Z375 = Z375->U_1.V_108.Y107.Y1;
goto EXIT_48;
}
}
}
}
}
if (Z374 != NIL && Z374->U_1.V_1.Y0 == Zq0A4_159) {
if (Z375 != NIL && Z375->U_1.V_1.Y0 == Zq0A4_159) {
{
register Zq0A4_363 *W_157 = &Z374->U_1.V_108.Y107;

{
register Zq0A4_363 *W_158 = &Z375->U_1.V_108.Y107;

ZfM_29(Zq0A4_217, (STRING)"      ", 6L);
Zq0A4_237(Z375->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)" := ", 4L);
Zq0A4_237(Z374->U_1.V_108.Y107.Y2);
ZfM_29(Zq0A4_217, (STRING)";", 1L);
ZfM_33(Zq0A4_217);
Z374 = Z374->U_1.V_108.Y107.Y1;
Z375 = Z375->U_1.V_108.Y107.Y1;
goto EXIT_48;
}
}
}
}
return;
} EXIT_48:;
} EXIT_47:;
}

void ZjqD_6
 ARGS ((void))
{
}

void ZjqD_7
 ARGS ((void))
{
}

static void Z378
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_Mod ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_Position ();
BEGIN_IO ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Semantic ();
BEGIN_Optimize ();
BEGIN_Tree ();

ZjqD_0 = ZfM_1;
ZjqD_2 = Z378;
ZjqD_6();
}
