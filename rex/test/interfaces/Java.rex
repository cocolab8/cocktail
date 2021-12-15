SCANNER

GLOBAL {
// required because getWord () is used from ScanDrv
# define xxGetWord
}

DEFAULT {
    System.out.print (attribute.position()+": illegal character: ");
    yyEcho ();
    System.out.println ("");
}

LOCAL {
    char discard;
    int count;
}

DEFINE
   digit	= {0-9}		.
   letter	= {a-z A-Z}	.

START
	Cc Mc

RULE

/* Use of yyLess (the same result can clearly be obtained by other
 * methods).  This has to come before the pattern for identifiers. */

"number" digit +
	: { yyLess (6);
          }

digit+
        : { System.out.print (attribute.position().toString ()+": "+getWord ());
            System.out.println (" decimal");
            return 5;
          }

/* A pattern with a character >127 to demonstrate 8-bit
 * character set handling, and use of GetWord */

"£" digit+
        : { System.out.print (attribute.position().toString ()+": "+getWord ());
            System.out.println (" pounds");
            return 1;
          }

/* Actions using yyEcho */

\" -{\"}* \"
	: { System.out.print (attribute.position().toString ()+": ");
	    yyEcho ();
            System.out.println (" string");
            return 3;
          }

letter (letter | digit) *
        : { System.out.print (attribute.position().toString ()+": ");
	    yyEcho ();
            System.out.println (" identifier");
            return 2;
          }

/* Use of GetUpper and GetLower.  Note: the input includes
 * 8-bit characters */

"{" -{\)}* "}"
	: { System.out.println (attribute.position().toString ()+": Upper: "+getUpper ());
	  }

"[" -{\]}* "]"
	: { System.out.println (attribute.position().toString ()+": Lower: "+getLower ());
	  }

/* Use of '/' operator (right context) */

digit+ / H
	: { count = Integer.parseInt (getWord ());
            System.out.print (attribute.position().toString ()+": "+count+"H=");
	    discard = input ();
	    for (int i = 1; i <= count; i ++) System.out.print (input ());
	    System.out.println ();
	  }

digit+ / X
	: { count = Integer.parseInt (getWord ());
            System.out.print (attribute.position().toString ()+": "+count+"X=");
	    discard = input ();
	    for (int i = 1; i <= count; i ++) output (input ());
	    System.out.println ();
	  }

/* matching beginning of line and end of line */

< ":" letter (letter | digit) *
	: { System.out.print (attribute.position().toString ()+": ");
	    yyEcho ();
            System.out.println (" label");
          }

letter (letter | digit) * >
	: { System.out.print (attribute.position().toString ()+": ");
	    yyEcho ();
            System.out.println (" tag");
          }

/* Modula (nested) and C style (un-nested) comments to use both
   sorts of state handling (yyPop / yyPrevious) */

/* Modula comments can appear anywhere except inside C comments */

NOT #Cc#
"(*"
	: { yyPush (Mc);
	  }

#Mc#
"*)"
	: { yyPop ();
	  }

/* C comments can be nested inside Modula ones */
NOT #Cc#
"/*"
	: { yyStart (Cc);
	  }

#Cc#
"*/"
	: { yyPrevious ();
	  }

#Cc, Mc#
"(" | "/" | "*" | -{*(/}+
	: {}

\t
	: { yyTab ();
	  }

&+ \t
	: { yyTab1 (tokenLength - 1);
	  }

\n "begin"
	: { yyEol (5);
	  }

