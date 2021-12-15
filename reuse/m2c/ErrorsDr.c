#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

static INTEGER Z140;
static SHORTCARD Z141;
static LONGINT Z142;
static CARDINAL Z143;
static REAL Z144;
static BOOLEAN Z145;
static CHAR Z146;
static Ztf1PEAFD_1 Z147;
static struct S_1 {
CHAR A[9 + 1];
} Z148;
static struct S_2 {
Ztf1PEAFD_1 A[9 + 1];
} Z149;
static ZpmCQ_4 Z150;
static Zfb3DLQ_0 Z151;
static Zfb3DLQ_8 Z152;
static Zp1PEAFD_2 Z153;
static Ztf1PEAFD_4 Z154;
static void Z155 ARGS ((void));


static void Z155
 ARGS ((void))
{
ZblNKKO_47((STRING)"Integer	", 8L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_22, ADR (Z140));
ZblNKKO_47((STRING)"Short	", 6L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_23, ADR (Z141));
ZblNKKO_47((STRING)"Long	", 5L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (Z142));
ZblNKKO_47((STRING)"Cardinal	", 9L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_25, ADR (Z143));
ZblNKKO_47((STRING)"Real	", 5L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_26, ADR (Z144));
ZblNKKO_47((STRING)"Boolean	", 8L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_27, ADR (Z145));
ZblNKKO_47((STRING)"Character	", 10L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_28, ADR (Z146));
ZblNKKO_47((STRING)"WCharacter", 10L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_29, ADR (Z147));
ZblNKKO_47((STRING)"String	", 7L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_30, ADR (Z153));
ZblNKKO_47((STRING)"WString	", 8L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_31, ADR (Z154));
ZblNKKO_47((STRING)"Ident	", 6L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_34, ADR (Z151));
ZblNKKO_47((STRING)"WIdent	", 7L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_35, ADR (Z152));
ZblNKKO_47((STRING)"Array	", 6L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z148));
ZblNKKO_47((STRING)"Set	", 4L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_33, ADR (Z150));
}

void BEGIN_MODULE ARGS ((void))
{
BEGIN_IO ();
BEGIN_Sets ();
BEGIN_Strings ();
BEGIN_WStrings ();
BEGIN_Idents ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Errors ();
BEGIN_WStrings ();

Z140 = 1;
Z141 = 2;
Z142 = 3;
Z143 = (LONGCARD)4294967295;
Z144 = 5.0;
Z145 = FALSE;
Z146 = 'a';
Z147 = ORD('b');
(void) strncpy ((char *)Z148.A, "abc", sizeof (Z148.A));
Z149.A[0] = ORD('g');
Z149.A[1] = ORD('h');
Z149.A[2] = ORD('i');
ZpmCQ_5(&Z150, 10L);
ZpmCQ_13(&Z150, 5L);
ZpmCQ_13(&Z150, 6L);
Zp1PEAFD_13((STRING)"def", 3L, &Z153);
Ztf1PEAFD_15(Z149.A, 10L, &Z154);
Z151 = Zfb3DLQ_2(&Z153);
Z152 = Zfb3DLQ_10(&Z154);
Z155();
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZblNKKO_43(TRUE);
Z155();
ZblNKKO_48((ZDz6VQCC_4)ZfM_2);
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZblNKKO_48((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZblNKKO_43(TRUE);
ZblNKKO_48((ZDz6VQCC_4)ZfM_1);
}
