/* $Id: TestDataGenerator.java$ */

/*
 * $Log: TestDataGenerator.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

import java.util.Random;

/**
*** <P>Test data generation.  </P>
*** <P>Extends the standard <code>Random</code> class to generate
*** test data for Cocktail applications (or to test the Cocktail
*** reuse classes).</P>
***
*** <!---------------------------------------------------------------->
***
*** @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
*** <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
*** @version $Id:  $
*** <!---------------------------------------------------------------->
**/

public class TestDataGenerator extends Random {
    /** CVS version string. **/
    private static final java.lang.String cvsid = "$Id: TestDataGenerator.java,v 1.1.1.4.2.1 1999/06/18 07:39:52 howie Exp $";
  
    /** 
     * Creates a new random number generator. Its seed is initialized to 
     * a value based on the current time.
     */
    public TestDataGenerator() {
        super();
    }

    /** 
     * Creates a new random number generator using a specified 
     * <code>long</code> seed.
     * <P>
     * @param   seed   the initial seed.
     * @see     java.util.Random#setSeed(long)
     */
    public TestDataGenerator(long seed) {
        super(seed);
    }

    /**
     *  Generate a <code>String</code> which looks like an identifier
     *  according to common rules.
     *  <P>The result will begin with a letter and continue with letters
     *  or digits.</P>
     *
     *  @param   minLength   No identifier shorter than <code>minLength</code>
     *                       will be generated.  <code>minLength</code> must be
     *                       >= 1.
     *  @param   maxLength   No identifier longer than <code>maxLength</code>
     *                       will be generated.  <code>maxLength</code> must be
     *                       >= <code>minLength</code>.
     *
     *  @return  A string containing only letters and digits, beginning with
     *           a letter, of length between <code>minLength</code> and
     *           <maxLength</code> inclusive.
     */

    public String nextIdentifier(int minLength, int maxLength) {
        int length;
        StringBuffer id;
        length = minLength + nextInt(maxLength - minLength + 1);
        id = new StringBuffer(length);
        id.append(firstChar.charAt(nextInt(firstChar.length())));
        for (int i=1; i<length; i++) {
            id.append(bodyChar.charAt(nextInt(bodyChar.length())));
        }
        return id.toString();
    }

    /**
     * <P>Generate a random integer with roughly equal probability that it has
     * any particular number of digits.
     * </P>
     * <P>{@link #nextInt()} generates a truly random number, which means you
     * very rarely get a single digit result for example.  Using
     * <code>nextIntD</code> gives a roughly 1/10 chance that the result will
     * be one digit (or two digits ...).  This is much more useful for testing
     * things like print routines.</P>
     */

    public int nextIntD () {

        // The limits for each number of digits.  There are two slots at the end for 9
        // and 10 digits : there are proportionately fewer 10 digit numbers available
        // within the range of an 'int'.
        final int[] range = {10,100,1000,10000,100000,1000000,10000000,100000000,1073741800, 1073741800};

        int digits;

        // If we just take a random number we will mostly get answers with
        // 9 or 10 digits.  So we first decide how many digits we want
        digits = nextInt(10); // 0..9

        // Now get a value up to that many digits, making sure we get negative
        // values too.  Note the odd two numbers at the top of the range which
        // make sure we get a spattering of 10 digit numbers.
        return (nextInt(range[digits]*2) - range[digits]);
    }

    /**
     * Returns a pseudorandom, uniformly distributed <tt>int</tt> value
     * between 0 (inclusive) and the specified value (exclusive), drawn from
     * this random number generator's sequence.
     * <P>
     * After JDK 1.2 this method is no longer required, as it already exists
     * in exactly this form in java.util.Random.  It is here so that Cocktail
     * works correctly before JDK 1.2.  It merely overrides the method from
     * Random with an identical implementation.
     *
     * @parameter n the bound on the random number to be returned.  Must be
     *		  positive.
     * @return  a pseudorandom, uniformly distributed <tt>int</tt>
     *          value between 0 (inclusive) and n (exclusive).
     * @exception IllegalArgumentException n is not positive.
     * @since JDK1.2
     */

    public int nextInt(int n) {
        if (n<=0)
            throw new IllegalArgumentException("n must be positive");

        int bits, val;
        do {
            bits = next(31);
            val = bits % n;
        } while(bits - val + (n-1) < 0);
        return val;
    }

    /**
     * The range of characters allowed as the first character of an identifier.
     * A future enhancement might allow this value to be altered.
     *
     * @see #nextIdentifier(int, int) nextIdentifier
     */
    private static String firstChar = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    /**
     * The range of characters allowed after the first character of an identifier.
     * A future enhancement might allow this value to be altered.
     *
     * @see #nextIdentifier(int, int) nextIdentifier
     */
    private static String bodyChar = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

} // class TestDataGenerator
