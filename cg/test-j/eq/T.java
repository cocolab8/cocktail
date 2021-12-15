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
	boolean tmp;
	boolean result = true;
	Tree v;
	Tree t = make(3);
	index = 0;
	Tree u = make(3);
	result &= tmp = Tree.isEqual(Tree.NoTree, Tree.NoTree);
	if (!tmp) System.out.println("Comparing Tree.NoTree with itself failed.");
	result &= tmp = Tree.isEqual(t, t);
	if (!tmp) System.out.println("Comparing trees with itself failed.");
	result &= tmp = Tree.isEqual(t, u);
	if (!tmp) System.out.println("Comparing equal trees failed.");
	u = make(4);
	result &= tmp = !Tree.isEqual(t, u);
	if (!tmp) System.out.println("Comparing trees with different children failed.");
	result &= tmp = !Tree.isEqual(t, Tree.NoTree);
	if (!tmp) System.out.println("Comparing trees with Tree.NoTree failed.");
	index = 0;
	u = make(3);
	// prove the trees are equal before modifying one
	result &= tmp = Tree.isEqual(t, u);
	if (!tmp) System.out.println("Comparing equal trees (2) failed.");
	v = ((Tree.Vertex)u).right;
	((Tree.Vertex)v).index = -99;
	result &= tmp = !Tree.isEqual(t, u);
	if (!tmp) System.out.println("Comparing trees with different attributes failed.");
	if (result) System.out.println("All tests passed.");
	Runtime.getRuntime().exit(result ? 0 : 1);
    }
}
