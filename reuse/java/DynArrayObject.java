/* $Id: DynArrayObject.java,v 1.1.1.4.2.1 1999/06/18 07:39:52 howie Exp $ */

/**********************************************************************
 * Unlike the basic types, this class is NOT generated from
 * DynArrayX.base.  This is because we need to take special action to
 * create a new array object of the correct type - see 'extend'.
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

import java.lang.reflect.Array;

/**
*** Dynamic flexible arrays of arbitrary element type.  While this class will
*** handle basic types such as <code>int</code>, specific classes are provided
*** for those cases - see below.
*** <P>
*** For comfortable programming use the standard Java
*** <code>Vector</code> class.
*** <P>
*** For maximum performance you can instead use the static methods
*** of this class.  This avoids the cast required on every element access,
*** and gives control of resizing to the programmer.  Example:
*** <P>
*** <PRE>
***      Thing[] list = new Thing[100];
***      list = (Thing[])DynArrayObject.extend(list);
***      // list is now 200 elements
***      x = list[105];
***      list[107] = x;
*** </PRE>
*** <P>
*** You must remember that resizing the array in this way gives a new object: you 
*** must not make copies of the object reference, as after resizing they would refer
*** to the old (smaller) array object.
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
*** @see DynArrayShort
***
*** @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
*** <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
*** <BR> <A HREF="mailto:cocktail@hwy.de">Dr. Thomas M&uuml;ller</A>
*** @version $Id:  $
*** <!---------------------------------------------------------------->
**/

public class DynArrayObject implements java.io.Serializable {
    /** CVS version string. **/
    private static final java.lang.String cvsid = "$Id: DynArrayObject.java,v 1.1.1.4.2.1 1999/06/18 07:39:52 howie Exp $";
  
    /**
    *** Returns a copy of <code>array</code> adjusted to <code>size</code> elements.
    *** <P>
    *** @param  array   The old array
    ***
    *** @param  newSize The new size required, which can be larger or smaller
    ***                 than the current size.
    ***
    *** @return    A new array of the requested size, with elements from the
    ***            old array copied.  The type of this object is the same as
    ***            the <code>array</code> argument, so it can safely be cast
    ***            back into the original variable.
    ***
    *** @see #extend(Object[]) doubling the current size
    *** @see #shrink(Object[]) halving the current size
    **/
    public static final Object[] resize(Object[] array, int newSize) {
        Object[] newArray = array;
        Class objClass = array.getClass().getComponentType();

        if (newSize != array.length) {
            newArray = (Object[])Array.newInstance(objClass, newSize);
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
    ***            old array copied.  The type of this object is the same as
    ***            the <code>array</code> argument, so it can safely be cast
    ***            back into the original variable.
    ***
    *** @see #resize(Object[],int) requesting a specific size
    *** @see #shrink(Object[]) halving the current size
    **/
    public static final Object[] extend(Object[] array) {
        return resize(array, array.length * 2);
    }

    /**
    *** Returns a copy of <code>array</code> shrunk by halving its size.
    *** <P>
    *** @param  array   The old array
    ***
    *** @return    A new array half the original size, with elements from the
    ***            old array copied.  The minimum size is one element.
    ***            The type of this object is the same as
    ***            the <code>array</code> argument, so it can safely be cast
    ***            back into the original variable.
    ***
    *** @see #extend(Object[]) doubling the current size
    *** @see #resize(Object[],int) requesting a specific size
    **/
    public static final Object[] shrink(Object[] array) {
        int newSize = array.length / 2;
        if (newSize > 0) {
            return resize(array, newSize);
        }
        return array;
    }

    /**
    *** Prohibit use of default constructor.
    **/
    private DynArrayObject() {}

} // class DynArrayObject
