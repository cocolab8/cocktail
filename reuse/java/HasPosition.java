/* $Id: HasPosition.java$ */

/*
 * $Log: HasPosition.java,v $
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

/**
 * This interface specifies a <code>position</code> method which returns an
 * object of type Position.  Classes representing objects which have a source
 * code position should implement this interface.  The main use of this is
 * in <code>rex</code> scanners.
 * <P>
 *
 *  <!---------------------------------------------------------------->
 *
 *  @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
 *  <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
 *  @version $Id:  $
 *  <!---------------------------------------------------------------->
 */

public interface HasPosition {
    /**
     * Return the source position of this object.
     * <P>
     * @return  a {@link Position} object describing the origin of this object
     *          in terms of a source file.
     * <P>
     */
    public Position position();
}
