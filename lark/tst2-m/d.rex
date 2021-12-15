EXPORT {
FROM Position	IMPORT tPosition;
FROM Idents	IMPORT tIdent;

TYPE tScanAttribute	= RECORD Position: tPosition; Ident: tIdent; END;
PROCEDURE ErrorAttribute (Token: INTEGER; VAR Attribute: tScanAttribute);
}

GLOBAL	{
FROM Strings	IMPORT tString;
FROM Idents	IMPORT MakeIdent;

PROCEDURE ErrorAttribute (Token: INTEGER; VAR pAttribute: tScanAttribute);
   BEGIN
      pAttribute.Position := Attribute.Position;
   END ErrorAttribute;
}

LOCAL { VAR Name: tString; }

RULE

{A-Za-z_}{a-zA-z0-9_}*	: { GetWord (Name); Attribute.Ident := MakeIdent (Name);
			    RETURN 1; }
"("			: { RETURN 2; }
")"			: { RETURN 3; }
"++"			: { RETURN 4; }
";"			: { RETURN 5; }
"["			: { RETURN 6; }
"]"			: { RETURN 7; }
"{"			: { RETURN 8; }
"}"			: { RETURN 9; }
