EXPORT {
# include "Position.h"
typedef struct { tPosition Position; } tScanAttribute;
# define xxGetWord
}

GLOBAL {
# define yyInitFileStackSize 0
}

DEFAULT {
   (void) printf ("%d, %d: illegal character: ",
      Attribute.Position.Line, Attribute.Position.Column);
   yyEcho;
   (void) printf ("\n");
}

DEFINE
   digit	= {0-9}		.
   letter	= {a-z A-Z}	.


RULE

"£" digit+
        : { yyEcho;
            (void) printf (" pounds\n");
            return 1;
          }

letter (letter | digit) *
        : { yyEcho;
            (void) printf (" identifier\n");
            return 2;
          }
