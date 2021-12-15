/* $Id: CocktailError.java$ */

/*
 * $Log: CocktailError.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

/**
 * This exception is thrown if an internal inconsistency or system problem is
 * detected.
 * <P>
 * This class is a subclass of <code>RuntimeException</code> so need not be
 * caught or quoted in <code>throws</code> clauses.  In general these errors
 * terminate the application: the exception need only be caught if a high degree of
 * robustness is required, for example in an applet.
 * <P>
 * This exception is thrown by:
 * <UL>
 * <LI>{@link Position#toString()}
 * </UL>
 * <P>
 *
 *  <!---------------------------------------------------------------->
 * 
 *  @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
 *  <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
 *  @version $Id:  $
 *  <!---------------------------------------------------------------->
 */

public class CocktailError extends RuntimeException {

    /**
     * Create a <code>CocktailError</code> with no additional information.
     * <P>
     * This constructor is not used: we always supply additional information.
     * <P>
     */
    public CocktailError() {
        super();
    }


    /**
     * Create a <code>CocktailError</code> with additional information.
     * <P>
     * The additional information describes the nature of the problem.
     * <P>
     */
    public CocktailError(String message) {
        super(message);
    }

} // class CocktailError

