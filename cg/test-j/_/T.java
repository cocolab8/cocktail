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
	Tree t = make(4);
	for (int i = 0; i < Tree.NodeNames.length; i++)
	    System.out.println(Tree.NodeNames[i]);
    }
}
