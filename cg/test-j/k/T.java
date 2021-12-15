class T {

    static int index = 0;

    public static Tree.Vertex make(int level) {
	if (level > 0) {
	    return new Tree.Vertex(index++, level, make(level - 1), make(level - 1));
	} else {
	    return null;
	}
    }

    public static void main(String[] argv) throws Throwable {
	Tree t = make(3);
	((Tree.Vertex)t).right = (Tree.Vertex)t;
	if (Tree.check (t)) {
	   System.out.println("check 1 succeeded");
	} else {
	   System.out.println("check 1 failed");
	}
    }
}
