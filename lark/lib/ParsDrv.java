// $Id: ParsDrv.java,v 1.2 2000/09/12 17:31:14 grosch rel $

$# // package name if specified
import java.io.*;

/**
 * Simple class for driving a generated parser.
 * <P>
 */

$@ class @Drv {

    public static void main (String [] argv) throws java.io.IOException {

	String filename = null;
$@ 	@ parser = new @ (new $ ());

	for (int i = 0; i < argv.length; i ++) {
	    if (argv [i].equals ("-D")) parser.yyDebug = true;
	    else filename = argv [i];
	}

	if (filename != null)
	    parser.scanner.beginFile (new FileInputStream (filename));

	parser.parse ();
	parser.finalize ();
    }
}
