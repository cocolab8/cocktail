EXPORT {
# include "Position.h"
# include "Idents.h"

typedef struct { tPosition Position; tIdent Ident; } tScanAttribute;
}

GLOBAL	{
# include "Global.h"

void Scanner::ErrorAttribute (int Token, tScanAttribute * pAttribute)
   {
      pAttribute->Position = Attribute.Position;
   }
}

BEGIN	{
   Attribute.Position = NoPosition;
}

DEFAULT	{ gErrors.MessageI ("illegal character", xxError, Attribute.Position,
			xxCharacter, TokenPtr); }

RULE

{A-Za-z_}{a-zA-z0-9_}*	: { Attribute.Ident = gIdents.MakeIdent (TokenPtr, TokenLength);
			    return 1; }
"("			: { return 2; }
")"			: { return 3; }
"++"			: { return 4; }
";"			: { return 5; }
"["			: { return 6; }
"]"			: { return 7; }
"{"			: { return 8; }
"}"			: { return 9; }
