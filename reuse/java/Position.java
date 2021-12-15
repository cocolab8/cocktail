/* $Id: Position.java$ */

/*
 * $Log: Position.java,v $
 * Revision 1.1.1.6  1999/06/22 18:00:28  howie
 * cron import
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Dec. 1999 */

package de.cocolab.reuse;

import de.cocolab.reuse.Comparable;
import java.io.IOException;
import java.io.StringWriter;

/**
*** Representation of positions consisting of line and column numbers.
*** <P>
*** Other ways of defining the origin of parsed tokens should be
*** implemented by subclassing this class.  For example you may require
*** to store a file name as well as line and column.
*** <P>
*** When inheriting from this class be sure to provide a sensible
*** implementation of {@link #compareTo(Object)} if you wish to use the
*** 'store' facility of {@link Errors}.
*** <P>
***
*** <!---------------------------------------------------------------->
***
*** @author <A HREF="mailto:tcn@melviag.co.uk">Trevor Nash</A>,
*** <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A>
*** <BR> <A HREF="mailto:cocktail@hwy.de">cocktail@hwy.de</A>
*** @version $Id: Position.java,v 1.1.1.6 1999/06/22 18:00:28 howie Exp $
*** <!---------------------------------------------------------------->
**/

public class Position implements Comparable, HasPosition, java.io.Serializable {

    /** CVS version string. **/
    private static final java.lang.String cvsid = "$Id: Position.java,v 1.1.1.6 1999/06/22 18:00:28 howie Exp $";

    /** Line number, first line = 1.
     *  @serial
     **/
    public int line;

    /** Column number, leftmost column = 1.
     *  @serial
     **/
    public int column;

    /**
    ***  A default position (0, 0).
    **/
    public static final Position NoPosition = new Position(0, 0);

    /**
    *** Create Position, values will be inserted later.
    **/
    public Position() {
    }

    /**
    *** Create Position with given line and column.
    **/
    public Position(int line, int column) {
        this.line	  = line;
        this.column	  = column;
    }

    /** Create Position by reading textual representation from <code>in</code>.
    **/
    public Position(CocktailReader in) throws IOException {
        line = in.readI();
        in.readC(); // comma
        column = in.readI();
    }

    /**
    *** Compare with another position.
    *** <P>
    *** Return -1 if Position1 < Position2.<BR>
    *** Return  0 if Position1 = Position2.<BR>
    *** Return  1 if Position1 > Position2.<BR>
    *** Comparison is in the sense of textual ordering: does this position
    *** occur earlier in the input than the other position?
    *** <P>
    *** @throws ClassCastException if the specified object's type is
    ***         not <code>Position</code>.
    **/
    public int compareTo(Object other) {
        Position position = (Position)other;
        if (line   < position.line)	return -1;
        if (line   > position.line)	return  1;
        if (column < position.column)	return -1;
        if (column > position.column)	return  1;
        return 0;
    }

    /**
    *** Return the source position of this object.
    *** <P>
    *** @return  <code>this</code>.  This may seem a bit pointless, but
    ***          consider the <code>rex</code> scanner code.  All tokens
    ***          have to have a <code>ScanAttribute</code> which at least
    ***          defines the original source code position of the token
    ***          for use in diagnostic messages.
    ***          Some tokens have additional information, for example
    ***          literals also have a value.  Having {@link Position} 
    ***          support {@link HasPosition} lets us use {@link Position}
    ***          directly for tokens such as punctuation which normally
    ***          have no other attributes.  Otherwise we would have to
    ***          wrap the position in yet another object.
    *** <P>
    **/
    public Position position() {
        return this;
    }

    /**
    *** Convert to textual representation.
    *** <P>
    **/
    public String toString() {
        StringWriter result = new StringWriter();
        CocktailWriter out = new CocktailWriter(result);

        try {
            write(out);
            out.flush();
        }
        catch (IOException e) {
            System.err.println(e);
            e.printStackTrace();
            throw new CocktailError("IO exception when writing into StringBuffer");
        }
        return result.toString();
    }

    /**
    *** Write textual representation to <TT>out</TT>.
    *** <P>
    *** @param  out  The destination to which the position is to be written.
    **/
    public void write(CocktailWriter out) throws IOException {
        out.write(line, 4);
        out.write(",");
        out.write(column, 3);
    }

} // class Position
