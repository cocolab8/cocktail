#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Table
#include "Table.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Types
#include "Types.h"
#endif

#ifndef DEFINITION_Derivabl
#include "Derivabl.h"
#endif


static INTEGER Z150;
static void Z156 ARGS ((Zq0A4_43 Z154));

void ZaeAEIAx8_0
 ARGS ((void))
{
ZpmCQ_4 Z152;
Zfb3DLQ_0 Z153;
Zq0A4_43 Z154;
BOOLEAN Z155;

ZpmCQ_5(&Z152, (LONGCARD)Zqjx8B_0);
do {
Zq7SFB_7(&Z152);
Z155 = FALSE;
while (!ZpmCQ_26(Z152)) {
Z153 = ZpmCQ_20(&Z152);
Z154 = Zqjx8B_3(Z153);
Z156(Z154);
if (Z154->U_1.V_26.Y25.Y6 < Zqjx8B_12(Z153)) {
Z155 = TRUE;
Zqjx8B_11(Z153, Z154->U_1.V_26.Y25.Y6);
}
}
} while (!!Z155);
ZpmCQ_7(&Z152);
}

static void Z156
# ifdef HAVE_ARGS
(Zq0A4_43 Z154)
# else
(Z154)
Zq0A4_43 Z154;
# endif
{
switch (Z154->U_1.V_1.Y0) {
case Zq0A4_30:;
Z156(Z154->U_1.V_27.Y26.Y11);
Z154->U_1.V_27.Y26.Y6 = 0;
break;
case Zq0A4_31:;
Z156(Z154->U_1.V_28.Y27.Y11);
Z154->U_1.V_28.Y27.Y6 = 0;
break;
case Zq0A4_32:;
Z156(Z154->U_1.V_29.Y28.Y11);
Z154->U_1.V_29.Y28.Y6 = Z154->U_1.V_29.Y28.Y11->U_1.V_26.Y25.Y6;
break;
case Zq0A4_33:;
Z156(Z154->U_1.V_30.Y29.Y11);
Z156(Z154->U_1.V_30.Y29.Y12);
Z154->U_1.V_30.Y29.Y6 = Z154->U_1.V_30.Y29.Y11->U_1.V_26.Y25.Y6;
break;
case Zq0A4_34:;
Z154->U_1.V_31.Y30.Y6 = 0;
break;
case Zq0A4_35:;
Z154->U_1.V_32.Y31.Y6 = Zqjx8B_12(Z154->U_1.V_32.Y31.Y11->U_1.V_21.Y20.Y2);
break;
case Zq0A4_37:;
Z154->U_1.V_34.Y33.Y6 = Z150;
break;
case Zq0A4_38:;
Z156(Z154->U_1.V_35.Y34.Y14);
Z156(Z154->U_1.V_35.Y34.Y13);
Z154->U_1.V_35.Y34.Y6 = ZdaDDAD7_3(Z154->U_1.V_35.Y34.Y14->U_1.V_26.Y25.Y6, Z154->U_1.V_35.Y34.Y13->U_1.V_26.Y25.Y6);
break;
case Zq0A4_40:;
Z154->U_1.V_37.Y36.Y6 = 0;
break;
case Zq0A4_41:;
Z156(Z154->U_1.V_38.Y37.Y12);
Z156(Z154->U_1.V_38.Y37.Y11);
Z154->U_1.V_38.Y37.Y6 = ZdaDDAD7_3(Z154->U_1.V_38.Y37.Y11->U_1.V_26.Y25.Y6 + Z154->U_1.V_38.Y37.Y12->U_1.V_26.Y25.Y6, Z150);
break;
}
}

BOOLEAN ZaeAEIAx8_1
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z168)
# else
(Z168)
Zfb3DLQ_0 Z168;
# endif
{
return Zqjx8B_12(Z168) < Z150;
}

BOOLEAN ZaeAEIAx8_2
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z168)
# else
(Z168)
Zfb3DLQ_0 Z168;
# endif
{
return Zqjx8B_12(Z168) == 0;
}

void BEGIN_Derivabl ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_General ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Table ();
BEGIN_Tree ();
BEGIN_Types ();

Z150 = MAX_LONGINT / 2;
}
