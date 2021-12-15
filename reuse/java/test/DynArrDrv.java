/* $Id: DynArrDrv.java$ */

/*
 * $Log: DynArrDrv.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse.test;

import java.io.*;
import de.cocolab.reuse.*;

/**
*** Test class for class DynArray.
*** <P>
*** We test {@link DynArrayByte} as a representative of the
*** classes generated from DynArrayX.base.  {@link DynArrayObject}
*** is tested by {@link IdentDrv}, it is not from the same source file.
*** <P>
**/
public class DynArrDrv {

    /**
     * An instance of java.lang.Runtime, used to get memory
     * statistics.
     * <P>
     */
    private static Runtime runtime = Runtime.getRuntime();

    /**
     * Main test of DynArray classes.  We call subsidiary methods
     * to test various ways of using the DynArray classes.
     * <P>
     */
    public static void main(String[] argv) throws IOException {
        System.out.println("DynArray starts");
        staticTest();
        objectTest();
        System.out.println("DynArray ends");
    }

    /**
     * Create an array of bytes and use the static methods of
     * {@link DynArrayByte} to extend and contract it.
     * <P>
     */
    public static void staticTest() throws IOException {
        final int s = 10;
        byte[] p = new byte[s];

        memory();
        for (int k=1; k<10; k++) {
            System.out.println("K="+k);
            for (int i = 0; i < s; i++) {
                p[i] = (byte)i;
            }

            for (int j = 1; j <= 15; j++) {
                p = DynArrayByte.extend(p);

                for (int i = p.length / 2; i < p.length; i++) {
                    p[i] = (byte)i;
                }

                for (int i = 0; i < s; i++) {
                    if (p[i] != (byte)i) {
                        System.out.println("Error j, i, p[i] = " + j + "  " + i + "  " + p[i]);
                    }
                }
            }
            memory();

            for (int j = 15; j >= 1; j--) {
                p = DynArrayByte.shrink(p);

                for (int i = 0; i < s; i++) {
                    if (p[i] != i) {
                        System.out.println("Error j, i, p[i] = " + j + "  " + i + "  " + p[i]);
                    }
                }
            }
            memory();
        }
    }

    /**
     * Create an array of bytes using the non-static methods of
     * {@link DynArrayByte} to extend and contract it.
     * <P>
     */
    public static void objectTest() throws IOException {
        final int s = 10;
        DynArrayByte p = new DynArrayByte(s);

        memory();
        for (int k=1; k<10; k++) {
            System.out.println("K="+k);
            for (int i = 0; i < s; i++) {
                p.set(i, (byte)i);
            }

            for (int j = 1; j <= 15; j++) {
                p.extend();

                for (int i = p.length() / 2; i < p.length(); i++) {
                    p.set(i, (byte)i);
                }

                for (int i = 0; i < s; i++) {
                    if (p.get(i) != (byte)i) {
                        System.out.println("Error j, i, p.get(i) = " + j + "  " + i + "  " + p.get(i));
                    }
                }
            }
            memory();

            for (int j = 15; j >= 1; j--) {
                p.shrink();

                for (int i = 0; i < s; i++) {
                    if (p.get(i) != i) {
                        System.out.println("Error j, i, p.get(i) = " + j + "  " + i + "  " + p.get(i));
                    }
                }
            }
            memory();
        }
    }

    /**
     * Report current memory usage.
     * <P>
     */
    private static void memory() {
        long free, total;
        runtime.gc();
        free = runtime.freeMemory();
        total = runtime.totalMemory();
        System.err.println("Free = " + free + 
                           "  Total = " + total + 
                           "  Used = " + (total-free));
    }
}
