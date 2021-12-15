/* $Id: General.java$ */

/*
 * $Log: General.java,v $
 * Revision 1.1.1.1.2.1  1999/06/18 07:39:54  howie
 * few cosmetic corrections, changed name of author, changed contents of javadoc @version tag
 * 
 * Revision 1.1.1.1  1999/05/20 12:00:17  howie
 * cron import
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

/**
*** General functionality, static methods.
*** <P>
*** The routines here partly duplicate things found in the standard Java
*** libraries.  There are two reasons for this:
*** <UL>
*** <LI>We sometimes need a tuned version of a routine for a particular
***     purpose, for example exponential functions with integer arguments.
*** <LI>For compatibility with versions of Cocktail for other programming
***     languages.
*** </UL>
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

public class General {
    /** CVS version string. **/
    private static final java.lang.String cvsid = "$Id: General.java,v 1.1.1.1.2.1 1999/06/18 07:39:54 howie Exp $";

    /**
    *** No instances are required, only static functionality.
    *** <P>
    **/
    private General() {}

    /** Maximum alignment.  Performance on some architectures is sensitive 
    *** to the alignment of blocks of memory being moved.  <code>MaxAlign</code>
    *** is used to determine the best offset to use when reading in to a buffer.
    *** For an example and discussion see the <code>rex</code> skeleton.
    *** <P>
    **/
    public static final int MaxAlign = 8;

    /**
    *** Return minimum of <code>a</code> and <code>b</code>.
    *** <P>
    *** @deprecated Use <code>Math.min</code> instead
    ***             Included only for consistency with other languages.
    *** <P>
    **/
    public static int min(int a, int b) {
        return (a <= b) ? a : b;
    }

    /**
    *** Return maximum of <code>a</code> and <code>b</code>.
    *** <P>
    *** @deprecated Use <code>Math.max</code> instead.
    ***             Included only for consistency with other languages.
    *** <P>
    **/
    public static int max(int a, int b) {
        return (a >= b) ? a : b;
    }

    /**
    *** Calculate log base of 2 of integer arguments.
    *** <P>
    *** @param x A long integer
    ***
    *** @return <code>log<sub>2</sub>x</code>
    **/
    public static int log2(long x) {
        int y = 0;

        if (x >= 65536) { y += 16; x >>= 16; }
        if (x >=   256) { y +=  8; x >>=  8; }
        if (x >=    16) { y +=  4; x >>=  4; }
        if (x >=     4) { y +=  2; x >>=  2; }
        if (x >=     2) { y +=  1; x >>=  1; }
        return y;
    }

    /**
    *** Calculate integer powers of 2.
    *** <P>
    *** @param x Positive integer < 63.
    ***
    *** @return 2<sup>x</sup>.
    **/
    public static long exp2(int x) {
        return 1 << x;
    }

    /**
    *** Return number of lowest bit set in x.
    *** <P>
    *** @param  x  An integer
    ***
    *** @return The number of the lowest bit set, for example
    ***         <code>antiLog(12) = 2</code>
    *** 
    **/
    public static int antiLog(int x) {
        int y = 0;

        if ((x & 0xffff) == 0) {y = y + 16; x = x >>> 16;}
        if ((x &   0xff) == 0) {y = y +  8; x = x >>> 8;}
        if ((x &    0xf) == 0) {y = y +  4; x = x >>> 4;}
        if ((x &    0x3) == 0) {y = y +  2; x = x >>> 2;}
        if ((x &    0x1) == 0) {y = y +  1; x = x >>> 1;}
        return y;
    }

    /**
    *** Calculate integer powers of 10.
    *** <P>
    *** @param x An integer between -63 and +63.
    ***
    *** @return 10<sup>x</sup>.
    **/
    public static double exp10(int x) {
        double y = 1.0;
        boolean negative = x < 0;

        x = Math.abs(x);
        if (x >= 32) {x = x - 32; y = y * 1.0E32;}
        if (x >= 16) {x = x - 16; y = y * 1.0E16;}
        if (x >= 8)  {x = x -  8; y = y * 1.0E8;}
        if (x >= 4)  {x = x -  4; y = y * 1.0E4;}
        if (x >= 2)  {x = x -  2; y = y * 1.0E2;}
        if (x >= 1)  {x = x -  1; y = y * 1.0E1;}

        if (negative) {
            return 1.0 / y;
        } else {
            return y;
        }
    }
} // class General
