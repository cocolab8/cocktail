EXPORT {
# include "Position.h"
# include "Idents.h"

typedef struct { tPosition Position; tIdent Ident; } tScanAttribute;
extern void ErrorAttribute ARGS((int Token, tScanAttribute * Attribute));
}

GLOBAL	{
# include "Errors.h"

void ErrorAttribute
# if defined __STDC__ | defined __cplusplus
 (int Token, tScanAttribute * pAttribute)
# else
 (Token, pAttribute) int Token; tScanAttribute * pAttribute;
# endif
   {
      pAttribute->Position = Attribute.Position;
   }
}

BEGIN	{
   Attribute.Position = NoPosition;
}

DEFAULT	{ MessageI ("illegal character", xxError, Attribute.Position, xxCharacter,
			TokenPtr); }

RULE

{A-Za-z_}{a-zA-z0-9_}*	: { Attribute.Ident = MakeIdent (TokenPtr, TokenLength);
			    return 1; }
"("			: { return 2; }
")"			: { return 3; }
"++"			: { return 4; }
";"			: { return 5; }
"["			: { return 6; }
"]"			: { return 7; }
"{"			: { return 8; }
"}"			: { return 9; }
