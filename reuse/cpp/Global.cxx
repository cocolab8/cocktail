/* $Id: Global.c,v 1.11 1995/05/09 13:53:42 grosch rel $ */

/* $Log: Global.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, March 1996 */

static char rcsid [] =
   "$Id: Global.c,v 1.11 1995/05/09 13:53:42 grosch rel $";

# include "Global.h"

# if defined _MSC_VER
#  pragma warning (disable:4505 4514)
# endif

StringM	gStringM;
Idents	gIdents;
Errors	gErrors;
