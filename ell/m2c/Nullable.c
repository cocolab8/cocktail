#include "SYSTEM_.h"

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

#ifndef DEFINITION_Nullable
#include "Nullable.h"
#endif


static ZpmCQ_4 Z145;
static BOOLEAN Z150 ARGS ((Zq0A4_43 Z151));

void ZkxKB7x8B_0
 ARGS ((void))
{
ZpmCQ_4 Z147;
Zfb3DLQ_0 Z148;
BOOLEAN Z149;

ZpmCQ_5(&Z145, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&Z147, (LONGCARD)Zqjx8B_0);
Zq7SFB_7(&Z147);
Z148 = ZpmCQ_18(&Z147);
Z149 = TRUE;
for (;;) {
if (ZpmCQ_26(Z147)) {
goto EXIT_1;
}
if (Z148 >= ZpmCQ_18(&Z147)) {
if (!Z149) {
goto EXIT_1;
} else {
Z148 = ZpmCQ_17(&Z147);
Z149 = FALSE;
}
} else {
do {
INC(Z148);
} while (!ZpmCQ_25((LONGCARD)Z148, &Z147));
}
if (Z150(Zqjx8B_3(Z148))) {
ZpmCQ_13(&Z145, (LONGCARD)Z148);
ZpmCQ_14(&Z147, (LONGCARD)Z148);
Z149 = TRUE;
}
} EXIT_1:;
ZpmCQ_7(&Z147);
}

static BOOLEAN Z150
# ifdef HAVE_ARGS
(Zq0A4_43 Z151)
# else
(Z151)
Zq0A4_43 Z151;
# endif
{
switch (Z151->U_1.V_1.Y0) {
case Zq0A4_30:;
return TRUE;
break;
case Zq0A4_31:;
return TRUE;
break;
case Zq0A4_32:;
return Z150(Z151->U_1.V_29.Y28.Y11);
break;
case Zq0A4_33:;
return Z150(Z151->U_1.V_30.Y29.Y11);
break;
case Zq0A4_34:;
return TRUE;
break;
case Zq0A4_35:;
return ZpmCQ_25((LONGCARD)Z151->U_1.V_32.Y31.Y11->U_1.V_21.Y20.Y2, &Z145);
break;
case Zq0A4_37:;
return FALSE;
break;
case Zq0A4_38:;
return Z150(Z151->U_1.V_35.Y34.Y13) || Z150(Z151->U_1.V_35.Y34.Y14);
break;
case Zq0A4_40:;
return TRUE;
break;
case Zq0A4_41:;
return Z150(Z151->U_1.V_38.Y37.Y11) && Z150(Z151->U_1.V_38.Y37.Y12);
break;
}
}

BOOLEAN ZkxKB7x8B_1
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z161)
# else
(Z161)
Zfb3DLQ_0 Z161;
# endif
{
return ZpmCQ_25((LONGCARD)Z161, &Z145);
}

void BEGIN_Nullable ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Table ();
BEGIN_Tree ();
BEGIN_Types ();

}
