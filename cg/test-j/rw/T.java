class T {

    public static Tree.Vertex make(int level) {
	if (level > 0) {
	    return new Tree.Vertex(level, make(level - 1), make(level - 1));
	} else {
	    return null;
	}
    }

    public static void main(String[] argv) throws java.io.IOException {
	Tree t;
	java.io.FileOutputStream out = new java.io.FileOutputStream("tmp");
	java.io.FileInputStream in = new java.io.FileInputStream("tmp");
	t = make(3);
	((Tree.Vertex)t).right = (Tree.Vertex)t;
	//((Tree.Vertex)t).left = (Tree.Vertex)t;
	Tree.write (new de.cocolab.reuse.CocktailWriter(out, true), t);
	out.close();

	t = Tree.read (new de.cocolab.reuse.CocktailReader(in));
	Tree.write (new de.cocolab.reuse.CocktailWriter(System.out, true), t);
    }
}
