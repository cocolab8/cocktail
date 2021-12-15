#include "SYSTEM_.h"

#ifndef DEFINITION_Pointers
#include "Pointers.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

static ADDRESS Z129, Z130, Z131, Z132;
static CARDINAL Z133;
static LONGINT Z134, Z135, Z136, Z137;
static ADDRESS Z138 ARGS ((LONGINT Z139));
struct S_1 {
CHAR A[1000000000 + 1];
};


static ADDRESS Z138
# ifdef HAVE_ARGS
(LONGINT Z139)
# else
(Z139)
LONGINT Z139;
# endif
{
struct S_1 *Z140;
INTEGER Z133;
CHAR Z141;

Z140 = (struct S_1 *)ZDtgCFKU_1(Z139);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Alloc:  n = ", 12L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z139, 10L);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)", ADR = ", 8L);
ZfM_28((ZDz6VQCC_4)ZfM_1, PTRINT((ADDRESS)Z140), 8L, 16L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
if (Z140 != NIL) {
{
LONGINT B_1 = 0, B_2 = Z139 - 1;

if (B_1 <= B_2)
for (Z133 = B_1, B_2 = FOR_LIMIT_UP (B_2, 1024, MIN_LONGINT);; Z133 += 1024) {
Z140->A[Z133] = 'x';
Z141 = Z140->A[Z133];
if (Z133 >= B_2) break;
}
}
}
return (ADDRESS)Z140;
}

void BEGIN_MODULE ARGS ((void))
{
BEGIN_Pointers ();
BEGIN_rMemory ();
BEGIN_IO ();

for (Z133 = 0; Z133 <= 63; Z133 += 1) {
Z129 = Z138((LONGINT)Z133);
Z130 = Z138((LONGINT)Z133);
ZDtgCFKU_2((LONGINT)Z133, Z129);
ZDtgCFKU_2((LONGINT)Z133, Z130);
Z131 = Z138((LONGINT)Z133);
Z132 = Z138((LONGINT)Z133);
if (Z131 != Z130) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Alloc/Free small not inverse ", 29L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z133, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z132 != Z129) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Alloc/Free small not inverse ", 29L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z133, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
}
Z134 = 80;
Z135 = 96;
Z136 = 112;
Z137 = 128;
for (;;) {
for (Z133 = 7; Z133 <= 32; Z133 += 1) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"        i = ", 12L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z133, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z129 = Z138(Z134);
Z130 = Z138(Z135);
Z131 = Z138(Z136);
Z132 = Z138(Z137);
if (Z129 == NIL || Z130 == NIL || Z131 == NIL || Z132 == NIL) {
goto EXIT_1;
}
ZDtgCFKU_2(Z137, Z132);
ZDtgCFKU_2(Z136, Z131);
ZDtgCFKU_2(Z135, Z130);
ZDtgCFKU_2(Z134, Z129);
Z129 = Z138(Z135);
if (Z129 != Z130) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Alloc/Free large not inverse ", 29L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z133, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
Z129 = Z138(Z135);
if (Z129 != Z131) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Alloc/Free large not inverse ", 29L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z133, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
Z129 = Z138(Z135);
if (Z129 != Z132) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Alloc/Free large not inverse ", 29L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z133, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
INC1(Z134, Z134);
INC1(Z135, Z135);
INC1(Z136, Z136);
INC1(Z137, Z137);
}
} EXIT_1:;
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Memory used: ", 13L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZDtgCFKU_0, 10L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_34();
}
