SCANNER

DEFAULT {
   Position.WritePosition (IO.StdOutput, Attribute.Position);
   IO.WriteS (IO.StdOutput, ": illegal character: ");
   yyEcho;
   IO.WriteNl (IO.StdOutput);
}

LOCAL {
    VAR discard: CHAR;
    VAR count: INTEGER;
    VAR word: Strings.tString;
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
        : { GetWord (word);
	    Position.WritePosition (IO.StdOutput, Attribute.Position);
	    IO.WriteS (IO.StdOutput, ": ");
	    Strings.WriteS (IO.StdOutput, word);
            IO.WriteS (IO.StdOutput, " decimal");
            IO.WriteNl (IO.StdOutput);
            RETURN 5;
          }

/* A pattern with a character > 127 to demonstrate 8-bit
 * character set handling, and use of GetWord */

"£" digit+
        : { GetWord (word);
	    Position.WritePosition (IO.StdOutput, Attribute.Position);
	    IO.WriteS (IO.StdOutput, ": ");
	    Strings.WriteS (IO.StdOutput, word);
            IO.WriteS (IO.StdOutput, " pounds");
            IO.WriteNl (IO.StdOutput);
            RETURN 1;
          }

/* Actions using yyEcho */

\" -{\"}* \"
	: { Position.WritePosition (IO.StdOutput, Attribute.Position);
	    IO.WriteS (IO.StdOutput, ": ");
	    yyEcho ();
            IO.WriteS (IO.StdOutput, " string");
            IO.WriteNl (IO.StdOutput);
            RETURN 3;
          }

letter (letter | digit) *
        : { Position.WritePosition (IO.StdOutput, Attribute.Position);
	    IO.WriteS (IO.StdOutput, ": ");
	    yyEcho;
            IO.WriteS (IO.StdOutput, " identifier");
            IO.WriteNl (IO.StdOutput);
            RETURN 2;
          }

/* Use of GetUpper and GetLower.  Note: the input includes
 * 8-bit characters */

"{" -{\)}* "}"
	: { Position.WritePosition (IO.StdOutput, Attribute.Position);
	    GetUpper (word);
	    IO.WriteS (IO.StdOutput, ": Upper: ");
	    Strings.WriteS (IO.StdOutput, word);
            IO.WriteNl (IO.StdOutput);
	  }

"[" -{\]}* "]"
	: { Position.WritePosition (IO.StdOutput, Attribute.Position);
	    GetLower (word);
	    IO.WriteS (IO.StdOutput, ": Lower: ");
	    Strings.WriteS (IO.StdOutput, word);
            IO.WriteNl (IO.StdOutput);
	  }

/* Use of '/' operator (right context) */

digit+ / H
	: { GetWord (word);
	    count := Strings.StringToInt (word);
            Position.WritePosition (IO.StdOutput, Attribute.Position);
	    IO.WriteS (IO.StdOutput, ": ");
	    IO.WriteI (IO.StdOutput, count, 0);
	    IO.WriteS (IO.StdOutput, "H=");
	    discard := input ();
	    REPEAT
	        DEC(count);
	        IO.WriteC (IO.StdOutput, input ());
	    UNTIL count = 0;
            IO.WriteNl (IO.StdOutput);
	  }

digit+ / X
	: { GetWord (word);
	    count := Strings.StringToInt (word);
            Position.WritePosition (IO.StdOutput, Attribute.Position);
	    IO.WriteS (IO.StdOutput, ": ");
	    IO.WriteI (IO.StdOutput, count, 0);
	    IO.WriteS (IO.StdOutput, "X=");
	    discard := input ();
	    REPEAT
	        DEC(count);
	        IO.WriteC (IO.StdOutput, input ());
	    UNTIL count = 0;
            IO.WriteNl (IO.StdOutput);
	  }

/* matching beginning of line and end of line */

< ":" letter (letter | digit) *
	: { Position.WritePosition (IO.StdOutput, Attribute.Position);
	    IO.WriteS (IO.StdOutput, ": ");
	    yyEcho;
            IO.WriteS (IO.StdOutput, " label");
            IO.WriteNl (IO.StdOutput);
          }

letter (letter | digit) * >
	: { Position.WritePosition (IO.StdOutput, Attribute.Position);
	    IO.WriteS (IO.StdOutput, ": ");
	    yyEcho;
            IO.WriteS (IO.StdOutput, " tag");
            IO.WriteNl (IO.StdOutput);
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
	: { yyTab1 (TokenLength - 1);
	  }

\n "begin"
	: { yyEol (5);
	  }

