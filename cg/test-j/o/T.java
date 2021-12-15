import de.cocolab.reuse.*;

class T {
  public static void main(String[] argv) throws java.io.IOException {
    Tree.R t;

    t = new Tree.R(new Tree.P1(), 42);
    ((Tree.P1)((Tree.R)t).F).F = new Tree.P1();
    ((Tree.P1)((Tree.R)t).F).n = 2;
    ((Tree.P1)((Tree.R)t).F).r = 3;
    ((Tree.P1)((Tree.P1)((Tree.R)t).F).F).n = 4;
    ((Tree.P1)((Tree.P1)((Tree.R)t).F).F).r = 5;
    ((Tree.P1)((Tree.P1)((Tree.R)t).F).F).F = ((Tree.R)t).F;
    Tree.writeNode(new de.cocolab.reuse.CocktailWriter(System.out, true), t);
  }
}
