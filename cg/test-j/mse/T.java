import de.cocolab.reuse.CocktailWriter;
import de.cocolab.reuse.CocktailReader;
import de.cocolab.reuse.Global;
import de.cocolab.reuse.Ident;
import de.cocolab.reuse.Position;
import de.cocolab.reuse.MaskedException;
import java.io.FileReader;
import java.io.FileWriter;
import trees.Tree;
import trees.Tree.*;

class T {

    static boolean query = false;

    public static void main(String[] argv) throws java.io.IOException, java.lang.ClassNotFoundException {

	if (argv.length > 0 && argv[0].equals ("q")) query = true;

	Tree t = new E1 (1, 2, new IntThing (3),
		new E2 (10, 11, null,
			new None (21, 22, new IntThing (9), 23),
			14, 15, new IntThing (90), new Thing () ),
		4, 5);

	if (t.check ()) System.out.println ("CheckTree 1 should fail");

	Tree u = (Tree)t.clone();
	if (u.check ()) System.out.println ("CheckTree 2 should fail");
        Tree r;
	Thing t1, t2, t3, t4;
	List last;
	final CocktailWriter out = new CocktailWriter (System.out, true);

	out.write ("Tree u\n");
	Tree.write (out, u);
        Tree.write (new CocktailWriter (new FileWriter ("temp"), true), u);
        r = Tree.read (new CocktailReader (new FileReader ("temp")));
	r.put ("bin");
	r = Tree.get ("bin");
	out.write ("Tree r\n");
	Tree.write (out, r);

	if (query) {
	   System.out.println ("Tree r");
	   Tree.query (r);
	}

	t1 = new IntThing (901);
	t2 = new IdThing (Global.idents.makeIdent ("t2"));
	t3 = new IdThing (Global.idents.makeIdent ("t3"));
	t4 = new PosThing (new Position (81, 2));

	last = new List (31, 32, t1);
	t = new E1 (81, 82, t2,
		new E2 (810, 811, null,
			last,
			814, 815, t3, t4 ),
		84, 85);
	if (t.check ()) System.out.println ("CheckTree 3 should fail");
	u = (Tree)t.clone();
	out.write ("Tree u cloned\n");
	Tree.write (out, u);
        Tree.write (new CocktailWriter (new FileWriter ("temp2"), true), u);
        r = Tree.read (new CocktailReader (new FileReader ("temp2")));
	r.put ("bin2");
	r = Tree.get ("bin2");
	out.write ("Tree r 2\n");
	Tree.write (out, r);

	if (query) {
	   System.out.println ("Tree r 2");
	   Tree.query (r);
	}

	out.write ("Traverse TD\n");
	try {
	   r.traverseTD (new Tree.ProcTree () {
		public void proc (Tree yyt) {
			try {yyt.identify (out);}
			catch (java.io.IOException e) {throw new MaskedException (e);}
		} });
	} catch (MaskedException e) {
		throw (java.io.IOException)(e.exception);
	}

	out.write ("Traverse BU\n");
	try {
	   r.traverseBU (new Tree.ProcTree () {
		public void proc (Tree yyt) {
			try {yyt.identify (out);}
			catch (java.io.IOException e) {throw new MaskedException (e);}
		} });
	} catch (MaskedException e) {
		throw (java.io.IOException)(e.exception);
	}

	Thing aThing = new IntThing (1000);
	List aNone = new None (-1, 912, aThing, 913);
        None end = new None (0, 92, aThing, 93);
        Element first = new Element (1, 95, aThing, end, 96);
        Item1 second = new Item1 (2, 97, aThing, aNone, first, end);
        Item2 third = new Item2 (3, 98, aThing, aNone, aNone, second);
        E2 fourth = new E2 (4, 99, aThing, third, 910, 911, aThing, aThing);

	out.write ("Reverse of:\n");
        fourth.write (out);
        Tree l = fourth.reverse ();
	if (!l.check ()) System.out.println ("CheckTree 4 should succeed");
	out.write ("is Reversed\n");
        l.write (out);
	try {
	   l.forall (new Tree.ProcTree () {
		public void proc (Tree yyt) {
			try {yyt.identify (out);}
			catch (java.io.IOException e) {throw new MaskedException (e);}
		} });
	} catch (MaskedException e) {
		throw (java.io.IOException)(e.exception);
	}

	out.write ("Reverse with null\n");
	third.AllNext = null;
	l = l.reverse ();
	try {
	   l.forall (new Tree.ProcTree () {
		public void proc (Tree yyt) {
			try {yyt.identify (out);}
			catch (java.io.IOException e) {throw new MaskedException (e);}
		} });
	} catch (MaskedException e) {
		throw (java.io.IOException)(e.exception);
	}

    }
}
