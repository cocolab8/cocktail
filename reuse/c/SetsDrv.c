/* $Id: SetsDrv.c,v 1.15 2008/09/12 14:14:04 grosch rel $ */

/*
 * $Log: SetsDrv.c,v $
 * Revision 1.15  2008/09/12 14:14:04  grosch
 * improved support for 64 bit machines (added rIntType.h)
 * removed type casts to (void)
 *
 * Revision 1.14  2000/04/10 16:02:32  grosch
 * cosmetic changes
 *
 * Revision 1.13  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.12  1995/05/09 13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.11  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.10  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.9  1993/08/20  08:12:15  grosch
 * calmed down lint
 *
 * Revision 1.8  1993/01/16  11:22:26  grosch
 * adaption to machines where int takes 2-bytes
 *
 * Revision 1.7  1992/09/24  13:03:56  grosch
 * adaption to MS-DOS
 *
 * Revision 1.6  1992/05/05  13:19:05  grosch
 * added rcsid
 *
 * Revision 1.5  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.4  90/09/20  09:12:27  grosch
 * calmed down lint
 * 
 * Revision 1.3  90/07/04  14:34:06  grosch
 * introduced conditional include
 * 
 * Revision 1.2  89/12/08  17:25:04  grosch
 * complete redesign in order to increase efficiency
 * 
 * Revision 1.1  89/01/09  17:29:45  grosch
 * added functions Size, Minimum, and Maximum
 * 
 * Revision 1.0  88/10/04  11:44:46  grosch
 * Initial revision
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

static char rcsid [] =
   "$Id: SetsDrv.c,v 1.15 2008/09/12 14:14:04 grosch rel $";

# include <stdio.h>
# include "Sets.h"

# define max		1000

static	tSet		s, t, u	;
static	long		i	;
static	FILE *		f	;

int main ARGS ((void))
{
   MakeSet (& s, max);
   MakeSet (& t, max);
   MakeSet (& u, max);

   for (i = 2; i <= max; i ++) { Include (& t, (short) i); }

   AssignEmpty (& s);
   AssignElmt (& s, 1);
   Assign (& u, & t);
   Union (& s, & t);

   AssignEmpty (& t);
   for (i = 0; i <= max; i += 2) { Include (& t, (short) i); }
   Difference (& s, & t);

   for (i = 0; i <= max; i += 3 ) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 5 ) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 7 ) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 11) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 13) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 17) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 19) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 23) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 29) { Exclude (& s, (short) i); }

   f = fopen ("t", "w");
   WriteSet (f, & s);
   fprintf (f, "\n");
   fclose (f);

   f = fopen ("t", "r");
   ReadSet (f, & t);
   fclose (f);

   WriteSet (stdout, & t);
   printf ("\n%5d%5d%5d\n", Size (& t), Minimum (& t), Maximum (& t));
   ReleaseSet (& s);
   ReleaseSet (& t);
   ReleaseSet (& u);

   MakeSet	(& s, 10);
   Include	(& s, 3);
   Include	(& s, 7);
   printf ("\nenter Size and Set like below! (Size=0 terminates)\n10 ");
   WriteSet	(stdout, & s);
   printf ("\n");
   ReleaseSet	(& s);

   for (;;) {
      printf ("\n");
      scanf ("%ld", & i);
      if (i == 0) break;
      MakeSet	(& s, (short) i);
      ReadSet	(stdin, & s);
      WriteSet	(stdout, & s);
      printf (" Card = %d\n", Card (& s));
      Complement(& s);
      WriteSet	(stdout, & s);
      printf (" Card = %d\n", Card (& s));
      ReleaseSet(& s);
   }
   return 0;
}
