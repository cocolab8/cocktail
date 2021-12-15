/* $Id: Relation.c,v 1.7 2008/09/12 14:14:04 grosch rel $ */

/*
 * $Log: Relation.c,v $
 * Revision 1.7  2008/09/12 14:14:04  grosch
 * improved support for 64 bit machines (added rIntType.h)
 * removed type casts to (void)
 *
 * Revision 1.6  2000/04/10 15:59:49  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.5  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.4  1996/08/13 13:20:23  grosch
 * adaption to DLL's for Microsoft Visual C++
 *
 * Revision 1.3  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.2  1995/02/23  20:11:46  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 * output lines with at most 132 characters
 *
 * Revision 1.1  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.0  1994/07/21  21:10:47  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, July 1994 */

static char rcsid [] =
   "$Id: Relation.c,v 1.7 2008/09/12 14:14:04 grosch rel $";

# include "Relation.h"
# include <stdio.h>
# include "General.h"
# include "DynArray.h"

static	int		i, j		;
static	tRelation	gRel		;
static	rbool		gSymmetric	ARGS ((int e));
static	unsigned short * PredCountPtr	;
static	tSet		WithoutPred	;
static	void		gPredCount	ARGS ((int e));
static	void		gPredCount2	ARGS ((int e));
static	rProcOfIntIntToBool gProc2b	;
static	rbool		gProc1b		ARGS ((int e));
static	rProcOfIntInt	gProc2		;
static	void		gProc1		ARGS ((int e));
static	FILE *		g		;
static	void		WritePair	ARGS ((int e1, int e2));

void rMakeRelation
# ifdef HAVE_ARGS
  (tRelation * Rel, int Size1, int Size2)
# else
  (Rel, Size1, Size2) tRelation * Rel; int Size1, Size2;
# endif
{
  unsigned long ElmtCount = Size1 + 1;
  Rel->Size1 = Size1;
  Rel->Size2 = Size2;
  MakeArray ((char * *) & Rel->ArrayPtr, & ElmtCount,
		(unsigned long) sizeof (tSet));
  for (i = 0; i <= Rel->Size1; i ++) MakeSet (& Rel->ArrayPtr [i], Size2);
}

void rReleaseRelation
# ifdef HAVE_ARGS
  (tRelation * Rel)
# else
  (Rel) tRelation * Rel;
# endif
{
  unsigned long ElmtCount = Rel->Size1 + 1;
  for (i = 0; i <= Rel->Size1; i ++) ReleaseSet (& Rel->ArrayPtr [i]);
  ReleaseArray ((char * *) & Rel->ArrayPtr, & ElmtCount,
		(unsigned long) sizeof (tSet));
}

void rInclude
# ifdef HAVE_ARGS
  (tRelation * Rel, int e1, int e2)
# else
  (Rel, e1, e2) tRelation * Rel; int e1, e2;
# endif
{
  Include (& Rel->ArrayPtr [e1], e2);
}

void rExclude
# ifdef HAVE_ARGS
  (tRelation * Rel, int e1, int e2)
# else
  (Rel, e1, e2) tRelation * Rel; int e1, e2;
# endif
{
  Exclude (& Rel->ArrayPtr [e1], e2);
}

rbool rIsElement
# ifdef HAVE_ARGS
  (int e1, int e2, tRelation Rel)
# else
  (e1, e2, Rel) int e1, e2; tRelation Rel;
# endif
{
  return IsElement (e2, & Rel.ArrayPtr [e1]);
}

rbool rIsRelated
# ifdef HAVE_ARGS
  (int e1, int e2, tRelation Rel)
# else
  (e1, e2, Rel) int e1, e2; tRelation Rel;
# endif
{
  return IsElement (e2, & Rel.ArrayPtr [e1]);
}

rbool rIsReflexive1
# ifdef HAVE_ARGS
  (int e1, tRelation Rel)
# else
  (e1, Rel) int e1; tRelation Rel;
# endif
{
  return IsElement (e1, & Rel.ArrayPtr [e1]);
}

rbool rIsSymmetric1
# ifdef HAVE_ARGS
  (int e1, int e2, tRelation Rel)
# else
  (e1, e2, Rel) int e1, e2; tRelation Rel;
# endif
{
  return (rbool) (! IsElement (e2, & Rel.ArrayPtr [e1]) ||
		    IsElement (e1, & Rel.ArrayPtr [e2]));
}

rbool rIsTransitive1
# ifdef HAVE_ARGS
  (int e1, int e2, int e3, tRelation Rel)
# else
  (e1, e2, e3, Rel) int e1, e2, e3; tRelation Rel;
# endif
{
  return (rbool) (! (IsElement (e2, & Rel.ArrayPtr [e1]) &&
   IsElement (e3, & Rel.ArrayPtr [e2])) || IsElement (e3, & Rel.ArrayPtr [e1]));
}

rbool rIsReflexive
# ifdef HAVE_ARGS
  (tRelation Rel)
# else
  (Rel) tRelation Rel;
# endif
{
  for (i = 0; i <= Rel.Size1; i ++)
    if (! IsElement (i, & Rel.ArrayPtr [i]))
      return rfalse;
  return rtrue;
}

static rbool gSymmetric
# ifdef HAVE_ARGS
  (int e)
# else
  (e) int e;
# endif
{
  return IsElement (i, & gRel.ArrayPtr [e]);
}

rbool rIsSymmetric
# ifdef HAVE_ARGS
  (tRelation Rel)
# else
  (Rel) tRelation Rel;
# endif
{
  gRel = Rel;
  for (i = 0; i <= Rel.Size1; i ++)
    if (! Forall (& Rel.ArrayPtr [i], gSymmetric))
      return rfalse;
  return rtrue;
}

rbool rIsTransitive
# ifdef HAVE_ARGS
  (tRelation Rel)
# else
  (Rel) tRelation Rel;
# endif
{
  tRelation r;
  rbool Result;

  rMakeRelation (& r, Rel.Size1, Rel.Size2);
  rAssign (& r, Rel);
  rClosure (& r);
  Result = rIsEqual (& r, & Rel);
  rReleaseRelation (& r);
  return Result;
}

rbool rIsEquivalence
# ifdef HAVE_ARGS
  (tRelation Rel)
# else
  (Rel) tRelation Rel;
# endif
{
  return (rbool)
     (rIsReflexive (Rel) && rIsSymmetric (Rel) && rIsTransitive (Rel));
}

rbool rHasReflexive
# ifdef HAVE_ARGS
  (tRelation Rel)
# else
  (Rel) tRelation Rel;
# endif
{
  for (i = 0; i <= Rel.Size1; i ++)
    if (IsElement (i, & Rel.ArrayPtr [i]))
      return rtrue;
  return rfalse;
}

rbool rIsCyclic
# ifdef HAVE_ARGS
  (tRelation Rel)
# else
  (Rel) tRelation Rel;
# endif
{
  unsigned long PredCountSize = Rel.Size1 + 1;
  tSet WithPred;
  rbool Result;

  MakeArray ((char * *) & PredCountPtr, & PredCountSize,
		(unsigned long) sizeof (unsigned short));
  MakeSet (& WithoutPred, Rel.Size1);
  MakeSet (& WithPred, Rel.Size1);
  for (i = 0; i <= Rel.Size1; i ++) PredCountPtr [i] = 0;
  for (i = 0; i <= Rel.Size1; i ++) ForallDo (& Rel.ArrayPtr [i], gPredCount);
  for (i = 0; i <= Rel.Size1; i ++)
    if (PredCountPtr [i] == 0)
      Include (& WithoutPred, i);
  Complement (& WithPred);
  while (! IsEmpty (& WithoutPred)) {
    i = Extract (& WithoutPred);
    Exclude (& WithPred, i);
    ForallDo (& Rel.ArrayPtr [i], gPredCount2);
  }
  Result = (rbool) (! IsEmpty (& WithPred));
  ReleaseSet (& WithoutPred);
  ReleaseSet (& WithPred);
  ReleaseArray ((char * *) & PredCountPtr, & PredCountSize,
		(unsigned long) sizeof (unsigned short));
  return Result;
}

static void gPredCount
# ifdef HAVE_ARGS
  (int e)
# else
  (e) int e;
# endif
{
  ++ PredCountPtr [e];
}

static void gPredCount2
# ifdef HAVE_ARGS
  (int e)
# else
  (e) int e;
# endif
{
  if (-- PredCountPtr [e] == 0) Include (& WithoutPred, e);
}

void rGetCyclics
# ifdef HAVE_ARGS
  (tRelation Rel, tSet * Set)
# else
  (Rel, Set) tRelation Rel; tSet * Set;
# endif
{
  tRelation r;

  rMakeRelation (& r, Rel.Size1, Rel.Size2);
  rAssign (& r, Rel);
  rClosure (& r);
  AssignEmpty (Set);
  for (i = 0; i <= r.Size1; i ++)
    if (IsElement (i, & r.ArrayPtr [i]))
      Include (Set, i);
  rReleaseRelation (& r);
}

void rAssignEmpty
# ifdef HAVE_ARGS
  (tRelation * Rel)
# else
  (Rel) tRelation * Rel;
# endif
{
  for (i = 0; i <= Rel->Size1; i ++) AssignEmpty (& Rel->ArrayPtr [i]);
}

void rAssignElmt
# ifdef HAVE_ARGS
  (tRelation * Rel, int e1, int e2)
# else
  (Rel, e1, e2) tRelation * Rel; int e1, e2;
# endif
{
  rAssignEmpty (Rel);
  rInclude (Rel, e1, e2);
}

void rAssign
# ifdef HAVE_ARGS
  (tRelation * Rel1, tRelation Rel2)
# else
  (Rel1, Rel2) tRelation * Rel1; tRelation Rel2;
# endif
{
  for (i = 0; i <= Rel1->Size1; i ++)
    Assign (& Rel1->ArrayPtr [i], & Rel2.ArrayPtr [i]);
}

void rClosure
# ifdef HAVE_ARGS
  (register tRelation * Rel)
# else
  (Rel) register tRelation * Rel;
# endif
{
  for (j = 0; j <= Rel->Size1; j ++)
    if (! IsEmpty (& Rel->ArrayPtr [j])) {
      tSet aj; aj = Rel->ArrayPtr [j];
	for (i = 0; i <= Rel->Size1; i ++)
	  if (IsElement (j, & Rel->ArrayPtr [i]))
	    Union (& Rel->ArrayPtr [i], & aj);
    }
}

void rUnion
# ifdef HAVE_ARGS
  (tRelation * Rel1, tRelation Rel2)
# else
  (Rel1, Rel2) tRelation * Rel1; tRelation Rel2;
# endif
{
  for (i = 0; i <= Rel1->Size1; i ++)
    Union (& Rel1->ArrayPtr [i], & Rel2.ArrayPtr [i]);
}

void rDifference
# ifdef HAVE_ARGS
  (tRelation * Rel1, tRelation Rel2)
# else
  (Rel1, Rel2) tRelation * Rel1; tRelation Rel2;
# endif
{
  for (i = 0; Rel1->Size1; i ++)
    Difference (& Rel1->ArrayPtr [i], & Rel2.ArrayPtr [i]);
}

void rIntersection
# ifdef HAVE_ARGS
  (tRelation * Rel1, tRelation Rel2)
# else
  (Rel1, Rel2) tRelation * Rel1; tRelation Rel2;
# endif
{
  for (i = 0; i <= Rel1->Size1; i ++)
    Intersection (& Rel1->ArrayPtr [i], & Rel2.ArrayPtr [i]);
}

void rSymDiff
# ifdef HAVE_ARGS
  (tRelation * Rel1, tRelation Rel2)
# else
  (Rel1, Rel2) tRelation * Rel1; tRelation Rel2;
# endif
{
  for (i = 0; i <= Rel1->Size1; i ++)
    SymDiff (& Rel1->ArrayPtr [i], & Rel2.ArrayPtr [i]);
}

void rComplement
# ifdef HAVE_ARGS
  (tRelation * Rel)
# else
  (Rel) tRelation * Rel;
# endif
{
  for (i = 0; i <= Rel->Size1; i ++)
    Complement (& Rel->ArrayPtr [i]);
}

rbool rIsSubset
# ifdef HAVE_ARGS
  (tRelation Rel1, tRelation Rel2)
# else
  (Rel1, Rel2) tRelation Rel1, Rel2;
# endif
{
  for (i = 0; i <= Rel1.Size1; i ++)
    if (! IsSubset (& Rel1.ArrayPtr [i], & Rel2.ArrayPtr [i]))
      return rfalse;
  return rtrue;
}

rbool rIsStrictSubset
# ifdef HAVE_ARGS
  (tRelation Rel1, tRelation Rel2)
# else
  (Rel1, Rel2) tRelation Rel1, Rel2;
# endif
{
  return (rbool) (rIsSubset (Rel1, Rel2) && rIsNotEqual (Rel1, Rel2));
}

rbool rIsEqual
# ifdef HAVE_ARGS
  (tRelation * Rel1, tRelation * Rel2)
# else
  (Rel1, Rel2) tRelation * Rel1, * Rel2;
# endif
{
  for (i = 0; i <= Rel1->Size1; i ++)
    if (! IsEqual (& Rel1->ArrayPtr [i], & Rel2->ArrayPtr [i]))
      return rfalse;
  return rtrue;
}

rbool rIsNotEqual
# ifdef HAVE_ARGS
  (tRelation Rel1, tRelation Rel2)
# else
  (Rel1, Rel2) tRelation Rel1, Rel2;
# endif
{
  return (rbool) (! rIsEqual (& Rel1, & Rel2));
}

rbool rIsEmpty
# ifdef HAVE_ARGS
  (tRelation Rel)
# else
  (Rel)
tRelation Rel;
# endif
{
  for (i = 0; i <= Rel.Size1; i ++)
    if (! IsEmpty (& Rel.ArrayPtr [i]))
      return rfalse;
  return rtrue;
}

int rCard
# ifdef HAVE_ARGS
  (tRelation * Rel)
# else
  (Rel) tRelation * Rel;
# endif
{
  int n = 0;
  for (i = 0; i <= Rel->Size1; i ++) n += Card (& Rel->ArrayPtr [i]);
  return n;
}

void rSelect
# ifdef HAVE_ARGS
  (tRelation * Rel, int * e1, int * e2)
# else
  (Rel, e1, e2) tRelation * Rel; int * e1, * e2;
# endif
{
  for (i = 0; i <= Rel->Size1; i ++)
    if (! IsEmpty (& Rel->ArrayPtr [i])) {
      * e1 = i;
      * e2 = Select (& Rel->ArrayPtr [i]);
      return;
    }
  * e1 = 0;
  * e2 = 0;
}

void rExtract
# ifdef HAVE_ARGS
  (tRelation * Rel, int * e1, int * e2)
# else
  (Rel, e1, e2) tRelation * Rel; int * e1, * e2;
# endif
{
  rSelect (Rel, e1, e2);
  rExclude (Rel, * e1, * e2);
}

static rbool gProc1b
# ifdef HAVE_ARGS
  (int e)
# else
  (e) int e;
# endif
{
  return (* gProc2b) (i, e);
}

rbool rForall
# ifdef HAVE_ARGS
  (tRelation Rel, rProcOfIntIntToBool Proc)
# else
  (Rel, Proc) tRelation Rel; rProcOfIntIntToBool Proc;
# endif
{
  gProc2b = Proc;
  for (i = 0; i <= Rel.Size1; i ++)
    if (! Forall (& Rel.ArrayPtr [i], gProc1b))
      return rfalse;
  return rtrue;
}

rbool rExists
# ifdef HAVE_ARGS
  (tRelation Rel, rProcOfIntIntToBool Proc)
# else
  (Rel, Proc) tRelation Rel; rProcOfIntIntToBool Proc;
# endif
{
  gProc2b = Proc;
  for (i = 0; i <= Rel.Size1; i ++)
    if (Exists (& Rel.ArrayPtr [i], gProc1b))
      return rtrue;
  return rfalse;
}

rbool rExists1
# ifdef HAVE_ARGS
  (tRelation Rel, rProcOfIntIntToBool Proc)
# else
  (Rel, Proc) tRelation Rel; rProcOfIntIntToBool Proc;
# endif
{
  int n = 0;
  gProc2b = Proc;
  for (i = 0; i <= Rel.Size1; i ++)
    if (Exists (& Rel.ArrayPtr [i], gProc1b)) ++ n;
  return (rbool) (n == 1);
}

static void gProc1
# ifdef HAVE_ARGS
  (int e)
# else
  (e) int e;
# endif
{
  (* gProc2) (i, e);
}

void rForallDo
# ifdef HAVE_ARGS
  (tRelation Rel, rProcOfIntInt Proc)
# else
  (Rel, Proc) tRelation Rel; rProcOfIntInt Proc;
# endif
{
  gProc2 = Proc;
  for (i = 0; i <= Rel.Size1; i ++)
    ForallDo (& Rel.ArrayPtr [i], gProc1);
}

void rReadRelation
# ifdef HAVE_ARGS
  (FILE * f, tRelation * Rel)
# else
  (f, Rel) FILE * f; tRelation * Rel;
# endif
{
# ifndef _USRDLL
  while (fgetc (f) != '{');
  rAssignEmpty (Rel);
  while (fgetc (f) != '}') {
    fscanf (f, "%d%d", & i, & j);
    rInclude (Rel, i, j);
    fgetc (f);
  }
# else
  fgetc (f);		/* dummy */
  rAssignEmpty (Rel);
# endif
}

void rWriteRelation
# ifdef HAVE_ARGS
  (FILE * f, tRelation Rel)
# else
  (f, Rel) FILE * f; tRelation Rel;
# endif
{
  g = f;
  fputc ('{', f);
  rForallDo (Rel, WritePair);
  fputc ('}', f);
}

static void WritePair
# ifdef HAVE_ARGS
  (int e1, int e2)
# else
  (e1, e2) int e1, e2;
# endif
{
  fprintf (g, " %d %d,", e1, e2);
}

void rProject1
# ifdef HAVE_ARGS
  (tRelation Rel, int e1, tSet * Set)
# else
  (Rel, e1, Set) tRelation Rel; int e1; tSet * Set;
# endif
{
  AssignEmpty (Set);
  for (i = 0; i <= Rel.Size1; i ++)
    if (IsElement (e1, & Rel.ArrayPtr [i]))
      Include (Set, i);
}

void rProject2
# ifdef HAVE_ARGS
  (tRelation Rel, int e1, tSet * Set)
# else
  (Rel, e1, Set) tRelation Rel; int e1; tSet * Set;
# endif
{
  Assign (Set, & Rel.ArrayPtr [e1]);
}
