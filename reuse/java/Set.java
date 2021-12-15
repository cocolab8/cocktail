/* $Id: $ */

/*
 * $Log: Set.java,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

import java.io.*;

/**
*** Set of <code>int</code>.
*** <P>
*** No automatic extension on demand.
*** <P>
*** All methods changing the value of the object return <code>this</code>.
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

public class Set {
    /** CVS version string. **/
    private static final java.lang.String cvsid =
	"$Id: Set.java,v 1.1.1.10.2.1 1999/06/18 07:40:06 howie Exp $";

    /** Implementation detail, number of bits per bitset (represented as int). **/
    private static final int BitsPerBitset = 32;

    /**
    *** Implementation detail, a full bitset.
    *** <P>
    *** Computation is a bit complicated to prevent overflow.
    **/
    private static final int MaskBitsPerBitset = BitsPerBitset - 1;

    /** Special constant for field card if real value is unknown.
    **/
    private static final int NoCard = -1;

    /** Here all elements are stored.
    *** @see DynArray to handle variable size, int for performance.
    **/
    private int[] bitsetPtr;

    /** Maximum element that may be stored.
    **/
    private int maxElmt;

    /** Cardinality of set (just a cache).
    *** @see #card()
    **/
    private int card;

    /** First element in set.
    **/
    private int firstElmt;

    /** Last element in set.
    **/
    private int lastElmt;

    /**
    *** Construct empty set of size <TT>maxSize</TT>.
    **/
    public Set(int maxSize) {
        int elmtCount;

        elmtCount = (maxSize + BitsPerBitset - (maxSize & MaskBitsPerBitset))
                    / BitsPerBitset;
        bitsetPtr = new int[elmtCount];
        maxElmt   = maxSize;
        assignEmpty();
    }

    /**
    *** Assign empty set.
    *** <P>
    **/
    public Set assignEmpty() {
        for (int i = bitsetPtr.length - 1; i >= 0; i--) bitsetPtr[i] = 0;
        card      = 0;
        firstElmt = maxElmt;
        lastElmt  = 0;
        return this;
    }

    /**
    *** Return number of elements.
    *** <P>
    **/
    public int card() {
        if (card == NoCard) {
            card = 0;
            for (int i = firstElmt; i <= lastElmt; i++) if (contains(i)) card++;
        }
        return card;
    }

    /**
    *** Check if parameter is an element of this set.
    ***
    **/
    public boolean contains(int elmt) {
        return (bitsetPtr[elmt / BitsPerBitset] & (1 << (elmt & MaskBitsPerBitset))) != 0;
    }

    /**
    *** Include one element.
    *** <P>
    **/
    public Set include(int elmt) {
        bitsetPtr[elmt / BitsPerBitset] |= 1 << (elmt & MaskBitsPerBitset);
        card      = NoCard;
        firstElmt = Math.min(firstElmt, elmt);
        lastElmt  = Math.max(lastElmt,  elmt);
        return this;
    }

    /**
    *** Return maximum element.
    *** <P>
    **/
    public int maximum() {
        int i;

        for (i = lastElmt; i >= firstElmt; i --) {
            if (contains(i)) {
                lastElmt = i;
                return i;
            }
        }
        return 0;
    }

    /**
    *** Return minimum element.
    *** <P>
    **/
    public int minimum() {
        int i;

        for (i = firstElmt; i <= lastElmt; i ++) {
            if (contains(i)) {
                firstElmt = i;
                return i;
            }
        }
        return 0;
    }

    /**
    *** Return size, i.e. number of elements this set can contain.
    *** <P>
    **/
    public int size() {
        return maxElmt;
    }

    /**
    *** Compute union of sets.
    ***
    **/
    public Set union(Set set) {
        for (int i = General.min(bitsetPtr.length, set.bitsetPtr.length) - 1;
             i >= 0; i--) bitsetPtr[i] |= set.bitsetPtr[i];
        card      = NoCard;
        firstElmt = Math.min(firstElmt, set.firstElmt);
        lastElmt  = Math.max(lastElmt,  set.lastElmt);
        return this;
    }
}
