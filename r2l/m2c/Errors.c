#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

INTEGER ZblNKKO_29;

#define Z134	10
#define Z135	11
#define Z136	12
#define Z137	13
#define Z138	14
#define Z139	15
#define Z140	16
#define Z141	17
#define Z142	18
#define Z143	19
#define Z144	20
#define Z145	21
#define Z146	22
#define Z147	23
#define Z148	24
#define Z149	25
#define Z150	26
#define Z151	27
#define Z152	28
#define Z153	29
static void Z161 ARGS ((CARDINAL Z155, CARDINAL Z156, ZmtLFGGBG_0 Z131));
static void Z162 ARGS ((CARDINAL Z159, ADDRESS Z160));
struct S_1 {
CHAR A[1023 + 1];
};

void ZblNKKO_30
# ifdef HAVE_ARGS
(CARDINAL Z155, CARDINAL Z156, ZmtLFGGBG_0 Z131)
# else
(Z155, Z156, Z131)
CARDINAL Z155, Z156;
ZmtLFGGBG_0 Z131;
# endif
{
ZblNKKO_31(Z155, Z156, Z131, (LONGCARD)ZblNKKO_17, (ADDRESS)NIL);
}

void ZblNKKO_31
# ifdef HAVE_ARGS
(CARDINAL Z155, CARDINAL Z156, ZmtLFGGBG_0 Z131, CARDINAL Z159, ADDRESS Z160)
# else
(Z155, Z156, Z131, Z159, Z160)
CARDINAL Z155, Z156;
ZmtLFGGBG_0 Z131;
CARDINAL Z159;
ADDRESS Z160;
# endif
{
Z161(Z155, Z156, Z131);
Z162(Z159, Z160);
ZfM_33((ZDz6VQCC_4)ZfM_2);
if (Z156 <= ZblNKKO_12) {
INC(ZblNKKO_29);
}
if (Z156 == ZblNKKO_10) {
ZfM_34();
exit (1);
}
}

static void Z161
# ifdef HAVE_ARGS
(CARDINAL Z155, CARDINAL Z156, ZmtLFGGBG_0 Z131)
# else
(Z155, Z156, Z131)
CARDINAL Z155, Z156;
ZmtLFGGBG_0 Z131;
# endif
{
ZmtLFGGBG_3((ZDz6VQCC_4)ZfM_2, Z131);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": ", 2L);
switch (Z156) {
case ZblNKKO_10:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Fatal       ", 12L);
break;
case ZblNKKO_11:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Restriction ", 12L);
break;
case ZblNKKO_12:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error       ", 12L);
break;
case ZblNKKO_13:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Warning     ", 12L);
break;
case ZblNKKO_14:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Repair      ", 12L);
break;
case ZblNKKO_15:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Note        ", 12L);
break;
case ZblNKKO_16:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Information ", 12L);
break;
default:
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error class: ", 13L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z156, 0L);
break;
}
switch (Z155) {
case ZblNKKO_0:;
break;
case ZblNKKO_1:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"syntax error", 12L);
break;
case ZblNKKO_2:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"expected tokens", 15L);
break;
case ZblNKKO_3:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"restart point", 13L);
break;
case ZblNKKO_4:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"token inserted ", 15L);
break;
case ZblNKKO_5:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"parse table mismatch", 20L);
break;
case ZblNKKO_6:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"cannot open parse table", 23L);
break;
case ZblNKKO_7:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"cannot read parse table", 23L);
break;
case ZblNKKO_8:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"token found    ", 15L);
break;
case ZblNKKO_9:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"found/expected ", 15L);
break;
case Z134:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"identifier not defined", 22L);
break;
case Z135:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"improper use of identifier", 26L);
break;
case Z136:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"identifier already defined", 26L);
break;
case Z137:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"closing '}' missing", 19L);
break;
case Z138:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"unclosed comment", 16L);
break;
case Z139:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"pattern will never match", 24L);
break;
case Z140:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"unclosed string", 15L);
break;
case Z141:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"illegal character", 17L);
break;
case Z142:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"character already defined", 25L);
break;
case Z143:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"code already used", 17L);
break;
case Z144:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"illegal code", 12L);
break;
case Z145:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"syntax error: '{' expected", 26L);
break;
case Z146:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"target code section already defined", 35L);
break;
case Z147:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"name already defined", 20L);
break;
case Z148:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"character set already defined", 29L);
break;
case Z149:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"because of pattern at position", 30L);
break;
case Z150:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"string too long (max. 255)", 26L);
break;
case Z151:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"string length > 0 required", 26L);
break;
case Z152:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"pattern is ambiguous wrt. to pattern at", 39L);
break;
case Z153:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"pattern is ambiguous wrt. to a predefined rule", 46L);
break;
default:
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" error code: ", 13L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z155, 0L);
break;
}
}

static void Z162
# ifdef HAVE_ARGS
(CARDINAL Z159, ADDRESS Z160)
# else
(Z159, Z160)
CARDINAL Z159;
ADDRESS Z160;
# endif
{
INTEGER *Z181;
SHORTCARD *Z182;
LONGINT *Z183;
REAL *Z184;
BOOLEAN *Z185;
CHAR *Z186;
Zp1PEAFD_2 *Z187;
struct S_1 *Z188;
Zfb3DLQ_0 *Z189;
ZmtLFGGBG_0 *Z190;

if (Z159 == ZblNKKO_17) {
return;
}
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": ", 2L);
switch (Z159) {
case ZblNKKO_18:;
Z181 = (LONGINT *)Z160;
ZfM_25((ZDz6VQCC_4)ZfM_2, *Z181, 0L);
break;
case ZblNKKO_19:;
Z182 = (SHORTCARD *)Z160;
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)(*Z182), 0L);
break;
case ZblNKKO_20:;
Z183 = (LONGINT *)Z160;
ZfM_31((ZDz6VQCC_4)ZfM_2, *Z183, 0L);
break;
case ZblNKKO_21:;
Z184 = (REAL *)Z160;
ZfM_26((ZDz6VQCC_4)ZfM_2, *Z184, 1L, 10L, 1L);
break;
case ZblNKKO_22:;
Z185 = (BOOLEAN *)Z160;
ZfM_27((ZDz6VQCC_4)ZfM_2, *Z185);
break;
case ZblNKKO_23:;
Z186 = (CHAR *)Z160;
ZfM_24((ZDz6VQCC_4)ZfM_2, *Z186);
break;
case ZblNKKO_24:;
Z187 = (Zp1PEAFD_2 *)Z160;
Zp1PEAFD_21((ZDz6VQCC_4)ZfM_2, Z187);
break;
case ZblNKKO_25:;
Z188 = (struct S_1 *)Z160;
ZfM_29((ZDz6VQCC_4)ZfM_2, (*Z188).A, 1024L);
break;
case ZblNKKO_27:;
Z189 = (SHORTCARD *)Z160;
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_2, *Z189);
break;
case ZblNKKO_28:;
Z190 = (ZmtLFGGBG_0 *)Z160;
ZmtLFGGBG_3((ZDz6VQCC_4)ZfM_2, *Z190);
break;
default:
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"info class: ", 12L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Z159, 0L);
break;
}
}

void BEGIN_Errors ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Position ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Position ();
BEGIN_Strings ();

ZblNKKO_29 = 0;
}
