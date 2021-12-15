class T {

    static int index = 0;

    public static Tree.Vertex make(int level) {
	if (level > 0) {
	    return new Tree.Vertex(index++, level, make(level - 1), make(level - 1));
	} else {
	    return null;
	}
    }

    public static Tree.ProcTree print = new Tree.ProcTree() {
	public void proc(Tree t) {
	    if (t.yyKind () == Tree.kVertex) {
		System.out.println(((Tree.Vertex)t).index + " " + ((Tree.Vertex)t).level);
	    } else {
		System.out.println(t);
	    }
	}
    };

    public static void main(String[] argv) throws Throwable {
	Tree t;

	t = make(3);
	((Tree.Vertex)t).right = (Tree.Vertex)t;
	System.out.println("Top down");
	Tree.traverseTD(t, print);
	System.out.println("Bottom up");
	Tree.traverseBU(t, print);
    }
}
