class T {

    public static Tree.Vertex make(int level) {
	if (level > 0) {
	    return new Tree.Vertex(level, make(level - 1), make(level - 1));
	} else {
	    return null;
	}
    }

    public static void main(String[] argv) throws Throwable {
	Tree t;
	t = make(3);
	((Tree.Vertex)t).right = (Tree.Vertex)t;
	t.put ("tmp");
	Tree u = Tree.get ("tmp");
	Tree.write (new de.cocolab.reuse.CocktailWriter(System.out, true), u);
    }
}
