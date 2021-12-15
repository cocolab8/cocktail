/* $Id: Ident.java,v 1.1.1.6.2.1 1999/06/18 07:39:56 howie Exp $ */

/*
 * $Log: Ident.java,v $
 * Revision 1.1.1.6.2.1  1999/06/18 07:39:56  howie
 * few cosmetic corrections, changed name of author, changed contents of javadoc @version tag
 * 
 * Revision 1.1.1.6  1999/06/17 08:00:58  howie
 * cron import
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

/**
*** A string interpreted as an Identifier.  Instances of this class are
*** obtained from {@link IdentTable}.  Within the scope of a particular
*** <code>IdentTable</code> object, if two strings are equal they will
*** be represented by the same <code>Ident</code> instance.  Thus,
*** equality may be tested with the <code>==</code> opertor rather than
*** the less efficient <code>equals</code>.
*** <P>
*** For the implementation of efficient symbol tables, each
*** <code>Ident</code> instance has an integer {@link #value} (or code) which
*** may be used as an array index.
*** <P>
***
*** <!---------------------------------------------------------------->
*** @see IdentTable
***
*** @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
*** <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
*** <BR> <A HREF="mailto:cocktail@hwy.de">Dr. Thomas M&uuml;ller</A>
*** @version $Id:  $
*** <!---------------------------------------------------------------->
**/

public class Ident implements java.io.Serializable {
    /** CVS version string. **/
    private static final java.lang.String cvsid = "$Id: Ident.java,v 1.1.1.6.2.1 1999/06/18 07:39:56 howie Exp $";

    /** Representation of the identifier, the same as index in IdentTable.
    *** Public for performance reasons; the value must not be changed.
    *** <P>
    **/
    public int value;

    /* Fields are package visible so they may be accessed by IdentTable */

    /** The string matching this identifier
    *** <P>
    **/
    String identifier;

    /** Length of string of this identifier.
    *** <P>
    **/
    int    length;

    /** Next ident in collision list.  See {@link IdentTable#makeIdent(String)}.
    *** <P>
    **/
    int    collision;

    /**
    *** Disallow default constructor.
    **/
    private Ident() {
    }

    /**
    *** Constructor visible only to package, i.e. IdentTable.
    *** <P>
    *** @param value   The value of this identifier (an index into
    ***                an array of all identifiers).
    ***
    *** @param identifier
    ***                The String representation of this identifier.
    ***
    *** @param collision
    ***                The value of the next identifier with the same
    ***                hash value.
    **/
    Ident(int value, String identifier, int collision) {
        this.value = value;
        this.identifier = identifier;
        this.length = identifier.length();
        this.collision = collision;
    }

    /**
    *** Return mutable string copy of Identifier.
    *** <P>
    *** @return   a <code>StringBuffer</code> set to the identifier
    **/
    public StringBuffer toStringBuffer() {
        return new StringBuffer(identifier);
    }

    /**
    *** Return String of identifier.
    *** <P>
    *** @return  a <code>String</code> set to the identifier
    **/
    public String toString() {
        return identifier;
    }

    /**
    *** Write string of Ident to a Writer.
    *** <P>
    **/
    public void write(java.io.Writer out) throws java.io.IOException {
        out.write(identifier);
    }

}
