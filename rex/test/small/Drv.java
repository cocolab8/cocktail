/* $Id: ScanDrv.java,v 1.1 1999/11/16 17:32:38 grosch rel grosch $ */

package rex.test.small;
import java.io.*;

/**
 * Driver for SmallScanner adapted from SmallScannerDrv by deleting call
 * of getWord which is not present in the generated scanner.
 * <P>
 */

class Drv {

    public static void main (String argv []) throws java.io.IOException {
     SmallScanner scanner = new SmallScanner ();
	int token;
	String word;
	boolean debug = false;
	String filename = null;
	int count = 0;

	for (int i = 0; i < argv.length; i ++) {
	     if (argv [i].equals ("-D")) debug = true;
	     else filename = argv [i];
	}

	if (filename != null)
	    scanner.beginFile (new FileInputStream (filename));

	do {
	    token = scanner.getToken ();
	    count ++;
	    if (debug) {
		System.err.println
		    (scanner.attribute.position() + " " + token);
	    }
        } while (token != SmallScanner.eofToken);
	System.out.println (count);
	scanner.finalize ();
    }
}
