import java.io.*;

class CharDrv {

    static Scanner scanner;

    static void do_scan (String text, Reader input) throws IOException {
	int token;
	int count = 0;
	System.out.println (text);
	scanner.beginFile (input);
	do {
	    token = scanner.getToken ();
	    count ++;
	} while (token != Scanner.eofToken);
	scanner.finalize ();
	System.out.println (count);
    }

    static void do_scan_utf16 (String file, String encoding) throws IOException {
	try {
	   do_scan ("scan char stream from file encoding " + encoding,
	       new InputStreamReader (new FileInputStream (file), encoding));
	} catch (UnsupportedEncodingException e) {
	    System.out.println ("encoding not supported: " + encoding);
	} catch (IllegalArgumentException e) {
	    System.out.println ("illegal argument: " + encoding);
	}
    }

    public static void main (String argv []) throws IOException {
	String filename = null;
	scanner = new Scanner ();

	for (int i = 0; i < argv.length; i ++) {
	    filename = argv [i];
	}

	if (filename == null) return;

	// copy file of byte into array of byte
	byte [] byte_array = new byte [20000];
	InputStream f = new FileInputStream (filename);
	int byte_size = f.read (byte_array);
	f.close ();

	// copy file of byte into array of char
	char [] char_array = new char [byte_size];
	for (int i = 0; i < byte_size; i ++)
	    char_array [i] = (char) byte_array [i];

	// copy file of utf8 into array of byte
	byte [] utf8_array = new byte [20000];
	f = new FileInputStream ("in.utf8");
	int utf8_size = f.read (utf8_array);
	f.close ();

	do_scan ("scan byte stream from file",
	    new FileReader (filename));

	try {
	   do_scan ("scan char stream from file",
	       new InputStreamReader (new FileInputStream ("in.utf16"), "UTF-16"));
	} catch (UnsupportedEncodingException e) {
	    System.out.println ("encoding not supported: " + "UTF-16");
	} catch (IllegalArgumentException e) {
	    System.out.println ("illegal argument: " + "UTF-16");
	}

	do_scan ("scan byte stream from array of byte",
	    new InputStreamReader (new ByteArrayInputStream (byte_array, 0, byte_size)));

	do_scan ("scan char stream from array of char",
	    new CharArrayReader (char_array));

	do_scan ("scan byte stream from file",
	    new InputStreamReader (new FileInputStream (filename)));

	do_scan ("scan byte stream from file encoding ISO-8859-1",
	    new InputStreamReader (new FileInputStream (filename), "ISO-8859-1"));

	do_scan ("scan byte stream from file encoding US-ASCII",
	    new InputStreamReader (new FileInputStream (filename), "US-ASCII"));

	do_scan ("scan byte stream from file encoding UTF-8",
	    new InputStreamReader (new FileInputStream ("in.utf8"), "UTF-8"));

	do_scan ("scan byte stream from array encoding UTF-8",
	    new InputStreamReader (new ByteArrayInputStream (utf8_array, 0, utf8_size), "UTF-8"));

     // do_scan_utf16 ("UTF16BE");
     // do_scan_utf16 ("UTF16LE");
     // do_scan_utf16 ("UTF16");
	do_scan_utf16 ("in.utf16be", "UTF-16BE");
	do_scan_utf16 ("in.utf16le", "UTF-16LE");
	do_scan_utf16 ("in.utf16", "UTF-16");

/*	decoding for arrays doesn't seem to exist,
	doing it during file input makes sense.
	do_scan ("scan char stream from array encoding UTF-16",
	    new CharArrayReader (utf16_array, "UTF-16");
*/
    }
}
