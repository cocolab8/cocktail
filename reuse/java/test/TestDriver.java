/* $Id: TestDriver.java$ */

/*
 * $Log: TestDriver.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse.test;

import java.io.*;

/**
 * Test envelope for the reuse package.
 * <P>
 */
public class TestDriver {

    /**
     * Invoke all the test programs for the reuse package, diverting 
     * <code>System.out</code> to a file so that it may be compared with
     * a standard set of results.
     * <P>
     */
    public static void main(String[] argv) throws Throwable {

        String[] dynArrayArgs = {};

        String[] ioArgs = {};

        String[] identArgs = {"10000", // number of calls
                              "2500",  // number of identifiers
                              "3"      // number of threads
                              };

        String[] errorArgs = {};

        System.setOut(new PrintStream(new FileOutputStream("results.out")));

        DynArrDrv.main(dynArrayArgs);
        IODrv.main(ioArgs);
        IdentDrv.main(identArgs);
        ErrorDrv.main(errorArgs);
    }

} // class TestDriver

