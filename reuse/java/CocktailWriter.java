/* $Id: $ */

/*
 * $Log: CocktailWriter.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

import java.io.*;

/**
*** Print formatted representations of objects to a text stream.
*** <P>
*** This class knows how to format various objects found in a
*** Cocktail application for humans to read, or for interchange with
*** a Cocktail application written in a language other than Java.
*** <P>
*** The string equivalent of the value to be output is translated into bytes
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

public class CocktailWriter extends java.io.FilterWriter {

    /**
     * Line separator string.  This is the value of the line.separator
     * property at the moment that the stream was created.
     * <P>
     */
    private String lineSeparator;

    /**
     * Determines whether the output stream will be flushed every time
     * {@link #writeNl()} is called.
     * <P>
     */
    private boolean autoFlush = false;

    /**
     * Create a new CocktailWriter, without automatic line flushing.
     * <P>
     * @param  out        A character-output stream
     */
    public CocktailWriter (Writer out) {
	this(out, false);
    }

    /**
     * Create a new CocktailWriter.
     * <P>
     * @param  out        A character-output stream
     * @param  autoFlush  A boolean; if true, the {@link #writeNl()} method will flush
     *                    the output buffer
     */
    public CocktailWriter(Writer out,
		       boolean autoFlush) {
	super(out);
	this.autoFlush = autoFlush;
	lineSeparator = System.getProperty("line.separator", "\n");
    }

    /**
     * Create a new CocktailWriter, without automatic line flushing, from an
     * existing OutputStream.  This convenience constructor creates the
     * necessary intermediate OutputStreamWriter, which will convert characters
     * into bytes using the default character encoding.
     * <P>
     * @param  out        An output stream
     *
     */
    public CocktailWriter(OutputStream out) {
	this(out, false);
    }

    /**
     * Create a new CocktailWriter from an existing OutputStream.  This
     * convenience constructor creates the necessary intermediate
     * OutputStreamWriter, which will convert characters into bytes using the
     * default character encoding.
     * <P>
     * @param  out        An output stream
     *
     * @param  autoFlush  A boolean; if true, the println() methods will flush
     *                    the output buffer
     *
     */
    public CocktailWriter(OutputStream out,
		       boolean autoFlush) {
	this(new OutputStreamWriter(out), autoFlush);
    }

    /**
     * Begin a new line by writing a line separator.
     * <P>
     */
    public void writeNl() throws IOException {
        out.write(lineSeparator);
        if (autoFlush) {
            out.flush();
        }
    }

    /**
     * Output a boolean value, represented by either "T" or "F".  
     * <P>
     * @param      b   The <code>boolean</code> to be printed
     */
    public void write(boolean b) throws IOException {
	write(b ? "T" : "F");
    }

    /**
     * Print a character.
     * <P>
     * @param      c   The <code>char</code> to be printed
     */
    public void write(char c) throws IOException {
	write(String.valueOf(c));
    }

    /**
     * Used in {@link #write(int,int) write fixed width integer} to format
     * an integer value.  There should be enough spaces to hold the largest
     * int value, i.e. 10 digits plus sign = 11.  To allow for folk who
     * use this to make wide columns, we add a few extra for good measure.
     * This array is always returned to all spaces after it has been used.
     */
    private static final int maxWidth = 20;

    /**
     * See {@link #maxWidth}.
     */
    private static char[] buffer = {' ', ' ', ' ', ' ', ' ', ' ',
         ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    /**
     * Characters used when printing numbers.
     */
    private static final char MyCHR[] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };

    /**
     * Output an integer value at its natural width.
     * See also {@link #write(int, int) a method for writing a fixed width}.
     * <P>
     * @param      n   The <code>int</code> to be printed
     */
    public void write(int n) throws IOException {
        // This overides super.write(int c) which writes a character
	write(n, 1);
    }

    /**
     * Output an integer value, padding with spaces on the left as required
     * to give a specified minimum width.  If the number is too large to
     * fit in the space requested, it is output in full.
     * <P>
     * @param	n
     *			The integer value to be printed
     * @param	fieldWidth
     *			The minimum space to be occupied by the number.
     */
    public void write(int n, int fieldWidth) throws IOException {

        // The algorithm uses a fixed size buffer in order to avoid
        // creating (and garbage collecting) string objects.  Also the
        // output can be done in one piece.
        // The process is:
        // 1. Start with a buffer already set to all spaces.
        // 2. Set the buffer index to the last element.
        // 3. Repeatedly divide the number by ten, putting the remainder
        //    into buffer[index], decrement index.
        // 4. If the input is negative, put '-' in buffer[index],
        //    decrement index.
        // 5. Output n characters from the rightmost part of the buffer,
        //    where n is the maximum of the number of digits placed in the
        //    buffer and the requested field width.
        // 6. Reset the buffer to spaces for the next call.

        // Two other methods were tried:
        // a) using Integer.toString()
        // b) creating a local buffer to avoid synchronization overhead
        // In a timed test both methods took around 4000ms compared with
        // 3795ms for the algorithm implemented.  These timings include
        // code for checking the results on every iteration, so the 
        // improvment is significant.  See test/IODrv.java for the test
        // envelope.

        int x, index;
        boolean negative;

        if (n < 0) {
            negative = true;
            x = -n;
        } else {
            negative = false;
            x = n;
        }

        index = maxWidth; // index of the last char in buffer + 1

	// buffer is a static variable to avoid creating an object 
        // every iteration: but to make us thread safe access must
        // be synchronized.

        synchronized (buffer) {
            do {
                buffer[--index] = MyCHR[x % 10];
                x = x / 10;
            } while (x != 0);
            if (negative) buffer[--index] = '-';
            if (index < maxWidth-fieldWidth) {
                // value too big to fit - use actual width
                write(buffer, index, maxWidth-index);
            } else {
                // value fits - write width requested, first checking for
                // larger widths than we expect.
                if (fieldWidth > maxWidth) {
                    // not worried about performance here: if a system regularly
                    // writes large fields then maxWidth should be increased.
                    for (int i = 0; i < fieldWidth-maxWidth; i++) write(' ');
                    write(buffer, 0, maxWidth);
                } else {
                    // the normal case
                    write(buffer, maxWidth-fieldWidth, fieldWidth);
                }
            }
            // Lastly, reset the used buffer to spaces
            for (int i = index; i < maxWidth; i++) buffer[i] = ' ';
        }
    }


    /**
     * Print a long integer in a fixed width format and specified number base.
     * The number is assumed to be unsigned, and is padded on the left with zeros.
     * <P>
     * @param      n   The <code>long</code> to be printed
     *
     * @param	fieldWidth
     *			Minimum number of digits to be printed
     *
     * @param	base
     *			Base to be used (up to 16)
     *
     */
    public void writeN(long n, int fieldWidth, int base) throws IOException {

        // The algorithm here is simply replicated from the Modula-2 original:
        // we do not expect this to be performance critical, it is only used
        // in outputting reals.

        int i;
        int length;
        char digits[] = new char[33];

        length = 0;
        do {
            length++;
            digits[length] = MyCHR[(int)(n % base)];
            n = n / base;
        } while (n != 0);
        for (i = 1; i <= fieldWidth - length; i++) write('0');
        for (i = length; i >= 1; i--) write(digits[i]);
    }


    /* used by write(double, ...) */

    private static final int  MaxInt	= 2147483647;
    private static final int  MaxPow10	= 1000000000;
    private static final int  MaxIntDiv10	= MaxInt / 10;

    /**
     * Print a real (double-precision) floating-point number in a fixed
     * width format.
     * <P>
     * @param      n   The <code>double</code> to be printed
     *
     * @param	before
     *			Number of digits before the decimal point
     *
     * @param	after
     *			Number of digits after the decimal point
     *
     * @param	exp
     *			Number of digits in the exponent (zero specifies
     *			output is to be in decimal form without
     *			exponent).
     */
    public void write(double n, int before, int after, int exp) throws IOException {

        // The algorithm here is simply replicated from the Modula-2 original:
        // we do not expect output of reals to be performance critical.

        final int startIndex = 100;

        int    firstDigit;
        int    integerDigits;
        int    totalDigits;
        int    isNegative;
        char   digits[] = new char[200];
        double maxCard  = (double)MaxInt;
        double maxCardDiv10	= (double)MaxIntDiv10;
        long   mantissa;
        int    exponent;
        int    i;

        if (n < 0.0) {	// Determine sign
            isNegative = 1;
            n = - n;
        } else {
            isNegative = 0;
        }

        if (n == 0.0) {
            mantissa = 0;
            exponent = 1;
        } else {
            exponent = 10;
            while (n > maxCard) {
                n /= 10.0;
                exponent++;
            }
            while (n <= maxCardDiv10) {
                n *= 10.0;
                exponent--;
            }
            mantissa = (long)(n);
            if (mantissa < MaxPow10) exponent--;
        }

        if ((exp > 0) || (exponent <= 0)) {
            integerDigits = 1;
        } else {
            integerDigits = exponent;
        }
        if (after == 0) after = 1;
        totalDigits = integerDigits + after;

        firstDigit = startIndex;
        do {
            firstDigit--;
            digits[firstDigit] = (char)(mantissa % 10);
            mantissa = mantissa / 10;
        } while (mantissa != 0);
        if (exp == 0) {
            for (int j = 1; j <= 1 - exponent; j++) {
                firstDigit--;
                digits[firstDigit] = 0;
            }
        }
        for (i = startIndex; i <= firstDigit + totalDigits; i++) digits[i] = 0;

        digits[firstDigit - 1] = 0;
        if (digits[firstDigit + totalDigits] >= 5) {
            i = firstDigit + totalDigits - 1;
            while (digits[i] == 9) digits[i--] = 0;
            digits[i]++;
            if (i == firstDigit - 1) {
                firstDigit = i;
                if (exp > 0) {
                    exponent++;
                } else if (exponent > 0) integerDigits++;
            }
        }

        for (int j = 1; j <= before - isNegative - integerDigits; j++) write(' ');
        if (isNegative == 1) write('-');
        for (i =  1; i <= integerDigits; i++) {
            write(MyCHR[digits[firstDigit]]);
            firstDigit++;
        }
        write('.');
        for (i =  1; i <= after; i++) {
            write(MyCHR[digits[firstDigit]]);
            firstDigit++;
        }

        if (exp > 0) {
            exponent--;
            write('E');
            if (exponent < 0) {
                write('-');
                exponent = - exponent;
            } else {
                write('+');
            }
            writeN(exponent, exp - 1, 10);
        }
    }


    /**
     * Output the string representation of a {@link Position}.
     * <P>
     * @param      obj   The <code>Position</code> to be printed
     */
    public void write(Position obj) throws IOException {
	obj.write(this);
    }

    /**
     * Output the string representation of an {@link Ident}.
     * <P>
     * @param      obj   The <code>Ident</code> to be printed
     */
    public void write(Ident obj) throws IOException {
	obj.write(this);
    }

}
