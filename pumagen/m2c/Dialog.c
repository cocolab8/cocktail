#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Order
#include "Order.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Dialog
#include "Dialog.h"
#endif


typedef struct S_1 {
SHORTCARD C_0_A, Y1;
Zq0A4_153 Y2;
} Z197;
static ZpmCQ_4 Z200;
static SHORTCARD Z201;
static Zp1PEAFD_2 Z202;
static LONGINT Z203;
static struct S_2 {
Z197 A[10000 + 1];
} *Z204;
static INTEGER Z205;
static LONGINT Z206;
static struct S_3 {
Z197 A[10000 + 1];
} *Z207;
static INTEGER Z208;
struct S_1_Find;
static BOOLEAN Z209 ARGS ((SHORTCARD Z210, SHORTCARD Z211, Zq0A4_153 Z212));
static BOOLEAN Z220 ARGS ((struct S_1_Find *link, Zq0A4_153 Z221));
static BOOLEAN Z231 ARGS ((struct S_1_Find *link, Zq0A4_153 Z221));
struct S_1_Find {
SHORTCARD *Z210;
SHORTCARD *Z211;
Zq0A4_153 *Z212;
Zq0A4_153 *Z219;
};
static void Z242 ARGS ((SHORTCARD Z210, SHORTCARD Z211, Zq0A4_153 Z212));
static void Z244 ARGS ((void));
struct S_4 {
CHAR A[64 + 1];
};

static BOOLEAN Z220
# ifdef HAVE_ARGS
(struct S_1_Find *link, Zq0A4_153 Z221)
# else
(link, Z221)
struct S_1_Find *link;
Zq0A4_153 Z221;
# endif
{
if (Z221->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_1 = &(*link->Z212)->U_1.V_5.Y4;

{
register Zq0A4_231 *W_2 = &W_1->Y15->A[*link->Z210 - 1].Y0->U_1.V_10.Y9;

if (Z209((SHORTCARD)(*link->Z210 - W_1->Y13 - W_2->Y13), (SHORTCARD)(*link->Z211 - W_1->Y13 - W_2->Y13), Z221)) {
return TRUE;
}
}
}
if (Z220(link, Z221->U_1.V_5.Y4.Y4)) {
return TRUE;
}
return Z220(link, Z221->U_1.V_5.Y4.Y5);
} else {
return FALSE;
}
}

static BOOLEAN Z231
# ifdef HAVE_ARGS
(struct S_1_Find *link, Zq0A4_153 Z221)
# else
(link, Z221)
struct S_1_Find *link;
Zq0A4_153 Z221;
# endif
{
switch (Z221->U_1.V_1.Y0) {
case Zq0A4_100:;
if (Z231(link, Z221->U_1.V_5.Y4.Y6)) {
return TRUE;
} else {
return Z231(link, Z221->U_1.V_5.Y4.Y3);
}
break;
case Zq0A4_105:;
{
register Zq0A4_226 *W_3 = &(*link->Z219)->U_1.V_5.Y4;

{
register Zq0A4_231 *W_4 = &Z221->U_1.V_10.Y9;

if (W_4->Y8 == *link->Z212 && Z209((SHORTCARD)(W_3->Y13 + W_4->Y13 + *link->Z210), (SHORTCARD)(W_3->Y13 + W_4->Y13 + *link->Z211), *link->Z219)) {
return TRUE;
}
}
}
return Z231(link, Z221->U_1.V_10.Y9.Y1);
break;
case Zq0A4_106:;
return Z231(link, Z221->U_1.V_11.Y10.Y1);
break;
case Zq0A4_107:;
return Z231(link, Z221->U_1.V_12.Y11.Y1);
break;
default:
return FALSE;
break;
}
}

static BOOLEAN Z209
# ifdef HAVE_ARGS
(SHORTCARD Z210, SHORTCARD Z211, Zq0A4_153 Z212)
# else
(Z210, Z211, Z212)
SHORTCARD Z210, Z211;
Zq0A4_153 Z212;
# endif
{
SHORTCARD Z213, Z214;
INTEGER Z215, Z216, Z217;
ZolB7FGBG_3 Z218;
Zq0A4_153 Z219;
struct S_1_Find frame;

frame.Z210 = &Z210;
frame.Z211 = &Z211;
frame.Z212 = &Z212;
frame.Z219 = &Z219;
{
register Zq0A4_226 *W_5 = &Z212->U_1.V_5.Y4;

if (!(IN(Zq0A4_53, Zq0A4_69) && ZolB7FGBG_9((LONGINT)Z210, (LONGINT)Z211, W_5->Y18) || IN(Zq0A4_51, Zq0A4_69) && ZolB7FGBG_9((LONGINT)Z210, (LONGINT)Z211, W_5->Y17))) {
return FALSE;
}
{
LONGINT B_1 = 1, B_2 = Z205;

if (B_1 <= B_2)
for (Z215 = B_1;; Z215 += 1) {
{
register Z197 *W_6 = &Z204->A[Z215];

if (Z210 == W_6->C_0_A && Z211 == W_6->Y1 && Z212 == W_6->Y2) {
return FALSE;
}
}
if (Z215 >= B_2) break;
}
}
INC(Z205);
if (Z205 == Z203) {
ZarQdhNDD_2((ADDRESS *)&Z204, &Z203, (LONGINT)sizeof (Z197));
}
{
register Z197 *W_7 = &Z204->A[Z205];

W_7->C_0_A = Z210;
W_7->Y1 = Z211;
W_7->Y2 = Z212;
}
Z216 = Z205;
Z217 = Z208;
ZolB7FGBG_4(&Z218, (LONGINT)W_5->Y14, (LONGINT)W_5->Y14);
ZolB7FGBG_23(&Z218, W_5->Y16);
ZolB7FGBG_20(&Z218);
if (ZolB7FGBG_9((LONGINT)Z210, (LONGINT)Z211, Z218)) {
{
SHORTCARD B_3 = 1, B_4 = W_5->Y14;

if (B_3 <= B_4)
for (Z213 = B_3;; Z213 += 1) {
if (ZolB7FGBG_9((LONGINT)Z210, (LONGINT)Z213, W_5->Y16) && (ZolB7FGBG_9((LONGINT)Z213, (LONGINT)Z211, Z218) || Z213 == Z211)) {
INC(Z208);
if (Z208 == Z206) {
ZarQdhNDD_2((ADDRESS *)&Z207, &Z206, (LONGINT)sizeof (Z197));
}
{
register Z197 *W_8 = &Z207->A[Z208];

W_8->C_0_A = Z210;
W_8->Y1 = Z213;
W_8->Y2 = Z212;
}
ZolB7FGBG_5(&Z218);
return Z213 == Z211 || Z209(Z213, Z211, Z212);
}
if (Z213 >= B_4) break;
}
}
}
ZolB7FGBG_5(&Z218);
if (IN(Zq0A4_21, W_5->Y15->A[Z210 - 1].Y3) && IN(Zq0A4_21, W_5->Y15->A[Z211 - 1].Y3) && W_5->Y15->A[Z210 - 1].Y0 == W_5->Y15->A[Z211 - 1].Y0 && W_5->Y15->A[Z210 - 1].Y0 != Zq0A4_97) {
{
register Zq0A4_231 *W_9 = &W_5->Y15->A[Z210 - 1].Y0->U_1.V_10.Y9;

if (Z209((SHORTCARD)(Z210 - W_5->Y13 - W_9->Y13), (SHORTCARD)(Z211 - W_5->Y13 - W_9->Y13), W_9->Y8)) {
return TRUE;
}
if (Z220(&frame, W_9->Y8->U_1.V_5.Y4.Y4)) {
return TRUE;
}
}
}
if (IN(Zq0A4_20, W_5->Y15->A[Z210 - 1].Y3) && IN(Zq0A4_20, W_5->Y15->A[Z211 - 1].Y3)) {
{
SHORTCARD B_5 = 1, B_6 = Z201;

if (B_5 <= B_6)
for (Z214 = B_5;; Z214 += 1) {
if (ZpmCQ_25((LONGCARD)Z214, &W_5->Y23)) {
Z219 = ZlvG3A_0->A[Z214];
if (Z231(&frame, Z219)) {
return TRUE;
}
}
if (Z214 >= B_6) break;
}
}
}
if (IN(Zq0A4_51, Zq0A4_69)) {
{
SHORTCARD B_7 = 1, B_8 = W_5->Y14;

if (B_7 <= B_8)
for (Z213 = B_7;; Z213 += 1) {
if (ZolB7FGBG_9((LONGINT)Z210, (LONGINT)Z213, W_5->Y17) && ZolB7FGBG_9((LONGINT)Z213, (LONGINT)Z211, W_5->Y17) && Z209(Z210, Z213, Z212) && Z209(Z213, Z211, Z212)) {
return TRUE;
}
if (Z213 >= B_8) break;
}
}
}
if (IN(Zq0A4_53, Zq0A4_69)) {
{
SHORTCARD B_9 = 1, B_10 = W_5->Y14;

if (B_9 <= B_10)
for (Z213 = B_9;; Z213 += 1) {
if (ZolB7FGBG_9((LONGINT)Z210, (LONGINT)Z213, W_5->Y18) && ZolB7FGBG_9((LONGINT)Z213, (LONGINT)Z211, W_5->Y18) && Z209(Z210, Z213, Z212) && Z209(Z213, Z211, Z212)) {
return TRUE;
}
if (Z213 >= B_10) break;
}
}
}
Z205 = Z216;
Z208 = Z217;
return FALSE;
}
}

static void Z242
# ifdef HAVE_ARGS
(SHORTCARD Z210, SHORTCARD Z211, Zq0A4_153 Z212)
# else
(Z210, Z211, Z212)
SHORTCARD Z210, Z211;
Zq0A4_153 Z212;
# endif
{
INTEGER Z215;

{
register Zq0A4_226 *W_10 = &Z212->U_1.V_5.Y4;

Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_10->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"	", 1L);
Zq0A4_213(W_10->Y15->A[Z210 - 1]);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"	", 1L);
Zq0A4_213(W_10->Y15->A[Z211 - 1]);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
Z203 = 32;
ZarQdhNDD_0((ADDRESS *)&Z204, &Z203, (LONGINT)sizeof (Z197));
Z205 = 0;
Z206 = 32;
ZarQdhNDD_0((ADDRESS *)&Z207, &Z206, (LONGINT)sizeof (Z197));
Z208 = 0;
if (Z209(Z210, Z211, Z212)) {
{
LONGINT B_11 = 1, B_12 = Z208;

if (B_11 <= B_12)
for (Z215 = B_11;; Z215 += 1) {
{
register Z197 *W_11 = &Z207->A[Z215];

Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_11->Y2->U_1.V_5.Y4.Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"	", 1L);
Zq0A4_213(W_11->Y2->U_1.V_5.Y4.Y15->A[W_11->C_0_A - 1]);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"	", 1L);
Zq0A4_213(W_11->Y2->U_1.V_5.Y4.Y15->A[W_11->Y1 - 1]);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z215 >= B_12) break;
}
}
}
ZarQdhNDD_3((ADDRESS *)&Z204, &Z203, (LONGINT)sizeof (Z197));
ZarQdhNDD_3((ADDRESS *)&Z207, &Z206, (LONGINT)sizeof (Z197));
}

static void Z244
 ARGS ((void))
{
Zq0A4_172 = ZfM_1;
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Dialog System", 14L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   <name>          select current node type (rule)", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" t <name>          select current node type (rule)", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" a <name>[:<name>] select current attribute instance a", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" b <name>[:<name>] select current attribute instance b", 54L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" P print dependency relation DP  for complete node type", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" p print dependency relation DP  for current attribute instance", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" S print dependency relation SNC for complete node type", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" s print dependency relation SNC for current attribute instance", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" N print dependency relation DNC for complete node type", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" n print dependency relation DNC for current attribute instance", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" O print dependency relation OAG for complete node type", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" o print dependency relation OAG for current attribute instance", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" C print dependencies introduced for total order for complete node type", 71L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" c print dependencies introduced for total order for cyclic attributes", 70L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" G print attribute instances sorted by declaration order", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" E print attribute instances sorted by evaluation order", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" V print visit sequence", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" F search for and print dependency path between attributes a and b", 66L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" M print summary of node type (rule) from source", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Q browse internal data structure of complete attribute grammar", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" q browse internal data structure of current node type", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" h print menue for dialog system", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ? print current state", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" x exit dialog system", 21L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}

void Zab47EG_0
# ifdef HAVE_ARGS
(Zq0A4_153 Z221)
# else
(Z221)
Zq0A4_153 Z221;
# endif
{
CHAR Z245, Z246;
Zq0A4_153 Z223, Z247;
Zq0A4_153 Z234;
struct S_4 Z248, Z249, Z250;
INTEGER Z251, Z252, Z253;
Zfb3DLQ_0 Z254;
SHORTCARD Z210, Z211, Z255;

Z244();
Z223 = Zq0A4_97;
Z210 = 0;
Z211 = 0;
for (;;) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"? ", 2L);
Z246 = ZfM_7((ZDz6VQCC_4)ZfM_0);
if (Z246 == '\0') {
goto EXIT_1;
}
Z251 = -1;
while (Z246 > ' ' && Z246 != ':') {
INC(Z251);
Z248.A[Z251] = Z246;
Z246 = ZfM_7((ZDz6VQCC_4)ZfM_0);
if (Z246 == '\0') {
goto EXIT_1;
}
}
Z248.A[Z251 + 1] = '\0';
while (Z246 <= ' ' && Z246 != '\n' || Z246 == ':') {
Z246 = ZfM_7((ZDz6VQCC_4)ZfM_0);
if (Z246 == '\0') {
goto EXIT_1;
}
}
Z252 = -1;
while (Z246 > ' ' && Z246 != ':') {
INC(Z252);
Z249.A[Z252] = Z246;
Z246 = ZfM_7((ZDz6VQCC_4)ZfM_0);
if (Z246 == '\0') {
goto EXIT_1;
}
}
Z249.A[Z252 + 1] = '\0';
while (Z246 <= ' ' && Z246 != '\n' || Z246 == ':') {
Z246 = ZfM_7((ZDz6VQCC_4)ZfM_0);
if (Z246 == '\0') {
goto EXIT_1;
}
}
Z253 = -1;
while (Z246 > ' ' && Z246 != ':') {
INC(Z253);
Z250.A[Z253] = Z246;
Z246 = ZfM_7((ZDz6VQCC_4)ZfM_0);
if (Z246 == '\0') {
goto EXIT_1;
}
}
Z250.A[Z253 + 1] = '\0';
while (Z246 != '\n') {
Z246 = ZfM_7((ZDz6VQCC_4)ZfM_0);
if (Z246 == '\0') {
goto EXIT_1;
}
}
if (Z251 == 0) {
Z245 = Z248.A[0];
switch (Z245) {
case 't':;
case 'T':;
Zp1PEAFD_13(Z249.A, 65L, &Z202);
Z254 = Zfb3DLQ_2(&Z202);
Z223 = Zq0A4_182(Z221->U_1.V_32.Y31.Y13, Z254);
if (Z223 == Zq0A4_97) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"unknown node type: ", 19L);
Zp1PEAFD_22((ZDz6VQCC_4)ZfM_1, &Z202);
}
break;
case 'a':;
case 'A':;
case 'b':;
case 'B':;
Zp1PEAFD_13(Z249.A, 65L, &Z202);
Z254 = Zfb3DLQ_2(&Z202);
Z234 = Zq0A4_183(Z223, Z254);
if (Z234 == Zq0A4_97) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"unknown attribute: ", 19L);
Zp1PEAFD_22((ZDz6VQCC_4)ZfM_1, &Z202);
} else {
if (Z245 == 'a' || Z245 == 'A') {
Z210 = Z234->U_1.V_10.Y9.Y10;
} else {
Z211 = Z234->U_1.V_10.Y9.Y10;
}
if (Z253 >= 0) {
Z247 = Z234->U_1.V_10.Y9.Y8;
if (Z247 != Zq0A4_97) {
Zp1PEAFD_13(Z250.A, 65L, &Z202);
Z254 = Zfb3DLQ_2(&Z202);
Z255 = Z223->U_1.V_5.Y4.Y13 + Z234->U_1.V_10.Y9.Y13;
Z234 = Zq0A4_183(Z247, Z254);
if (Z234 == Zq0A4_97) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"unknown attribute: ", 19L);
Zp1PEAFD_22((ZDz6VQCC_4)ZfM_1, &Z202);
} else {
if (Z245 == 'a' || Z245 == 'A') {
Z210 = Z255 + Z234->U_1.V_10.Y9.Y10;
} else {
Z211 = Z255 + Z234->U_1.V_10.Y9.Y10;
}
}
}
}
}
break;
case 'P':;
Zq0A4_215(Z223, Z223->U_1.V_5.Y4.Y16, Zq0A4_94);
break;
case 'p':;
Zq0A4_215(Z223, Z223->U_1.V_5.Y4.Y16, Zq0A4_94);
break;
case 'S':;
Zq0A4_215(Z223, Z223->U_1.V_5.Y4.Y17, Zq0A4_94);
break;
case 's':;
Zq0A4_215(Z223, Z223->U_1.V_5.Y4.Y17, Zq0A4_94);
break;
case 'N':;
Zq0A4_215(Z223, Z223->U_1.V_5.Y4.Y18, Zq0A4_94);
break;
case 'n':;
Zq0A4_215(Z223, Z223->U_1.V_5.Y4.Y18, Zq0A4_94);
break;
case 'O':;
Zq0A4_215(Z223, Z223->U_1.V_5.Y4.Y19, Zq0A4_94);
break;
case 'o':;
Zq0A4_215(Z223, Z223->U_1.V_5.Y4.Y19, Zq0A4_94);
break;
case 'C':;
if (Z223 != Zq0A4_97 && IN(Zq0A4_54, Zq0A4_69)) {
{
register Zq0A4_226 *W_12 = &Z223->U_1.V_5.Y4;

ZolB7FGBG_4(&W_12->Y20, (LONGINT)W_12->Y14, (LONGINT)W_12->Y14);
ZolB7FGBG_23(&W_12->Y20, W_12->Y19);
ZolB7FGBG_25(&W_12->Y20, W_12->Y18);
Zq0A4_215(Z223, W_12->Y20, Zq0A4_94);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZolB7FGBG_5(&W_12->Y20);
}
}
break;
case 'c':;
if (Z223 != Zq0A4_97 && IN(Zq0A4_54, Zq0A4_69)) {
{
register Zq0A4_226 *W_13 = &Z223->U_1.V_5.Y4;

ZolB7FGBG_4(&W_13->Y20, (LONGINT)W_13->Y14, (LONGINT)W_13->Y14);
ZpmCQ_5(&Z200, (LONGCARD)W_13->Y14);
ZolB7FGBG_19(W_13->Y19, &Z200);
ZolB7FGBG_23(&W_13->Y20, W_13->Y19);
ZolB7FGBG_25(&W_13->Y20, W_13->Y18);
Zq0A4_215(Z223, W_13->Y20, Z200);
ZolB7FGBG_5(&W_13->Y20);
ZpmCQ_7(&Z200);
}
}
break;
case 'D':;
case 'd':;
case 'G':;
case 'g':;
ZlvG3A_5(Z223);
break;
case 'E':;
case 'e':;
if (IN(Zq0A4_56, Zq0A4_69)) {
ZlvG3A_6(Z223);
}
break;
case 'V':;
case 'v':;
if (IN(Zq0A4_56, Zq0A4_69)) {
ZlvG3A_7(Z223);
}
break;
case 'F':;
case 'f':;
if (Z223 != Zq0A4_97 && 1 <= Z210 && Z210 <= Z223->U_1.V_5.Y4.Y14 && 1 <= Z211 && Z211 <= Z223->U_1.V_5.Y4.Y14) {
Z242(Z210, Z211, Z223);
}
break;
case 'M':;
case 'm':;
Zq0A4_219(Z223);
break;
case 'Q':;
Zq0A4_356(Z221);
break;
case 'q':;
Zq0A4_356(Z223);
break;
case 'h':;
case 'H':;
Z244();
break;
case 'x':;
case 'X':;
goto EXIT_1;
break;
case '?':;
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"node type: ", 11L);
if (Z223 != Zq0A4_97) {
{
register Zq0A4_226 *W_14 = &Z223->U_1.V_5.Y4;

Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_14->Y1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)", a: ", 5L);
if (1 <= Z210 && Z210 <= Z223->U_1.V_5.Y4.Y14) {
Zq0A4_213(W_14->Y15->A[Z210 - 1]);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" = ", 3L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z210, 0L);
} else {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"?", 1L);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)", b: ", 5L);
if (1 <= Z211 && Z211 <= Z223->U_1.V_5.Y4.Y14) {
Zq0A4_213(W_14->Y15->A[Z211 - 1]);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" = ", 3L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z211, 0L);
} else {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"?", 1L);
}
}
} else {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"?, a: ?, b: ?", 13L);
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
break;
default:
Zp1PEAFD_13(Z248.A, 65L, &Z202);
Z254 = Zfb3DLQ_2(&Z202);
Z223 = Zq0A4_182(Z221->U_1.V_32.Y31.Y13, Z254);
if (Z223 == Zq0A4_97) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"unknown node type: ", 19L);
Zp1PEAFD_22((ZDz6VQCC_4)ZfM_1, &Z202);
}
break;
}
} else {
Zp1PEAFD_13(Z248.A, 65L, &Z202);
Z254 = Zfb3DLQ_2(&Z202);
Z223 = Zq0A4_182(Z221->U_1.V_32.Y31.Y13, Z254);
if (Z223 == Zq0A4_97) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"unknown node type: ", 19L);
Zp1PEAFD_22((ZDz6VQCC_4)ZfM_1, &Z202);
}
}
} EXIT_1:;
}

void BEGIN_Dialog ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Tree ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Relation ();
BEGIN_Tree ();
BEGIN_Order ();
BEGIN_Tree ();

}
