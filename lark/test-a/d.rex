IMPORT { with Strings, Idents; use Strings, Idents; }

EXPORT {
type tScanAttribute is record Position: tPosition; Ident: tIdent; end record;

procedure ErrorAttribute (Token: Integer; Attribute: out tScanAttribute);
}

GLOBAL	{
procedure ErrorAttribute (Token: Integer; Attribute: out tScanAttribute) is
   begin
      null;
   end ErrorAttribute;
}

LOCAL { Name: tString; }

RULE

{A-Za-z_}{a-zA-z0-9_}*	: { GetWord (Name); Attribute.Ident := MakeIdent (Name);
			    return 1; }
"("			: { return 2; }
")"			: { return 3; }
"++"			: { return 4; }
";"			: { return 5; }
"["			: { return 6; }
"]"			: { return 7; }
"{"			: { return 8; }
"}"			: { return 9; }
