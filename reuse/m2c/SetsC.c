#include "SYSTEM_.h"

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Pointers
#include "Pointers.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_SetsC
#include "SetsC.h"
#endif


static void Z125 ARGS ((ZpmCQk_2 *Z126, ZpmCQk_2 *Z127, CHAR Z129[], LONGCARD O_1));
static void Z133 ARGS ((ZpmCQk_2 *Z134, INTEGER Z135, CHAR Z129[], LONGCARD O_2));
static void Z130 ARGS ((ZpmCQk_2 *Z134, CHAR Z129[], LONGCARD O_3));
static void Z137 ARGS ((ZpmCQk_2 *Z134, CHAR Z129[], LONGCARD O_4));
static void Z132 ARGS ((ZpmCQk_2 Z134));

static void Z125
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z126, ZpmCQk_2 *Z127, CHAR Z129[], LONGCARD O_1)
# else
(Z126, Z127, Z129, O_1)
ZpmCQk_2 *Z126, *Z127;
CHAR Z129[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z129, O_1, CHAR)
Z130(Z126, Z129, O_1);
Z130(Z127, Z129, O_1);
if (Z126->Y1 != Z127->Y1) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Sets.", 5L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z129, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": incompatible sets", 19L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
Z132(*Z126);
Z132(*Z127);
}
FREE_OPEN_ARRAYS
}

static void Z133
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134, INTEGER Z135, CHAR Z129[], LONGCARD O_2)
# else
(Z134, Z135, Z129, O_2)
ZpmCQk_2 *Z134;
INTEGER Z135;
CHAR Z129[];
LONGCARD O_2;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z129, O_2, CHAR)
Z130(Z134, Z129, O_2);
if (Z135 < 0) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Sets.", 5L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z129, O_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": negative element: ", 20L);
ZfM_25((ZDz6VQCC_4)ZfM_2, Z135, 0L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
Z132(*Z134);
}
if (Z135 > (INTEGER)Z134->Y1) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Sets.", 5L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z129, O_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": element out of range: ", 24L);
ZfM_25((ZDz6VQCC_4)ZfM_2, Z135, 0L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
Z132(*Z134);
}
FREE_OPEN_ARRAYS
}

static void Z130
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134, CHAR Z129[], LONGCARD O_3)
# else
(Z134, Z129, O_3)
ZpmCQk_2 *Z134;
CHAR Z129[];
LONGCARD O_3;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_3 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z129, O_3, CHAR)
if (Z134->Y0 == NIL) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Sets.", 5L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z129, O_3);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": set probably not initialized", 30L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
Z132(*Z134);
}
FREE_OPEN_ARRAYS
}

static void Z137
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134, CHAR Z129[], LONGCARD O_4)
# else
(Z134, Z129, O_4)
ZpmCQk_2 *Z134;
CHAR Z129[];
LONGCARD O_4;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_4 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z129, O_4, CHAR)
Z130(Z134, Z129, O_4);
if (ZpmCQ_26(*Z134)) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Sets.", 5L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z129, O_4);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": applied to empty set", 22L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
Z132(*Z134);
}
FREE_OPEN_ARRAYS
}

static void Z132
# ifdef HAVE_ARGS
(ZpmCQk_2 Z134)
# else
(Z134)
ZpmCQk_2 Z134;
# endif
{
{
register ZpmCQ_4 *W_1 = &Z134;

ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"BitsetPtr = ", 12L);
ZfM_28((ZDz6VQCC_4)ZfM_2, PTRINT((ADDRESS)W_1->Y0), 0L, 16L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"MaxElmt   = ", 12L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)W_1->Y1, 0L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"LastBitset= ", 12L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)W_1->Y2, 0L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Card      = ", 12L);
ZfM_25((ZDz6VQCC_4)ZfM_2, W_1->Y3, 0L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"FirstElmt = ", 12L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)W_1->Y4, 0L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"LastElmt  = ", 12L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)W_1->Y5, 0L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
}

void ZpmCQk_3
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134, CARDINAL Z144)
# else
(Z134, Z144)
ZpmCQk_2 *Z134;
CARDINAL Z144;
# endif
{
ZpmCQ_5(Z134, Z144);
Z130(Z134, (STRING)"MakeSet", 7L);
}

void ZpmCQk_4
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134, CARDINAL Z144)
# else
(Z134, Z144)
ZpmCQk_2 *Z134;
CARDINAL Z144;
# endif
{
Z130(Z134, (STRING)"ResizeSet", 9L);
ZpmCQ_6(Z134, Z144);
}

void ZpmCQk_5
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134)
# else
(Z134)
ZpmCQk_2 *Z134;
# endif
{
Z130(Z134, (STRING)"ReleaseSet", 10L);
ZpmCQ_7(Z134);
}

void ZpmCQk_6
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z126, ZpmCQk_2 Z127)
# else
(Z126, Z127)
ZpmCQk_2 *Z126;
ZpmCQk_2 Z127;
# endif
{
Z125(Z126, &Z127, (STRING)"Union", 5L);
ZpmCQ_8(Z126, Z127);
}

void ZpmCQk_7
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z126, ZpmCQk_2 Z127)
# else
(Z126, Z127)
ZpmCQk_2 *Z126;
ZpmCQk_2 Z127;
# endif
{
Z125(Z126, &Z127, (STRING)"Difference", 10L);
ZpmCQ_9(Z126, Z127);
}

void ZpmCQk_8
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z126, ZpmCQk_2 Z127)
# else
(Z126, Z127)
ZpmCQk_2 *Z126;
ZpmCQk_2 Z127;
# endif
{
Z125(Z126, &Z127, (STRING)"Intersection", 12L);
ZpmCQ_10(Z126, Z127);
}

void ZpmCQk_9
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z126, ZpmCQk_2 Z127)
# else
(Z126, Z127)
ZpmCQk_2 *Z126;
ZpmCQk_2 Z127;
# endif
{
Z125(Z126, &Z127, (STRING)"SymDiff", 7L);
ZpmCQ_11(Z126, Z127);
}

void ZpmCQk_10
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134)
# else
(Z134)
ZpmCQk_2 *Z134;
# endif
{
Z130(Z134, (STRING)"Complement", 10L);
ZpmCQ_12(Z134);
}

void ZpmCQk_11
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134, CARDINAL Z135)
# else
(Z134, Z135)
ZpmCQk_2 *Z134;
CARDINAL Z135;
# endif
{
Z133(Z134, (LONGINT)Z135, (STRING)"Include", 7L);
ZpmCQ_13(Z134, Z135);
}

void ZpmCQk_12
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134, CARDINAL Z135)
# else
(Z134, Z135)
ZpmCQk_2 *Z134;
CARDINAL Z135;
# endif
{
Z133(Z134, (LONGINT)Z135, (STRING)"Exclude", 7L);
ZpmCQ_14(Z134, Z135);
}

CARDINAL ZpmCQk_13
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134)
# else
(Z134)
ZpmCQk_2 *Z134;
# endif
{
Z130(Z134, (STRING)"Card", 4L);
return ZpmCQ_15(Z134);
}

CARDINAL ZpmCQk_14
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134)
# else
(Z134)
ZpmCQk_2 *Z134;
# endif
{
Z130(Z134, (STRING)"Size", 4L);
return ZpmCQ_16(Z134);
}

CARDINAL ZpmCQk_15
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134)
# else
(Z134)
ZpmCQk_2 *Z134;
# endif
{
Z137(Z134, (STRING)"Minimum", 7L);
return ZpmCQ_17(Z134);
}

CARDINAL ZpmCQk_16
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134)
# else
(Z134)
ZpmCQk_2 *Z134;
# endif
{
Z137(Z134, (STRING)"Maximum", 7L);
return ZpmCQ_18(Z134);
}

CARDINAL ZpmCQk_17
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134)
# else
(Z134)
ZpmCQk_2 *Z134;
# endif
{
Z137(Z134, (STRING)"Select", 6L);
return ZpmCQ_19(Z134);
}

CARDINAL ZpmCQk_18
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134)
# else
(Z134)
ZpmCQk_2 *Z134;
# endif
{
Z137(Z134, (STRING)"Extract", 7L);
return ZpmCQ_20(Z134);
}

BOOLEAN ZpmCQk_19
# ifdef HAVE_ARGS
(ZpmCQk_2 Z126, ZpmCQk_2 Z127)
# else
(Z126, Z127)
ZpmCQk_2 Z126, Z127;
# endif
{
Z125(&Z126, &Z127, (STRING)"IsSubset", 8L);
return ZpmCQ_21(Z126, Z127);
}

BOOLEAN ZpmCQk_20
# ifdef HAVE_ARGS
(ZpmCQk_2 Z126, ZpmCQk_2 Z127)
# else
(Z126, Z127)
ZpmCQk_2 Z126, Z127;
# endif
{
Z125(&Z126, &Z127, (STRING)"IsStrictSubset", 14L);
return ZpmCQ_22(Z126, Z127);
}

BOOLEAN ZpmCQk_21
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z126, ZpmCQk_2 *Z127)
# else
(Z126, Z127)
ZpmCQk_2 *Z126, *Z127;
# endif
{
Z125(Z126, Z127, (STRING)"IsEqual", 7L);
return ZpmCQ_23(Z126, Z127);
}

BOOLEAN ZpmCQk_22
# ifdef HAVE_ARGS
(ZpmCQk_2 Z126, ZpmCQk_2 Z127)
# else
(Z126, Z127)
ZpmCQk_2 Z126, Z127;
# endif
{
Z125(&Z126, &Z127, (STRING)"IsNotEqual", 10L);
return ZpmCQ_24(Z126, Z127);
}

BOOLEAN ZpmCQk_23
# ifdef HAVE_ARGS
(CARDINAL Z135, ZpmCQk_2 *Z134)
# else
(Z135, Z134)
CARDINAL Z135;
ZpmCQk_2 *Z134;
# endif
{
Z133(Z134, (LONGINT)Z135, (STRING)"IsElement", 9L);
return ZpmCQ_25(Z135, Z134);
}

BOOLEAN ZpmCQk_24
# ifdef HAVE_ARGS
(ZpmCQk_2 Z134)
# else
(Z134)
ZpmCQk_2 Z134;
# endif
{
Z130(&Z134, (STRING)"IsEmpty", 7L);
return ZpmCQ_26(Z134);
}

BOOLEAN ZpmCQk_25
# ifdef HAVE_ARGS
(ZpmCQk_2 Z134, ZpmCQk_1 Z165)
# else
(Z134, Z165)
ZpmCQk_2 Z134;
ZpmCQk_1 Z165;
# endif
{
Z130(&Z134, (STRING)"Forall", 6L);
return ZpmCQ_27(Z134, Z165);
}

BOOLEAN ZpmCQk_26
# ifdef HAVE_ARGS
(ZpmCQk_2 Z134, ZpmCQk_1 Z165)
# else
(Z134, Z165)
ZpmCQk_2 Z134;
ZpmCQk_1 Z165;
# endif
{
Z130(&Z134, (STRING)"Exists", 6L);
return ZpmCQ_28(Z134, Z165);
}

BOOLEAN ZpmCQk_27
# ifdef HAVE_ARGS
(ZpmCQk_2 Z134, ZpmCQk_1 Z165)
# else
(Z134, Z165)
ZpmCQk_2 Z134;
ZpmCQk_1 Z165;
# endif
{
Z130(&Z134, (STRING)"Exists1", 7L);
return ZpmCQ_29(Z134, Z165);
}

void ZpmCQk_28
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z126, ZpmCQk_2 Z127)
# else
(Z126, Z127)
ZpmCQk_2 *Z126;
ZpmCQk_2 Z127;
# endif
{
Z125(Z126, &Z127, (STRING)"Assign", 6L);
ZpmCQ_30(Z126, Z127);
}

void ZpmCQk_29
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134, CARDINAL Z135)
# else
(Z134, Z135)
ZpmCQk_2 *Z134;
CARDINAL Z135;
# endif
{
Z133(Z134, (LONGINT)Z135, (STRING)"AssignElmt", 10L);
ZpmCQ_31(Z134, Z135);
}

void ZpmCQk_30
# ifdef HAVE_ARGS
(ZpmCQk_2 *Z134)
# else
(Z134)
ZpmCQk_2 *Z134;
# endif
{
Z130(Z134, (STRING)"AssignEmpty", 11L);
ZpmCQ_32(Z134);
}

void ZpmCQk_31
# ifdef HAVE_ARGS
(ZpmCQk_2 Z134, ZpmCQk_0 Z165)
# else
(Z134, Z165)
ZpmCQk_2 Z134;
ZpmCQk_0 Z165;
# endif
{
Z130(&Z134, (STRING)"ForallDo", 8L);
ZpmCQ_33(Z134, Z165);
}

void ZpmCQk_32
# ifdef HAVE_ARGS
(ZfM_3 Z175, ZpmCQk_2 *Z134)
# else
(Z175, Z134)
ZfM_3 Z175;
ZpmCQk_2 *Z134;
# endif
{
Z130(Z134, (STRING)"ReadSet", 7L);
ZpmCQ_34(Z175, Z134);
}

void ZpmCQk_33
# ifdef HAVE_ARGS
(ZfM_3 Z175, ZpmCQk_2 Z134)
# else
(Z175, Z134)
ZfM_3 Z175;
ZpmCQk_2 Z134;
# endif
{
Z130(&Z134, (STRING)"WriteSet", 8L);
ZpmCQ_35(Z175, Z134);
}

void BEGIN_SetsC ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Sets ();
BEGIN_Sets ();
BEGIN_Pointers ();
BEGIN_IO ();

}
