/* $Id: ScanDrv.java,v 1.4 2000/09/12 17:30:00 grosch rel $ */

$# package declaration
import java.io.*;

$V define xxMaxCharacter

/**
 * Simple class for driving a generated scanner.
 * <P>
 */

$@ class @Drv {

    public static void main (String argv []) throws java.io.IOException {
$@ 	@ scanner = new @ ();
	int token;
	boolean debug = false;
	String filename = null;
	int count = 0;

	for (int i = 0; i < argv.length; i ++) {
	    if (argv [i].equals ("-D")) debug = true;
	    else filename = argv [i];
	}

	if (filename != null)
# if xxMaxCharacter < 256
	    scanner.beginFile (new FileInputStream (filename));
# else
	    scanner.beginFile (new FileReader (filename));
# endif

	do {
	    token = scanner.getToken ();
	    count ++;
	    if (debug) {
		String word = scanner.getWord ();
		System.err.println
		    (scanner.attribute.position () + " " + token + " " + word);
	    }
$@ 	} while (token != @.eofToken);
	scanner.finalize ();
	System.out.println (count);
    }
}
