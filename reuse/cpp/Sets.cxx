/* $Id: Sets.c,v 1.20 1995/05/09 13:53:42 grosch rel $ */

/* $Log: Sets.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995 */

static char rcsid [] =
   "$Id: Sets.c,v 1.20 1995/05/09 13:53:42 grosch rel $";

# include "ratc.h"
# include "Sets.h"
# include "DynArray.h"
# include "General.h"

# define NoCard		-1

# ifdef PCS10
# define CALL(f)	(* f)
# else
# define CALL(f)	f
# endif

void MakeSet (tSet * Set, int MaxSize)
{
   unsigned long ElmtCount = (MaxSize + BitsPerBitset) / BitsPerBitset;
   MakeArray ((char * *) & Set->BitsetPtr, & ElmtCount,
		 (unsigned long) sizeof (BITSET));
   Set->MaxElmt = MaxSize;
   Set->LastBitset = (int) ElmtCount - 1;
   AssignEmpty (Set);
}

void ResizeSet (tSet * Set, int MaxSize)
{
   BITSET *		OldBitsetPtr	= Set->BitsetPtr;
   int			OldLastBitset	= Set->LastBitset;
   unsigned long	ElmtCount = (MaxSize + BitsPerBitset) / BitsPerBitset;
   register int		i, j		;

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

void ReleaseSet (tSet * Set)
{
   unsigned long ElmtCount = Set->LastBitset + 1;
   ReleaseArray ((char * *) & Set->BitsetPtr, & ElmtCount,
		     (unsigned long) sizeof (BITSET));
}

void Union (tSet * Set1, tSet * Set2)
{
   register tSet *	rSet1	= Set1;
   register int		i	= rSet1->LastBitset + 1;
   register BITSET *	s1	= rSet1->BitsetPtr;
   register BITSET *	s2	= Set2->BitsetPtr;
   register tSet *	rSet2	= Set2;

   do { * s1 ++ |= * s2 ++; i --; } while (i);
   rSet1->Card      = NoCard;
   rSet1->FirstElmt = Min (rSet1->FirstElmt, rSet2->FirstElmt);
   rSet1->LastElmt  = Max (rSet1->LastElmt , rSet2->LastElmt );
}

void Difference (tSet * Set1, tSet * Set2)
{
   register tSet *	rSet1	= Set1;
   register int		i	= rSet1->LastBitset + 1;
   register BITSET *	s1	= rSet1->BitsetPtr;
   register BITSET *	s2	= Set2->BitsetPtr;

   do { * s1 ++ &= ~ * s2 ++; i --; } while (i);
   rSet1->Card = NoCard;
}

void Intersection (tSet * Set1, tSet * Set2)
{
   register tSet *	rSet1	= Set1;
   register int		i	= rSet1->LastBitset + 1;
   register BITSET *	s1	= rSet1->BitsetPtr;
   register BITSET *	s2	= Set2->BitsetPtr;
   register tSet *	rSet2	= Set2;

   do { * s1 ++ &= * s2 ++; i --; } while (i);
   rSet1->Card      = NoCard;
   rSet1->FirstElmt = Max (rSet1->FirstElmt, rSet2->FirstElmt);
   rSet1->LastElmt  = Min (rSet1->LastElmt , rSet2->LastElmt);
}

void SymDiff (tSet * Set1, tSet * Set2)
{
   register tSet *	rSet1	= Set1;
   register int		i	= rSet1->LastBitset + 1;
   register BITSET *	s1	= rSet1->BitsetPtr;
   register BITSET *	s2	= Set2->BitsetPtr;
   register tSet *	rSet2	= Set2;

   do { * s1 ++ ^= * s2 ++; i --; } while (i);
   rSet1->Card      = NoCard;
   rSet1->FirstElmt = Min (rSet1->FirstElmt, rSet2->FirstElmt);
   rSet1->LastElmt  = Max (rSet1->LastElmt , rSet2->LastElmt);
}

void Complement (tSet * Set)
{
   register tSet *	rSet	= Set;
   register int		i	= rSet->LastBitset;
   register BITSET *	s1	= rSet->BitsetPtr;

   while (i) { * s1 = ~ * s1; s1 ++; i --; }
   * s1 = ((2L << (rSet->MaxElmt & MaskBitsPerBitset)) - 1) & ~ * s1;
   if (rSet->Card != NoCard)
      rSet->Card = (int) rSet->MaxElmt + 1 - rSet->Card;
   rSet->FirstElmt = 0;
   rSet->LastElmt  = rSet->MaxElmt;
}

void Include (tSet * Set, int Elmt)
{
   register tSet *	rSet	= Set;
   register int		rElmt	= Elmt;

   rSet->BitsetPtr [rElmt / BitsPerBitset] |=
      1L << (rElmt & MaskBitsPerBitset);
   rSet->Card      = NoCard;
   rSet->FirstElmt = Min (rSet->FirstElmt, rElmt);
   rSet->LastElmt  = Max (rSet->LastElmt , rElmt);
}

void Exclude (tSet * Set, int Elmt)
{
   register tSet *	rSet	= Set;
   register int		rElmt	= Elmt;

   rSet->BitsetPtr [rElmt / BitsPerBitset] &=
      ~ (1L << (rElmt & MaskBitsPerBitset));
   rSet->Card = NoCard;
   if (rElmt == rSet->FirstElmt && rElmt < rSet->MaxElmt) rSet->FirstElmt ++;
   if (rElmt == rSet->LastElmt && rElmt > 0) rSet->LastElmt --;
}

int Card (tSet * Set)
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

int Size (tSet * Set)
{
   return Set->MaxElmt;
}

int Minimum (tSet * Set)
{
   register tSet *	rSet	= Set;
   register int		i;
   register int		last	= rSet->LastElmt;

   for (i = rSet->FirstElmt; i <= last; i ++) {
      if (IsElement (i, rSet)) {
	 rSet->FirstElmt = i;
	 return i;
      }
   }
   return 0;
}

int Maximum (tSet * Set)
{
   register tSet *	rSet	= Set;
   register int		i;
   register int		first	= rSet->FirstElmt;

   for (i = rSet->LastElmt; i >= first; i --) {
      if (IsElement (i, rSet)) {
	 rSet->LastElmt = i;
	 return i;
      }
   }
   return 0;
}

int Select (tSet * Set)
{
   return Minimum (Set);
}

int Extract (tSet * Set)
{
   register int i = Minimum (Set);
   Exclude (Set, i);
   return i;
}

rbool IsSubset (tSet * Set1, tSet * Set2)
{
   register tSet *	rSet1	= Set1;
   register int		i	= rSet1->LastBitset + 1;
   register BITSET *	s1	= rSet1->BitsetPtr;
   register BITSET *	s2	= Set2->BitsetPtr;

   do {
      if (* s1 ++ & ~ * s2 ++) return rfalse; i --;
   } while (i);
   return rtrue;
}

rbool IsEqual (tSet * Set1, tSet * Set2)
{
   register tSet *	rSet1	= Set1;
   register int		i	= rSet1->LastBitset + 1;
   register BITSET *	s1	= rSet1->BitsetPtr;
   register BITSET *	s2	= Set2->BitsetPtr;

   do {
      if (* s1 ++ != * s2 ++) return rfalse; i --;
   } while (i);
   return rtrue;
}

rbool IsEmpty (tSet * Set)
{
   register tSet * rSet = Set;

   if (rSet->FirstElmt <= rSet->LastElmt) {
      register int i = rSet->LastBitset + 1;
      register BITSET * s1 = rSet->BitsetPtr;

      do {
	 if (* s1 ++ != 0) return rfalse; i --;
      } while (i);
   }
   return rtrue;
}

rbool Forall (tSet * Set, rbool (* Proc) (int))
{
   register tSet *	rSet	= Set;
   register int		i;
   register int		last	= rSet->LastElmt;

   for (i = rSet->FirstElmt; i <= last; i ++) {
      if (IsElement (i, rSet) && ! CALL(Proc) (i)) return rfalse;
   }
   return rtrue;
}

rbool Exists (tSet * Set, rbool (* Proc) (int))
{
   register tSet *	rSet	= Set;
   register int		i;
   register int		last	= rSet->LastElmt;

   for (i = rSet->FirstElmt; i <= last; i ++) {
      if (IsElement (i, rSet) && CALL(Proc) (i)) return rtrue;
   }
   return rfalse;
}

rbool Exists1 (tSet * Set, rbool (* Proc) (int))
{
   register tSet *	rSet	= Set;
   register int		i, n;
   register int		last	= rSet->LastElmt;

   n = 0;
   for (i = rSet->FirstElmt; i <= last; i ++) {
      if (IsElement (i, rSet) && CALL(Proc) (i)) n ++;
   }
   return (rbool) (n == 1);
}

void Assign (tSet * Set1, tSet * Set2)
{
   register tSet *	rSet1	= Set1;
   register int		i	= rSet1->LastBitset + 1;
   register BITSET *	s1	= rSet1->BitsetPtr;
   register BITSET *	s2	= Set2->BitsetPtr;
   register tSet *	rSet2	= Set2;

   do { * s1 ++ = * s2 ++; i --; } while (i);
   rSet1->Card      = rSet2->Card;
   rSet1->FirstElmt = rSet2->FirstElmt;
   rSet1->LastElmt  = rSet2->LastElmt;
}

void AssignElmt (tSet * Set, int Elmt)
{
   register tSet *	rSet	= Set;
   register int		rElmt	= Elmt;

   AssignEmpty (rSet);
   Include (rSet, rElmt);
   rSet->Card      = 1;
   rSet->FirstElmt = rElmt;
   rSet->LastElmt  = rElmt;
}

void AssignEmpty (tSet * Set)
{
   register tSet *	rSet	= Set;
   register int		i	= rSet->LastBitset + 1;
   register BITSET *	s1	= rSet->BitsetPtr;

   do { * s1 ++ = 0; i --; } while (i);
   rSet->Card      = 0;
   rSet->FirstElmt = rSet->MaxElmt;
   rSet->LastElmt  = 0;
}

void ForallDo (tSet * Set, void (* Proc) (int))
{
   register tSet *	rSet	= Set;
   register int		i;
   register int		last	= rSet->LastElmt;

   for (i = rSet->FirstElmt; i <= last; i ++) {
      if (IsElement (i, rSet)) CALL(Proc) (i);
   }
}

void ReadSet (FILE * File, tSet * Set)
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

void PrintElmt (int Elmt)
{
   fprintf (g, " %d", Elmt);
}

void WriteSet (FILE * File, tSet * Set)
{
   g = File;
   fprintf (File, "{");
   ForallDo (Set, PrintElmt);
   fprintf (File, "}");
}
