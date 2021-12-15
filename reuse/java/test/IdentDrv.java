/* $Id: IdentDrv.java$ */

/*
 * $Log: IdentDrv.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse.test;

import java.io.*;
import java.util.Random;
import java.util.Hashtable;
import de.cocolab.reuse.*;

/**
 * Test {@link IdentTable} and {@link Ident}.
 * <P>
 * When {@link #main(String[]) main} is called with no arguments, identifiers
 * are accepted interactively from standard input.  This is the same as the 
 * test program in versions of the reuse package for other languages.
 * <P>
 * For a more rigorous test call {@link #main(String[]) main} with arguments
 * specifying test characteristics such as run time.
 */
public class IdentDrv extends Thread {

    /**
     * Test {@link IdentTable} and {@link Ident}.
     * <P>
     * If no arguments are supplied, you are given two opportunities to
     * enter identifiers, one to a line.  When you enter "-" the identifier
     * table is printed out.
     * <P>
     * With arguments, an automated test is run.  A given number of identifiers
     * is generated, and then a random selection of these are inserted into an
     * identifier table.  With appropriate arguments this means that the same identifier
     * is likley to be entered more than once.  A specified number of such tests are 
     * run in parallel on individual threads to verify thread safety.
     * <P>
     * The test data is produced with a specific seed so that the tests are repeatable
     * except for timing issues related to threading.
     * <P>
     * @param  argv[0] count: the number of <code>makeIdent</code> calls to be executed
     *
     * @param  argv[1] size: the number of indentifiers in the test set.  Usually 
     *                 <I>count</I> will be much greater than <I>size</I>.
     *
     * @param  argv[2] threads: how many parallel tests to carry out.
     */
    public static void main (String argv[]) throws Throwable {

        Random r = new Random(492685);
        int count, size, threads;
        CocktailWriter out;
        Thread[] tests;

        System.out.println("IdentDrv begins");

        if (argv.length > 1) {
            count = Integer.parseInt(argv[0]);
            size = Integer.parseInt(argv[1]);
            threads = Integer.parseInt(argv[2]);
            tests = new Thread[threads];
            for (int i = 0; i<tests.length; i++) {
                tests[i] = new IdentDrv(count, size, r.nextLong());
                tests[i].start();
            }
        }
        else {
            loop ();
            loop ();
        }

        System.out.println("IdentDrv ends");
    }

    /**
     * Interactive test.
     * <P>
     * Identifiers are read from standard input, terminated with a line
     * containing a single hyphen.
     * <P>
     */
    public static void loop () throws Throwable {

        CocktailReader in	= new CocktailReader(System.in);
        CocktailWriter out	= new CocktailWriter(System.out);
        StringBuffer string		= new StringBuffer ();
        Ident ident;
        IdentTable ids = new IdentTable();

        out.write ("enter strings, one per line, - terminates\n");
        out.flush();
        do {
            string = in.readL ();
            ident = ids.makeIdent (string);
            ident.write (out);
            out.writeNl (); out.flush ();
        } while (! (string.length () == 1 && string.charAt (0) == '-'));
        out.writeNl ();
        ids.writeAll (out);
    }

    /**
     * Thread definition.
     * <P>
     * Run an automated test according to supplied parameters
     * (see {@link #count} and {@link #size}).
     * <P>
     */
    public void run() {
        long time;
        CocktailWriter out = new CocktailWriter(System.out);
        try {
            System.err.println(getName() + " random Ident " + count + ", " + size);
            time = System.currentTimeMillis();
            randomIdent(threadSeed, count, size);
            
            time = System.currentTimeMillis() - time;
            System.err.println(getName() + " done " + time + "ms");
            out.flush();
        } catch (Throwable t) {
            System.out.println(getName() + ": Exception " + t.toString());
            t.printStackTrace();
        }
    }

    /**
     * Constructor used for automated test.  Each thread is controlled by a
     * further instance of the class, passing the test arguments.
     * <P>
     */
    IdentDrv(int count, int size, long threadSeed) {
        this.count = count;
        this.size = size;
        this.threadSeed = threadSeed;
    }


    /**
     * The number of identifier creations.
     * <P>
     */
    public int count;

    /**
     * The number of identifiers to be used.
     * <P>
     * Because the identifiers are selected at random, it is not guaranteed that
     * all identifiers will be created: the actual identifier table size may be
     * less than this number.
     * <P>
     */
    public int size;

    /**
     * Random number generator seed which determines the test data set for this
     * thread.  Each thread has a different seed (generated randomly from one original
     * seed).
     * <P>
     */
    private long threadSeed;

    /**
     * Test IdentTable/Ident.
     * Process:
     * Invent <code>size</code> different strings.  We actually just use numbers
     * 1..size with a fudge to get strings of varying lengths.  This scheme is simple
     * and has the sort of regularity that may show up problems in hash chain logic
     * that a more random selection might miss.
     * Select <code>count</code> of these at random, and create identifier objects
     * with them.  Normally <code>count</code> &gt;&gt;&gt; <code>size</code>.
     * Use a hash table and arrays to check the results, i.e. that the same Ident is
     * always returned for a given string.
     */
    public void randomIdent(long seed, int count, int size) throws Throwable {
        TestDataGenerator tdg = new TestDataGenerator(seed);
        IdentTable idTable = new IdentTable();
        Hashtable sToId = new Hashtable(size);
        String[] names = new String[size];
        int[] vs = new int[size];
        Ident[] ids = new Ident[size];
        int scheme=0; // selects different constructions for identifiers
        Ident id, oldId;
        int index;

        // invent 'size' different strings.
        for (int i = 0; i<size; i++) {
            switch (scheme) {
                case 0: {
                    scheme++;
                    names[i] = Integer.toString(i);
                    break;
                }
                case 1: {
                    scheme=0;
                    // a random identifier with 'i' tacked on to make sure it is
                    // unique
                    names[i] = tdg.nextIdentifier(1, 32) + "_" + Integer.toString(i);
                    break;
                }
            }
        }

        // now do a random selection of 'count' makeIdent calls.
        do {
            index = tdg.nextInt(size); // pick a string
            id = idTable.makeIdent(names[index]);
            if (sToId.containsKey(names[index]) ) {
                // an existing entry
                oldId = (Ident)sToId.get(names[index]);
                if (id != oldId ) {
                    System.out.println(getName()+":"+ "Different objects:");
                    report(id);
                    report(oldId);
                }
            }
            else {
                // a new entry
                if (id.value != (idTable.length() - 1) ) {
                    System.out.println(getName()+":"+ "Should be new object:"+id.value+", "+idTable.length());
                    report(id);
                }
                sToId.put(names[index], id);
            }

            if (!id.toString().equals(names[index]) ) {
                System.out.println(getName()+":"+ "Name is not \"" + names[index] + "\"");
                report(id);
            }

        } while (count-- > 0);
        if ( (idTable.length() - 1) != sToId.size() ) {
            System.out.println(getName()+":"+ "idTable.count=" + (idTable.length() - 1) + " sToId.size=" + sToId.size());
            idTable.writeAll();
            System.out.println(sToId.toString());
        }
    }

    /**
     *  Report the details of an Ident object
     */

    private void report(Ident id) {
        System.out.println(getName()+":"+ "    id:" + id.value + " name:\"" + id.toString() + "\"");
    }

} // class IdentDrv


