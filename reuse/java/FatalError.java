/* $Id: FatalError.java$ */

/*
 * $Log: FatalError.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

/**
 * <P>This exception is thrown when a fatal error is reported to an instance
 * of {@link Errors}.</P>
 * <P>This class is a subclass of <code>RuntimeException</code> so need not be
 * caught or quoted in <code>throws</code> clauses.  In general fatal errors
 * terminate the application: the exception need only be caught if a high degree of
 * robustness is required, for example in an applet.</P>
 * <P>Before throwing this exception {@link Errors} will print the full message
 * and any stored messages.</P>
 *
 *  <!---------------------------------------------------------------->
 * 
 *  @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>, <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering</A>
 *  @version $Id:  $
 *  <!---------------------------------------------------------------->
 */

public class FatalError extends RuntimeException {
    /**
     * <P>Create a <code>FatalError</code> with no additional information.
     * </P>
     * <P>This constructor is not used: we always supply additional information.
     * </P>
     */
    public FatalError() {
        super();
    }

    /**
     * <P>Create a <code>FatalError</code> with additional information.
     * </P>
     * <P>The additional information is the error message.
     * </P>
     */
    public FatalError(String message) {
        super(message);
    }
}
