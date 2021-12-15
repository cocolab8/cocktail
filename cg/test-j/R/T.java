// Should also check for NoTree.
// At least forall should be able to handle that.

import de.cocolab.reuse.CocktailWriter;

class T {

    public static Tree.Vertices make(int index) {
	if (index > 0) {
	    return new Tree.Vertex(index, make(index - 1));
	} else {
	    return new Tree.NoVertex();
	}
    }

    public static Tree.ProcTree print = new Tree.ProcTree() {
	public void proc(Tree t) {
	    if (t.yyKind () == Tree.kVertex) {
		System.out.println(((Tree.Vertex)t).index);
	    }
	}
    };

    public static void main(String[] argv) throws Throwable {
	Tree t;

	t = make (Integer.parseInt (argv[0]));
	System.out.println ("Testing list reverser...");
	System.out.println ("forward / static forall:");
	t.forall (print);
	Tree.write (new CocktailWriter (System.out), t);
	t = t.reverse ();
	System.out.println ("backward / dynamic forall:");
	Tree.forall (t, print);
	Tree.write (new CocktailWriter (System.out), t);
	System.out.println ("...done.");
    }
}
