/* $Id: TrafoAbortException.java$ */

/*
 * $Log: TrafoAbortException.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Feb. 2001 */

package de.cocolab.reuse;

/**
 * <P>This exception is thrown when a puma generated transformer fails.</P>
 * <P>This class is a subclass of <code>RuntimeException</code> so need not be
 * caught or quoted in <code>throws</code> clauses.  In general this error
 * terminates the application: the exception need only be caught if a high degree of
 * robustness is required, for example in an applet.</P>
 * <P>The failing routine is identified in the exception message for humans
 * to read, and in the additional fields {@link #trafo} and {@link #routine} for
 * programmatic use.</P>
 *
 *  <!---------------------------------------------------------------->
 * 
 *  @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>, <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering</A>
 *  @version $Id:  $
 *  <!---------------------------------------------------------------->
 */

public class TrafoAbortException extends RuntimeException {
    /**
     * <P>Create a <code>TrafoAbortException</code> with no additional information.
     * </P>
     * <P>This constructor is not used: we always supply additional information.
     * </P>
     */
    public TrafoAbortException() {
        super();
    }

    /**
     * <P>Create a <code>TrafoAbortException</code> with additional information.
     * </P>
     * <P>The additional information is the name of the puma module and routine
     * which is used to form the error message.
     * </P>
     */
    public TrafoAbortException (String trafo, String routine) {
        super ("Error: module " + trafo + ", routine " + routine + " failed");
        this.trafo = trafo;
        this.routine = routine;
    }

    /**
     * <P>The name of the puma transformation module which failed.</P>
     */
    public String trafo;

    /**
     * <P>The name of the function or procedure which failed.</P>
     */
    public String routine;

}
