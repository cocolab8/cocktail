/* $Id: Global.java$ */

/*
 * $Log: Global.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

/**
 * This class provides a convenient way to have one global instance
 * of each of {@link Errors} and {@link IdentTable} for simple Cocktail
 * applications.  Example:
 * <P>
 * <PRE>
 *      Ident id = Global.idents.makeIdent(aString);
 *      Global.errors.message("Undefined identifier", Errors.Error, pos, id);
 * </PRE>
 * <P>
 *
 *  <!---------------------------------------------------------------->
 * 
 *  @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
 *  <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
 *  @version $Id:  $
 *  <!---------------------------------------------------------------->
 */

public class Global {

    /**
     * Disallow constructor: this class has only static properties.
     */
    private Global () {
    }

    /**
     * A table of identifiers.
     */
    public static IdentTable idents = new IdentTable();

    /**
     * An error module writing to standard error.
     */
    public static Errors errors = new Errors();

}
