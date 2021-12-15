/* $Id: Scanner.java,v 1.10 2013/01/15 13:53:59 grosch Exp $ */

$# package declaration if specified

$-[ import user declarations
// Default IMPORT
import de.cocolab.reuse.*;
$]

$G global user declarations

$W define directives to select optional features, e.g. getUpper
$V define directives to select optional features, e.g. yyPush, yyPop

/*
 * The user is permitted to set various compile time parameters
 * by means of C preprocessor macros in the GLOBAL section.
 * Here are the defaults.
 */

// Initial size of buffer for reading the scanner input.
// This should be set to at least the size of the "normal case"
// largest token, though the buffer will grow if required.
// Larger values may give better performance (fewer calls to read
// more input), and for some types of input a value slightly larger
// than a power of two may be beneficial, causing input to be read
// in multiples of one block.

# ifndef yyInitBufferSize
# define yyInitBufferSize	1024 * 8 + 256
# endif

// If this is set to 0 then there will be no file stack (beginFile
// may only be called before the first call of getToken).
// In Java the file stack is a simple list, and so there is no
// significance to this number other than whether it is zero or not.

# ifndef yyInitFileStackSize
# define yyInitFileStackSize	8
# endif

// The number of spaces between each tab stop. This is used
// to calculate column positions in the presence of tab characters.

# ifndef yyTabSpace
# define yyTabSpace		8
# endif

// The initial size of the start state stack.

# ifndef yyInitStStStackSize
# define yyInitStStStackSize	16
# endif

/*
 * End of default parameters.
 */

$@ public class @ {

// The following macros determine the method of recording attributes
// associated with a recognised token, and in particular the source position.
// The user is allowed to redefine these macros to implement a different
// method of recording positions, or to not record positions at all.
// This would usually be done in the GLOBAL section.

// Determine column number given an index into the token buffer,
// typically tokenIndex.
# ifndef yyColumn
# define yyColumn(Index)	((Index) - yyLineStart)
# endif

// Determine offset within the input file corresponding to a given index
// into the token buffer.
# ifndef yyOffset
# define yyOffset(Index)	(yyFileOffset + ((Index) - yyChBufferStart))
# endif

// Code which sets the position information for the token.
// This is executed just before any user action code.
# ifndef yySetPosition
# define yySetPosition \
	attribute = new ScanAttribute (yyLineCount, tokenIndex - yyLineStart);
# endif

// Arbitrary code to be executed at the start of getToken.  By default this
// does nothing.
# ifndef yyGetTokenBegin
# define yyGetTokenBegin
# endif

// Code which obtains the position associated with a token.
// This is used in producing diagnostics related to internal errors:
// if a scanner does not record positions at all, return something else
// that will help identify the current input position.
// For the scanner, any object that supports toString() will do, but a
// lark generated parser will require a Position object.
// By default we assume that ScanAttribute implements the HasPosition
// interface.
# ifndef yyAttributePosition
# define yyAttributePosition(attribute) attribute.position()
# endif

$X[ export user declarations   Note: The rex manual refers to this default.
   // Default EXPORT

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
   }

   public ScanAttribute errorAttribute (int token) {
       return new ScanAttribute (Position.NoPosition);
   }
$]

    /**
     * Scanner state constant.
     */

    private static final int	yyDNoState	= 0;

    /**
     * The token returned by getToken at end of file.
     */

    public static final int	eofToken	= 0;

    /**
     * The length of the token found.
     * <P>
     */

    public int			tokenLength;

    /**
     * Position of token found within buffer.
     * This has no meaning externally.
     * <P>
     */

    private int			tokenIndex;

    /**
     * Attributes of the returned token.
     * <P>
     */

    public ScanAttribute	attribute;

# ifndef yytChar
$@ #  if $_xxMaxCharacter < 256
#   define yytChar	byte
#  else
#   define yytChar	char
#  endif
# endif

$@ # if $_xxMaxCharacter < 256
#  define yyInputClass java.io.InputStream
# else
#  define yyInputClass java.io.Reader
# endif

$C constant declarations

    /**
     * Constructor to create a new scanner object.
     * <P>
     */

$@     public @ () throws java.io.IOException {
	init ();
$I user initialization code
    }

    /**
     * User finalization code. Please note any caveats in your JVM
     * concerning when, or even if, the finalization method will be
     * invoked. For safety it should be called explicitly if at all
     * possible.
     * <P>
     */

    public void finalize () {
$F user finalization code
    }

# ifdef xxGetLower
    /**
     * Table to convert characters to lower case.
     * <P>
     * @see #getLower()
     */

    private static final char [] yyToLower = {
	0, 01, 02, 03, 04, 05, 06, 07,
	010, 011, 012, 013, 014, 015, 016, 017,
	020, 021, 022, 023, 024, 025, 026, 027,
	030, 031, 032, 033, 034, 035, 036, 037,
	' ', 041, 042, 043, 044, 045, 046, 047,
	050, 051, 052, 053, 054, 055, 056, 057,
	060, 061, 062, 063, 064, 065, 066, 067,
	070, 071, ':', ';', '<', '=', '>', '?',
	'@', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
	'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	'x', 'y', 'z', '[', '\\', ']', '^', '_',
	'\'', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
	'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	'x', 'y', 'z', '{', '|', '}', '~', 0177,
	0200, 0201, 0202, 0203, 0204, 0205, 0206, 0207,
	0210, 0211, 0212, 0213, 0214, 0215, 0216, 0217,
	0220, 0221, 0222, 0223, 0224, 0225, 0226, 0227,
	0230, 0231, 0232, 0233, 0234, 0235, 0236, 0237,
	0240, 0241, 0242, 0243, 0244, 0245, 0246, 0247,
	0250, 0251, 0252, 0253, 0254, 0255, 0256, 0257,
	0260, 0261, 0262, 0263, 0264, 0265, 0266, 0267,
	0270, 0271, 0272, 0273, 0274, 0275, 0276, 0277,
	0300, 0301, 0302, 0303, 0304, 0305, 0306, 0307,
	0310, 0311, 0312, 0313, 0314, 0315, 0316, 0317,
	0320, 0321, 0322, 0323, 0324, 0325, 0326, 0327,
	0330, 0331, 0332, 0333, 0334, 0335, 0336, 0337,
	0340, 0341, 0342, 0343, 0344, 0345, 0346, 0347,
	0350, 0351, 0352, 0353, 0354, 0355, 0356, 0357,
	0360, 0361, 0362, 0363, 0364, 0365, 0366, 0367,
	0370, 0371, 0372, 0373, 0374, 0375, 0376, 0377,
    };

# endif
# ifdef xxGetUpper
    /**
     * Table to convert characters to upper case.
     * <P>
     * @see #getUpper()
     */

    private static final char [] yyToUpper = {
	0, 01, 02, 03, 04, 05, 06, 07,
	010, 011, 012, 013, 014, 015, 016, 017,
	020, 021, 022, 023, 024, 025, 026, 027,
	030, 031, 032, 033, 034, 035, 036, 037,
	' ', 041, 042, 043, 044, 045, 046, 047,
	050, 051, 052, 053, 054, 055, 056, 057,
	060, 061, 062, 063, 064, 065, 066, 067,
	070, 071, ':', ';', '<', '=', '>', '?',
	'@', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
	'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
	'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	'X', 'Y', 'Z', '[', '\\', ']', '^', '_',
	'\'', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
	'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
	'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	'X', 'Y', 'Z', '{', '|', '}', '~', 0177,
	0200, 0201, 0202, 0203, 0204, 0205, 0206, 0207,
	0210, 0211, 0212, 0213, 0214, 0215, 0216, 0217,
	0220, 0221, 0222, 0223, 0224, 0225, 0226, 0227,
	0230, 0231, 0232, 0233, 0234, 0235, 0236, 0237,
	0240, 0241, 0242, 0243, 0244, 0245, 0246, 0247,
	0250, 0251, 0252, 0253, 0254, 0255, 0256, 0257,
	0260, 0261, 0262, 0263, 0264, 0265, 0266, 0267,
	0270, 0271, 0272, 0273, 0274, 0275, 0276, 0277,
	0300, 0301, 0302, 0303, 0304, 0305, 0306, 0307,
	0310, 0311, 0312, 0313, 0314, 0315, 0316, 0317,
	0320, 0321, 0322, 0323, 0324, 0325, 0326, 0327,
	0330, 0331, 0332, 0333, 0334, 0335, 0336, 0337,
	0340, 0341, 0342, 0343, 0344, 0345, 0346, 0347,
	0350, 0351, 0352, 0353, 0354, 0355, 0356, 0357,
	0360, 0361, 0362, 0363, 0364, 0365, 0366, 0367,
	0370, 0371, 0372, 0373, 0374, 0375, 0376, 0377,
    };

# endif
$T	// yyCombCheck and yyCombNext tables get inserted here

$B	// yyBasePtr data gets inserted here

$U	// yyDefault data gets inserted here

$R	// yyEobTrans data gets inserted here

$Q	// yyAction data gets inserted here

# if yyToClassArraySize == 0
#  define yyToClass(x) (x)
# else
    private static final short [] yyToClassArray = {
$Z
    };
$@ #  if $_xxMaxCharacter < yyToClassArraySize
#   define yyToClass(x) (yyToClassArray [x])
#  else
#   define yyToClass(x) \
	((x) < yyToClassArraySize ? yyToClassArray [x] : yyToClassFunction (x))

    private static final char [] yyToClassUpb = {
$Y
    };
    private static final short [] yyToClassClass = {
$S
    };

    short yyToClassFunction (char yyCh)
    {
       int yyLower = 1, yyUpper = yyToClassRangeSize;
       while (yyUpper - yyLower > 1) {			/* binary search */
	  int yyMiddle = (yyLower + yyUpper) / 2;
	  if (yyToClassUpb [yyMiddle] < yyCh)
	     yyLower = yyMiddle;
	  else
	     yyUpper = yyMiddle;
       }
       if (yyToClassUpb [yyLower - 1] < yyCh && yyCh <= yyToClassUpb [yyLower])
	  return yyToClassClass [yyLower];
       else
	  return yyToClassClass [yyUpper];
    }

#  endif
# endif

    private int []		yyStateStack;
    private int			yyStartState;
    private int			yyPreviousStart;
    private char		yyCh;

    private boolean		yyIsFirstCall;
    private yyInputClass	yySource;
    private boolean		yyEof;
    private yytChar []		yyChBuffer;
    private int			yyChBufferStart;
    private int			yyChBufferIndex;
    private int			yyBytesRead;
    private int			yyFileOffset;
    private int			yyLineCount;
    private int			yyLineStart;

# if yyInitFileStackSize != 0

    /**
     * Class for remembering buffer state when a new file is opened.
     * <P>
     */

    class yyFileStackEntry {

	/* Copies of scanner state variables */

	yyInputClass		Source;
	boolean			Eof;
	yytChar []		ChBuffer;
	int			ChBufferStart;
	int			ChBufferIndex;
	int			BytesRead;
	int			FileOffset;
	int			LineCount;
	int			LineStart;

	/* Previous state (null for empty stack) */
	yyFileStackEntry	next;

	/**
	 * Constructor requiring top of current stack.
	 * <P>
	 */
	yyFileStackEntry (yyFileStackEntry top) {
	    next = top;
	}
    }

    /**
     * Stack recording previously opened files which are not yet closed.
     * <P>
     */

    private yyFileStackEntry yyFileStack = null;
# endif

# if defined xxyyPush | defined xxyyPop

    // Start State Stack: StStSt

    /*
     * Start state stack and index.
     */

    private int [] yyStStStack;

    int yyStStStackIdx;

    /**
     * The current start state is pushed on a stack and the start state
     * is changed to <code>s</code>.
     * <P>
     * @param s  The new state.
     */

    private void yyPush (int s) {
	if (yyStStStackIdx == yyStStStack.length) {
	    yyStStStack = DynArrayInt.extend (yyStStStack);
	}
	yyStStStack [yyStStStackIdx] = yyStartState;
	yyStStStackIdx ++;
	yyStart (s);
    }

    /**
     * The start state is changed to the state popped from a stack.
     * <P>
     * @see #yyPush(int)
     * @throws FatalError If the stack is empty (too many pops).
     */

    public void yyPop () throws java.io.IOException {
	yyPreviousStart = yyStartState;
	if (yyStStStackIdx > 0) {
	    yyStartState = yyStStStack [-- yyStStStackIdx];
	} else{
	    yyErrorMessage ("start stack underflow (too many calls of yyPop)" +
		": Start State =" + yyStartState);
	}
    }

# endif

    /**
     * Set scanner state to a specified value. The current state is
     * remembered and can be restored using {@link #yyPrevious()}.
     * <P>
     * @param  State  The new state.
     */

    void yyStart (int State) {
	yyPreviousStart	= yyStartState;
	yyStartState	= State;
    }

    /**
     * Restore the scanner state to its previous value. The current
     * state is remembered as the previous state.
     * <P>
     * @see #yyStart(int)
     */

    void yyPrevious () {
	int s		= yyStartState;
	yyStartState	= yyPreviousStart;
	yyPreviousStart	= s;
    }

    public int getToken () throws java.io.IOException {
$L local user declarations

	yyGetTokenBegin
	for (;;) {
	    int yyState	= yyStartState;
	    tokenLength	= 0;
	    tokenIndex	= yyChBufferIndex;
$J 	    if (yyChBuffer [yyChBufferIndex - 1] == yyEolCh) yyState ++;

	    // ASSERT yyChBuffer [yyChBufferIndex] = first character

yyMiddle:   for (;;) {		// Eventually restart after sentinel
		for (;;) {	// Execute as many state transitions as possible
				// Determine next state
		    int yyTableIdx = yyBasePtr [yyState] +
$@ # if $_xxMaxCharacter < 256
		// compensate for Java signed byte for eight bit character sets
			   yyToClass ((int) yyChBuffer [yyChBufferIndex] & 255);
# else
			   yyToClass (yyChBuffer [yyChBufferIndex]);
# endif
		    if (yyCombCheck [yyTableIdx] != yyState) {
			yyState = yyDefault [yyState];
			if (yyState == yyDNoState) break;
		    } else {
			yyState = yyCombNext [yyTableIdx];
			yyStateStack [++ tokenLength] = yyState; // push state
			yyChBufferIndex ++;	// get next character
		    }
		}
yyInner:	for (;;) {			// search for last final state
$A case header and user actions		// switch (yyStateStack [tokenLength]) {
$N non final states
		    // non final states
			yyChBufferIndex --;	// return character
			tokenLength --;		// pop state
			break;

$P 		    case yyDefaultState:
			yyChBufferIndex ++;
			tokenLength = 1;
			yySetPosition
$D[ default action
			yyEcho ();
$]
			break yyMiddle;

		    case yyDNoState:
			break yyMiddle;

$O 		    case yyEobState:		// end of buffer sentinel found
			yyChBufferIndex --;	// undo last state transition
						// get previous state
			if (-- tokenLength == 0) {
			    yyState = yyStartState;
$J 			    if (yyChBuffer [yyChBufferIndex - 1] == yyEolCh)
				yyState ++;
			} else {
			    yyState = yyStateStack [tokenLength];
			}

			if (yyChBufferIndex != yyChBufferStart + yyBytesRead) {
					// end of buffer sentinel in buffer
			    yyState = yyEobTrans [yyState];
			    if (yyState != yyDNoState) {
				yyChBufferIndex ++;
				yyStateStack [++ tokenLength] = yyState;
				break yyInner;
			     }
			} else {		// end of buffer reached
			    if (! yyEof) {
				int yyChBufferFree;
			// copy initial part of token in front of input buffer
				int yyFrom = yyChBufferIndex - tokenLength - 1;
				int yyTo = General.MaxAlign
				    - tokenLength % General.MaxAlign - 1;
				if (yyFrom > yyTo) {
				    for (int yyi = 0; yyi <= tokenLength; yyi ++)
					yyChBuffer [yyTo + yyi] =
					yyChBuffer [yyFrom + yyi];
				    yyLineStart -= yyFrom - yyTo;
				    tokenIndex  -= yyFrom - yyTo;
				    yyChBufferStart = yyTo + tokenLength + 1;
				} else {
				    yyChBufferStart = yyChBufferIndex;
				}
						// extend buffer if necessary
				yyChBufferFree = (int) General.exp2 (
				    General.log2 (yyChBuffer.length - 4
				    - General.MaxAlign - tokenLength));
				if (yyChBufferFree < yyChBuffer.length / 8) {
$@ # if $_xxMaxCharacter < 256
				    yyChBuffer = DynArrayByte.extend (yyChBuffer);
# else
				    yyChBuffer = DynArrayChar.extend (yyChBuffer);
# endif
				    yyChBufferFree = (int) General.exp2 (
					General.log2 (yyChBuffer.length - 4
					- General.MaxAlign - tokenLength));
				    if (yyStateStack.length < yyChBuffer.length)
					yyStateStack = DynArrayInt.extend (yyStateStack);
				}
						// read buffer and restart
				yyChBufferIndex = yyChBufferStart;
				yyFileOffset += yyBytesRead;
				yyBytesRead = yySource.read (yyChBuffer,
				    yyChBufferIndex, yyChBufferFree);
				if (yyBytesRead <= 0) {
				    yyBytesRead = 0;
				    yyEof = true;
				}
				yyChBuffer [yyChBufferStart + yyBytesRead]
				    = yyEobCh;
				yyChBuffer [yyChBufferStart + yyBytesRead + 1]
				    = 0;
				break yyInner;
			    }

			    if (tokenLength == 0) {	// end of file reached
				yySetPosition
				closeFile ();
# if yyInitFileStackSize != 0
				if (yyFileStack == null) {
$E eof action
				}
				if (yyFileStack == null) return eofToken;
				break yyMiddle;
# else
$E eof action
				return eofToken;
# endif
			    }
			}
			break;
		    default:
			yyErrorMessage ("internal error:" +
			    " invalid state=" + yyStateStack [tokenLength] +
			    " token length=" + tokenLength);
			break yyInner;
		    }
		}
	    }
	}
    }

# if yyInitFileStackSize == 0
    // Nested input facility switched off
    /**
     * Use this before the first call to {@link #getToken()} to read
     * the given stream instead of the default standard input.
     * <P>
     * @param stream The stream to be read.
     */
# else
    // Nested input facility switched on (the default)
    /**
     * Open a new input stream. The state of the currently opened stream,
     * if any, is saved. At the end of the file this state will be restored.
     * If used before the first call to {@link #getToken()} then the given
     * stream is read instead of the default standard input.
     * <P>
     * The facility to nest input files may be removed by defining the
     * preprocesor symbol <code>yyInitFileStackSize</code> to zero,
     * for example
     * <P>
     * <PRE>
     * GLOBAL {
     * #define yyInitFileStackSize 0
     * }
     * </PRE>
     * <P>
     * This may be useful if code size is critical, for example in embedded
     * systems.
     * <P>
     * @param stream The stream to be read.
     */
# endif

    public void beginFile (yyInputClass stream)
	throws java.io.IOException {
# if yyInitFileStackSize != 0
	if (yyIsFirstCall && (yyBytesRead == 0)) {
	    yyFileStack	= null;
	    yyIsFirstCall = false;
	}
# endif
	yyInitialize ();
	yySource = stream;
    }

    /**
     * Initialize scanner state.
     * <P>
     * This is called at scanner initialisation or when a new
     * file is opened. An input buffer is allocated and variables
     * describing the current input position are initialized.
     * <P>
     */

    private void yyInitialize () throws java.io.IOException {

# if yyInitFileStackSize != 0
	// Store current state.
	yyFileStack			= new yyFileStackEntry (yyFileStack);
	yyFileStack.Source		= yySource		;
	yyFileStack.Eof			= yyEof			;
	yyFileStack.ChBuffer		= yyChBuffer		;
	yyFileStack.ChBufferStart	= yyChBufferStart	;
	yyFileStack.ChBufferIndex	= yyChBufferIndex	;
	yyFileStack.BytesRead		= yyBytesRead		;
	yyFileStack.FileOffset		= yyFileOffset		;
	yyFileStack.LineCount		= yyLineCount		;
	yyFileStack.LineStart		= yyLineStart		;
# endif

	// Initialize file state.
	yyChBuffer			= new yytChar [yyInitBufferSize];
	yyChBufferStart			= General.MaxAlign;
	yyChBuffer [yyChBufferStart-1]	= yyEolCh; // Begin of line indicator.
	yyChBuffer [yyChBufferStart]	= yyEobCh; // End of buffer sentinel.
	yyChBuffer [yyChBufferStart+1]	= 0;
	yyChBufferIndex			= yyChBufferStart;
	yyEof				= false;
	yyBytesRead			= 0;
	yyFileOffset			= 0;
	yyLineCount			= 1;
	yyLineStart			= yyChBufferStart - 1;
    }

# if yyInitFileStackSize == 0
    /**
     * Close the input file.
     * <P>
     */
# else
    /**
     * Close the current input file. If a previous file was open,
     * scanning resumes from where it left off.
     * <P>
     */
# endif

    public void closeFile () throws java.io.IOException {

# if yyInitFileStackSize != 0
	if (yyFileStack == null)
	    yyErrorMessage ("file stack underflow (too many calls of closeFile)");
# endif
	yySource.close ();

# if yyInitFileStackSize != 0
	// pop file
	yySource	= yyFileStack.Source;
	yyEof		= yyFileStack.Eof;
	yyChBuffer	= yyFileStack.ChBuffer;
	yyChBufferStart	= yyFileStack.ChBufferStart;
	yyChBufferIndex	= yyFileStack.ChBufferIndex;
	yyBytesRead	= yyFileStack.BytesRead;
	yyFileOffset	= yyFileStack.FileOffset;
	yyLineCount	= yyFileStack.LineCount;
	yyLineStart	= yyFileStack.LineStart;
	yyFileStack	= yyFileStack.next;
	yyIsFirstCall	= false;
# endif
    }

# ifdef xxGetWord
    /**
     * This method gives access to the matched character sequence.
     * <P>
     * @see #getUpper()
     * @see #getLower()
     */

    public String getWord () {
	StringBuffer s = new StringBuffer (tokenLength);
	for (int i = yyChBufferIndex - tokenLength; i < yyChBufferIndex; i ++) {
	    s.append ((char) ((int) yyChBuffer [i] & 255));
	}
	return s.toString ();
    }
# endif

# ifdef xxGetLower
    /**
     * This method gives access to the matched character sequence, with all
     * letters normalized to lower case.
     * <P>
     * @see #getUpper()
     * @see #getWord()
     */

    public String getLower () {
	StringBuffer s = new StringBuffer (tokenLength);
	int start = yyChBufferIndex - tokenLength - 1;

	for (int i = 1; i <= tokenLength; i ++) {
	    s.append (yyToLower [(int) yyChBuffer [start + i] & 255]);
	}
	return s.toString ();
    }
# endif

# ifdef xxGetUpper
    /**
     * This method gives access to the matched character sequence, with all
     * letters normalized to upper case.
     * <P>
     * @see #getLower()
     * @see #getWord()
     */

    public String getUpper () {
	StringBuffer s = new StringBuffer (tokenLength);
	int start = yyChBufferIndex - tokenLength - 1;

	for (int i = 1; i <= tokenLength; i ++) {
	    s.append (yyToUpper [(int) yyChBuffer [start + i] & 255]);
	}
	return s.toString ();
    }
# endif

    /**
     * Print the current token to standard output.
     */

    void yyEcho () throws java.io.IOException {
	for (int i = yyChBufferIndex - tokenLength; i <= yyChBufferIndex - 1; i ++)
	     System.out.print ((char) ((int) yyChBuffer [i] & 255));
    }

    /**
     * The matched character sequence is truncated to the first
     * <code>n</code> characters. The other characters are
     * rescanned for the next character sequence.
     * <P>
     * @param  n  The number of characters to be kept in the
     *            matched sequence.
     */

    void yyLess (int n) {
	yyChBufferIndex -= tokenLength - n;
	tokenLength = n;
    }

    /**
     * This method should be called if a regular expression is specified
     * by the user to process tab characters. Its purpose is to update
     * the internal variable to calculate the column position of tokens.
     * <code>yyTab</code> works only if the tab character is exclusively
     * matched by a rule.
     */

    void yyTab () {
	yyLineStart -= yyTabSpace - 1 -
	    (yyChBufferIndex - yyLineStart - 2) % yyTabSpace;
    }

    /**
     * This method should be called if a regular expression is specified
     * by the user to process tab characters. Its purpose is to update
     * the internal variable to calculate the column position of tokens.
     * <code>yyTab1</code> works if one tab character is embedded in
     * other characters.
     * <P>
     * @param  a   The number of characters before the tab character.
     */

    void yyTab1 (int a) {
	yyLineStart -= yyTabSpace - 1 -
	    (yyChBufferIndex - yyLineStart - tokenLength + a - 1) % yyTabSpace;
    }

    /**
     * This method is the same as {@link #yyTab1(int)} except for the extra
     * argument which is ignored.
     * <P>
     * @param  a   The number of characters before the tab character.
     * @param  b   Not used.
     */

    void yyTab2 (int a, int b) {
	yyLineStart -= yyTabSpace - 1 -
	    (yyChBufferIndex - yyLineStart - tokenLength + a - 1) % yyTabSpace;
    }

    /**
     * This method should be called if a regular expression is specified
     * by the user to process newline characters. Its purpose is to update
     * the internal variable to calculate the column position of tokens.
     * <code>yyEol</code> should be called once for each newline character
     * matched.
     * <P>
     * @param  column  The number of characters after the last newline
     *                 matched.
     */

    void yyEol (int column) {
	yyLineCount ++;
	yyLineStart = yyChBufferIndex - 1 - column;
    }

    /**
     * Output a single character to standard output.
     * <P>
     */

    void output (char c) throws java.io.IOException {
	System.out.write (c);
    }

    /**
     * Push a character back into the input stream.
     * <P>
     * This should normally be used following <code>input</code>.
     * The scanner is not designed to push back more characters than
     * were read to identify the last token returned.
     * <P>
     * @param  c  The character to be read next. This need not be the
     *            same character that was read originally, though it
     *            usually will be.
     */

    void unput (char c) {
	yyChBufferIndex --;
	yyChBuffer [yyChBufferIndex] = (yytChar) c;
    }

# if defined xxinput
    /**
     * Read the next character of input, bypassing the normal scanning
     * mechanism.
     * <P>
     * This may be used within action code or from outside the scanner
     * to handle input which cannot be matched with a regular
     * expression. The classic example of this is the Fortran constant,
     * such as 4Habcd (The four character string "abcd"). Use a regular
     * expression to match '4H', and then in the action code use
     * <code>input</code> to read four characters.
     * <P>
     */

    public char input () throws java.io.IOException {
	if (yyChBufferIndex == yyChBufferStart + yyBytesRead) {
	    if (! yyEof) {
		yyLineStart -= yyBytesRead;
		yyChBufferStart = General.MaxAlign;
		yyChBufferIndex = yyChBufferStart;
		yyFileOffset += yyBytesRead;
		yyBytesRead = yySource.read (yyChBuffer, 0,
		    (int) General.exp2 (General.log2 (yyChBuffer.length)));
		if (yyBytesRead <= 0) {
		    yyBytesRead = 0;
		    yyEof = true;
		}
		yyChBuffer [yyBytesRead]     = yyEobCh;
		yyChBuffer [yyBytesRead + 1] = 0;
	    }
	}
	if (yyChBufferIndex == yyChBufferStart + yyBytesRead) {
	    return 0;
	} else {
	    yyChBufferIndex ++;
	    return (char) ((int) yyChBuffer [yyChBufferIndex - 1] & 255);
	}
    }
# endif

    /**
     * Report an internal error.
     * <P>
     * This is done by throwing an exception so that if nothing is done the
     * program is terminated with a clear diagnostic. However, the programmer
     * has the option of catching the exception at any point.
     * <P>
     * @param  ErrorCode  A number 1..6 identifying the cause of the failure.
     *
     */

    private void yyErrorMessage (String message) {
$@ 	throw new FatalError (yyAttributePosition(attribute).toString () + ": @: " + message);
    }

    /**
     * Initialize Scanner data structures.
     * <P>
     */

    private void init () throws java.io.IOException {
# if yyInitFileStackSize != 0
	yyIsFirstCall	= true;
	yyFileStack	= null;
# endif
	yyInitialize ();
$@ # if $_xxMaxCharacter < 256
	yySource	= System.in;
# else
	yySource	= new java.io.InputStreamReader (System.in);
# endif
	yyStartState	= STD;
	yyPreviousStart	= STD;
	yyStateStack	= new int [yyInitBufferSize];
	yyStateStack [0]= yyDefaultState;	// stack underflow sentinel
# if defined xxyyPush | defined xxyyPop
	yyStStStack	= new int [yyInitStStStackSize];
	yyStStStackIdx	= 0;
# endif
    }

    static {
$K	// code for copying of table parts is inserted here
    }
}

$H	// table parts get inserted here
