#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_SysError
#include "SysError.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Checks
#include "Checks.h"
#endif


static CHAR Z131 [] = "/dev/null";

void Zgg728H_0
# ifdef HAVE_ARGS
(CHAR Z133[], LONGCARD O_1, INTEGER Z134)
# else
(Z133, O_1, Z134)
CHAR Z133[];
LONGCARD O_1;
INTEGER Z134;
# endif
{
Zp1PEAFD_2 Z135;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z133, O_1, CHAR)
if (Zp6VmlNKK_0(Z134)) {
Zp1PEAFD_13(Z133, O_1, &Z135);
Zp6VmlNKK_1(Z134, (LONGCARD)ZblNKKO_40, (LONGCARD)ZblNKKO_35, ADR (Z135));
}
FREE_OPEN_ARRAYS
}

void Zgg728H_1
# ifdef HAVE_ARGS
(ZfM_3 *Z137, CHAR Z133[], LONGCARD O_2)
# else
(Z137, Z133, O_2)
ZfM_3 *Z137;
CHAR Z133[];
LONGCARD O_2;
# endif
{
Zp1PEAFD_2 Z135;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z133, O_2, CHAR)
if (Zp6VmlNKK_0(*Z137)) {
Zp1PEAFD_13(Z133, O_2, &Z135);
Zp6VmlNKK_1(*Z137, (LONGCARD)ZblNKKO_42, (LONGCARD)ZblNKKO_35, ADR (Z135));
*Z137 = ZfM_4(Z131, 9L);
if (Zp6VmlNKK_0(*Z137)) {
Zp1PEAFD_13(Z131, 9L, &Z135);
Zp6VmlNKK_1(*Z137, (LONGCARD)ZblNKKO_40, (LONGCARD)ZblNKKO_35, ADR (Z135));
}
}
FREE_OPEN_ARRAYS
}

void Zgg728H_2
# ifdef HAVE_ARGS
(ZfM_3 *Z137, CHAR Z133[], LONGCARD O_3)
# else
(Z137, Z133, O_3)
ZfM_3 *Z137;
CHAR Z133[];
LONGCARD O_3;
# endif
{
Zp1PEAFD_2 Z135;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_3 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z133, O_3, CHAR)
if (Zp6VmlNKK_0(*Z137)) {
Zp1PEAFD_13(Z133, O_3, &Z135);
Zp6VmlNKK_1(*Z137, (LONGCARD)ZblNKKO_42, (LONGCARD)ZblNKKO_35, ADR (Z135));
*Z137 = ZfM_20(Z131, 9L);
if (Zp6VmlNKK_0(*Z137)) {
Zp1PEAFD_13(Z131, 9L, &Z135);
Zp6VmlNKK_1(*Z137, (LONGCARD)ZblNKKO_40, (LONGCARD)ZblNKKO_35, ADR (Z135));
}
}
FREE_OPEN_ARRAYS
}

void BEGIN_Checks ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_SysError ();
BEGIN_Errors ();

}
