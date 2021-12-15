/* $Id: ErrorDrv.java$ */

/*
 * $Log: ErrorDrv.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse.test;

import java.io.*;
import de.cocolab.reuse.*;

/**
 * Test {@link Errors}, the error reporting module.
 * <P>
 * The error module is run a number of times with different reporting
 * options.
 * <P>
 */
public class ErrorDrv {

    /* Variables for passing as 'extra info'
     */
    static int		vInteger	= 1;
    static short	vShort		= 2;
    static long		vLong		= 3;
    static float	vReal		= (float) 4.0;
    static boolean	vBoolean	= false;
    static char		vCharacter	= 'a';
    static String	vString		= "abc";
//  static Set		vSet = new Set(10).include(5).include(6);
    static Ident	vIdent = Global.idents.makeIdent("def");
    static Position	vPos = new Position(8, 15);

    /**
     * Generate a set of 'interesting' messages.
     * <P>
     */
    public static void errors(Errors errors) throws IOException {

        Position vPos2 = new Position(7, 11);

        errors.message ("Short    E ", Errors.Error,
                                    vPos, new Short(vShort));
        errors.message ("Integer  R ", Errors.Restriction,
                                    Position.NoPosition, new Integer(vInteger));
        errors.message ("Long     W ", Errors.Warning,
                                    vPos, new Long(vLong));
        errors.message ("Real     Rp", Errors.Repair,
                                    vPos, new Double(vReal));
        errors.message ("Boolean  N ", Errors.Note,
                                    vPos, new Boolean(vBoolean));
        errors.message ("CharacterI ", Errors.Information,
                                    vPos, new Character(vCharacter));
        errors.message ("String     ", Errors.Error,
                                    vPos, vString);
//        errors.message ("Set        ", Errors.Error,
//                                    vPos, vSet);
        errors.message ("Ident      ", Errors.Error,
                                    vPos, vIdent);
        errors.message ("Position   ", Errors.Error,
                                    vPos, vPos);
        errors.message ("Position   ", Errors.Error,
                                    vPos2, vPos2);
        errors.message ("Nothing    ", Errors.Error,
                                    vPos2);
        errors.errorMessage(Errors.SyntaxError, Errors.Error,
                                      new Position(10, 5));

        errors.errorMessage(Errors.TokenFound, Errors.Error,
                                      new Position(10, 5), "end");

        errors.errorMessage(Errors.ExpectedTokens, Errors.Information,
                                      new Position(10, 5), "one two");

        errors.errorMessage(Errors.RestartPoint, Errors.Note,
                                      new Position(10, 5), new Position(8, 2));

        errors.errorMessage(Errors.TokenInserted, Errors.Error,
                                      new Position(10, 5), "three");

        errors.errorMessage(Errors.WrongParseTable, Errors.Error,
                                      new Position(390, 75), "A long message which will X get chopped before X");

        errors.errorMessage(Errors.OpenParseTable, Errors.Error,
                                      new Position(6, 7));

        errors.errorMessage(Errors.ReadParseTable, Errors.Error,
                                      new Position(10, 5));

    }

    /**
     * Entry point: run several sets of messages through the Errors object.
     * <P>
     * This test creates two files
     * <UL>
     * <LI><TT>Errors.500</TT> containing exactly 500 error messages
     * <LI><TT>Errors.ofl</TT> containing an attempt to write more than 500 messages
     * </UL>
     * These should be compared with the files in the subdirectory <TT>results</TT>.
     * <P>
     */
    public static void main(String[] argv) throws Throwable {

        Errors myErrors;

        // write the errors directly (unsorted)
        errors (Global.errors); System.err.println(); System.err.flush();

        // repeat, this time storing / sorting the messages
        Global.errors.storeMessages(true);
        errors (Global.errors);
        Global.errors.writeMessages(System.out);
        System.out.println(); System.out.flush();

        // write the stored messages again, clearing 'brief' and 'first'
        System.out.println("verbose");
        Global.errors.brief = false;
        Global.errors.first = false;
        Global.errors.writeMessages(System.out);
        System.out.println(); System.out.flush();

        // setting storeMessages(true) should empty the error table.
        Global.errors.storeMessages(true);
        System.out.println("An empty error table...");
        Global.errors.writeMessages(System.out);
        System.out.println("... end"); System.out.flush();

        // now fill the table exactly
        Global.errors.storeMessages(true);
        for (int i=0; i<Global.errors.MAX_ERRORS; i++) {
            Global.errors.message("A" + Integer.toString(i), Errors.Error, Position.NoPosition);
        }
        Global.errors.writeMessages(new FileOutputStream("ErrorDrv.500"));

        // now fill the table plus a bit, using a different instance
        // to make sure the table is separate
        myErrors = new Errors(new CocktailWriter(new FileWriter("ErrorDrv.ofl")));
        myErrors.storeMessages(true);
        for (int i=0; i<myErrors.MAX_ERRORS+2; i++) {
            myErrors.message("B" + Integer.toString(i), Errors.Error, Position.NoPosition);
        }
        myErrors.writeMessages();
    }
}
