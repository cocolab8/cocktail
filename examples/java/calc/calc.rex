EXPORT	{
  class ScanAttribute extends Position {

      /**
      *** Create ScanAttribute with given line and column.
      **/
      public ScanAttribute (int line, int column) {
          super (line, column);
      }

      /**
      *** Create ScanAttribute from another ScanAttribute or Position.
      **/
      public ScanAttribute (Position other) {
         super (other.line, other.column);
         value = -1;
      }

      int value;
  }


  ScanAttribute errorAttribute (int token) {
    int v;
    switch (token) {
      case 1: v = 99; break;
      case 2: v = 25; break; // register z
      default: v = attribute.value;
    }
    attribute.value = v;
    return attribute;
  }

}

LOCAL { int n; }

RULE

" "		: {}
"//" ANY*		: {}
{0-9}		: { attribute.value = Integer.parseInt (getWord ());
		    return 1;
		  }
{a-z}		: { attribute.value = Character.getNumericValue (getWord ().charAt (0))
			- Character.getNumericValue ('a');
		    return 2;
		  }
"+"		: { return 43; }
"-"		: { return 45; }
"*"		: { return 42; }
"/"		: { return 47; }
"%"		: { return 37; }
\n		: { yyEol (0); return 10; }
"="		: { return 61; }
"("		: { return 40; }
")"		: { return 41; }

