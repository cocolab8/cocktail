/* $Id: DynArrayX.base,v 1.1.1.4.2.1 1999/06/18 07:39:52 howie Exp $ */

/**********************************************************************
 * Only edit this file if Boolean is underscore X.  If it is a Java type
 * like Byte instead you are looking at a file generated from
 * DynArrayX.base - see the Makefile.
 **********************************************************************/

/*
 * $Log: DynArrayX.base,v $
 * Revision 1.1.1.4.2.1  1999/06/18 07:39:52  howie
 * few cosmetic corrections, changed name of author, changed contents of javadoc @version tag
 * 
 * Revision 1.1.1.4  1999/06/17 06:00:42  howie
 * cron import
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

/**
*** Dynamic flexible arrays of element type <code>boolean</code>.
*** <P>For comfortable programming each DynArray is an
*** object that can receive messages like {@link #resize(int) resize},
*** {@link #extend() extend}, and {@link #shrink() shrink}.  Example:
*** <P>
*** <PRE>
***      DynArrayBoolean list = new DynArrayBoolean(100);
***      list.extend(); // doubles the array size
***      x = list.get(105);
***      list.set(107, x);
*** </PRE>
*** <P>
*** For maximum performance you can instead use the static methods
*** {@link #resize(boolean[],int) resize}, {@link #extend(boolean[]) extend},
*** and {@link #shrink(boolean[]) shrink}.  Example:
*** <P>
*** <PRE>
***      boolean[] list = new boolean[100];
***      list = DynArrayBoolean.extend(list);
***      x = list[105];
***      list[107] = x;
*** </PRE>
*** <P>
*** You must remember that resizing the array in this way gives a new object: you 
*** must not make copies of the object reference, as they would refer to the old (smaller)
*** array object.
*** <P>
*** All methods are <code>final</code> to allow optimisation by Java compilers.
*** <P>
***
*** <!---------------------------------------------------------------->
*** @see DynArrayBoolean
*** @see DynArrayByte
*** @see DynArrayChar
*** @see DynArrayDouble
*** @see DynArrayFloat
*** @see DynArrayInt
*** @see DynArrayLong
*** @see DynArrayObject
*** @see DynArrayShort
***
*** @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
*** <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
*** <BR> <A HREF="mailto:cocktail@hwy.de">Dr. Thomas M&uuml;ller</A>
*** @version $Id:  $
*** <!---------------------------------------------------------------->
**/

public class DynArrayBoolean implements java.io.Serializable {
    /** CVS version string. **/
    private static final java.lang.String cvsid = "$Id: DynArrayBoolean.java,v 1.1.1.4.2.1 1999/06/18 07:39:52 howie Exp $";
  
    /**
    *** Returns a copy of <code>array</code> adjusted to <code>size</code> elements.
    *** <P>
    *** @param  array   The old array
    ***
    *** @param  newSize The new size required, which can be larger or smaller
    ***                 than the current size.
    ***
    *** @return    A new array of the requested size, with elements from the
    ***            old array copied.
    ***
    *** @see #extend(boolean[]) doubling the current size
    *** @see #shrink(boolean[]) halving the current size
    **/
    public static final boolean[] resize(boolean[] array, int newSize) {
        boolean[] newArray = array;

        if (newSize != array.length) {
            newArray = new boolean[newSize];
            System.arraycopy(array, 0, newArray, 0, Math.min(array.length, newArray.length));
        }
        return newArray;
    }

    /**
    *** Returns a copy of <code>array</code> extended by doubling its size.
    *** <P>
    *** @param  array   The old array
    ***
    *** @return    A new array twice the original size, with elements from the
    ***            old array copied.
    ***
    *** @see #resize(boolean[],int) requesting a specific size
    *** @see #shrink(boolean[]) halving the current size
    **/
    public static final boolean[] extend(boolean[] array) {
        return resize(array, array.length * 2);
    }

    /**
    *** Returns a copy of <code>array</code> shrunk by halving its size.
    *** <P>
    *** @param  array   The old array
    ***
    *** @return    A new array half the original size, with elements from the
    ***            old array copied.  The minimum size is one element.
    ***
    *** @see #extend(boolean[]) doubling the current size
    *** @see #resize(boolean[],int) requesting a specific size
    **/
    public static final boolean[] shrink(boolean[] array) {
        int newSize = array.length / 2;
        if (newSize > 0) {
            return resize(array, newSize);
        }
        else {
            return array;
        }
    }

    /**
    *** Prohibit use of default constructor.
    **/
    private DynArrayBoolean() {}

    /**
    *** Create a new array of specified size.
    *** <P>
    *** @param  size    The size required.
    ***
    *** @see #extend() doubling the current size
    *** @see #shrink() halving the current size
    *** @see #resize(int) requesting a specific size
    **/
    public DynArrayBoolean(int size) {
        array = new boolean[size];
    }

    /**
    *** Return the current length of the array.
    *** <P>
    *** @return   The number of elements currently allocated.
    **/

    public final int length() {
        return array.length;
    }

    /* The following two method names (get and set) follow similar methods from
     * java.lang.reflect.Array.
    */

    /**
    *** Return an element of the array.
    *** Like <code>array[index]</code> this may throw
    *** <code>ArrayIndexOutOfBoundsException</code>.
    *** <P>
    *** @param  index   The index of the element to be retrieved
    ***
    *** @return    The value of the requested element.
    **/

    public final boolean get(int index) {
        return array[index];
    }

    /**
    *** Set an element of the array.
    *** Like <code>array[index]</code> this may throw
    *** <code>ArrayIndexOutOfBoundsException</code>.
    *** <P>
    *** @param   index   The index of the element to be set
    ***
    *** @param   value   A value for an element
    ***
    **/

    public final void set(int index, boolean value) {
        array[index] = value;
    }

    /**
    *** Resize the array.  Existing element values are preserved.
    *** <P>
    *** @param newSize    The new size of the array
    ***
    *** @see #extend() doubling the current size
    *** @see #shrink() halving the current size
    **/
    public final void resize(int newSize) {
        array = resize(array, newSize);
    }

    /**
    *** Double the size of the array.  Existing element values are preserved.
    *** <P>
    ***
    *** @see #shrink() halving the current size
    *** @see #resize(int) requesting a specific size
    **/

    public final void extend() {
      array = resize(array, array.length * 2);
    }

    /**
    *** Shrink the array size to half of old size.  Existing element values are preserved.
    *** The minimum resulting size is 1.
    *** <P>
    ***
    *** @see #extend() doubling the current size
    *** @see #resize(int) requesting a specific size
    **/

    public final void shrink() {
        array = shrink(array);
    }

    /**
    *** The encapsulated array.  This is never <code>null</code>.
    *** <P>
    *** @serial
    **/
    private boolean[] array;

} // class DynArrayBoolean
