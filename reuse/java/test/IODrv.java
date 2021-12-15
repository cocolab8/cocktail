/* $Id: IODrv.java$ */

/*
 * $Log: IODrv.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse.test;

import java.io.*;
import java.util.Random;
import de.cocolab.reuse.*;

/**
 * Tests the IO functionality in classes {@link CocktailWriter} and
 * {@link CocktailReader}.
 * In other versions of Cocktail this is called the <TT>IO</TT> package,
 * hence the name of this class.
 * <P>
 * When {@link #main(String[]) main} is called with no arguments, a simple
 * set of tests is run.  This covers all functions of the package.
 * <P>
 * When {@link #main(String[]) main} is called with arguments, a test is run
 * which tests for thread safety in a selected subset of functions.
 * <P>
 */
public class IODrv extends Thread {

    /**
     * Test {@link CocktailWriter} and {@link CocktailReader}.
     * <P>
     * If no arguments are supplied, the methods with names beginning <code>in</code>
     * and <code>out</code> are executed.  These make up a complete test of the
     * basic functionality.
     * <P>
     * With arguments, a thread safety test is run.  This concentrates on the integer
     * formatting method, because this is tuned for performance and makes use of a
     * static buffer.  Results are automatically checked by means of a parallel
     * (inefficient) algorithm.  Performance data is produced.
     * <P>
     * The test data is produced with a specific seed so that the tests are repeatable
     * except for timing issues related to threading.
     * <P>
     * @param  argv[0] count: the number of tests to be executed in each thread
     *
     * @param  argv[1] threads: how many parallel tests to carry out.
     */
    public static void main(String[] argv) throws Throwable {

        Random r = new Random(23957281); // there is no special significance to this number
        int count, threads;
        CocktailWriter out;
        Thread[] tests;

        System.out.println("IODrv starts");

        if (argv.length > 1) {
            count = Integer.parseInt(argv[0]);
            threads = Integer.parseInt(argv[1]);
            tests = new Thread[threads];
            for (int i = 0; i<tests.length; i++) {
                tests[i] = new IODrv(count, r.nextLong());
                tests[i].start();
            }
        } else {
            out = new CocktailWriter(System.out);
            inInt();
            outInt(out);
            inReal();
            outReal(out);
            inBuffer();
        }

        System.out.println("IODrv ends");

    }

    /**
     * Thread definition.
     * <P>
     * Run an automated test according to suplied parameters (see {@link #count}).
     * <P>
     */
    public void run() {

        Random r = new Random(threadSeed);
        long time;
        CocktailWriter out = new CocktailWriter(System.out);

        try {
            System.err.println(getName() + " random Int " + count);
            time = System.currentTimeMillis();
            randomInt(r.nextLong(), count);
            time = System.currentTimeMillis() - time;
            System.err.println(getName() + " done " + time + "ms");
            out.flush();
        } catch (Throwable t) {
            synchronized (System.err) {
                System.err.println(getName() + ": Exception " + t.toString());
                t.printStackTrace();
            }
        }
    }

    /**
     * Constructor used for thread safety test.  Each thread is controlled by a
     * further instance of the class, passing the test arguments.
     * <P>
     */
    IODrv(int count, long threadSeed) {
        this.count = count;
        this.threadSeed = threadSeed;
    }

    /**
     * The number of tests to run.
     * <P>
     */
    public int count;

    /**
     * Random number generator seed which determines the test data set for this
     * thread.  Each thread has a different seed (generated randomly from one original
     * seed).
     * <P>
     */
    private long threadSeed;

    /**
     *  Testing input of integers, using specific input.
     * <P>
     */
    public static void inInt() throws Throwable {

        String data =   "12 -3 -689 103-3+60  \t\n\r87  -2147483648  2147483647";
        int[] results = {12,-3,-689,103,-3,60,      87, -2147483648, 2147483647};
        int result;

        CocktailReader in = new CocktailReader(new StringReader(data));
        for (int test=0; test<results.length; test++) {
            result = in.readI();
            if (result != results[test]) {
                System.out.println("Fault: result = " + result + " expected: " + results[test]);
                System.out.flush();
            }
        }
    }

    /**
     *  Testing output of integers.  Specific values are tested;
     *  the output should consist of pairs of identical lines separated
     *  by blanks.
     * <P>
     */
    public static void outInt(CocktailWriter out) throws Throwable {
        out.write("write(923)");out.writeNl();
        out.write('"');out.write(923);out.write('"');out.writeNl();
        out.write("\"923\"");out.writeNl();out.writeNl();

        out.write("write(95735,15)");out.writeNl();
        out.write('"');out.write(95735,15);out.write('"');out.writeNl();
        out.write("\"          95735\"");out.writeNl();out.writeNl();

        out.write("write(1234567890,35)");out.writeNl();
        out.write('"');out.write(1234567890,35);out.write('"');out.writeNl();
        out.write("\"                         1234567890\"");out.writeNl();out.writeNl();

        out.write("write(7492,4)");out.writeNl();
        out.write('"');out.write(7492,4);out.write('"');out.writeNl();
        out.write("\"7492\"");out.writeNl();out.writeNl();

        out.write("write(0)");out.writeNl();
        out.write('"');out.write(0);out.write('"');out.writeNl();
        out.write("\"0\"");out.writeNl();out.writeNl();

        out.write("write(0,0)");out.writeNl();
        out.write('"');out.write(0,0);out.write('"');out.writeNl();
        out.write("\"0\"");out.writeNl();out.writeNl();

        out.write("write(0,1)");out.writeNl();
        out.write('"');out.write(0,1);out.write('"');out.writeNl();
        out.write("\"0\"");out.writeNl();out.writeNl();

        out.write("write(0,2)");out.writeNl();
        out.write('"');out.write(0,2);out.write('"');out.writeNl();
        out.write("\" 0\"");out.writeNl();out.writeNl();

        //

        out.write("write(-923)");out.writeNl();
        out.write('"');out.write(-923);out.write('"');out.writeNl();
        out.write("\"-923\"");out.writeNl();out.writeNl();

        out.write("write(-95735,15)");out.writeNl();
        out.write('"');out.write(-95735,15);out.write('"');out.writeNl();
        out.write("\"         -95735\"");out.writeNl();out.writeNl();

        out.write("write(-1234567890,35)");out.writeNl();
        out.write('"');out.write(-1234567890,35);out.write('"');out.writeNl();
        out.write("\"                        -1234567890\"");out.writeNl();out.writeNl();

        out.write("write(-742,4)");out.writeNl();
        out.write('"');out.write(-742,4);out.write('"');out.writeNl();
        out.write("\"-742\"");out.writeNl();out.writeNl();

        out.flush();
    }

    /** Random testing of integer output.
     *  Random test data is generated based on a fixed seed (so that the 
     *  data set is repeatable).  Results are checked by writing into a string
     *  buffer and comparing with a result calculated with an alternative
     *  algorithm.
     * <P>
     */

    public static void randomInt(long seed, int count) throws Throwable {
        TestDataGenerator r = new TestDataGenerator(seed);
        int arg, width;
        StringWriter out;
        CocktailWriter writer;
        StringBuffer result;
        String result_s, out_s;

        do {
            arg = r.nextIntD();

            width = r.nextInt(15); // 0..14

            // run the test, writing into a StringBuffer
            out = new StringWriter();
            writer = new CocktailWriter(out);
            writer.write(arg, width);
            writer.close();
            out_s = out.getBuffer().toString();

            // calculate our own result
            result = new StringBuffer(Integer.toString(arg));
            while (result.length() < width) {
                result.insert(0, ' ');
            }
            result_s = result.toString();

            // compare and report
            if (result_s.equals(out_s) ) {
                // ok
            } else {
                System.out.println("Fault: arg=" + arg + " width=" + width + 
                    " out = \"" + out_s + "\" expected = \"" + result_s + "\"");
            }
        } while (count-- > 0);
    }

    /**
     *  Testing input of reals, using specific input.
     * <P>
     */
    public static void inReal() throws Throwable {
        String data =   "1.2 -3.5 0.12E3 -4.5E-4 E40 12.345E01 123.456789012345678977E3 " +
                        "4.567E-1 1.234567890123456789012345E-1" ;
        double[] results = {1.2, -3.5, 120, -0.00045, 1.0E40, 123.45, 123456.7890123456789,
                         .4567,   .1234567890123456789};
        double epsilon = 1E-19;
        double result;

        CocktailReader in = new CocktailReader(new StringReader(data));
        for (int test=0; test<results.length; test++) {
            result = in.readR();
            // We do not absolutely guarantee that we interpret literals to exactly
            // the same precision as the Java compiler, though tests so far suggest
            // that we may.  The following two 'if' statements may need to be
            // exchanged for certain platforms / compilers.

            // Uncomment this for an approxiamate test
            // if (Math.abs(1-(result/results[test])) > epsilon) {

            // Uncomment this for an exact test
            if (result != results[test]) {

                System.out.println("Fault: result = " + result + 
                     " expected: " + results[test]);
                System.out.flush();
            }
        }
    }

    /**
     *  Testing output of reals.
     * <P>
     */
    public static void outReal(CocktailWriter out) throws Throwable {
        double[] data = {12.345, 123.45678, .012345, 12345000.0};
        double d;
        int test;

        for (test=0; test<data.length; test++) {
            d = data[test];

            // explanations are with regard to the first datum, 12.345

            // 'normal' - no exponent, fields size large enough
            out.write("write(" + d + ", 3, 4, 0)");out.writeNl();
            out.write('"');out.write(d, 3, 4, 0);out.write('"');out.writeNl();
            out.writeNl();

            // exponent with truncation of decimal part
            out.write("write(" + d + ", 1, 2, 2)");out.writeNl();
            out.write('"');out.write(d, 1, 2, 2);out.write('"');out.writeNl();
            out.writeNl();

            // exponent with rounding of decimal part
            out.write("write(" + d + ", 1, 3, 2)");out.writeNl();
            out.write('"');out.write(d, 1, 3, 2);out.write('"');out.writeNl();
            out.writeNl();

            // cases from original Modula 2 IODrv.mi
            out.write("write(" + d + ", 2, 12, 3)");out.writeNl();
            out.write('"');out.write(d, 2, 12, 3);out.write('"');out.writeNl();
            out.writeNl();

            out.write("write(" + d + ", 2, 3 , 2)");out.writeNl();
            out.write('"');out.write(d, 2, 3 , 2);out.write('"');out.writeNl();
            out.writeNl();

            out.write("write(" + d + ", 4, 3 , 1)");out.writeNl();
            out.write('"');out.write(d, 4, 3 , 1);out.write('"');out.writeNl();
            out.writeNl();

            out.write("write(" + d + ", 8, 3 , 0)");out.writeNl();
            out.write('"');out.write(d, 8, 3 , 0);out.write('"');out.writeNl();
            out.writeNl();

            out.write("write(" + d + ", 8, 1 , 0)");out.writeNl();
            out.write('"');out.write(d, 8, 1 , 0);out.write('"');out.writeNl();
            out.writeNl();

            out.write("write(" + d + ", 8, 0 , 0)");out.writeNl();
            out.write('"');out.write(d, 8, 0 , 0);out.write('"');out.writeNl();
            out.writeNl();
        }

        out.flush();

    }

    /**
     *  Testing that CocktailReader correctly handles reading past the end of
     *  numbers etc.
     * <P>
     */
    public static void inBuffer() throws Throwable {

        // This works by having a string of input which adheres to a simple language
        // which tells us what to do next.
        // Commands are letters possibly followed by an argument -
        // iN  read an integer which should = N
        // sN  skip N bytes
        // rS  read into a character array.  S is the result (ending with newline)
        //     which implies the number of characters to read.
        // bS  read into a string buffer
        // e   end of file
        //
        String commandString = "i192" + "s3" + "i57" + "rFred\n" + "rJim\n" + 
                               "i93" + "bGeorge\n" + "bThing\n" + "e";

        // The data stream which should match the commands.
        String dataString = "192" + "   " + "57FredJim93GeorgeThing";

        CocktailReader commands, data;
        char command;
        int count = 0;
        int i, length, nextChar;
        int expectedInt, gotInt;
        String expectedString;
        StringBuffer sBuffer;
        char[] buffer;
        boolean ok;
        int faults = 0;

        commands = new CocktailReader(new StringReader(commandString));
        data = new CocktailReader(new StringReader(dataString));

        do {
            command = commands.readC();
            count += 1;
            switch (command) {
                case 'b':
                    expectedString = commands.readL().toString();
                    sBuffer = new StringBuffer(expectedString.length());
                    data.readS(sBuffer);
                    if (sBuffer.length() != expectedString.length()) {
                        faults++;
                        System.out.println(
                            "inBuffer: b length expected " + expectedString.length() + 
                            " got " + sBuffer.length());
                    }
                    if (!sBuffer.toString().equals(expectedString) ) {
                        faults++;
                        System.out.println("inBuffer: b expected \"" + expectedString + 
                            "\" got \"" + sBuffer.toString() + "\"");
                    }
                    break;

                case 'e':
                    nextChar = data.read();
                    if (nextChar != -1) {
                        faults++;
                        System.out.println("inBuffer: not end of file at e command");
                    }
                    break;
                case 'i':
                    expectedInt = commands.readI();
                    gotInt = data.readI();
                    if (gotInt != expectedInt) {
                        faults++;
                        System.out.println(
                            "inBuffer: i expected " + expectedInt + 
                            " got " + gotInt);
                    }
                    break;
                case 'r':
                    expectedString = commands.readL().toString();
                    buffer = new char[expectedString.length()+5];
                    buffer[0] = 'x';
                    buffer[1] = 'y';
                    buffer[buffer.length-1] = 'X';
                    buffer[buffer.length-2] = 'Y';
                    buffer[buffer.length-3] = 'Z';
                    length = data.read(buffer, 2, expectedString.length());
                    if (length != expectedString.length()) {
                        faults++;
                        System.out.println(
                            "inBuffer: r length expected " + expectedString.length() + 
                            " got " + length);
                    }
                    if (
                            buffer[0] != 'x' ||
                            buffer[1] != 'y' ||
                            buffer[buffer.length-1] != 'X' ||
                            buffer[buffer.length-2] != 'Y' ||
                            buffer[buffer.length-3] != 'Z'
                        ) {
                        faults++;
                        System.out.println("inBuffer: r buffer corrupt \"" +
                            buffer[0] +
                            buffer[1] +
                            buffer[buffer.length-1] +
                            buffer[buffer.length-2] +
                            buffer[buffer.length-3] + "\" != xyXYZ");
                    }
                    ok = true;
                    for (i=0; i<expectedString.length(); i++)
                        ok = ok && expectedString.charAt(i) == buffer[i+2];
                    if (!ok) {
                        faults++;
                        System.out.print("inBuffer: r expected \"" + expectedString + 
                            "\" got \"");
                        for (i=0; i<length; i++) System.out.print(buffer[i+2]);
                        System.out.println("\"");
                    }
                    break;

                case 's':
                    data.skip(commands.readI());
                    break;
            }
        } while (command != 'e');
        System.out.println("inBuffer: " + faults + " faults");
    }
}
