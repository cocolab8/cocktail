/* $Id: Comparable.java$ */

/*
 * $Log: Comparable.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

/**
 * This interface specifies an ordering on the objects of each class that
 * implements it.  It is used instead of java.lang.Comparable from JDK 1.2 so
 * that Cocktail is usable on earlier Java platforms.
 * <P>
 * Arrays of objects that implement this interface can be sorted
 * by {@link Sort#sort(Comparable[]) <code>sort</code>} in class <code>Sort</code>.
 * <P>
 *
 *  <!---------------------------------------------------------------->
 * 
 *  @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
 *  <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
 *  @version $Id:  $
 *  <!---------------------------------------------------------------->
 */

public interface Comparable {
    /**
     * Compare this object with the specified object.
     * <P>
     * @param   other   The Object to be compared.
     *
     * @return  a negative integer if <code>this</code> &lt; <code>other</code>, positive
     *          if <code>this</code> &gt; <code>other</code>, or zero if they are equal.
     * 
     * @throws ClassCastException if the specified object's type prevents it
     *         from being compared to this Object.
     */
    public int compareTo(Object other);
}
