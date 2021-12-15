/* $Id: Relation.c,v 1.3 1995/03/20 15:37:30 grosch rel $ */

/* $Log: Relation.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995 */

static char rcsid [] =
   "$Id: Relation.c,v 1.3 1995/03/20 15:37:30 grosch rel $";

# include "ratc.h"
# include "Relation.h"
# include "General.h"
# include "DynArray.h"

static	int		i, j		;
static	tRelation	gRel		;
static	rbool		gSymmetric	(int e);
static	unsigned short * PredCountPtr	;
static	tSet		WithoutPred	;
static	void		gPredCount	(int e);
static	void		gPredCount2	(int e);
static	rProcOfIntIntToBool gProc2b	;
static	rbool		gProc1b		(int e);
static	rProcOfIntInt	gProc2		;
static	void		gProc1		(int e);
static	FILE *		g		;
static	void		WritePair	(int e1, int e2);

void rMakeRelation (tRelation * Rel, int Size1, int Size2)
{
  unsigned long ElmtCount = Size1 + 1;
  Rel->Size1 = Size1;
  Rel->Size2 = Size2;
  MakeArray ((char * *) & Rel->ArrayPtr, & ElmtCount,
  		(unsigned long) sizeof (tSet));
  for (i = 0; i <= Rel->Size1; i ++) MakeSet (& Rel->ArrayPtr [i], Size2);
}

void rReleaseRelation (tRelation * Rel)
{
  unsigned long ElmtCount = Rel->Size1 + 1;
  for (i = 0; i <= Rel->Size1; i ++) ReleaseSet (& Rel->ArrayPtr [i]);
  ReleaseArray ((char * *) & Rel->ArrayPtr, & ElmtCount,
  		(unsigned long) sizeof (tSet));
}

void rInclude (tRelation * Rel, int e1, int e2)
{
  Include (& Rel->ArrayPtr [e1], e2);
}

void rExclude (tRelation * Rel, int e1, int e2)
{
  Exclude (& Rel->ArrayPtr [e1], e2);
}

rbool rIsElement (int e1, int e2, tRelation Rel)
{
  return IsElement (e2, & Rel.ArrayPtr [e1]);
}

rbool rIsRelated (int e1, int e2, tRelation Rel)
{
  return IsElement (e2, & Rel.ArrayPtr [e1]);
}

rbool rIsReflexive1 (int e1, tRelation Rel)
{
  return IsElement (e1, & Rel.ArrayPtr [e1]);
}

rbool rIsSymmetric1 (int e1, int e2, tRelation Rel)
{
  return (rbool) (! IsElement (e2, & Rel.ArrayPtr [e1]) ||
		    IsElement (e1, & Rel.ArrayPtr [e2]));
}

rbool rIsTransitive1 (int e1, int e2, int e3, tRelation Rel)
{
  return (rbool) (! (IsElement (e2, & Rel.ArrayPtr [e1]) &&
   IsElement (e3, & Rel.ArrayPtr [e2])) || IsElement (e3, & Rel.ArrayPtr [e1]));
}

rbool rIsReflexive (tRelation Rel)
{
  for (i = 0; i <= Rel.Size1; i ++)
    if (! IsElement (i, & Rel.ArrayPtr [i]))
      return rfalse;
  return rtrue;
}

static rbool gSymmetric (int e)
{
  return IsElement (i, & gRel.ArrayPtr [e]);
}

rbool rIsSymmetric (tRelation Rel)
{
  gRel = Rel;
  for (i = 0; i <= Rel.Size1; i ++)
    if (! Forall (& Rel.ArrayPtr [i], gSymmetric))
      return rfalse;
  return rtrue;
}

rbool rIsTransitive (tRelation Rel)
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

rbool rIsEquivalence (tRelation Rel)
{
  return (rbool)
     (rIsReflexive (Rel) && rIsSymmetric (Rel) && rIsTransitive (Rel));
}

rbool rHasReflexive (tRelation Rel)
{
  for (i = 0; i <= Rel.Size1; i ++)
    if (IsElement (i, & Rel.ArrayPtr [i]))
      return rtrue;
  return rfalse;
}

rbool rIsCyclic (tRelation Rel)
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

static void gPredCount (int e)
{
  ++ PredCountPtr [e];
}

static void gPredCount2 (int e)
{
  if (-- PredCountPtr [e] == 0) Include (& WithoutPred, e);
}

void rGetCyclics (tRelation Rel, tSet * Set)
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

void rAssignEmpty (tRelation * Rel)
{
  for (i = 0; i <= Rel->Size1; i ++) AssignEmpty (& Rel->ArrayPtr [i]);
}

void rAssignElmt (tRelation * Rel, int e1, int e2)
{
  rAssignEmpty (Rel);
  rInclude (Rel, e1, e2);
}

void rAssign (tRelation * Rel1, tRelation Rel2)
{
  for (i = 0; i <= Rel1->Size1; i ++)
    Assign (& Rel1->ArrayPtr [i], & Rel2.ArrayPtr [i]);
}

void rClosure (register tRelation * Rel)
{
  for (j = 0; j <= Rel->Size1; j ++)
    if (! IsEmpty (& Rel->ArrayPtr [j])) {
      tSet aj; aj = Rel->ArrayPtr [j];
	for (i = 0; i <= Rel->Size1; i ++)
	  if (IsElement (j, & Rel->ArrayPtr [i]))
	    Union (& Rel->ArrayPtr [i], & aj);
    }
}

void rUnion (tRelation * Rel1, tRelation Rel2)
{
  for (i = 0; i <= Rel1->Size1; i ++)
    Union (& Rel1->ArrayPtr [i], & Rel2.ArrayPtr [i]);
}

void rDifference (tRelation * Rel1, tRelation Rel2)
{
  for (i = 0; Rel1->Size1; i ++)
    Difference (& Rel1->ArrayPtr [i], & Rel2.ArrayPtr [i]);
}

void rIntersection (tRelation * Rel1, tRelation Rel2)
{
  for (i = 0; i <= Rel1->Size1; i ++)
    Intersection (& Rel1->ArrayPtr [i], & Rel2.ArrayPtr [i]);
}

void rSymDiff (tRelation * Rel1, tRelation Rel2)
{
  for (i = 0; i <= Rel1->Size1; i ++)
    SymDiff (& Rel1->ArrayPtr [i], & Rel2.ArrayPtr [i]);
}

void rComplement (tRelation * Rel)
{
  for (i = 0; i <= Rel->Size1; i ++)
    Complement (& Rel->ArrayPtr [i]);
}

rbool rIsSubset (tRelation Rel1, tRelation Rel2)
{
  for (i = 0; i <= Rel1.Size1; i ++)
    if (! IsSubset (& Rel1.ArrayPtr [i], & Rel2.ArrayPtr [i]))
      return rfalse;
  return rtrue;
}

rbool rIsStrictSubset (tRelation Rel1, tRelation Rel2)
{
  return (rbool) (rIsSubset (Rel1, Rel2) && rIsNotEqual (Rel1, Rel2));
}

rbool rIsEqual (tRelation * Rel1, tRelation * Rel2)
{
  for (i = 0; i <= Rel1->Size1; i ++)
    if (! IsEqual (& Rel1->ArrayPtr [i], & Rel2->ArrayPtr [i]))
      return rfalse;
  return rtrue;
}

rbool rIsNotEqual (tRelation Rel1, tRelation Rel2)
{
  return (rbool) (! rIsEqual (& Rel1, & Rel2));
}

rbool rIsEmpty (tRelation Rel)
{
  for (i = 0; i <= Rel.Size1; i ++)
    if (! IsEmpty (& Rel.ArrayPtr [i]))
      return rfalse;
  return rtrue;
}

int rCard (tRelation * Rel)
{
  int n = 0;
  for (i = 0; i <= Rel->Size1; i ++) n += Card (& Rel->ArrayPtr [i]);
  return n;
}

void rSelect (tRelation * Rel, int * e1, int * e2)
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

void rExtract (tRelation * Rel, int * e1, int * e2)
{
  rSelect (Rel, e1, e2);
  rExclude (Rel, * e1, * e2);
}

static rbool gProc1b (int e)
{
  return (* gProc2b) (i, e);
}

rbool rForall (tRelation Rel, rProcOfIntIntToBool Proc)
{
  gProc2b = Proc;
  for (i = 0; i <= Rel.Size1; i ++)
    if (! Forall (& Rel.ArrayPtr [i], gProc1b))
      return rfalse;
  return rtrue;
}

rbool rExists (tRelation Rel, rProcOfIntIntToBool Proc)
{
  gProc2b = Proc;
  for (i = 0; i <= Rel.Size1; i ++)
    if (Exists (& Rel.ArrayPtr [i], gProc1b))
      return rtrue;
  return rfalse;
}

rbool rExists1 (tRelation Rel, rProcOfIntIntToBool Proc)
{
  int n = 0;
  gProc2b = Proc;
  for (i = 0; i <= Rel.Size1; i ++)
    if (Exists (& Rel.ArrayPtr [i], gProc1b)) ++ n;
  return (rbool) (n == 1);
}

static void gProc1 (int e)
{
  (* gProc2) (i, e);
}

void rForallDo (tRelation Rel, rProcOfIntInt Proc)
{
  gProc2 = Proc;
  for (i = 0; i <= Rel.Size1; i ++)
    ForallDo (& Rel.ArrayPtr [i], gProc1);
}

void rReadRelation (FILE * f, tRelation * Rel)
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

void rWriteRelation (FILE * f, tRelation Rel)
{
  g = f;
  fputc ('{', f);
  rForallDo (Rel, WritePair);
  fputc ('}', f);
}

static void WritePair (int e1, int e2)
{
  fprintf (g, " %d %d,", e1, e2);
}

void rProject1 (tRelation Rel, int e1, tSet * Set)
{
  AssignEmpty (Set);
  for (i = 0; i <= Rel.Size1; i ++)
    if (IsElement (e1, & Rel.ArrayPtr [i]))
      Include (Set, i);
}

void rProject2 (tRelation Rel, int e1, tSet * Set)
{
  Assign (Set, & Rel.ArrayPtr [e1]);
}
