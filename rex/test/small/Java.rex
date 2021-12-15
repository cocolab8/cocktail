/* An attempt at a small scanner, both in code size and buffering.
   We supply our own white space rules (option v).
   Also, this test will exercise reading more than one bufferworth
   of data.  Note in particular the huge token at the end of
   the input file.
 */

/* the scanner package name is carefully chosen so we do not have to do
   odd things with the directory structure.  If you have trouble finding
   classes it may be that the directory structure changed since this
   test was written.
 */

SCANNER rex.test.small.SmallScanner

GLOBAL {
// small buffer size
# define yyInitBufferSize	128 + 8
// no file stack
# define yyInitFileStackSize	0
// different tab size
# define yyTabSpace		4
// no start state stack
# define yyInitStStStackSize	0

// define the attribute to be simply the position
// set the type
# define ScanAttribute Position
// setting the position
# define yySetPosition attribute = new Position (yyLineCount, yyColumn (tokenIndex));
// initialising a new attribute (not required)
# define yyGetTokenBegin // empty
// reporting position at which an internal error is discovered
# define yyAttributePosition(attribute) attribute
}

EXPORT {
    public ScanAttribute errorAttribute(
        int token)
    {
        return Position.NoPosition;
    }
}

BEGIN {
    System.out.println("SmallScanner begins");
}

CLOSE {
    System.out.println("SmallScanner ends");
}

EOF {
    System.out.println("End of file");
}

DEFINE
   digit	= {0-9}		.
   letter	= {a-z A-Z}	.

RULE

/* non constant right context */

digit + / "abcd"
        : { System.out.print("number then abcd ");
            yyEcho();
	    System.out.println();
          }

digit + / letter +
	: { System.out.print("number then letters ");
            yyEcho();
	    System.out.println();
          }

letter	: {}


/* Simple white space only - no tabs */

\n	: {yyEol(0); }
" " +	: {}

