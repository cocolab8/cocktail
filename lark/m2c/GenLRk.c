#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_LR1
#include "LR1.h"
#endif

#ifndef DEFINITION_LRk
#include "LRk.h"
#endif

#ifndef DEFINITION_Conflict
#include "Conflict.h"
#endif

#ifndef DEFINITION_Compress
#include "Compress.h"
#endif

#ifndef DEFINITION_Generate
#include "Generate.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_StdIO
#include "StdIO.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_GenLRk
#include "GenLRk.h"
#endif


static void Z196 ARGS ((ZpmCQ_4 *Z206, ZiSr_3 Z199, CARDINAL Z170));
struct S_1_WriteLook;
static void Z212 ARGS ((struct S_1_WriteLook *link));
struct S_1_WriteLook {
ZfM_3 *Z166;
ZpmCQ_4 *Z176;
};

void ZdaDoSr_0
# ifdef HAVE_ARGS
(ZfM_3 Z166, CARDINAL Z167)
# else
(Z166, Z167)
ZfM_3 Z166;
CARDINAL Z167;
# endif
{
CARDINAL Z168, Z169, Z170;
BOOLEAN Z171;
ZpmCQ_4 Z172, Z173, Z174, Z175, Z176, Z177;

ZpmCQ_5(&Z172, Zq0A4_91);
ZpmCQ_5(&Z176, Zq0A4_91);
ZpmCQ_5(&Z177, Zq0A4_91);
ZpmCQ_5(&Z175, Zq0A4_91);
Z171 = TRUE;
{
register ZggGECF6A_10 *W_1 = &ZggGECF6A_13->A[Z167];

{
register ZiS8_7 *W_2 = &ZiS8_14->A[W_1->Y1];

switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)"yy2 :=", 6L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)"yy2 =", 5L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)"yy2 :=", 6L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)"yy2 :=", 6L);
break;
}
ZdaDDADFC_4(Z166, (STRING)" GetLookahead (2);", 18L);
ZdaDDADFC_7(Z166);
ZpmCQ_32(&Z172);
{
LONGCARD B_1 = W_2->Y0, B_2 = W_2->Y0 + W_2->Y2 + W_2->Y3;

if (B_1 <= B_2)
for (Z168 = B_1;; Z168 += 1) {
{
register ZiS8_8 *W_3 = &ZiS8_17->A[Z168];

{
register Zq0A4_120 *W_4 = &Zq0A4_95->A[W_3->Y0]->U_1.V_18.Y17;

if (W_3->Y1 == W_4->Y12 && W_1->Y7 != Z168 && ZpmCQ_25((LONGCARD)W_3->Y0, &W_1->Y0)) {
if (Z171) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)"IF ", 3L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)"if (", 4L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)"if ", 3L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)"if ", 3L);
break;
}
Z171 = FALSE;
} else {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)"ELSIF ", 6L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)"else if (", 9L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)"elseif ", 7L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)"elsif ", 6L);
break;
}
}
if (W_1->Y5 > 0) {
if (W_3->Y1 > 0) {
ZpmCQ_30(&Z176, *ZiSr_8->A[Z168 - W_2->Y0 + W_2->Y1].Y0->Y1->A[W_1->Y5 - 2]);
} else {
ZpmCQ_30(&Z176, *ZiSr_10->A[ZiSr_14(Z168)].Y1->A[W_1->Y5 - 2]);
}
} else {
if (W_3->Y1 > 0) {
Z196(&Z176, *ZiSr_8->A[Z168 - W_2->Y0 + W_2->Y1].Y0->Y3, (LONGCARD)W_1->Y6);
} else {
Z196(&Z176, ZiSr_10->A[ZiSr_14(Z168)].Y2, (LONGCARD)W_1->Y6);
}
}
Z169 = 0;
while (!ZpmCQ_26(Z176)) {
Z170 = ZpmCQ_20(&Z176);
if (Z169 > 0) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)" OR ", 4L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)" || ", 4L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)" or ", 4L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)" or else ", 9L);
break;
}
}
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)"(yy2 = ", 7L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)"(yy2 == ", 8L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)"(yy2 = ", 7L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)"(yy2 = ", 7L);
break;
}
ZdaDDADFC_5(Z166, (LONGINT)Zq0A4_93->A[Z170]->U_1.V_6.Y5.Y4, 0L);
ZdaDDADFC_4(Z166, (STRING)")", 1L);
INC(Z169);
}
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)" THEN", 5L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)")", 1L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)" then", 5L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)" then", 5L);
break;
}
ZdaDoSr_2(Z166, ZiS8_28 + W_3->Y0);
} else if (W_3->Y1 < W_4->Y12 && W_1->Y7 != 0 && W_4->Y17->A[W_3->Y1 + 1] == W_1->Y6) {
if (W_1->Y5 > 0) {
ZpmCQ_8(&Z172, *ZiSr_10->A[ZiSr_14(Z168)].Y1->A[W_1->Y5 - 2]);
} else {
Z196(&Z176, ZiSr_10->A[ZiSr_14(Z168)].Y2, (LONGCARD)W_1->Y6);
ZpmCQ_8(&Z172, Z176);
}
}
}
}
if (Z168 >= B_2) break;
}
}
if (!ZpmCQ_26(Z172)) {
if (Z171) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)"IF ", 3L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)"if (", 4L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)"if ", 3L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)"if ", 3L);
break;
}
Z171 = FALSE;
} else {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)"ELSIF ", 6L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)"else if (", 9L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)"elseif ", 7L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)"elsif ", 6L);
break;
}
}
Z169 = 0;
while (!ZpmCQ_26(Z172)) {
Z170 = ZpmCQ_20(&Z172);
if (Z169 > 0) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)" OR ", 4L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)" || ", 4L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)" or ", 4L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)" or else ", 9L);
break;
}
}
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)"(yy2 = ", 7L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)"(yy2 == ", 8L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)"(yy2 = ", 7L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)"(yy2 = ", 7L);
break;
}
ZdaDDADFC_5(Z166, (LONGINT)Zq0A4_93->A[Z170]->U_1.V_6.Y5.Y4, 0L);
ZdaDDADFC_4(Z166, (STRING)")", 1L);
INC(Z169);
}
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)" THEN", 5L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)")", 1L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)" then", 5L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)" then", 5L);
break;
}
ZdaDoSr_1(Z166, (LONGCARD)W_1->Y2);
}
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)"ELSE", 4L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)"else {", 6L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)"else", 4L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)"else", 4L);
break;
}
if (W_1->Y7 > 0) {
ZdaDoSr_2(Z166, ZiS8_28 + ZiS8_17->A[W_1->Y7].Y0);
} else {
ZdaDoSr_1(Z166, (LONGCARD)W_1->Y2);
}
}
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)"END;", 4L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)"}", 1L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)"end;", 4L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)"end if;", 7L);
break;
}
ZdaDDADFC_7(Z166);
}
ZpmCQ_7(&Z176);
ZpmCQ_7(&Z177);
ZpmCQ_7(&Z172);
ZpmCQ_7(&Z175);
}

void ZdaDoSr_1
# ifdef HAVE_ARGS
(ZfM_3 Z166, CARDINAL Z167)
# else
(Z166, Z167)
ZfM_3 Z166;
CARDINAL Z167;
# endif
{
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)" yyRead; EXIT;", 14L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_4(Z166, (STRING)" yyGotoRead (", 13L);
ZdaDDADFC_5(Z166, (LONGINT)ZggFGLABP_38((LONGINT)Z167), 0L);
ZdaDDADFC_4(Z166, (STRING)")", 1L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)" yyState := yyCondition.item (yyState);", 39L);
ZdaDDADFC_7(Z166);
ZdaDDADFC_4(Z166, (STRING)" yyStackPtr := yyStackPtr + 1;", 30L);
ZdaDDADFC_7(Z166);
ZdaDDADFC_12(Z166, 'A');
ZdaDDADFC_4(Z166, (STRING)".put (Scanner.Attribute, yyStackPtr);", 37L);
ZdaDDADFC_7(Z166);
ZdaDDADFC_4(Z166, (STRING)" yyTerminal := yyGetToken;", 26L);
ZdaDDADFC_7(Z166);
ZdaDDADFC_4(Z166, (STRING)" debug yyRead (yyPrevTerminal, yyTerminal)", 42L);
ZdaDDADFC_7(Z166);
ZdaDDADFC_4(Z166, (STRING)" yyPrevTerminal := yyTerminal end;", 34L);
ZdaDDADFC_7(Z166);
ZdaDDADFC_4(Z166, (STRING)" yyIsRepairing := FALSE;", 24L);
ZdaDDADFC_7(Z166);
ZdaDDADFC_4(Z166, (STRING)" yyquit_loop3 := TRUE;", 22L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)" yyRead; exit;", 14L);
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)" YYREAD", 7L);
break;
}
ZdaDDADFC_7(Z166);
}

void ZdaDoSr_2
# ifdef HAVE_ARGS
(ZfM_3 Z166, CARDINAL Z167)
# else
(Z166, Z167)
ZfM_3 Z166;
CARDINAL Z167;
# endif
{
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z166, (STRING)" yyReduce (", 11L);
ZdaDDADFC_5(Z166, (LONGINT)ZggFGLABP_38((LONGINT)Z167), 0L);
ZdaDDADFC_4(Z166, (STRING)");", 2L);
ZdaDDADFC_13(Z166, Z167 - ZiS8_28, TRUE);
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_4(Z166, (STRING)" yyGotoReduce (", 15L);
ZdaDDADFC_5(Z166, (LONGINT)ZggFGLABP_38((LONGINT)Z167), 0L);
ZdaDDADFC_4(Z166, (STRING)", yy", 4L);
ZdaDDADFC_5(Z166, (LONGINT)(Z167 - ZiS8_28), 0L);
ZdaDDADFC_4(Z166, (STRING)")", 1L);
ZdaDDADFC_7(Z166);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z166, (STRING)" debug yyReduce (", 17L);
ZdaDDADFC_5(Z166, (LONGINT)ZggFGLABP_38((LONGINT)Z167), 0L);
ZdaDDADFC_4(Z166, (STRING)") end;", 6L);
ZdaDDADFC_13(Z166, Z167 - ZiS8_28, TRUE);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z166, (STRING)" yyGotoReduce (", 15L);
ZdaDDADFC_5(Z166, (LONGINT)ZggFGLABP_38((LONGINT)Z167), 0L);
ZdaDDADFC_4(Z166, (STRING)", yy", 4L);
ZdaDDADFC_5(Z166, (LONGINT)(Z167 - ZiS8_28), 0L);
ZdaDDADFC_4(Z166, (STRING)")", 1L);
ZdaDDADFC_7(Z166);
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z166, (STRING)" yyReduce (", 11L);
ZdaDDADFC_5(Z166, (LONGINT)ZggFGLABP_38((LONGINT)Z167), 0L);
ZdaDDADFC_4(Z166, (STRING)");", 2L);
ZdaDDADFC_13(Z166, Z167 - ZiS8_28, TRUE);
break;
}
}

static void Z196
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z206, ZiSr_3 Z199, CARDINAL Z170)
# else
(Z206, Z199, Z170)
ZpmCQ_4 *Z206;
ZiSr_3 Z199;
CARDINAL Z170;
# endif
{
CARDINAL Z207;

{
register ZiSr_3 *W_5 = &Z199;

if (W_5->Y2 == NIL) {
ZpmCQ_30(Z206, W_5->Y1->A[Z170 - W_5->Y3]->Y0);
} else {
Z207 = 0;
for (;;) {
if (W_5->Y2->A[Z207] == Z170) {
ZpmCQ_30(Z206, W_5->Y1->A[Z207]->Y0);
return;
}
INC(Z207);
} EXIT_1:;
}
}
}

static void Z212
# ifdef HAVE_ARGS
(struct S_1_WriteLook *link)
# else
(link)
struct S_1_WriteLook *link;
# endif
{
CARDINAL Z169;
BOOLEAN Z171;

Z171 = TRUE;
Z169 = 0;
ZfM_29(*link->Z166, (STRING)" F2: {", 6L);
if (ZpmCQ_15(link->Z176) > 3) {
ZfM_33(*link->Z166);
ZfM_24(*link->Z166, '\t');
}
while (!ZpmCQ_26(*link->Z176)) {
if (Z171) {
Z171 = FALSE;
} else {
ZfM_29(*link->Z166, (STRING)", ", 2L);
}
if (Z169 == 6) {
Z169 = 0;
ZfM_33(*link->Z166);
ZfM_24(*link->Z166, '\t');
}
ZdaDDADFC_14(*link->Z166, ZpmCQ_20(link->Z176));
INC(Z169);
}
ZfM_29(*link->Z166, (STRING)"}", 1L);
}

void ZdaDoSr_3
# ifdef HAVE_ARGS
(ZfM_3 Z166, CARDINAL Z167, CARDINAL Z168)
# else
(Z166, Z167, Z168)
ZfM_3 Z166;
CARDINAL Z167, Z168;
# endif
{
ZpmCQ_4 Z176;
struct S_1_WriteLook frame;

frame.Z166 = &Z166;
frame.Z176 = &Z176;
ZpmCQ_5(&Z176, Zq0A4_91);
{
register ZggGECF6A_10 *W_6 = &ZggGECF6A_13->A[Z167];

{
register ZiS8_7 *W_7 = &ZiS8_14->A[W_6->Y1];

{
register ZiS8_8 *W_8 = &ZiS8_17->A[Z168];

{
register Zq0A4_120 *W_9 = &Zq0A4_95->A[W_8->Y0]->U_1.V_18.Y17;

if (W_8->Y1 == W_9->Y12 && ZpmCQ_25((LONGCARD)W_8->Y0, &W_6->Y0)) {
if (W_6->Y5 > 0) {
if (W_8->Y1 > 0) {
ZpmCQ_30(&Z176, *ZiSr_8->A[Z168 - W_7->Y0 + W_7->Y1].Y0->Y1->A[W_6->Y5 - 2]);
} else {
ZpmCQ_30(&Z176, *ZiSr_10->A[ZiSr_14(Z168)].Y1->A[W_6->Y5 - 2]);
}
} else {
if (W_8->Y1 > 0) {
Z196(&Z176, *ZiSr_8->A[Z168 - W_7->Y0 + W_7->Y1].Y0->Y3, (LONGCARD)W_6->Y6);
} else {
Z196(&Z176, ZiSr_10->A[ZiSr_14(Z168)].Y2, (LONGCARD)W_6->Y6);
}
}
Z212(&frame);
} else if (W_8->Y1 < W_9->Y12 && W_9->Y17->A[W_8->Y1 + 1] == W_6->Y6) {
if (W_6->Y5 > 0) {
ZpmCQ_30(&Z176, *ZiSr_10->A[ZiSr_14(Z168)].Y1->A[W_6->Y5 - 2]);
} else {
Z196(&Z176, ZiSr_10->A[ZiSr_14(Z168)].Y2, (LONGCARD)W_6->Y6);
}
Z212(&frame);
}
}
}
}
}
ZpmCQ_7(&Z176);
}

void BEGIN_GenLRk ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_IO ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_Semantic ();
BEGIN_LR1 ();
BEGIN_LRk ();
BEGIN_Conflict ();
BEGIN_Compress ();
BEGIN_Generate ();
BEGIN_Tree ();
BEGIN_StdIO ();
BEGIN_IO ();

}
