package de.cocolab.test;
import de.cocolab.reuse.*;

class T {
  public static void main (String [] argv) throws java.io.IOException {
    myTree.R t;

    t = new myTree.R (new myTree.P1 (), 42);
    ((myTree.P1) ((myTree.R)t).F).F = new myTree.P1 ();
    ((myTree.P1) ((myTree.R)t).F).n = 2;
    ((myTree.P1) ((myTree.R)t).F).r = 3;
    ((myTree.P1) ((myTree.R)t).F).i = new Integer (4711);
    ((myTree.P1) ((myTree.P1) ((myTree.R)t).F).F).n = 4;
    ((myTree.P1) ((myTree.P1) ((myTree.R)t).F).F).r = 5;
    ((myTree.P1) ((myTree.P1) ((myTree.R)t).F).F).i = new Integer (815);
    ((myTree.P1) ((myTree.P1) ((myTree.R)t).F).F).F = ((myTree.R)t).F;

    myTree.writeNode (new de.cocolab.reuse.CocktailWriter (System.out, true),
      ((myTree.R)t).F);
    myTree.write (new de.cocolab.reuse.CocktailWriter (System.out, true), t);
  }
}
