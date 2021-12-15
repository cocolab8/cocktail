/* Id: Sets.c,v 1.27 2000/04/18 16:34:40 grosch rel $ */

/*
 * Log: Sets.c,v $
 * Revision 1.27  2000/04/18 16:34:40  grosch
 * removed superfluous modulo operation
 *
 * Revision 1.26  2000/04/10 16:02:08  grosch
 * introduced ifdef HAVE_ARGS
 * tribute to MSVC++ 1.52
 *
 * Revision 1.25  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.24  1996/08/14 10:37:24  grosch
 * adaption to DLL's for Microsoft Visual C++
 *
 * Revision 1.23  1996/08/01  08:33:05  grosch
 * adaptions to MS Visual C++ 1.52
 *
 * Revision 1.22  1996/07/04  17:15:43  grosch
 * added function ResizeSet
 *
 * Revision 1.21  1996/06/05  12:00:48  grosch
 * adaption to MS VC++
 *
 * Revision 1.20  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.19  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.18  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.17  1994/07/21  21:08:52  grosch
 * changed element type from cardinal to int
 *
 * Revision 1.16  1994/07/05  21:09:16  grosch
 * adaption to 64 bit machines like DEC Alpha
 *
 * Revision 1.15  1994/07/03  11:22:39  grosch
 * adaption to 64 bit machines like DEC Alpha
 *
 * Revision 1.14  1994/04/05  09:00:35  grosch
 * added prefix 'r' to true and false for improved portability
 *
 * Revision 1.13  1994/01/29  22:13:50  grosch
 * renamed bool to rbool
 *
 * Revision 1.12  1993/08/20  08:12:15  grosch
 * calmed down lint
 *
 * Revision 1.11  1993/01/16  11:22:26  grosch
 * adaption to machines where int takes 2-bytes
 *
 * Revision 1.10  1992/05/05  13:19:05  grosch
 * added rcsid
 *
 * Revision 1.9  1992/03/30  09:53:37  grosch
 * fixed bug in IsSubset: removed operator !
 *
 * Revision 1.8  1992/02/06  09:29:54  grosch
 * fixed bug: stdio and ANSI C
 *
 * Revision 1.7  1992/01/31  16:31:44  grosch
 * adaption to ANSI C
 *
 * Revision 1.6  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.5  91/07/17  17:23:36  grosch
 * introduced ARGS trick for ANSI compatibility
 *
 * Revision 1.4  90/09/20  09:12:25  grosch
 * calmed down lint
 *
 * Revision 1.3  90/07/04  14:34:02  grosch
 * introduced conditional include
 *
 * Revision 1.2  89/12/08  17:25:01  grosch
 * complete redesign in order to increase efficiency
 *
 * Revision 1.1  89/01/09  17:29:23  grosch
 * added functions Size, Minimum, and Maximum
 *
 * Revision 1.0  88/10/04  11:44:44  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

static char rcsid [] =
   "Id: Sets.c,v 1.27 2000/04/18 16:34:40 grosch rel $";

# include "Sets.h"
# include <stdio.h>
# include "DynArray.h"
# include "General.h"

# define NoCard		-1

# ifdef PCS10
#  define CALL(f)	(* f)
# else
#  define CALL(f)	f
# endif

void MakeSet
# ifdef HAVE_ARGS
   (tSet * Set, int MaxSize)
# else
   (Set, MaxSize) tSet * Set; int MaxSize;
# endif
   {
      unsigned long ElmtCount = (MaxSize + BitsPerBitset) / BitsPerBitset;
      MakeArray ((char * *) & Set->BitsetPtr, & ElmtCount,
		    (unsigned long) sizeof (BITSET));
      Set->MaxElmt = MaxSize;
      Set->LastBitset = (int) ElmtCount - 1;
      AssignEmpty (Set);
   }

void ResizeSet
# ifdef HAVE_ARGS
   (tSet * Set, int MaxSize)
# else
   (Set, MaxSize) tSet * Set; int MaxSize;
# endif
   {
      BITSET *		OldBitsetPtr	= Set->BitsetPtr;
      int		OldLastBitset	= Set->LastBitset;
      unsigned long	ElmtCount = (MaxSize + BitsPerBitset) / BitsPerBitset;
      register int	i, j;

      MakeArray ((char * *) & Set->BitsetPtr, & ElmtCount,
		    (unsigned long) sizeof (BITSET));
      if (Set->BitsetPtr == NULL) { Set->MaxElmt = 0; return; }
      Set->MaxElmt = MaxSize;
      Set->LastBitset = (int) ElmtCount - 1;
      j = Min (Set->LastBitset, OldLastBitset);
      for (i = 0; i <= j; i ++)
	 Set->BitsetPtr [i] = OldBitsetPtr [i];
      for (; i <= Set->LastBitset; i ++)
	 Set->BitsetPtr [i] = 0;
      ElmtCount = OldLastBitset + 1;
      ReleaseArray ((char * *) & OldBitsetPtr, & ElmtCount,
			(unsigned long) sizeof (BITSET));
   }

void ReleaseSet
# ifdef HAVE_ARGS
   (tSet * Set)
# else
   (Set) tSet * Set;
# endif
   {
      unsigned long	ElmtCount = Set->LastBitset + 1;
      ReleaseArray ((char * *) & Set->BitsetPtr, & ElmtCount,
			(unsigned long) sizeof (BITSET));
   }

void Union
# ifdef HAVE_ARGS
   (tSet * Set1, tSet * Set2)
# else
   (Set1, Set2) tSet * Set1; tSet * Set2;
# endif
   {
      register tSet *	rSet1	= Set1;
      register int	i	= rSet1->LastBitset + 1;
      register BITSET *	s1	= rSet1->BitsetPtr;
      register BITSET *	s2	= Set2->BitsetPtr;
      register tSet *	rSet2	= Set2;

      do { * s1 ++ |= * s2 ++; i --; } while (i);
      rSet1->Card      = NoCard;
      rSet1->FirstElmt = Min (rSet1->FirstElmt, rSet2->FirstElmt);
      rSet1->LastElmt  = Max (rSet1->LastElmt , rSet2->LastElmt );
   }

void Difference
# ifdef HAVE_ARGS
   (tSet * Set1, tSet * Set2)
# else
   (Set1, Set2) tSet * Set1; tSet * Set2;
# endif
   {
      register tSet *	rSet1	= Set1;
      register int	i	= rSet1->LastBitset + 1;
      register BITSET *	s1	= rSet1->BitsetPtr;
      register BITSET *	s2	= Set2->BitsetPtr;

      do { * s1 ++ &= ~ * s2 ++; i --; } while (i);
      rSet1->Card = NoCard;
   }

void Intersection
# ifdef HAVE_ARGS
   (tSet * Set1, tSet * Set2)
# else
   (Set1, Set2) tSet * Set1; tSet * Set2;
# endif
   {
      register tSet *	rSet1	= Set1;
      register int	i	= rSet1->LastBitset + 1;
      register BITSET *	s1	= rSet1->BitsetPtr;
      register BITSET *	s2	= Set2->BitsetPtr;
      register tSet *	rSet2	= Set2;

      do { * s1 ++ &= * s2 ++; i --; } while (i);
      rSet1->Card      = NoCard;
      rSet1->FirstElmt = Max (rSet1->FirstElmt, rSet2->FirstElmt);
      rSet1->LastElmt  = Min (rSet1->LastElmt , rSet2->LastElmt);
   }

void SymDiff
# ifdef HAVE_ARGS
   (tSet * Set1, tSet * Set2)
# else
   (Set1, Set2) tSet * Set1; tSet * Set2;
# endif
   {
      register tSet *	rSet1	= Set1;
      register int	i	= rSet1->LastBitset + 1;
      register BITSET *	s1	= rSet1->BitsetPtr;
      register BITSET *	s2	= Set2->BitsetPtr;
      register tSet *	rSet2	= Set2;

      do { * s1 ++ ^= * s2 ++; i --; } while (i);
      rSet1->Card      = NoCard;
      rSet1->FirstElmt = Min (rSet1->FirstElmt, rSet2->FirstElmt);
      rSet1->LastElmt  = Max (rSet1->LastElmt , rSet2->LastElmt);
   }

void Complement
# ifdef HAVE_ARGS
   (tSet * Set)
# else
   (Set) tSet * Set;
# endif
   {
      register tSet *	rSet	= Set;
      register int	i	= rSet->LastBitset;
      register BITSET *	s1	= rSet->BitsetPtr;

      while (i) { * s1 = ~ * s1; s1 ++; i --; }
      * s1 = (((BITSET) 2 << (rSet->MaxElmt & MaskBitsPerBitset)) - 1) & ~ * s1;
      if (rSet->Card != NoCard)
	 rSet->Card = (int) rSet->MaxElmt + 1 - rSet->Card;
      rSet->FirstElmt = 0;
      rSet->LastElmt  = rSet->MaxElmt;
   }

void Include
# ifdef HAVE_ARGS
   (tSet * Set, int Elmt)
# else
   (Set, Elmt) tSet * Set; int Elmt;
# endif
   {
      register tSet *	rSet	= Set;
      register int	rElmt	= Elmt;

      rSet->BitsetPtr [rElmt / BitsPerBitset] |=
	 (BITSET) 1 << (rElmt & MaskBitsPerBitset);
      rSet->Card      = NoCard;
      rSet->FirstElmt = Min (rSet->FirstElmt, rElmt);
      rSet->LastElmt  = Max (rSet->LastElmt , rElmt);
   }

void Exclude
# ifdef HAVE_ARGS
   (tSet * Set, int Elmt)
# else
   (Set, Elmt) tSet * Set; int Elmt;
# endif
   {
      register tSet *	rSet	= Set;
      register int	rElmt	= Elmt;

      rSet->BitsetPtr [rElmt / BitsPerBitset] &=
	 ~ ((BITSET) 1 << (rElmt & MaskBitsPerBitset));
      rSet->Card = NoCard;
      if (rElmt == rSet->FirstElmt && rElmt < rSet->MaxElmt) rSet->FirstElmt ++;
      if (rElmt == rSet->LastElmt && rElmt > 0) rSet->LastElmt --;
   }

int Card
# ifdef HAVE_ARGS
   (tSet * Set)
# else
   (Set) tSet * Set;
# endif
   {
      register tSet * rSet = Set;

      if (rSet->Card == NoCard) {
	 register int i, n;
	 register int last = rSet->LastElmt;

	 n = 0;
	 for (i = rSet->FirstElmt; i <= last; i ++) {
	    if (IsElement (i, rSet)) n ++;
	 }
	 rSet->Card = n;
      }
      return rSet->Card;
   }

int Minimum
# ifdef HAVE_ARGS
   (tSet * Set)
# else
   (Set) tSet * Set;
# endif
   {
      register tSet *	rSet	= Set;
      register int	i;
      register int	last	= rSet->LastElmt;

      for (i = rSet->FirstElmt; i <= last; i ++) {
	 if (IsElement (i, rSet)) {
	    rSet->FirstElmt = i;
	    return i;
	 }
      }
      return 0;
   }

int Maximum
# ifdef HAVE_ARGS
   (tSet * Set)
# else
   (Set) tSet * Set;
# endif
   {
      register tSet *	rSet	= Set;
      register int	i;
      register int	first	= rSet->FirstElmt;

      for (i = rSet->LastElmt; i >= first; i --) {
	 if (IsElement (i, rSet)) {
	    rSet->LastElmt = i;
	    return i;
	 }
      }
      return 0;
   }

int Extract
# ifdef HAVE_ARGS
   (tSet * Set)
# else
   (Set) tSet * Set;
# endif
   {
      register int i = Minimum (Set);
      Exclude (Set, i);
      return i;
   }

rbool IsSubset
# ifdef HAVE_ARGS
   (tSet * Set1, tSet * Set2)
# else
   (Set1, Set2) tSet * Set1; tSet * Set2;
# endif
   {
      register tSet *	rSet1	= Set1;
      register int	i	= rSet1->LastBitset + 1;
      register BITSET *	s1	= rSet1->BitsetPtr;
      register BITSET *	s2	= Set2->BitsetPtr;

      do {
	 if (* s1 ++ & ~ * s2 ++) return rfalse; i --;
      } while (i);
      return rtrue;
   }

rbool IsEqual
# ifdef HAVE_ARGS
   (tSet * Set1, tSet * Set2)
# else
   (Set1, Set2) tSet * Set1; tSet * Set2;
# endif
   {
      register tSet *	rSet1	= Set1;
      register int	i	= rSet1->LastBitset + 1;
      register BITSET *	s1	= rSet1->BitsetPtr;
      register BITSET *	s2	= Set2->BitsetPtr;

      do {
	 if (* s1 ++ != * s2 ++) return rfalse; i --;
      } while (i);
      return rtrue;
   }

rbool IsEmpty
# ifdef HAVE_ARGS
   (tSet * Set)
# else
   (Set) tSet * Set;
# endif
   {
      register tSet * rSet = Set;

      if (rSet->FirstElmt <= rSet->LastElmt) {
	 register int i  = rSet->LastBitset + 1;
	 register BITSET * s1 = rSet->BitsetPtr;

	 do {
	    if (* s1 ++ != 0) return rfalse; i --;
	 } while (i);
      }
      return rtrue;
   }

rbool Forall
# ifdef HAVE_ARGS
   (tSet * Set, rbool (* Proc) (int))
# else
   (Set, Proc) tSet * Set; rbool (* Proc) ();
# endif
   {
      register tSet *	rSet	= Set;
      register int	i;
      register int	last	= rSet->LastElmt;

      for (i = rSet->FirstElmt; i <= last; i ++) {
	 if (IsElement (i, rSet) && ! CALL(Proc) (i)) return rfalse;
      }
      return rtrue;
   }

rbool Exists
# ifdef HAVE_ARGS
   (tSet * Set, rbool (* Proc) (int))
# else
   (Set, Proc) tSet * Set; rbool (* Proc) ();
# endif
   {
      register tSet *	rSet	= Set;
      register int	i;
      register int	last	= rSet->LastElmt;

      for (i = rSet->FirstElmt; i <= last; i ++) {
	 if (IsElement (i, rSet) && CALL(Proc) (i)) return rtrue;
      }
      return rfalse;
   }

rbool Exists1
# ifdef HAVE_ARGS
   (tSet * Set, rbool (* Proc) (int))
# else
   (Set, Proc) tSet * Set; rbool (* Proc) ();
# endif
   {
      register tSet *	rSet	= Set;
      register int	i, n;
      register int	last	= rSet->LastElmt;

      n = 0;
      for (i = rSet->FirstElmt; i <= last; i ++) {
	 if (IsElement (i, rSet) && CALL(Proc) (i)) n ++;
      }
      return (rbool) (n == 1);
   }

void Assign
# ifdef HAVE_ARGS
   (tSet * Set1, tSet * Set2)
# else
   (Set1, Set2) tSet * Set1; tSet * Set2;
# endif
   {
      register tSet *	rSet1	= Set1;
      register int	i	= rSet1->LastBitset + 1;
      register BITSET *	s1	= rSet1->BitsetPtr;
      register BITSET *	s2	= Set2->BitsetPtr;
      register tSet *	rSet2	= Set2;

      do { * s1 ++ = * s2 ++; i --; } while (i);
      rSet1->Card      = rSet2->Card;
      rSet1->FirstElmt = rSet2->FirstElmt;
      rSet1->LastElmt  = rSet2->LastElmt;
   }

void AssignElmt
# ifdef HAVE_ARGS
   (tSet * Set, int Elmt)
# else
   (Set, Elmt) tSet * Set; int Elmt;
# endif
   {
      register tSet *	rSet	= Set;
      register int	rElmt	= Elmt;

      AssignEmpty (rSet);
      Include (rSet, rElmt);
      rSet->Card      = 1;
      rSet->FirstElmt = rElmt;
      rSet->LastElmt  = rElmt;
   }

void AssignEmpty
# ifdef HAVE_ARGS
   (tSet * Set)
# else
   (Set) tSet * Set;
# endif
   {
      register tSet *	rSet	= Set;
      register int	i	= rSet->LastBitset + 1;
      register BITSET *	s1	= rSet->BitsetPtr;

      do { * s1 ++ = 0; i --; } while (i);
      rSet->Card      = 0;
      rSet->FirstElmt = rSet->MaxElmt;
      rSet->LastElmt  = 0;
   }

void ForallDo
# ifdef HAVE_ARGS
   (tSet * Set, void (* Proc) (int))
# else
   (Set, Proc) tSet * Set; void (* Proc) ();
# endif
   {
      register tSet *	rSet	= Set;
      register int	i;
      register int	last	= rSet->LastElmt;

      for (i = rSet->FirstElmt; i <= last; i ++) {
	 if (IsElement (i, rSet)) CALL(Proc) (i);
      }
   }

void ReadSet
# ifdef HAVE_ARGS
   (FILE * File, tSet * Set)
# else
   (File, Set) FILE * File; tSet * Set;
# endif
   {
      register tSet * rSet = Set;
      int card = 0;

      while (fgetc (File) != '{');
      AssignEmpty (rSet);
# ifndef _USRDLL
      for (;;) {
	 long i;
	 if (fgetc (File) == '}') break;
	 fscanf (File, "%ld", & i);
	 Include (rSet, (int) i);
	 card ++;
      }
# endif
      rSet->Card = card;
   }

static FILE * g;

void PrintElmt
# ifdef HAVE_ARGS
   (int Elmt)
# else
   (Elmt) int Elmt;
# endif
   {
      fprintf (g, " %d", Elmt);
   }

void WriteSet
# ifdef HAVE_ARGS
   (FILE * File, tSet * Set)
# else
   (File, Set) FILE * File; tSet * Set;
# endif
   {
      g = File;
      fprintf (File, "{");
      ForallDo (Set, PrintElmt);
      fprintf (File, "}");
   }

void InitSets ARGS ((void))
   {
   }
