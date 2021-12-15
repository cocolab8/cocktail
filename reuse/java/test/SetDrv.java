/* $Id: SetDrv.java$ */

/*
 * $Log: SetDrv.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse.test;

import java.io.*;
import de.cocolab.reuse.*;

/**
 * Simple test of class Set.
 * <P>
 */
public class SetDrv {

    static final int max = 100; //1000;

    static Set s;
    static Set t;
    static Set u;
    static int i;
    static InputStream in = System.in;
    static PrintStream out = System.out;

    public static void main(String[] argv) throws IOException {
        s = new Set(0);
        s = new Set(31);
        s = new Set(32);
        s = new Set(33);
        s = new Set(63);
        s = new Set(64);
        s = new Set(65);
        s = new Set(max);
        t = new Set(max);
        u = new Set(max);

        for (int i = 2; i <= max; i++) t.include(i);

        out.println("t size="+t.size()+" card="+t.card()+" "+
            t.minimum()+".."+t.maximum());
        writeSet(out, "t", t);

        s.assignEmpty();
        s.include(1);
//        u.assign(t);
        s.union(t);

        out.println("s size="+s.size()+" card="+s.card()+" "+
            s.minimum()+".."+s.maximum());
        writeSet(out, "s", s);

        t.assignEmpty();
        for (int i = 0; i <= max; i+= 2) t.include(i);
        writeSet(out, "t", t);

//      s.difference(t);

//        for (int i = 0; i <= max; i+= 3) s.exclude(i);
//        for (int i = 0; i <= max; i+= 5) s.exclude(i);
//        for (int i = 0; i <= max; i+= 7) s.exclude(i);
//        for (int i = 0; i <= max; i+= 11) s.exclude(i);
//        for (int i = 0; i <= max; i+= 13) s.exclude(i);
//        for (int i = 0; i <= max; i+= 17) s.exclude(i);
//        for (int i = 0; i <= max; i+= 19) s.exclude(i);
//        for (int i = 0; i <= max; i+= 23) s.exclude(i);
//        for (int i = 0; i <= max; i+= 29) s.exclude(i);

//        out = de.cocolab.reuse.IO.outStream(new FileOutputStream("t"));
//        out.writeSet(s).writeNl();
//        out.close();
    
//        in = de.cocolab.reuse.IO.inStream (new FileInputStream("t"));
//        t = new de.cocolab.reuse.Set(max);
//        t.read(in);
//        in.close();

/*
        out.writeSet(t).writeNl ();
        out.writeI(t.size(), 5).writeI(t.card(), 5).writeI(t.minimum(), 5);
        out.writeI(t.maximum(), 5).writeNl();
*/
        u.assignEmpty();
        for (int i = 7; i <= max; i += 10) u.include(i);
        out.println(u.size()+" "+u.card()+" "+u.minimum()+".."+u.maximum());
        writeSet(out, "u", u);

//        u.intersection(t);
//        out.writeSet(u).writeNl().writeI(u.size(), 5).writeI(u.card(), 5);
//        out.writeI(u.minimum(), 5).writeI(u.maximum(), 5).writeNl();
/*
        s = new de.cocolab.reuse.Set(10);
        s.include(3).include(7);
        out.writeNl().writeS("enter Size and Set like below! (Size=0 or non-number terminates)");
        out.writeNl().writeI(s.size(), 0).writeS(" ").writeSet(s).writeNl();

//        in = de.cocolab.reuse.IO.StdInput;

        for (;;) {
            out.writeNl().writeFlush();
            i = in.readI();
            if (i == 0) break;
            s = new de.cocolab.reuse.Set(i);
            s.read(in);
            out.writeSet(s).writeS(" Card = ").writeI(s.card(), 0).writeNl();
            s.complement();
            out.writeSet(s).writeS(" Card = ").writeI(s.card(), 0).writeNl();
        }
        out.writeFlush();
*/
    }

    static private void writeSet(PrintStream out, String title, Set s) {
        int first = -2;
        int last = -2; 
        String sep = "{";
        int e;
        out.print(title+" "+s.card()+" = ");
        for (int i = s.minimum(); i<=s.maximum(); i++) {
             if (s.contains(i)) {
                 if (i == last+1) {
                     if (first == last) out.print("..");
                 } else {
                     out.print(sep+i);
                     sep = ", ";
                     first = i;
                 }
                 last = i;
             } else {
                 if (last != first) out.print(last);
                 last = -2;
                 first = -2;
             }
        }
        if (last != first) out.print(last);
        out.println("}");
    }
}
