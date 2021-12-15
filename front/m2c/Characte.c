#include "SYSTEM_.h"

#ifndef DEFINITION_Characte
#include "Characte.h"
#endif



BOOLEAN Zgg3DDyAC_0
# ifdef HAVE_ARGS
(CHAR Z116[], LONGCARD O_2, CHAR Z117[], LONGCARD O_1)
# else
(Z116, O_2, Z117, O_1)
CHAR Z116[];
LONGCARD O_2;
CHAR Z117[];
LONGCARD O_1;
# endif
{
CARDINAL Z118;
CARDINAL Z119;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR) + O_2 * sizeof (CHAR), 2)
COPY_OPEN_ARRAY (Z117, O_1, CHAR)
COPY_OPEN_ARRAY (Z116, O_2, CHAR)
Z118 = 0;
Z119 = Zgg3DDyAC_1(Z116, O_2);
if (Z119 != Zgg3DDyAC_1(Z117, O_1)) {
FREE_OPEN_ARRAYS
return FALSE;
}
Z118 = 0;
for (;;) {
if (Z118 >= Z119) {
goto EXIT_1;
}
if (Z116[Z118] != Z117[Z118]) {
goto EXIT_1;
}
INC(Z118);
} EXIT_1:;
FREE_OPEN_ARRAYS
return Z118 == Z119;
}

CARDINAL Zgg3DDyAC_1
# ifdef HAVE_ARGS
(CHAR Z121[], LONGCARD O_3)
# else
(Z121, O_3)
CHAR Z121[];
LONGCARD O_3;
# endif
{
CARDINAL Z119;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_3 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z121, O_3, CHAR)
Z119 = 0;
for (;;) {
if (Z119 > (O_3 - 1)) {
goto EXIT_2;
}
if (Z121[Z119] == '\0') {
goto EXIT_2;
}
INC(Z119);
} EXIT_2:;
FREE_OPEN_ARRAYS
return Z119;
}

void Zgg3DDyAC_2
# ifdef HAVE_ARGS
(CHAR Z123[], LONGCARD O_4, CHAR Z124[], LONGCARD O_5)
# else
(Z123, O_4, Z124, O_5)
CHAR Z123[];
LONGCARD O_4;
CHAR Z124[];
LONGCARD O_5;
# endif
{
CARDINAL Z125;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_5 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z124, O_5, CHAR)
{
LONGCARD B_1 = 0, B_2 = Zgg3DDyAC_1(Z124, O_5);

if (B_1 <= B_2)
for (Z125 = B_1;; Z125 += 1) {
Z123[Z125] = Z124[Z125];
if (Z125 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
}

void BEGIN_Characte ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;

}
