#include "SYSTEM_.h"

#ifndef DEFINITION_Pointers
#include "Pointers.h"
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

static LONGINT Z132;
static SHORTCARD Z133;
static CARDINAL Z134;
static CARDINAL Z135;
typedef struct S_1 {
LONGINT A[1000000 - 1 + 1];
} Z136;
typedef struct S_2 {
SHORTCARD A[1000000 - 1 + 1];
} Z137;
typedef struct S_3 {
CHAR A[1000000 - 1 + 1];
} Z138;
static Z136 *Z139;
static Z137 *Z140;
static Z138 *Z141;
static LONGINT Z142;
static SHORTCARD Z143;
static CARDINAL Z144;
#define Y1_145	19
#define Z146	14
#define Z147	14


void BEGIN_MODULE ARGS ((void))
{
BEGIN_Pointers ();
BEGIN_rMemory ();
BEGIN_DynArray ();
BEGIN_IO ();

ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"LONGINT", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z142 = 1;
ZarQdhNDD_0((ADDRESS *)&Z139, &Z142, (LONGINT)sizeof (LONGINT));
{
LONGINT B_1 = 1, B_2 = Z142;

if (B_1 <= B_2)
for (Z132 = B_1;; Z132 += 1) {
Z139->A[Z132 - 1] = Z132;
if (Z132 >= B_2) break;
}
}
for (Z135 = 1; Z135 <= Y1_145; Z135 += 1) {
ZarQdhNDD_2((ADDRESS *)&Z139, &Z142, (LONGINT)sizeof (LONGINT));
if (Z139 == NIL) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Extend Error", 12L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
{
LONGINT B_3 = Z142 / 2 + 1, B_4 = Z142;

if (B_3 <= B_4)
for (Z132 = B_3;; Z132 += 1) {
Z139->A[Z132 - 1] = Z132;
if (Z132 >= B_4) break;
}
}
{
LONGINT B_5 = 1, B_6 = Z142;

if (B_5 <= B_6)
for (Z132 = B_5;; Z132 += 1) {
if (Z139->A[Z132 - 1] != Z132) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Error j, i, p^[i] =", 19L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z132, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z139->A[Z132 - 1], 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z132 >= B_6) break;
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"p, j, size = ", 13L);
ZfM_28((ZDz6VQCC_4)ZfM_1, PTRINT((ADDRESS)Z139), 8L, 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z142, 10L);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" ok", 3L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Memory used = ", 14L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZDtgCFKU_0, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
for (Z135 = Y1_145; Z135 >= 1; Z135 += -1) {
ZarQdhNDD_1((ADDRESS *)&Z139, &Z142, Z142 / 2, (LONGINT)sizeof (LONGINT));
{
LONGINT B_7 = 1, B_8 = Z142;

if (B_7 <= B_8)
for (Z132 = B_7;; Z132 += 1) {
if (Z139->A[Z132 - 1] != Z132) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Error j, i, p^[i] =", 19L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z132, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z139->A[Z132 - 1], 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z132 >= B_8) break;
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"p, j, size = ", 13L);
ZfM_28((ZDz6VQCC_4)ZfM_1, PTRINT((ADDRESS)Z139), 8L, 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z142, 10L);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" ok", 3L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Memory used = ", 14L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZDtgCFKU_0, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"SHORTCARD", 9L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z142 = 1;
ZarQdhNDD_0((ADDRESS *)&Z140, &Z142, (LONGINT)sizeof (SHORTCARD));
Z143 = Z142;
{
SHORTCARD B_9 = 1, B_10 = Z143;

if (B_9 <= B_10)
for (Z133 = B_9;; Z133 += 1) {
Z140->A[Z133 - 1] = Z133;
if (Z133 >= B_10) break;
}
}
for (Z135 = 1; Z135 <= Z146; Z135 += 1) {
ZarQdhNDD_2((ADDRESS *)&Z140, &Z142, (LONGINT)sizeof (SHORTCARD));
if (Z140 == NIL) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Extend Error", 12L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
Z143 = Z142;
{
SHORTCARD B_11 = Z143 / 2 + 1, B_12 = Z143;

if (B_11 <= B_12)
for (Z133 = B_11;; Z133 += 1) {
Z140->A[Z133 - 1] = Z133;
if (Z133 >= B_12) break;
}
}
{
SHORTCARD B_13 = 1, B_14 = Z143;

if (B_13 <= B_14)
for (Z133 = B_13;; Z133 += 1) {
if (Z140->A[Z133 - 1] != Z133) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Error j, is, ps^[is] =", 22L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, (LONGINT)Z133, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, (LONGINT)Z140->A[Z133 - 1], 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z133 >= B_14) break;
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"ps, j, size = ", 14L);
ZfM_28((ZDz6VQCC_4)ZfM_1, PTRINT((ADDRESS)Z140), 8L, 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z142, 10L);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" ok", 3L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Memory used = ", 14L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZDtgCFKU_0, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
for (Z135 = Z146; Z135 >= 1; Z135 += -1) {
ZarQdhNDD_1((ADDRESS *)&Z140, &Z142, Z142 / 2, (LONGINT)sizeof (SHORTCARD));
Z143 = Z142;
{
SHORTCARD B_15 = 1, B_16 = Z143;

if (B_15 <= B_16)
for (Z133 = B_15;; Z133 += 1) {
if (Z140->A[Z133 - 1] != Z133) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Error j, is, ps^[is] =", 22L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, (LONGINT)Z133, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, (LONGINT)Z140->A[Z133 - 1], 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z133 >= B_16) break;
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"ps, j, size = ", 14L);
ZfM_28((ZDz6VQCC_4)ZfM_1, PTRINT((ADDRESS)Z140), 8L, 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z142, 10L);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" ok", 3L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Memory used = ", 14L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZDtgCFKU_0, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"CHAR", 4L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z142 = 1;
ZarQdhNDD_0((ADDRESS *)&Z141, &Z142, (LONGINT)sizeof (CHAR));
Z144 = Z142;
{
LONGCARD B_17 = 1, B_18 = Z144;

if (B_17 <= B_18)
for (Z134 = B_17;; Z134 += 1) {
Z141->A[Z134 - 1] = CHR(Z134 % 256);
if (Z134 >= B_18) break;
}
}
for (Z135 = 1; Z135 <= Z147; Z135 += 1) {
ZarQdhNDD_2((ADDRESS *)&Z141, &Z142, (LONGINT)sizeof (CHAR));
if (Z141 == NIL) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Extend Error", 12L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
Z144 = Z142;
{
LONGCARD B_19 = Z144 / 2 + 1, B_20 = Z144;

if (B_19 <= B_20)
for (Z134 = B_19;; Z134 += 1) {
Z141->A[Z134 - 1] = CHR(Z134 % 256);
if (Z134 >= B_20) break;
}
}
{
LONGCARD B_21 = 1, B_22 = Z144;

if (B_21 <= B_22)
for (Z134 = B_21;; Z134 += 1) {
if (Z141->A[Z134 - 1] != CHR(Z134 % 256)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Error j, ic, pc^[ic] =", 22L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, (LONGINT)Z134, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, (LONGINT)ORD(Z141->A[Z134 - 1]), 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z134 >= B_22) break;
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"pc, j, size = ", 14L);
ZfM_28((ZDz6VQCC_4)ZfM_1, PTRINT((ADDRESS)Z141), 8L, 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z142, 10L);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" ok", 3L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Memory used = ", 14L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZDtgCFKU_0, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
for (Z135 = Z147; Z135 >= 1; Z135 += -1) {
ZarQdhNDD_1((ADDRESS *)&Z141, &Z142, Z142 / 2, (LONGINT)sizeof (CHAR));
Z144 = Z142;
{
LONGCARD B_23 = 1, B_24 = Z144;

if (B_23 <= B_24)
for (Z134 = B_23;; Z134 += 1) {
if (Z141->A[Z134 - 1] != CHR(Z134 % 256)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Error j, ic, pc^[ic] =", 22L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, (LONGINT)Z134, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, (LONGINT)ORD(Z141->A[Z134 - 1]), 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z134 >= B_24) break;
}
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"pc, j, size = ", 14L);
ZfM_28((ZDz6VQCC_4)ZfM_1, PTRINT((ADDRESS)Z141), 8L, 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z135, 5L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z142, 10L);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" ok", 3L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Memory used = ", 14L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZDtgCFKU_0, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_34();
}
