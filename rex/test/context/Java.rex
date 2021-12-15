/* Scanner to test various other feature, in particular generation of
   context3/4 code (see ScanGen.mi)
 */

IMPORT {
import de.cocolab.reuse.DynArrayByte;
import de.cocolab.reuse.DynArrayInt;
import de.cocolab.reuse.FatalError;
import de.cocolab.reuse.General;
import de.cocolab.reuse.Position;
import de.cocolab.reuse.HasPosition;
}

DEFINE
   digit	= {0-9}		.
   letter	= {a-z A-Z}	.

RULE

"number" digit + / letter * digit
	: { System.out.println("number-digit/letter " + getWord());
          }

digit + / letter * digit
        : { System.out.println("digit/letter " + getWord());
          }

letter | digit :- {}

