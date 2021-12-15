package minilax;

import de.cocolab.reuse.Global;
import java.io.*;

class Minilax {

    public static void main(String[] argv) throws java.io.IOException {
        int errorCount;
        Scanner scanner = new Scanner ();
        Parser parser = new Parser (scanner);

        Global.errors.storeMessages (true);
        if (argv.length > 0) scanner.beginFile (new FileInputStream (argv [0]));
        errorCount = parser.parse ();

        Semantic.eval (parser.treeRoot);

        if (errorCount == 0) {
            parser.treeRoot.Code ();
            //ICode.WriteCode ();
            ICode.Interpret ();
        }
        Global.errors.writeMessages (System.err);
    }
}
