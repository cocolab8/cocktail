EXPORT {
# include "Position.h"
# include "Idents.h"

typedef struct {
	  tPosition Position;
	  struct { tStringRef Text; } Common;
	  tIdent Ident;
	} tScanAttribute;
extern void ErrorAttribute ARGS((int Token, tScanAttribute * Attribute));
}

GLOBAL	{
# include "Errors.h"
# include "StringM.h"

# define CommonAttrs tStringRef Text;
# define TEXT	Attribute.Common.Text = PutString (TokenPtr, TokenLength)

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
   if (Attribute.Position.Column != 1) Attribute.Position = NoPosition;
}

DEFAULT	{
   MessageI ("illegal character", xxError, Attribute.Position, xxCharacter,
      TokenPtr);
}

RULE

{A-Za-z_}{a-zA-z0-9_}*	: { Attribute.Ident = MakeIdent (TokenPtr, TokenLength);
			    Attribute.Common.Text =
			      GetStringRef (Attribute.Ident);
			    return 1; }
"("			: { TEXT; return 2; }
")"			: { TEXT; return 3; }
"++"			: { TEXT; return 4; }
";"			: { TEXT; return 5; }
"["			: { TEXT; return 6; }
"]"			: { TEXT; return 7; }
"{"			: { TEXT; return 8; }
"}"			: { TEXT; return 9; }
