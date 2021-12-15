EXPORT	{
   class ScanAttribute extends Position {

      /**
      *** Create ScanAttribute with given line and column.
      **/
      public ScanAttribute (int line, int column) {
          super (line, column);
      }
      /**
      *** Create ScanAttribute from another ScanAttribute or
      *** Position.
      **/
      public ScanAttribute (Position other) {
         super (other.line, other.column);
      }

      public Ident ident;
  }

  ScanAttribute errorAttribute (int token) {
    return new ScanAttribute (attribute);
  }

  IdentTable idents = new IdentTable();
}

RULE

{A-Za-z_}{a-zA-z0-9_}*	: { attribute.ident = idents.makeIdent (getWord ());
			    return 1; }
"("			: { return 2; }
")"			: { return 3; }
"++"			: { return 4; }
";"			: { return 5; }
"["			: { return 6; }
"]"			: { return 7; }
"{"			: { return 8; }
"}"			: { return 9; }
