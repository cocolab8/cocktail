import de.cocolab.reuse.CocktailWriter;
import de.cocolab.reuse.CocktailReader;
import trees.Tree.*;

class Main {

    public static void main (String [] argv) throws java.io.IOException {

        R t;
        CocktailReader in = new CocktailReader (System.in);
        CocktailWriter out = new CocktailWriter (System.out);

        do {
            int i = in.readI ();
            t = new R (new P1 (), i);
            Eval.eval (t);
            out.write (""+t.r+"\n");
            out.flush ();
        } while (t.n != 0);
    }
}
