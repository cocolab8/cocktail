/* $Id: Parser.java,v 1.8 2013/01/15 13:35:55 grosch Exp $ */

$#	// package line if package name is specified

$-[	// import section if specified
import de.cocolab.reuse.*;
$]

$G	// GLOBAL section gets inserted here

/*
 * Users may determine the type of object kept on the parser stack by defining
 * a macro yyParsAttribute in the GLOBAL section.  The default is to allow
 * any object.  It will usually be necessary to use casts to access S-attributes
 * in actions.
 */
# ifndef yyParsAttribute
# define yyParsAttribute java.lang.Object
# endif

/*
 * Macro to extend the parser attribute array.  The default will cope with any
 * type of object: this need only be changed if a primitive type is used.
 */
# ifndef yyExtendParsAttributes
# define yyExtendParsAttributes(a) (yyParsAttribute []) DynArrayObject.extend (a)
# endif

/* Macro to supply an initial value for yySynAttribute.  Note: this is only so
 * that an acceptable value can be supplied if yyParsAttribute is other than an
 * object type.  The initialisation is only there to keep the compiler happy,
 * it does not make sense to set it to any particular value.
 */
# ifndef yyInitSynAttribute
# define yyInitSynAttribute null
# endif

/* Macro to define the type of the scanner attribute.
 * Default: an inner class in the scanner.
 */
# ifndef yyScanAttribute
# define yyScanAttribute \
$@ $.ScanAttribute
# endif

/* Macro to obtain the attribute for the most recently scanned token.  This may
 * be redefined to implement a different scanner/parser interface.
 * Default: the token attribute is a public field in the scanner object.
 */
# ifndef yyGetScanAttribute
# define yyGetScanAttribute scanner.attribute
# endif

/* Macro to set the attribute for the most recently scanned token, for example
 * after a trial parse or access to a lookahead token.  This may
 * be redefined to implement a different scanner/parser interface.
 * Default: the token attribute is a public field in the scanner object.
 */
# ifndef yyPutScanAttribute
# define yyPutScanAttribute(a) scanner.attribute = a
# endif

/* Macro to store a ScanAttribute as a ParsAttribute.
 * Default: the types are assumed to be assignment compatible.
 */
# ifndef yyScanToPars
# define yyScanToPars(s) s
# endif

/* Macro to obtain the position associated with a token attribute.  This
 * may be redefined to implement a different scanner/parser interface.
 * Default: the attribute object is assumed to implement the HasPosition
 * interface.
 */
# ifndef yyAttributePosition
# define yyAttributePosition(attribute) attribute.position ()
# endif

$@ public class @ {

$E	// EXPORT section gets inserted here

/*
 * Define actions according to whether debug mode is required or not.
 * The user should not change these macros.
 */

# ifdef YYDEBUG
#  define YYACCEPT if (true) { yyAccept (yyStartCount); return yyErrorCount; }
#  define YYABORT  if (true) { yyAbort  (yyStartCount); return ++ yyErrorCount; }
#  define YYREAD   if (true) { yyState = yyRead1 (yyState); \
				yyTerminal = yyGetToken (); \
				yyRead2 (yyPrevTerminal, yyTerminal); \
				yyPrevTerminal.value = yyTerminal; \
				yyIsRepairing = false; \
				continue yyouter; }
# else
#  define YYACCEPT if (true) { return yyErrorCount; }
#  define YYABORT  if (true) { return ++ yyErrorCount; }
#  define YYREAD   if (true) { yyState = yyRead1 (yyState); \
				yyTerminal = yyGetToken (); \
				yyIsRepairing = false; \
				continue yyouter; }
# endif

# ifdef YYDEBUG
    /**
     * Class to implement pass by reference for integers, for example to allow
     * called methods to update yyPrevTerminal when debugging.
     * <P>
     */

    class IntegerBox {

	/**
	 * Constructor to make a new variable initialized with a
	 * specific value.
	 * <P>
	 * @param value the initial value.
	 * <P>
	 */

	public IntegerBox (int value) {
	    this.value = value;
	};

	/**
	 * The encapsulated value, which is public so that it may be
	 * directly updated.
	 * <P>
	 */

	public int value;
    }

# endif

    /**
     * Control the reporting of error messages by the parser.
     * <P>
     * The selection remains valid until a new call of the procedure or
     * the termination of the current invocation of the internal parsing
     * procedure.
     * <P>
     * @param  messages  true=enable, false=disable.
     */
    private void errorMessages (boolean messages) {
	// This implementation is present so that Javadoc will produce
	// appropriate documentation.  For efficiency we define a
	// preprocessor macro.
	yyMessages = messages;
# define errorMessages(messages)	yyMessages = messages
    }

    /**
     * Controls the execution of conditional semantic actions without a
     * selection mask (refer to section 6.3 of the Lark reference
     * manual).
     * <P>
     * The selection remains valid until a new call of the procedure or
     * the termination of the current invocation of the internal parsing
     * procedure.
     * <P>
     * @param  actions  true=enable, false=disable.
     */
    private void semActions (boolean actions) {
	// This implementation is present so that Javadoc will produce
	// appropriate documentation.  For efficiency we define a
	// preprocessor macro.
	yyActions = actions;
# define semActions(actions)		yyActions  = actions
    }


/*
 * The user is permitted to set various compile time parameters
 * by means of C preprocessor macros in the GLOBAL section.
 * Here are the defaults.
 */

// Initial parser stack size.  The parser stack is automatically extended
// if this is inadequate.

# ifndef yyInitStackSize
# define yyInitStackSize 100
# endif

# if defined YYTrialParse | defined YYReParse | defined YYGetLook

// Initial size of the token buffer for trial parsing and reparsing.
// The buffer size is increased automatically when necessary.

# ifndef yyInitBufferSize
# define yyInitBufferSize 100
# endif

# endif

/*
 * End of defaults for user specifiable items.
 */

    private final int yyNoState		= 0;
    private final int yystandard	= 1;
    private final int yytrial		= 2;
    private final int yybuffer		= 4;
    private final int yyreparse		= 8;

$T	// table constants are inserted here

    private final int yyFirstFinalState = yyFirstReadReduceState;

# ifdef YYDEC_TABLE
#  define yyDecrement(x)
#  define yySetNT(x)
# else
#  define yyDecrement(x)	yyStackPtr -= x;
#  define yySetNT(x)		yyNonterminal = x;
# endif

# define yyS	yySynAttribute
# define yyA	yyAttributeStack

$@     public $ scanner;

    /*
     * Named constants for start symbols.
     * <P>
     */
$I	// start symbol constants are inserted here

    /*
     * Named constants for nonterminals.
     * <P>
     */
$U	// nonterminal constants are inserted here

    /*
     * Named constants for terminals.
     * <P>
     */
$6	// terminal constants are inserted here

    /**
     * The names of the tokens understood by this parser.
     * <P>
     */
    public static final String [] tokenName = {
$W	// token names are inserted here
""
    };

$M	// yyTComb... gets inserted here

$Y	// yyNComb... gets inserted here

$P	// yyTBase gets inserted here

$Q	// yyNBase gets inserted here

# ifdef YYTDefault
$D	// yyTDefault gets inserted here

# endif
# ifdef YYNDefault
$V	// yyNDefault gets inserted here
# else
    private static final int [] yyNComb1 = {
$N
    };
# endif

# if ! defined NO_RECOVER | defined YYDEC_TABLE
$K	// yyLength gets inserted here

$H	// yyLeftHandSide gets inserted here

# endif
# ifndef NO_RECOVER
$O	// yyContinuation gets inserted here

# endif
    private static final int [] yyCondition = { 0,
$A	// yyCondition gets inserted here
    };

$F	// yyFinalToProd gets inserted here

    /**
     * References to line numbers in the specification.
     * <P>
     */

    private static final int [] yyStartLine = { 0,
$J
    };

    /**
     * Flag controlling when debug output is to be produced.
     * <P>
     * Setting this true only has an effect when the preprocessor
     * symbol YYDEBUG is defined, for example in the GLOBAL section.
     * <P>
     */
    public boolean yyDebug = false;

    private int     yyMode;
    private boolean yyActions, yyMessages;

# ifdef YYDEBUG
    private int yyCount;
    private CocktailWriter yyTrace;
# endif

    /**
     * Return the string representation of a token.
     * <P>
     * @param   token A token code.
     * @returns the string representation of <code>token</code>, or
     *          "_unknown_" if <code>token</code> is invalid.
     * <P>
     */
    public String yyGetTokenName (int token) {
	if (token <= yyLastTerminal && token >= 0 && tokenName [token] != null)
	    return tokenName [token];
	else
	    return "_unknown_";
    }

    /**
     * Error reporting object.
     * <P>
     * This may be set by the user to use an instance of Errors other
     * than the default global one, for example if an application has more
     * than one parser running concurrently.
     * <P>
     */
    public Errors errorsObj = Global.errors;

# ifdef YYDEBUG
    private String [] yyRule = { "",
$S	// rules are inserted here
    };
# endif

# if defined YYTrialParse | defined YYReParse | defined YYGetLook

    private int [] yyBuffer_Token;
    private yyScanAttribute [] yyBuffer_Attribute;
# ifdef YYMemoParse
    private int [] yyBuffer_Start;
# endif

    /**
     * The position of the current lookahead token in the buffer.
     * <P>
     * This value may be read at any time while parsing in the mode buffer
     * in order to request positions of arbitrary tokens in the token buffer.
     * <P>
     */
    private int		bufferPosition;

    private int		yyBufferLast;
    private boolean	yyBufferClear;

    private void yyBufferExtend () throws java.io.IOException {
	int oldLength = yyBuffer_Token.length;
	yyBuffer_Token = DynArrayInt.extend (yyBuffer_Token);
	yyBuffer_Attribute = (yyScanAttribute [])DynArrayObject.extend (yyBuffer_Attribute);
# ifdef YYMemoParse
	yyBuffer_Start = DynArrayInt.extend (yyBuffer_Start);
# endif
# ifdef YYDEBUG
	if (yyDebug) {
	    yyPrintState (0);
	    yyTrace.write ("extend  token buffer from " + oldLength +
			   " to " + yyBuffer_Token.length);
	    yyNl ();
	}
# endif
    }

    private int		yyParseLevel;

    private void yyBufferSet (int yyToken) throws java.io.IOException {
	if (bufferPosition == yyBufferLast) {
	    if (yyBufferClear) yyBufferLast = 0;
	    if (++ yyBufferLast >= yyBuffer_Token.length) {
		yyBufferExtend ();
	    }
	    yyBuffer_Token [yyBufferLast]	= yyToken;
	    yyBuffer_Attribute [yyBufferLast]	= yyGetScanAttribute;
# ifdef YYMemoParse
	    yyBuffer_Start [yyBufferLast]	= 0;
# endif
	    bufferPosition = yyBufferLast;
	}
    }

    private int yyGetToken () throws java.io.IOException {
	int yyToken;

	if (bufferPosition < yyBufferLast) {
	    yyToken = yyBuffer_Token [++ bufferPosition];
	    yyPutScanAttribute (yyBuffer_Attribute [bufferPosition]);
	} else {
	    yyToken = scanner.getToken ();
	    if (((yytrial | yybuffer) & yyMode) != 0) {
		if (++ yyBufferLast >= yyBuffer_Token.length) {
		    yyBufferExtend ();
		}
		yyBuffer_Token [yyBufferLast]	= yyToken;
		yyBuffer_Attribute [yyBufferLast] = yyGetScanAttribute;
# ifdef YYMemoParse
		yyBuffer_Start [yyBufferLast]	= 0;
# endif
		bufferPosition = yyBufferLast;
	    }
	}
# ifdef TOKENOP
	TOKENOP
# endif
	return yyToken;
    }

# else
#  define yyGetToken() scanner.getToken ()
# endif

# ifdef YYGetLook

# ifdef YYDOC
    /**
     * Return the k-th lookahead token.
     * <P>
     * @param k the offset of the required token.
     * @return the code of the k-th token.
     * <P>
     */
    private int getLookahead (int k) throws java.io.IOException {
	// This implementation is present so that Javadoc will produce
	// appropriate documentation.  In fact we use a
	// preprocessor macro because we need to use yyTerminal which
	// is local to the parse method.
	return -1;
    }
# endif

# define getLookahead(k) yyGetLookahead (k, yyTerminal)

    private int yyGetLookahead (int k, int yyTerminal) throws java.io.IOException {
	if (k == 0) return yyTerminal;
	if (yyMode == yystandard) yyBufferSet (yyTerminal);
	while (bufferPosition + k > yyBufferLast) {
	    if (bufferPosition < yyBufferLast &&
$@ 		yyBuffer_Token [yyBufferLast] == $.eofToken)
$@ 		return $.eofToken;
	    yyBufferLast ++;
	    if (yyBufferLast >= yyBuffer_Token.length) yyBufferExtend ();
	    yyBuffer_Token [yyBufferLast]	= scanner.getToken ();
	    yyBuffer_Attribute [yyBufferLast]	= yyGetScanAttribute;
# ifdef YYMemoParse
	    yyBuffer_Start [yyBufferLast]	= 0;
# endif
	}
	yyPutScanAttribute (yyBuffer_Attribute [bufferPosition]);
	return yyBuffer_Token [bufferPosition + k];
    }

# ifdef YYDOC
    /**
     * Return the attributes of the k-th lookahead token.
     * <P>
     * @param k the offset of the required token.
     * @return the attribute object of the k-th token.
     * <P>
     */
    private yyScanAttribute getAttribute (int k) throws java.io.IOException {
	// This implementation is present so that Javadoc will produce
	// appropriate documentation.  In fact we use a
	// preprocessor macro because we need to use yyTerminal which
	// is local to the parse method.
	return null;
    }
# endif

# define getAttribute(k)	yyGetAttribute ((k) - 1, yyTerminal)

    private yyScanAttribute yyGetAttribute (int k, int yyTerminal)
	throws java.io.IOException {
	if (k == 0) {
	    return yyGetScanAttribute;
	} else {
	    // Make sure the required token is in the buffer
	    int x = getLookahead (k);
	    return yyBuffer_Attribute [Math.min (bufferPosition + k, yyBufferLast)];
	}
    }

# endif

# ifdef YYReParse

# ifdef YYDOC
    /**
     * Switch parser to mode Buffer.
     * <P>
     * @param actions Controls the execution of semantic actions.
     *                See also {@link semActions(boolean)}.
     * @param messages Controls the reporting of error messages.
     *                 See also {@link errorMessages(boolean)}.
     * @return the position of the current lookahead token in the buffer.
     * <P>
     */
    private int bufferOn (boolean actions, boolean messages)
	throws java.io.IOException {

	// This implementation is present so that Javadoc will produce
	// appropriate documentation.  For efficiency we define a
	// preprocessor macro.
	return yyBufferOn (actions, messages, -1/* yyTerminal*/);
    }
# endif

# define bufferOn(Actions, Messages) yyBufferOn (Actions, Messages, yyTerminal)

    private int     yyPrevMode;
    private boolean yyPrevActions, yyPrevMessages;

    private int yyBufferOn (boolean actions, boolean messages, int token)
	throws java.io.IOException {

	if (yyMode == yystandard) {
	    yyPrevMode		= yyMode;
	    yyPrevActions	= yyActions;
	    yyPrevMessages	= yyMessages;
	    yyMode		= yybuffer;
	    yyActions		= actions;
	    yyMessages		= messages;
	    yyBufferSet (token);
	    yyBufferClear	= false;
	}
	return bufferPosition;
    }

    /**
     * Switch parser to mode Standard.
     * <P>
     * If the parser is in mode buffer, switch to mode standard restoring
     * Actions and Messages to the state they were in before the call to
     * bufferOn.
     * <P>
     * @return the position of the current lookahead token in the buffer.
     * <P>
     */
    private int bufferOff () {
	if (yyMode == yybuffer) {
	    yyMode	= yyPrevMode;
	    yyActions	= yyPrevActions;
	    yyMessages	= yyPrevMessages;
	}
	return bufferPosition;
    }

    /**
     * To be called when the contents of the token buffer may be
     * deleted.
     * <P>
     * The tokens in the token buffer will be deleted when it is safe
     * to do so.  It is important to tell the parser when buffered
     * tokens may be deleted because otherwise all remaining input
     * tokens will be buffered.  Therefore every call of bufferOn
     * should be matched by a call of bufferClear.
     * <P>
     */
    private void bufferClear () {
	yyBufferClear = true;
    }

# endif

# ifdef YYDEBUG

    private static char [] yyModeLetter = {' ', 'S', 'T', ' ', 'B', ' ', ' ', ' ', 'R'};

    private void yyReduce (int yyState) throws java.io.IOException {
	if (yyDebug) {
	    yyPrintState (yyStateStack [yyStackPtr]);
	    yyTrace.write ("reduce  " + yyRule [yyState - yyLastReadReduceState]);
	    yyNl ();
	}
    }

    private void yyNl () throws java.io.IOException {
	yyTrace.writeNl ();
    }

    private void yyPrintState (int yyState) throws java.io.IOException {
	yyCount ++;
	yyTrace.write (yyCount, 4);
	yyTrace.write (':');
	yyTrace.write (yyAttributePosition (yyGetScanAttribute));
	yyTrace.write (':');
	yyTrace.write (yyState, 5);
	yyTrace.write ("  " + yyModeLetter [yyMode] + "  ");
# if defined YYTrialParse | defined YYReParse
	if (yyParseLevel > 0) {
	    yyTrace.write (yyParseLevel, 2);
	    for (int i = 0; i <= yyParseLevel; i ++) yyTrace.write ("  ");
	} else {
	    yyTrace.write ("    ");
	}
# else
	yyTrace.write ("    ");
# endif
    }

# else
#  define yyReduce(State)
# endif

    private int yyStackPtr;
    private int [] yyStateStack;
    private yyParsAttribute [] yyAttributeStack;

    /**
     * Execute the parser using the default start symbol.
     * <P>
     * @returns the number of syntax errors.
     * <P>
     */
    public int parse () throws java.io.IOException {
	return parse (yyStartState);
    }

    /**
     * Execute the parser using a specified start symbol.
     * <P>
     * @param yyStartSymbol the name of any nonterminal in the grammar
     *                      prefixed with 'yy'.  These are named constants
     *                      in the parser class.
     * @returns the number of syntax errors.
     * <P>
     */
    public int parse (int yyStartSymbol) throws java.io.IOException {
	yyStateStack		= new int [yyInitStackSize];
	yyAttributeStack	= new yyParsAttribute [yyInitStackSize];
	yyStackPtr		= 0;
# if defined YYTrialParse | defined YYReParse
	yyBuffer_Token		= new int [yyInitBufferSize];
	yyBuffer_Attribute	= new yyScanAttribute [yyInitBufferSize];
# ifdef YYMemoParse
	yyBuffer_Start		= new int [yyInitBufferSize];
# endif
	bufferPosition	= 1;
	yyBufferLast	= 1;
	yyParseLevel	= 0;
# endif

# ifdef YYDEBUG
	if (yyDebug) {
	    yyTrace.write ("  # |Position|State|Mod|Lev|Action |Terminal and Lookahead or Rule");
	    yyNl (); yyNl ();
	}
# endif
	yyMode		= yystandard;
	yyActions	= true;
	yyMessages	= true;
	return yyParse (yyStartSymbol, yyGetToken (), yyStartLine [yyStartSymbol]);
    }

# ifdef YYTrialParse

# ifdef YYMemoParse
#  ifdef YYDOC
    /**
     * Clears memorized results of previous trial parses.
     * <P>
     * This is useful when option -b is set to instruct the generated
     * parser to memorize and reuse the results of previous trial parses.
     * These results are stored at the positions in the token buffer
     * where trial parses started.
     * <P>
     * @param position   the position in the token buffer at which a memorized
     *                   result is to be cleared.  This value should be
     *                   obtained from {@link bufferPosition}.
     * <P>
     */
    private void memoryClear (int position) {
	// This implementation is present so that Javadoc will produce
	// appropriate documentation.  For efficiency we define a
	// preprocessor macro.
	yyBuffer_Start [position] = 0;
    }
#  endif
#  define memoryClear(position) yyBuffer_Start [position] = 0
# endif

    private int yyTrialParse (int yyStartSymbol, int yyToken, int yyLine)
	throws java.io.IOException {

	int yyErrorCount;
	int yyPrevStackPtr	= yyStackPtr;
	int yyPrevBufferNext	= bufferPosition;
	int yyPrevMode		= yyMode;
	boolean yyPrevActions	= yyActions;
	boolean yyPrevMessages	= yyMessages;

# ifdef BEFORE_TRIAL
	BEFORE_TRIAL
# endif
# ifdef YYMemoParse
	if (yyBuffer_Start [bufferPosition] ==   yyStartSymbol) return 0;
	if (yyBuffer_Start [bufferPosition] == - yyStartSymbol) return 1;
# endif
	yyStackPtr ++;
	yyParseLevel ++;
	if (yyMode == yystandard) yyBufferSet (yyToken);
	yyPrevBufferNext = bufferPosition;
	yyMode		= yytrial;
	yyActions	= false;
	yyMessages	= false;
	yyErrorCount	= yyParse (yyStartSymbol, yyToken, yyLine);
# ifdef YYMemoParse
	if (yyErrorCount == 0) {
	    yyBuffer_Start [yyPrevBufferNext] =  yyStartSymbol;
	} else {
	    yyBuffer_Start [yyPrevBufferNext] = -yyStartSymbol;
	}
# endif
	yyStackPtr	= yyPrevStackPtr;
	bufferPosition	= yyPrevBufferNext;
	yyMode		= yyPrevMode;
	yyActions	= yyPrevActions;
	yyMessages	= yyPrevMessages;
	yyParseLevel --;
	yyPutScanAttribute (yyBuffer_Attribute [bufferPosition]);
# ifdef AFTER_TRIAL
	AFTER_TRIAL
# endif
	return yyErrorCount;
    }

# endif

# ifdef YYReParse

    /**
     * Initiates parsing in the mode reparse.
     * <P>
     * The contents of the token buffer between the positions supplied are
     * parsed again looking for the given start symbol.
     * <P>
     * @param  yyStartSymbol   the sentence to be parsed for
     * @param  yyFrom          buffer position of the first token (inclusive)
     * @param  yyTo            buffer position of the last token (exclusive)
     * @param  yyActions       controls the execution of semantic actions
     *                         during reparsing;
     *                         see {@link semActions(boolean)}.
     * @param  yyMessages      controls the reporting of errors during
     *                         reparsing;
     *                         see {@link errorMessages}.
     */
    private int reParse (
	    int yyStartSymbol,
	    int yyFrom, int yyTo,
	    boolean yyActions, boolean yyMessages
	) throws java.io.IOException {

	int	yyErrorCount = 1;

	if ((1 <= yyFrom) && (yyFrom <= yyTo) && (yyTo <= yyBufferLast)) {
	    int yyPrevStackPtr		= yyStackPtr;
	    int yyPrevBufferNext	= bufferPosition;
	    int yyToToken		= yyBuffer_Token [yyTo];
	    int yyPrevMode		= this.yyMode;
	    boolean yyPrevActions	= this.yyActions;
	    boolean yyPrevMessages	= this.yyMessages;
	    yyStackPtr ++;
	    yyParseLevel ++;

	    bufferPosition		= yyFrom - 1;
$@          yyBuffer_Token [yyTo]	= $.eofToken;
	    this.yyMode			= yyreparse;
	    this.yyActions		= yyActions;
	    this.yyMessages		= yyMessages;
	    yyErrorCount		= yyParse (yyStartSymbol, yyGetToken (), yyStartLine [yyStartSymbol]);
	    yyStackPtr			= yyPrevStackPtr;
	    bufferPosition		= yyPrevBufferNext;
	    this.yyMode			= yyPrevMode;
	    this.yyActions		= yyPrevActions;
	    this.yyMessages		= yyPrevMessages;
	    yyParseLevel --;
	    yyBuffer_Token [yyTo]	= yyToToken;
	    yyPutScanAttribute (yyBuffer_Attribute [bufferPosition]);
	} else {
	    errorsObj.message ("invalid call of reParse", Errors.Error,
		yyAttributePosition (yyGetScanAttribute));
	}
	return yyErrorCount;
    }

# endif

    private int yyRead1 (int state) {
	yyAttributeStack [++ yyStackPtr] = yyScanToPars (yyGetScanAttribute);
	return yyCondition [state - yyLastReduceState];
    }

# ifdef YYDEBUG

    void yyRead2 (IntegerBox yyPrevTerminal, int yyTerminal) throws java.io.IOException {
	if (yyDebug) {
	    yyPrintState (yyStateStack [yyStackPtr - 1]);
	    yyTrace.write ("shift   " + tokenName [yyPrevTerminal.value] +
		      ", lookahead: " + tokenName [yyTerminal]);
	    yyNl ();
	}
    }

    private void yyAccept (int yyStartCount) throws java.io.IOException {
	if (yyDebug) {			// accept
	    yyPrintState (yyStateStack [yyStackPtr]);
	    yyTrace.write ("accept  parse started at " + yyStartCount);
	    yyNl ();
	}
    }

    private void yyAbort (int yyStartCount) throws java.io.IOException {
	if (yyDebug) {			// abort
	      yyPrintState (yyStateStack [yyStackPtr]);
	      yyTrace.write ("fail    parse started at " + yyStartCount);
	      yyNl ();
	}
    }

    private boolean yyPrintResult (int state, int line, boolean condition)
	throws java.io.IOException {
	if (yyDebug) {
	    yyPrintState (state);
	    yyTrace.write ("check   predicate in line " + line +
			   ", result = " + (condition ? 'T' : 'F'));
	    yyNl ();
	}
	return condition;
    }

# else
#  define yyPrintResult(State, Line, Condition) Condition
# endif

    private int yyParse (int yyStartSymbol, int yyToken, int yyLine) throws java.io.IOException {
$L	// LOCAL section gets inserted here
	int yyState			= yyStartSymbol;
	int yyTerminal			= yyToken;
	boolean yyIsRepairing		= false;
	yyParsAttribute yySynAttribute	= yyInitSynAttribute; // synthesized attribute
	int yyErrorCount		= 0;
# ifdef YYDEBUG
	int yyStartCount		= yyCount + 1;
	IntegerBox yyPrevTerminal	= new IntegerBox (yyToken);
# endif
# ifdef YYGetLook
	int yy2;
# endif

# ifdef YYDEBUG
	if (yyDebug) {
	    yyPrintState (yyStartSymbol);
	    yyTrace.write ("parse   for predicate in line " + yyLine +
			   ", lookahead: " + tokenName [yyToken]);
	    yyNl ();
	}
# endif

yyouter: for (;;) {
	    if (yyStackPtr >= yyStateStack.length - 1) {
		int oldLength	 = yyStateStack.length;

		yyStateStack	 = DynArrayInt.extend (yyStateStack);
		yyAttributeStack = yyExtendParsAttributes (yyAttributeStack);

# ifdef YYDEBUG
		if (yyDebug) {
		    yyPrintState (yyState);
		    yyTrace.write ("extend  stack from " + oldLength +
				   " to " + yyStateStack.length);
		    yyNl ();
		}
# endif
	    }
	    yyStateStack [yyStackPtr] = yyState;

	// SPEC State = Next (State, Terminal); terminal transit
	    for (;;) {
		int idx = yyTBase [yyState] + yyTerminal;
		if (yyTCombCheck [idx] == yyState) {
		    yyState = yyTCombNext [idx];
		    break;
		}
# ifdef YYTDefault
		yyState = yyTDefault [yyState];
		if (yyState == yyNoState) break;
# else
		yyState = yyNoState; break;
# endif
	    }

	    if (yyState == yyNoState ||			// syntax error ?
		yyIsRepairing && yyState >= yyFirstReduceState) { // repair ?
              for (;;) {			// allow for some kind of goto
		if (yyState == yyNoState && ! yyIsRepairing) {	// syntax error
# ifdef ERROR
		    ERROR
# endif
# ifdef YYTrialParse
		    if (yyMode == yytrial) YYABORT;
# endif
# ifndef NO_RECOVER
		    yyErrorCount ++;			// report and recover
		    yyTerminal = errorRecovery (yyTerminal,
# ifdef YYDEBUG
				yyPrevTerminal,
# endif
				yyStateStack, yyStackPtr);
		    yyIsRepairing = true;
		    yyState = yyStateStack [yyStackPtr];
		    continue yyouter;
# else
		    YYABORT;
# endif
		}

# ifndef NO_RECOVER
	// SPEC State = Next (Top (), Continuation [yyState]); repair transit
		yyState = yyStateStack [yyStackPtr];
		int yyRepairToken = yyContinuation [yyState]; // repair
		yyState = next (yyState, yyRepairToken);
		if (yyState > yyLastReduceState)	// dynamic ?
		    yyState = yyCondition [yyState - yyLastReduceState];
		if (yyState <= yyLastReadReduceState) {	// read or read reduce ?
		    yyScanAttribute yyRepairAttribute =
			scanner.errorAttribute (yyRepairToken);
		    if (yyMessages) {
			errorsObj.errorMessage (Errors.TokenInserted,
			   Errors.Repair,
			   yyAttributePosition (yyRepairAttribute),
			   tokenName [yyRepairToken]);
		    }
# ifdef YYDEBUG
		    if (yyDebug) {
			yyPrintState (yyStateStack [yyStackPtr]);
			yyTrace.write ("insert  " + tokenName [yyRepairToken]);
			yyNl ();
			yyPrintState (yyStateStack [yyStackPtr]);
			yyTrace.write ("shift   " + tokenName [yyRepairToken] +
				", lookahead: " + tokenName [yyTerminal]);
			yyNl ();
		    }
# endif
		    if (yyStackPtr >= yyStateStack.length - 1) {
			yyStateStack	 = DynArrayInt.extend (yyStateStack);
			yyAttributeStack = yyExtendParsAttributes (yyAttributeStack);
		    }
		    yyAttributeStack [++ yyStackPtr] = yyScanToPars (yyRepairAttribute);
		    if (yyState >= yyFirstFinalState) {	// read reduce
			yyStateStack [yyStackPtr] = yyStateStack [yyStackPtr - 1];
			yyState = yyFinalToProd [yyState - yyFirstReadReduceState];
		    } else {				// read
			yyStateStack [yyStackPtr] = yyState;
		    }
		}
		if (yyState <= yyLastReadState) continue yyouter; // read ?
# endif
	        break;
	      }
	    }

	    if (yyState >= yyFirstFinalState) {
		if (yyState <= yyLastReadReduceState) {	// read reduce ?
		    yyAttributeStack [++ yyStackPtr] = yyScanToPars (yyGetScanAttribute);
		    yyTerminal = yyGetToken ();
# ifdef YYDEBUG
		    if (yyDebug) {
			yyStateStack [yyStackPtr] = yyStateStack [yyStackPtr - 1];
			yyPrintState (yyStateStack [yyStackPtr]);
			yyTrace.write ("shift   " + tokenName [yyPrevTerminal.value] +
				", lookahead: " + tokenName [yyTerminal]);
			yyNl ();
			yyPrevTerminal.value = yyTerminal;
		    }
# endif
		    yyIsRepairing = false;
$X                  yyState = yyFinalToProd [yyState - yyFirstReadReduceState];
		}

		for (;;) {					// reduce
		    int yyNonterminal = 0;			// left-hand side symbol

# ifdef YYDEBUG
		    if (yyDebug) {
			if (yyState <= yyLastReadReduceState) {	// read reduce ?
			    yyState = yyFinalToProd [yyState - yyFirstReadReduceState];
			}
			yyPrintState (yyStateStack [yyStackPtr]);
			if (yyState <= yyLastReduceState) {
			    yyTrace.write ("reduce  " + yyRule [yyState - yyLastReadReduceState]);
			} else {
			    yyTrace.write ("dynamic decision " +  (yyState - yyLastReduceState));
			}
			yyNl ();
		    }
# endif
# ifdef YYDEC_TABLE
		    if (yyLastStopState < yyState && yyState <= yyLastReduceState) {
			yyStackPtr -= yyLength [yyState - yyFirstReduceState];
			yyNonterminal = yyLeftHandSide [yyState - yyFirstReduceState];
		    }
# endif
$R	// Code for Reductions gets inserted here
	// SPEC State = next (Top (), Nonterminal); nonterminal transition
# ifdef YYNDefault
		    yyState = yyStateStack [yyStackPtr];
		    for (;;) {
			int idx = yyNBase [yyState] + yyNonterminal;

			if (yyNCombCheck [idx] == yyState) {
			    yyState = yyNCombNext [idx];
			    break;
			}
			yyState = yyNDefault [yyState];
		    }
# else
		    yyState = yyNComb1 [yyNBase [yyStateStack [yyStackPtr]] + yyNonterminal];
# endif
		    yyAttributeStack [++ yyStackPtr] = yySynAttribute;
		    if (yyState < yyFirstFinalState) continue yyouter; // read nonterminal ?
# ifdef YYDEBUG
		    if (yyDebug) {
			yyStateStack [yyStackPtr] = yyStateStack [yyStackPtr - 1];
		    }
# endif
		}

	    } else {					// read
		yyAttributeStack [++ yyStackPtr] = yyScanToPars (yyGetScanAttribute);
		yyTerminal = yyGetToken ();
# ifdef YYDEBUG
		if (yyDebug) {
		    yyPrintState (yyStateStack [yyStackPtr - 1]);
		    yyTrace.write ("shift   " + tokenName [yyPrevTerminal.value] +
				   ", lookahead: " + tokenName [yyTerminal]);
		    yyNl ();
		    yyPrevTerminal.value = yyTerminal;
		}
# endif
		yyIsRepairing = false;
	    }
	}
    }

# ifndef NO_RECOVER
    private int errorRecovery (
	int terminal,
# ifdef YYDEBUG
	IntegerBox yyPrevTerminal,
# endif
	int [] stateStack,
	int stackPtr) throws java.io.IOException {

	boolean tokensSkipped;
	Set continueSet;
	Set restartSet;
	String tokenString;
	String continueString;
	int l;

	if (yyMessages) {
	    errorsObj.errorMessage (Errors.SyntaxError, Errors.Error,
		yyAttributePosition (yyGetScanAttribute));

	    // 2. report the offending token
	    tokenString = tokenName [terminal];
# ifdef SPELLING
$@          continueString = $.GetWord ();
	    if (!tokenString.equals (continueString)) {
		tokenString = tokenString + ' ' + continueString;
	    }
# endif
	    errorsObj.errorMessage (Errors.TokenFound, Errors.Information,
		yyAttributePosition (yyGetScanAttribute), tokenString);

	    // 3. report the set of expected terminal symbols
	    continueSet = computeContinuation (stateStack, stackPtr);
	    continueString = "";
	    for (int token = continueSet.minimum (); token <= continueSet.maximum (); token ++) {
		if (continueSet.contains (token))
		    continueString = continueString + tokenName [token] + " ";
	    }
	    errorsObj.errorMessage (Errors.ExpectedTokens, Errors.Information,
		yyAttributePosition (yyGetScanAttribute), continueString);
	}

	// 4. compute the set of terminal symbols for restart of the parse
	restartSet = new Set (yyLastTerminal);
	computeRestartPoints (stateStack, stackPtr, restartSet);

	// 5. skip terminal symbols until a restart point is reached
	tokensSkipped = false;
	while (!restartSet.contains (terminal)) {
# ifdef YYDEBUG
	    yyPrevTerminal.value = terminal;
# endif
	    terminal = yyGetToken ();
	    tokensSkipped = true;
# ifdef YYDEBUG
	    if (yyDebug) {
		yyPrintState (stateStack [stackPtr]);
		yyTrace.write ("skip    " + tokenName [yyPrevTerminal.value] +
			       ", lookahead: " + tokenName [terminal]);
		yyNl ();
	    }
# endif
	}

	// 6. report the restart point
	if (tokensSkipped && yyMessages)
	    errorsObj.errorMessage (Errors.RestartPoint, Errors.Information,
		yyAttributePosition (yyGetScanAttribute));

	return terminal;
    }

    /**
     * Compute the set of terminal symbols that can be accepted (read)
     * in a given stack configuration (eventually after reduce actions).
     * <P>
     */
    private Set computeContinuation (int [] stateStack, int stackPtr) {
	int state = stateStack [stackPtr];
	Set continueSet = new Set (yyLastTerminal + 1);
	for (int terminal = yyFirstTerminal; terminal <= yyLastTerminal;
							terminal ++) {
	    int nextState = next (state, terminal);
	    if (nextState != yyNoState && (nextState <= yyLastStopState ||
		isContinuation (terminal, stateStack, stackPtr)))
		continueSet.include (terminal);
	}
	return continueSet;
    }

    /**
     * Check whether a given terminal symbol can be accepted (read)
     * in a certain stack configuration (eventually after reduce actions).
     */
    private boolean isContinuation (int terminal, int [] parseStack,
				    int stackPtr) {
	int state;
	int nonterminal;
	int [] stateStack = new int [parseStack.length];

	for (state = 0; state <= stackPtr; state ++)
	    stateStack [state] = parseStack [state];
	state = stateStack [stackPtr];
	for (;;) {
	    stateStack [stackPtr] = state;
	    state = next (state, terminal);
	    if (state == yyNoState) return false;

	    do {					// reduce
		if (state > yyLastReduceState)		// dynamic ?
		    state = yyCondition [state - yyLastReduceState];
		if (state <= yyLastStopState) { // read, read reduce, or accept?
		    return true;
		} else {				// reduce
		    stackPtr -= yyLength [state - yyFirstReduceState];
		    nonterminal = yyLeftHandSide [state - yyFirstReduceState];
		}

		state = next (stateStack [stackPtr ++], nonterminal);
		if (stackPtr >= stateStack.length) {
		    stateStack = DynArrayInt.extend (stateStack);
		}
	    } while (state >= yyFirstFinalState);
	}
    }

    /**
     * Compute the set of terminal symbols that can be accepted (read)
     * directly in a given stack configuration.
     * <P>
     */
    private Set compContinuation (int state) {
	Set continueSet = new Set (yyLastTerminal + 1);
	for (int terminal = yyFirstTerminal; terminal <= yyLastTerminal;
							terminal ++) {
	    int nextState = next (state, terminal);
	    if (nextState != yyNoState && nextState <= yyLastStopState)
		continueSet.include (terminal);
	}
	return continueSet;
    }

    /**
     * Compute a set of terminal symbols that can be used to restart
     * parsing in a given stack configuration. We simulate parsing until
     * end of file using a suffix program synthesized by the function
     * Continuation. All symbols acceptable in the states reached during
     * the simulation can be used to restart parsing.
     */
    private void computeRestartPoints (int [] parseStack, int stackPtr, Set restartSet) {
	int [] stateStack = new int [parseStack.length];
	int state;
	int nonterminal;
	Set continueSet;

	for (state = 0; state <= stackPtr; state ++)
	    stateStack [state] = parseStack [state];
	restartSet.assignEmpty ();
	state = stateStack [stackPtr];

	for (;;) {
	    if (stackPtr >= stateStack.length)
		stateStack = DynArrayInt.extend (stateStack);
	    stateStack [stackPtr] = state;
	    continueSet = compContinuation (state);
	    restartSet.union (continueSet);
	    state = next (state, yyContinuation [state]);

	    if (state >= yyFirstFinalState) {			// final state ?
		if (state <= yyLastReadReduceState) {		// read reduce ?
		    stackPtr ++;
		    state = yyFinalToProd [state - yyFirstReadReduceState];
		}

		do {						// reduce
		    if (state > yyLastReduceState) {		// dynamic ?
			state = yyCondition [state - yyLastReduceState];
		    }
		    if ((yyFirstReduceState <= state)
		    && (state <= yyLastStopState)) {		// accept
			return;
		    } else if (state < yyFirstFinalState) {	// read
			stackPtr ++;
			break;
		    } else {
			stackPtr -= yyLength [state - yyFirstReduceState];
			nonterminal = yyLeftHandSide [state - yyFirstReduceState];
		    }

		    state = next (stateStack [stackPtr ++], nonterminal);
		} while (state >= yyFirstFinalState);
	    } else {						// read
		stackPtr ++;
	    }
	}
    }

    /**
     * Access the parse table:   next : state x symbol -> state
     */
    private int next (int state, int symbol) {
	if (symbol <= yyLastTerminal) {
	    for (;;) {
		int tCombIdx = yyTBase [state] + symbol;
		if (yyTCombCheck [tCombIdx] == state) return yyTCombNext [tCombIdx];
# ifdef YYTDefault
		state = yyTDefault [state];
		if (state == yyNoState) return yyNoState;
# else
		return yyNoState;
# endif
	    }
	} else {
# ifdef YYNDefault
	    for (;;) {
		int nCombIdx = yyNBase [state] + symbol;
		if (yyNCombCheck [nCombIdx] == state) return yyNCombNext [nCombIdx];
		state = yyNDefault [state];
	    }
# else
	    return yyNComb1 [yyNBase [state] + symbol];
# endif
	}
    }
# endif

    /**
     * Constructor to create a new parser object.
     * <P>
     * @param  scanner  The scanner object used to obtain tokens to be parsed.
     * <P>
     */
$@     public @ ($ scanner) throws java.io.IOException {
	this.scanner = scanner;
	yyDebug	= false;
# ifdef YYDEBUG
	yyCount	= 0;
	yyTrace	= new CocktailWriter (System.out, true);
# endif
# if defined YYTrialParse | defined YYReParse | defined YYGetLook
	yyBufferClear = true;
# endif

$B      // BEGIN section gets inserted here
    }

    static {
$!      // code for copying of table parts gets inserted here
    }

    /**
     * User finalization code. Please note any caveats in your JVM
     * concerning when, or even if, the finalization method will be invoked.
     * For safety it should be called explicitly if at all possible.
     * <P>
     */

    public void finalize () {
$C      // CLOSE section gets inserted here
    }

}

$%	// table parts are inserted here
