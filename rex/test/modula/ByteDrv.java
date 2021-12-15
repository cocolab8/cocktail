import java.io.*;

class ByteDrv {

    public static void main (String argv []) throws IOException {
	Scanner scanner = new Scanner ();
	String filename = null;
	int token;
	int count = 0;

	for (int i = 0; i < argv.length; i ++) {
	    filename = argv [i];
	}

	if (filename == null) return;

	// scan byte stream from file
	scanner.beginFile (new FileInputStream (filename));
	do {
	    token = scanner.getToken ();
	    count ++;
	} while (token != Scanner.eofToken);
	scanner.finalize ();
	System.out.println (count);

	// copy file into array
	byte [] buffer = new byte [20000];
	InputStream f = new FileInputStream (filename);
	int n = f.read (buffer);
	f.close ();

	// scan byte stream from array of byte
	scanner.beginFile (new ByteArrayInputStream (buffer, 0, n));
	count = 0;
	do {
	    token = scanner.getToken ();
	    count ++;
	} while (token != Scanner.eofToken);
	scanner.finalize ();
	System.out.println (count);
    }
}
