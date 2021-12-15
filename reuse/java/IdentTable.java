/* $Id: $ */

/*
 * $Log: IdentTable.java,v $
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

import java.io.*;
import de.cocolab.reuse.Ident;

/**
*** Identifier tables.
*** <P>
*** Each instance of this class maintains a table of {@link Ident}
*** objects, such that given any particular string value,
*** the same <code>Ident</code> object is always returned.
*** <P>
*** Each {@link Ident} is also numbered starting from 1 (zero being used to 
*** represent <I>no identifier</I>).  This may be used as an index into
*** a symbol table.
*** <P>
***
*** <!---------------------------------------------------------------->
*** @see Ident
***
*** @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
*** <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
*** <BR> <A HREF="mailto:cocktail@hwy.de">Dr. Thomas M&uuml;ller</A>
*** @version $Id:  $
*** <!---------------------------------------------------------------->
**/

public class IdentTable implements java.io.Serializable {
    /** CVS version string. **/
    private static final java.lang.String cvsid = "$Id: $";

    /** The default initial size of the identifier table.
    ***  See also {@link #IdentTable(int)}.
    **/

    public static final int INITIAL_SIZE = 1024;

    /** Integer constant for end of list. **/
    private static final int NO_IDENT = 0;


    /**
    *** <code>Ident</code> representing no identifier.
    *** <P>
    **/
    public static Ident noIdent = new Ident(NO_IDENT, "", NO_IDENT);


    /** Create an identifier table with a specified initial size.
    *** The table will grow beyond this size on demand.
    *** <P>
    *** @param expectedIdentifiers
    ***             A reasonable estimate of the number of identifiers
    ***             to be handled, used to set the initial size of the table.
    **/

    public IdentTable(int expectedIdentifiers) {
        hashTable = new int[HASH_SIZE];
        for (int i = 0; i < hashTable.length; i++) hashTable[i] = NO_IDENT;
        identTable = new Ident[expectedIdentifiers];
        identCount = 0;
        identTable[0] = noIdent;
    }


    /** Create an identifier table with default initial size.
    *** The table will grow beyond this size on demand.
    *** <P>
    **/

    public IdentTable() {
        this(INITIAL_SIZE);
    }


    /** Size of the hash table.  This should be a power of 2.
    *** This is fixed so that we can use constants rather than variables in the hash
    *** calculation.
    **/

    private static final int HASH_SIZE = (1 << 8);

    /** Hash mask **/

    private static final int HASH_MASK = HASH_SIZE-1;


    /** Hash table. **/
    private int[] hashTable;

    /** Number of stored idents. **/
    private int identCount = 0;

    /** Table of all idents. **/
    private Ident[] identTable;

    /** Create an identifier from a given <code>String</code>,
    *** returning an <code>int</code> code.
    *** <P>
    *** The number returned is suitable for use as an index into a symbol table.  It is
    *** the same value as you would obtain by
    *** <BLOCKQUOTE><PRE>
    ***     int code;
    ***     Ident id;
    ***     id = ids.makeIdent("name");
    ***     code = id.value;
    *** </PRE></BLOCKQUOTE>
    *** <P>
    *** This interface is provided for use where symbol table lookups are frequent,
    *** and the removal of the overhead involved in saying <code>symbolTable[id.value]</code>
    *** instead of <code>symbolTable[code]</code> is more important than the loss in
    *** clarity and type safety.
    **/
    public int makeIdentCode(String s) {
        int hashTableIndex;
        int curIdent;
        int length = s.length();

        if (length == 0) {
            hashTableIndex = 0;
        } else {
            // We could use s.hashCode(), but the Sun implementation examines every
            // character in the string - this is faster and just as good.
            hashTableIndex = ((s.charAt(0)) + (s.charAt(length - 1)) * 11 + length * 26) & HASH_MASK;
        }

        curIdent = hashTable[hashTableIndex];  // search
        while (curIdent != NO_IDENT) {
            if ((identTable[curIdent].length == length) &&
                (identTable[curIdent].identifier.equals(s))) {
                return curIdent;
            }
            curIdent = identTable[curIdent].collision;
        }

        // not found: enter
        if (++identCount >= identTable.length) {
            identTable = (Ident[])DynArrayObject.extend(identTable);
        }
        identTable[identCount] =
            new Ident(identCount, s, hashTable[hashTableIndex]);
        hashTable[hashTableIndex] = identCount;
        return identCount;
    }


    /**
    *** Create an identifier from a given <code>String</code>, returning an
    *** {@link Ident} instance.
    *** <P>
    *** @param  s  The string form of the identifier.
    ***
    **/
    public Ident makeIdent(String s) {
        int curIdent;

        curIdent = makeIdentCode(s);
        return identTable[curIdent];
    }

    /**
    *** Create an identifier from a given StringBuffer, returning an
    *** {@link Ident} instance.
    *** <P>
    *** @param  s  The identifier in a <code>StringBuffer</code>.
    ***
    **/
    public Ident makeIdent(StringBuffer s) {
        return makeIdent(s.toString());
    }

    /**
    *** Create an identifier from a given StringBuffer, returning
    *** an <code>int</code> index.
    *** <P>
    *** @param  s  The identifier in a <code>StringBuffer</code>.
    **/
    public int makeIdentCode(StringBuffer s) {
        return makeIdentCode(s.toString());
    }

    /**
    *** Return the identifier with a given code.
    *** <P>
    *** @param   code  An integer identifier code, as obtained from
    ***                <code>makeIdentCode</code>
    *** <P>
    *** @exception IllegalArgumentException The code supplied is not one previously
    ***                obtained from this <code>IdentTable</code>
    **/
    public Ident getIdent(int code) {
        if (code < 0 || code > identCount) {
            throw new IllegalArgumentException("Invalid code " + code);
        }
        return identTable[code];
    }

    /**
    *** Return length of the used part of the identifier table.
    *** This can be used to create an array to be indexed with the identifier code.
    *** Index zero of the array would not normally be used as it corresponds to
    *** {@link #noIdent}.
    *** <P>
    *** @return Number of identifiers stored including 'no identifier'.
    **/
    public int length() {
        return identCount + 1;
    }

    /**
    *** Write all Idents and their codes to System.out for debugging purposes.
    *** The format is the same as {@link #writeAll(CocktailWriter)}.
    *** <P>
    **/
    public void writeAll() throws IOException {
        CocktailWriter out = new CocktailWriter(System.out);
        writeAll(out);
    }

    /**
    *** Write all Idents and their codes to a specified writer for debugging purposes.
    *** The output gives the index value and name of each identifier, one to a line.
    *** <P>
    **/
    public void writeAll(CocktailWriter out) throws IOException {
        for (int i = 1; i <= identCount; i++) {
            if (identTable[i] != null) {
                out.write(i, 6);
                out.write("\t" + identTable[i].identifier);
                out.writeNl();
            }
        }
        out.flush();
    }

}
