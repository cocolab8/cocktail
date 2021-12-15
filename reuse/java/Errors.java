/* $Id: Errors.java$ */

/*
 * $Log: Errors.java,v $
 * Revision 1.1.1.13.2.1  1999/06/18 07:39:53  howie
 * few cosmetic corrections, changed name of author, changed contents of javadoc @version tag
 * 
 * Revision 1.1.1.13  1999/06/16 14:00:32  howie
 * cron import
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

import java.io.OutputStream;
import java.io.IOException;
import de.cocolab.reuse.Comparable;
import de.cocolab.reuse.CocktailWriter;
import de.cocolab.reuse.FatalError;
import de.cocolab.reuse.Position;

/**
*** Error message collections.
*** <P>
*** This class defines the presentation and destination for error messages
*** including those produced by a parser.  Options may be set to control the
*** format (including level of detail) of messages, and whether messages should
*** be stored rather than output directly, so that they may be sorted into the
*** order in which they occur in the input file (which may not be the same order
*** as they were detected).
*** <P>
*** <!---------------------------------------------------------------->
*** 
*** @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
*** <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
*** <BR> <A HREF="mailto:cocktail@hwy.de">Dr. Thomas M&uuml;ller</A>
*** @version $Id:  $
*** <!---------------------------------------------------------------->
**/

public class Errors {
    /** CVS version string. **/
    private static final java.lang.String cvsid = "$Id: Errors.java,v 1.1.1.13.2.1 1999/06/18 07:39:53 howie Exp $";

    /** Make an errors collection for writing to standard error.
    *** <P>
    **/
    public Errors() {
        out = new CocktailWriter(System.err);
    }

    /** Make an errors collection for writing to a {@link CocktailWriter}.
    *** <P>
    **/
    public Errors(CocktailWriter out) {
        this.out = out;
    }

    /** Print brief syntax error messages.
    *** <P>
    *** By default, brief syntax error messages are produced with all the information
    *** relating to an error appearing in one message.  If <code>brief</code> is set
    *** <code>false</code> separate messages are used to report the syntax error, the
    *** token found, and the tokens expected.  If you set <code>brief</code> false, you
    *** should also set <code>first</code> false.
    *** <P>
    **/
    public boolean brief = true;

    /** Print only one parser error message for each input line.
    *** <P>
    *** By default only the first message created for any given input line is printed.  If
    *** <code>first</code> is set <code>false</code> then all messages are written.
    *** <P>
    *** This flag applies only to messages produced through the <code>errorMessage</code>
    *** interface, normally used by the parser.
    *** <P>
    ***
    **/
    public boolean first = true;

    /** Truncate long messages.
    *** <P>
    *** By default the information part of messages is truncated at the first space 
    *** character after the first {@link #infoLimit} characters.
    *** This applies in particular to lists of expected tokens.
    *** To print the whole text set <code>truncate</code> to false.
    *** <P>
    **/
    public boolean truncate = true;

    /** Target length for the information part of messages.
    *** <P>
    *** If {@link #truncate} is true, the information part of each message will be
    *** limited to approximately <code>infoLimit</code> characters.  This is a soft
    *** limit: we try not to chop words in half.
    *** <P>
    **/
    public int infoLimit = 25;

    /* The following constants define the severity of a diagnostic message.
     */

    /** Error class constant:  No class specified.  **/
    public static final int NoClass		= 0;

    /** Error class constant:  Fatal - terminate the program by throwing
     *  {@link FatalError}. **/
    public static final int Fatal		= 1;

    /** Error class constant:  Implementation restriction, e.g. size limit. **/
    public static final int Restriction		= 2;

    /** Error class constant:  Error, e.g. syntax error.  **/
    public static final int Error		= 3;

    /** Error class constant:  Warning, for example literal truncation or doubtful usage
    *** of the input language.  **/
    public static final int Warning		= 4;

    /** Error class constant:  Repair information following a syntax error.  **/
    public static final int Repair		= 5;

    /** Error class constant:  Note.  **/
    public static final int Note		= 6;

    /** Error class constant:  Information associated with a previous message.  **/
    public static final int Information		= 7;

    /* The following constants select predefined messages associated with
     * the parser.
     */

    /** Error code constant:  No associated fixed text.  The other values are used
    *** in the generated parser.  **/
    public static final int NoText		= 0;

    /** Error code constant:  Syntax error.  **/
    public static final int SyntaxError		= 1;

    /** Error code constant:  Legal tokens at location of syntax error.**/
    public static final int ExpectedTokens	= 2;

    /** Error code constant:  Restart point following recovery from a syntax error.  **/
    public static final int RestartPoint	= 3;

    /** Error code constant:  A token inserted during parser error recovery. **/
    public static final int TokenInserted	= 4;

    /** Error code constant:  Not used in Java (the parse table is built in). **/
    public static final int WrongParseTable	= 5;

    /** Error code constant:  Not used in Java (the parse table is built in). **/
    public static final int OpenParseTable	= 6;

    /** Error code constant:  Not used in Java (the parse table is built in). **/
    public static final int ReadParseTable	= 7;

    /** Error code constant:  stored message limit reached.
    *** When messages are stored, a message with this code
    *** is created if the number of mesages stored exceeds the set limit.
    *** @see #storeMessages(boolean)
    **/
    public static final int TooManyErrors	= 8;

    /** Error code constant:  The token which caused a syntax error. **/
    public static final int TokenFound		= 9;

    /** Error code constant:  If {@link #brief} is set, this code is used for the message
    *** which merges the content of the {@link #TokenFound} and {@link #ExpectedTokens}
    *** messages. **/
    public static final int FoundExpected	= 10;

    /**
    *** Put error message with error info into error collection.
    *** <P>
    *** @exception FatalError if <code>errorClass</code> is {@link #Fatal}.
    **/
    public void errorMessage(int errorCode, int errorClass,
				   Position position, Object info) throws java.io.IOException {
        if (isStore) {
            storeMessage(errorCode, null, errorClass, position, info);
        } else {
            writeMessage(errorCode, null, errorClass, position, info);
        }
    }

    /**
    *** Put error message into error collection.
    *** <P>
    *** @exception FatalError if <code>errorClass</code> is {@link #Fatal}.
    **/
    public void errorMessage(int errorCode, int errorClass,
				  Position position) throws java.io.IOException {
        errorMessage(errorCode, errorClass, position, null);
    }

    /**
    *** Put message with text and error info into collection.
    *** <P>
    *** @exception FatalError if <code>errorClass</code> is {@link #Fatal}.
    **/
    public void message(String errorText, int errorClass,
			      Position position, Object info) throws java.io.IOException {
        if (isStore) {
            storeMessage(NoText, errorText, errorClass, position, info);
        } else {
            writeMessage(NoText, errorText, errorClass, position, info);
        }
    }

    /**
    *** Put message with text into error collection.
    *** <P>
    *** @exception FatalError if <code>errorClass</code> is {@link #Fatal}.
    **/
    public void message(String errorText, int errorClass,
			     Position position) throws java.io.IOException {
        message(errorText, errorClass, position, null);
    }

    /**
    *** Put message with text into error collection from a StringBuffer.
    *** <P>
    *** @exception FatalError if <code>errorClass</code> is {@link #Fatal}.
    **/
    public void message(StringBuffer errorText, int errorClass,
			     Position position) throws java.io.IOException {
        message(errorText.toString(), errorClass, position, null);
    }

    /**
    *** Put message with text and error info into collection.
    *** <P>
    *** @exception FatalError if <code>errorClass</code> is {@link #Fatal}.
    **/
    public void message(StringBuffer errorText, int errorClass,
			      Position position, Object info) throws java.io.IOException {
        message(errorText.toString(), errorClass, position, info);
    }

    /**
    *** Write all messages to current destination.
    **/
    public void writeMessages() throws java.io.IOException {

        if (isStore) {
            Sort.sort(errorTable, 0, messageCount - 1);
            for (int i = 0; i < messageCount; i++) {
                ErrorStruct error = errorTable[i];
                writeMessage(
                    error.errorCode,
                    error.errorText,
                    error.errorClass,
                    error.position,
                    error.info);
            }
        }
    }

    /**
    *** Write all messages to a new destination.
    **/
    public void writeMessages(CocktailWriter out) throws java.io.IOException {
        this.out = out;
        writeMessages();
    }

    /**
    *** Write all messages to a new destination.
    **/
    public void writeMessages(OutputStream out) throws java.io.IOException {
        this.out = new CocktailWriter(out);
        writeMessages();
    }

    /** Maximal number of errors to be stored.
    **/
    public static final int MAX_ERRORS = 500;

    /** Set switch to decide whether messages are stored or written directly.
    *** By default messages are output as they are created.  If they are to appear
    *** in file position order then set <code>storeMessages(true)</code>and call
    *** {@link #writeMessages()} when all messages are to be output.
    **/
    public void storeMessages(boolean isStore) {
        if (isStore) {
            messageCount = 0;
            prevLine = 0;
            errorTable = new ErrorStruct[MAX_ERRORS];
        }
        this.isStore = isStore;
    }

    /**
    *** Local class to store error information.
    **/
    private class ErrorStruct implements Comparable {
        Position   position;
        int        errorCode;
        int        errorClass;
        int        errorNumber;
        String     errorText;
        Object     info;
        /** Compare
         */
        public int compareTo(Object other) {
            ErrorStruct otherError = (ErrorStruct)other;
            int result;
            result = position.compareTo(otherError.position);
            if (result != 0) return result;
            if (errorNumber < otherError.errorNumber) return -1;
            if (errorNumber > otherError.errorNumber) return 1;
            return 0;
        }
    }

    /** <P>The destination of the messages.
    *** </P>
    **/
    private CocktailWriter out;

    /** <P>Are messages to be collected or written immediately?
    *** </P>
    **/
    private boolean isStore = false;

    /** The line number of the last message output.
    *** Used in conjuntion with {@link #first}.
    **/
    private int prevLine = 0;

    /** Table to store errors pending output if isStore is true.
    **/
    private ErrorStruct[] errorTable;

    /** Current number of errors. **/
    private int messageCount = 0;

    /**
     *  Write the initial part of an error message, the position followed
     *  by the error class.
     */
    private void writeHead(
            Position position,
            int errorClass) throws java.io.IOException
        {
        if (position.line != 0) {
            position.write(out);
            out.write(": ");
        }
        switch (errorClass) {
            case NoClass:       out.write("            "); break;
            case Fatal:         out.write("Fatal       "); break;
            case Restriction:   out.write("Restriction "); break;
            case Error:         out.write("Error       "); break;
            case Warning:       out.write("Warning     "); break;
            case Repair:        out.write("Repair      "); break;
            case Note:          out.write("Note        "); break;
            case Information:   out.write("Information "); break;
            default:            out.write("Error class: ");
                                out.write(errorClass, 0); break;
        }
    }

    /** Write the message associated with the error code.
     */
    private void writeCode(int errorCode) throws java.io.IOException {
        switch (errorCode) {
            case NoText:            break;
            case SyntaxError:       out.write("syntax error"            ); break;
            case ExpectedTokens:    out.write("expected tokens"         ); break;
            case RestartPoint:      out.write("restart point"           ); break;
            case TokenInserted:     out.write("token inserted "         ); break;
            case WrongParseTable:   out.write("parse table mismatch"    ); break;
            case OpenParseTable:    out.write("cannot open parse table" ); break;
            case ReadParseTable:    out.write("cannot read parse table" ); break;
            case TooManyErrors:     out.write("too many messages"       ); break;
            case TokenFound:        out.write("token found    "         ); break;
            case FoundExpected:     out.write("found/expected "         ); break;
            default:                out.write(" error code: " + errorCode); break;
        }
    }

    /** Write a string to the output, truncating it if {@link #truncate} is true.
     *  Truncation occurs at the first space character at or after index 
     *  {@link #infoLimit}.
     */
    private void writeT(String string) throws java.io.IOException {
        int l, i;
        char c;

        if (truncate) {
            l = string.length();
            if (l <= infoLimit) {
                out.write(string);
            }
            else {
                i = infoLimit;
                while (i < l && string.charAt(i) != ' ') i++;
                if (i < l) {
                    out.write(string, 0, i+1);
                    out.write(" ...");
                }
                else {
                    out.write(string);
                }
            }
       } else {
            out.write(string);
       }
    }

    /**
    *** Store message in error collection (if non-printing).
    *** @exception FatalError
    **/
    private void storeMessage(int errorCode, String errorText,
				   int errorClass, Position position,
				   Object info) throws IOException {
        ErrorStruct error = new ErrorStruct();

        if (messageCount < MAX_ERRORS) {
            error.position    = position;
            error.errorText   = errorText;
            error.errorCode   = errorCode;
            error.errorClass  = errorClass;
            error.errorNumber = messageCount;
            error.info        = info;
            errorTable[messageCount++] = error;
        }
        else {
            // assert messageCount = MAX_ERRORS;
            error.position	= Position.NoPosition;
            error.errorCode	= TooManyErrors;
            error.errorClass	= Restriction;
            error.info		= null;
            errorTable[messageCount-1] = error; // array index zero based
        }
        if (errorClass == Fatal) {
            writeMessages();
            throw new FatalError(errorText);
        }
    }

    /**
    *** Used by {@link #writeMessage(int,String,int,Position,info) writeMessage}
    *** to merge messages if {@link #brief} is true.
    *** This makes the class not thread safe.
    **/
        private String FoundString;

    /**
    *** Write message in error collection (if printing).
    *** @exception FatalError
    **/
    private void writeMessage(int errorCode, String errorText,
				   int errorClass,
				   Position position, Object info)
        throws java.io.IOException {

        if (errorText == null) {
            if (brief) {
                switch (errorCode) {
                    case TokenFound:
                        FoundString = info.toString() + "/";
                        return;
                    case SyntaxError:
                    case RestartPoint:
                    case TokenInserted:
                        return;
                    case ExpectedTokens :
                        errorCode   = FoundExpected;
                        errorClass  = Error;
                        info = FoundString + info.toString();
                        break;
                    default:
                        break;
                }
            }
            if (first && position.line != 0) {
                if (position.line == prevLine) {
                        return;
                }
                else {
                    prevLine = position.line;
                }
            }
        }
        writeHead(position, errorClass);
        if (errorText == null) {
            writeCode(errorCode);
        }
        else {
            out.write(errorText);
        }
        if (info != null) {
            out.write(": ");
            writeT(info.toString());
        }
        out.writeNl();
        out.flush();
        if ((errorClass == Fatal) && !isStore) throw new FatalError(errorText);
    }


} // class Errors
