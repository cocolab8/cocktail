/* $Id: $ */

/*
 * $Log: CocktailReader.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

import java.io.*;

/**
*** Read formatted representations of objects from a text stream.
*** <P>
*** This class knows how various objects found in a Cocktail application
*** are formatted for interchange with
*** a Cocktail application written in a language other than Java.  This class
*** can read anything written by a CocktailWriter.  It is not designed to be
*** robust, so should not be used for human input.  For example, if 
*** {@link #readI() readI} is called when the next section of input is not
*** numeric, zero is returned; there is no way for the caller to detect that
*** an invalid number rather than '0' was seen.
*** <P>
*** The input bytes are translated into characters
*** according to the platform's default character encoding.
*** <P>
***
*** <!---------------------------------------------------------------->
***
*** @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
*** <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
*** <BR> <A HREF="mailto:cocktail@hwy.de">Dr. Thomas M&uuml;ller</A>
*** @version $Id:  $
*** <!---------------------------------------------------------------->
**/

public class CocktailReader extends java.io.FilterReader {

    /**
     * Create a new CocktailReader.
     * <P>
     * @param  in      A character-input stream
     */
    public CocktailReader (Reader in) {
	super(in);
    }

    /**
     * Create a new CocktailReader, from an existing InputStream.
     * This convenience constructor creates the
     * necessary intermediate InputStreamReader, which will convert bytes
     * into characters using the default character encoding.
     * <P>
     * @param  in        An input stream
     *
     */
    public CocktailReader(InputStream in) {
	this(new InputStreamReader(in));
    }

    /**
     * The end of line character.
     * This character is counted as white space.
     */
    public  static final char EolCh	= '\n';

    /**
     * The carriage return character.
     * This character is counted as white space.
     */
    public  static final char CrCh	= '\r';

    /**
     * The Tab character.
     * This character is counted as white space.
     */
    public  static final char TabCh	= '\t';


    /**
     * Read a single character.
     * <P>
     * @return     the character read, or -1 if end of file is encountered.
     *
     * @exception  IOException  If an I/O error occurs
     */
    public int read() throws IOException {
        if (!gotNext && !endOfFile) {
            nextChar = in.read();
        }
        if (nextChar<0) {
            endOfFile = true;
            gotNext = true;
            return nextChar;
        }
        gotNext = false;
        return nextChar;
    }

    /**
     * Read characters into a portion of an array.  This method will block
     * until some input is available, an I/O error occurs, or the end of the
     * stream is reached.
     * <P>
     * @param      cbuf  Destination buffer
     * @param      off   Offset at which to start storing characters
     * @param      len   Maximum number of characters to read
     *
     * @return     The number of characters read, or -1 if the end of the
     *             stream has been reached
     *
     * @exception  IOException  If an I/O error occurs
     * @exception  IndexOutOfBoundsException  If <code>len</code> is negative
     */
    public int read(char cbuf[], int off, int len) throws IOException {
        int count;
        if (!gotNext) return in.read(cbuf, off, len);
        if (endOfFile) return -1;
        if (len>0) {
            cbuf[off] = (char)nextChar;
            gotNext = false;
            if (len > 1) {
                count = in.read(cbuf, off+1, len-1);
                if (count>0) return 1 + count; // usual case, where more chars
                                               // were read.
                // rare case, where the character in the buffer
                // was the last in the file
                gotNext = true;
                nextChar = -1;
                return 1;
            }
            else {
                // call requested exactly one character, which we have returned
                return 1;
            }
        }
        else {
            // len <= 0
            if (len==0) {
                // 0 is legal (though dubious) c.f. java.io.StreamReader#fill
                return 0;
            }
            else {
                throw new IndexOutOfBoundsException();
            }
        }
    }

    /**
     * Skip <code>n</code> characters.
     * This method will block until some characters are
     * available, an I/O error occurs, or the end of the stream is reached.
     * <P>
     * @param  n  The number of characters to skip
     *
     * @return    The number of characters actually skipped
     *
     * @exception  IOException  If an I/O error occurs
     */
    public long skip(long n) throws IOException {
	if (!gotNext) return in.skip(n);
        if (n >= 1) {
            // usual case: skip n-1 on underlying stream
            gotNext = false;
            return in.skip(n-1);
        }
        if (n==0) return 0; // legal but dubious
        // so n is negative
        throw new IllegalArgumentException("skip value is negative");
    }

    /**
     * Read a complete array.
     * <P>
     * @param  buffer    The array to be filled
     *
     * @return           The number of characters actually read
     *
     * @exception  IOException  If an I/O error occurs
     */
    public int read(char[] buffer) throws IOException {
        return read(buffer, 0, buffer.length);
    }


    /**
     * Read a boolean value (represented by either 'T' or 'F').
     * <P>
     * @return     true iff the next input character is 'T'
     *
     * @exception  IOException  If an I/O error occurs
     */
     public boolean readB() throws IOException {
         return readC() == 'T';
    }

    /**
     * Read a character.
     * <P>
     * @return      The next input <code>char</code>
     *
     * @exception  IOException  If an I/O error occurs
     */
    public char readC() throws IOException {
        // inline read()
        if (!gotNext && !endOfFile) {
            nextChar = read();
        }
        if (nextChar<0) {
            endOfFile = true;
            gotNext = true;
        }
        if (endOfFile) {
            return '\u0000';
        }
        else {
            gotNext = false;
            return (char)nextChar;
        }
    }

    /**
     * Read an integer from the input, discarding any leading
     * white space.
     * <P>
     * @return     The integer value read.  No exception is raised if the
     *             next input is not a valid number: zero is returned.
     *
     * @exception  IOException  If an I/O error occurs
     */
    public int readI() throws IOException {
        int n = 0;
        boolean negative;
        char ch;

        do {
            ch = readC();
        } while ((ch == ' ') || (ch == TabCh) || (ch == EolCh) || (ch == CrCh));

        switch (ch) {
            case '+': negative = false; ch = readC(); break;
            case '-': negative = true;  ch = readC(); break;
            default: negative = false; break;
        }

        while (('0' <= ch) && (ch <= '9')) {
            n = 10 * n + (int)(ch - (char)'0');
            ch = readC();
        }

        // push back the last ch read, which is a non digit.
        gotNext = true;

        if (negative) {
            return -n;
        }
        else {
            return  n;
        }
    }

    /**
     * Read a real number (double precision) from the input, discarding any leading
     * white space.
     * <P>
     * @return     The real value read.  No exception is raised if the
     *             next input is not a valid number: zero is returned.
     *
     * @exception  IOException  If an I/O error occurs
     */
    public double readR() throws IOException {

        final long  MaxLong	= 9223372036854775807L;
        final long  MaxPow10	= 1000000000000000000L;
        final long  MaxLongDiv10	= MaxLong / 10;

        double  n;
        long    mantissa;
        int     exponent;
        boolean mantissaNeg;
        boolean exponentNeg;
        int     fractionDigits;
        int     truncatedDigits;
        char    ch;

        mantissaNeg	= false;
        mantissa	= 0;
        exponent	= 0;
        fractionDigits	= 0;
        truncatedDigits	= 0;

        do {	// Skip white space.
            ch = readC();
        } while ((ch == ' ') || (ch == TabCh) || (ch == EolCh) || (ch == CrCh));

        switch (ch) {
        case '+': ch = readC(); mantissaNeg = false; break;
        case '-': ch = readC(); mantissaNeg = true;  break;
        case 'E': mantissa = 1; mantissaNeg = false; break;
        default: mantissaNeg = false; break;
        }

        while (('0' <= ch) && (ch <= '9')) {
            if (mantissa <= MaxLongDiv10) {
                mantissa = 10 * mantissa;
                if (mantissa <= MaxLong - (long)(ch - '0')) {
                    mantissa += (long)(ch - '0');
                } else {
                    truncatedDigits++;
                }
            }
            else {
                truncatedDigits++;
            }
            ch = readC();
        }

        if (ch == '.') ch = readC();	// Decimal point.

        while (('0' <= ch) && (ch <= '9')) {	// Fractional part.
            if (mantissa <= MaxLongDiv10) {
                mantissa = 10 * mantissa;
                if (mantissa <= MaxLong - ((long)(ch - '0'))) {
                    mantissa += (long)(ch - '0');
                }
                else {
                    truncatedDigits++;
                }
            }
            else {
                truncatedDigits++;
            }
            fractionDigits++;
            ch = readC();
        }

        if (ch == 'E') {	// Exponent
            ch = readC();

            switch (ch) {
                case '+': exponentNeg = false; ch = readC(); break;
                case '-': exponentNeg = true;  ch = readC(); break;
                default:  exponentNeg = false; break;
            }

            while (('0' <= ch) && (ch <= '9')) {
                exponent = 10 * exponent + (int)(ch - '0');
                ch = readC();
            }
            if (exponentNeg) exponent = - exponent;
        }

        // push back terminating character
        gotNext = true;

        exponent -= fractionDigits - truncatedDigits;
        if (exponent==0)
            n = (double)mantissa;
        else if (exponent > 0)
            n = ((double)mantissa) * General.exp10(exponent);
        else // exponent < 0
            n = ((double)mantissa) / General.exp10(-exponent);

        if (mantissaNeg) {
            return -n;
        } else {
            return n;
        }
    }

    /**
     * Fill a StringBuffer to capacity.
     * All characters including white space are included - we do not stop
     * at end of line.
     * <P>
     * @param   buffer     The buffer to be filled.  If the resulting length
     *                     is less than capacity then end of file has been
     *                     encountered.
     *
     * @exception  IOException  If an I/O error occurs
     */
    public void readS(StringBuffer buffer) throws IOException {
        int ch;
        buffer.setLength(buffer.capacity());
        for (int i = 0; i < buffer.capacity(); i++) {
            ch = read();
            if (ch < 0) {
                // end of file
                buffer.setLength(i);
                break;
            }
            buffer.setCharAt(i, (char)ch);
        }
    }

    /**
     * Return a StringBuffer filled with a line of input, in other words up to but not
     * including the next new line.  The new line character is consumed but not
     * copied to the result.  For DOS / Unix compatibility CR characters are removed.
     * <P>
     * @return     The line read.  There is no limit on the length of line read.
     *
     * @exception  IOException  If an I/O error occurs
     */
    public StringBuffer readL() throws IOException {
        StringBuffer s = new StringBuffer(80); // A guess at a reasonable line length
        int ch;
        for (;;) {
            ch = read();
            if (ch == EolCh || ch < 0) break;
            if (ch != CrCh) s.append((char)ch);
        }
        return s;
    }

    /**
     * Read a {@link Position} object.
     * <P>
     * @return   The position read.
     */
    public Position readPosition() throws IOException {
        return new Position(this);
    }

    /**
     * Skip spaces.
     * <P>
     * Consumes any space characters, so that the next character read is
     * guaranteed not to be ' '.
     *
     * @exception  IOException  If an I/O error occurs
     */
    public void skipSpaces () throws IOException {
        char ch;
        do {
            ch = readC();
        } while (ch == ' ');
        gotNext = true;
    }

    /**
     * Skip to the next occurence of a specified character.
     * <P>
     * Consumes characters until an occurrence of the specified character
     * is seen or end of file is encountered.
     * <P>
     * @param   ch         The character to be searched for.  This must not
     *                     be \u0000.
     *
     * @exception  IOException  If an I/O error occurs
     */
    public void skipToChar (char ch) throws IOException {
        char c;
        do {
            c = readC();
        } while (c != ch);
    }

    /**
     * True when end of file has been discovered.
     * <P>
     */
    private boolean endOfFile;

    /**
     * True if the next character has been read but not used.
     * <P>
     */
    private boolean gotNext;

    /**
     * If <code>gotNext</code> then this is the next character, or -1 if
     * we have detected end of file.
     * <P>
     */
    private int nextChar;
}
