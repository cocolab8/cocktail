/* $Id: MaskedException.java$ */

/*
 * $Log: MaskedException.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Jan. 2001 */

package de.cocolab.reuse;

/**
 * This exception is thrown to mask another exception which would normally have
 * to be listed in a <code>throws</code> clause.
 * <P>
 * This class is a subclass of <code>RuntimeException</code> so need not be
 * caught or quoted in <code>throws</code> clauses.  In all other respects it
 * behaves like the encapsulated exception: the methods of this class are
 * simply proxies for the corresponding method of the masked exception.
 * <P>
 * One use of this exception is when adding tracing code to methods which
 * would not otherwise throw a <code>java.io.IOException</code>.  The tracing
 * code may be wrapped in a try/catch clause which re-throws any
 * <code>IOException</code> within a <code>MaskedException</code>.  This
 * avoids the need to add throws clauses to methods but still gives a clear
 * diagnostic should an <code>IOException</code> be thrown.
 * <P>
 *
 *  <!---------------------------------------------------------------->
 * 
 *  @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
 *  <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
 *  @version $Id:  $
 *  <!---------------------------------------------------------------->
 */

public class MaskedException extends java.lang.RuntimeException {

    /**
     * Constructs a <code>MaskedException</code> which behaves like the
     * supplied exception.
     */
    public MaskedException (java.lang.Throwable e) {
        exception = e;
    }

    /**
     * The masked exception.
     *
     */
    public java.lang.Throwable exception;

    /**
     * Returns the error message string of the masked exception.
     *
     * @return  the error message string of the masked exception. 
     *            
     */
    public String getMessage () {
        return exception.getMessage ();
    }

    /**
     * The localized description of the masked exception.
     *
     * @return  The localized description of the masked exception.
     *
     */
    public String getLocalizedMessage () {
        return exception.getLocalizedMessage ();
    }

    /**
     * Returns a short description of the masked exception.
     *
     * @return  a string representation of the masked exception.
     */
    public String toString () {
        return exception.toString ();
    }

    /**
     * Prints the masked exception and its backtrace to the 
     * standard error stream.
     */
    public void printStackTrace () {
        exception.printStackTrace ();
    }

    /**
     * Prints the masked exception and its backtrace to the specified
     * print writer.
     *
     * @param s <code>PrintWriter</code> to use for output
     *
     */
    public void printStackTrace (java.io.PrintStream s) {
        exception.printStackTrace (s);
    }

    /**
     * Prints the masked exception and its backtrace to the specified
     * print writer.
     *
     * @param s <code>PrintWriter</code> to use for output
     *
     */
    public void printStackTrace (java.io.PrintWriter s) {
        exception.printStackTrace (s);
    }

    /**
     * Fills in the execution stack trace. This method records within the 
     * masked exception object information about the current state of 
     * the stack frames for the current thread.
     * <P>
     * 
     * @return  the masked exception object.
     * @see     java.lang.Throwable#printStackTrace()
     */
    public Throwable fillInStackTrace () {
        // The first occurs when the MaskedException is created: we want to
        // fill in this objects stack trace in that case.
        if (exception == null) return super.fillInStackTrace ();
        // Otherwise we fill in the stack trace of the masked exception,
        // and return it (not this).  This is the implementation any caller
        // will see.
        return exception.fillInStackTrace ();
    }
}
