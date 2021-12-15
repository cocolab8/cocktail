/* $Id: Sort.java$ */

/*
 * $Log: Sort.java,v $
 * Revision 1.1.1.3.2.1  1999/06/18 07:40:07  howie
 * few cosmetic corrections, changed name of author, changed contents of javadoc @version tag
 * 
 * Revision 1.1.1.3  1999/06/15 16:00:28  howie
 * cron import
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

import de.cocolab.reuse.Comparable;

/**
*** Utility class for sorting arrays of objects.
*** <P>
*** This class performs the same sorting function as you find in
*** the <code>java.util.Arrays</code> introduced in JDK 1.2.  We
*** repeat the functionality here in order to allow Cocktail to
*** be used on earlier platforms.
*** <P>
*** Could be put into {@link de.cocolab.reuse.General}.</P>
***
*** <!---------------------------------------------------------------->
*** @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
*** <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
*** <BR> <A HREF="mailto:cocktail@hwy.de">Dr. Thomas M&uuml;lle</A>
*** @version $Id:  $
*** <!---------------------------------------------------------------->
**/

public class Sort {
    /** CVS version string. **/
    private static final java.lang.String cvsid = "$Id: Sort.java,v 1.1.1.3.2.1 1999/06/18 07:40:07 howie Exp $";

    /**
    *** Sort a part of a one dimensional array.
    *** <P>
    *** @param  array   An array of {@link Comparable} objects.  This will
    ***                 be sorted into ascending sequence.
    *** <P>
    *** @param  lwb     The lower bound (inclusive) of the elements to be
    ***                 sorted.
    *** <P>
    *** @param  upb     The upper bound (inclusive) of the elements to be
    ***                 sorted.
    *** <P>
    **/
    public static void sort(Comparable[] array, int lwb, int upb) {
        int i, j;

        for (;;) {
            if (lwb >= upb) return;
            i = lwb + 1;
            j = upb;

            do {
                while ((i < upb) && (array[i].compareTo(array[lwb]) < 0) ) i++;
                while ((lwb < j) && (array[lwb].compareTo(array[j]) < 0) ) j--;
                if (i < j) swap(array, i, j);
            } while (i < j);

            swap(array, lwb, j);
            sort(array, lwb, j - 1);
            lwb = j + 1;
        }
    }

    /**
    *** Sort the whole of an array.
    *** <P>
    *** @param  array   An array of {@link Comparable} objects.  This will
    ***                 be sorted into ascending sequence.
    *** <P>
    **/
    public static void sort(Comparable[] array) {
        sort(array, 0, array.length-1);
    }

    private static void swap (Comparable[] array, int a, int b) {
        Comparable temp;
        temp = array[a];
        array[a]=array[b];
        array[b]= temp;
    }

    /**
    *** No instances are required.
    **/
    private Sort() {}
}
