# ifndef yyRelations
# define yyRelations

/* $Id: Relation.h,v 1.2 1994/12/04 19:29:55 grosch rel $ */

/* $Log: Relation.h,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995 */

# include "ratc.h"
# include <stdio.h>

# include "Sets.h"

typedef void    (* rProcOfIntInt) (int, int);
typedef rbool   (* rProcOfIntIntToBool) (int, int);
typedef struct  { tSet * ArrayPtr; int Size1, Size2; } tRelation;

extern	void	rMakeRelation	(tRelation * yyRel, int yySize1, int yySize2);
extern	void	rReleaseRelation (tRelation * yyRel);
extern	void	rInclude	(tRelation * yyRel, int yye1, int yye2);
extern	void	rExclude	(tRelation * yyRel, int yye1, int yye2);
extern	rbool	rIsElement	(int yye1, int yye2, tRelation yyRel);
extern	rbool	rIsRelated	(int yye1, int yye2, tRelation yyRel);
extern	rbool	rIsReflexive1	(int yye1, tRelation yyRel);
extern	rbool	rIsSymmetric1	(int yye1, int yye2, tRelation yyRel);
extern	rbool	rIsTransitive1	(int yye1, int yye2, int yye3, tRelation yyRel);
extern	rbool	rIsReflexive	(tRelation yyRel);
extern	rbool	rIsSymmetric	(tRelation yyRel);
extern	rbool	rIsTransitive	(tRelation yyRel);
extern	rbool	rIsEquivalence	(tRelation yyRel);
extern	rbool	rHasReflexive	(tRelation yyRel);
extern	rbool	rIsCyclic	(tRelation yyRel);
extern	void	rGetCyclics	(tRelation yyRel, tSet * yySet);
extern	void	rClosure	(tRelation * yyRel);
extern	void	rAssignEmpty	(tRelation * yyRel);
extern	void	rAssignElmt	(tRelation * yyRel, int yye1, int yye2);
extern	void	rAssign		(tRelation * yyRel1, tRelation yyRel2);
extern	void	rUnion		(tRelation * yyRel1, tRelation yyRel2);
extern	void	rDifference	(tRelation * yyRel1, tRelation yyRel2);
extern	void	rIntersection	(tRelation * yyRel1, tRelation yyRel2);
extern	void	rSymDiff	(tRelation * yyRel1, tRelation yyRel2);
extern	void	rComplement	(tRelation * yyRel);
extern	rbool	rIsSubset	(tRelation yyRel1, tRelation yyRel2);
extern	rbool	rIsStrictSubset	(tRelation yyRel1, tRelation yyRel2);
extern	rbool	rIsEqual	(tRelation * yyRel1, tRelation * yyRel2);
extern	rbool	rIsNotEqual	(tRelation yyRel1, tRelation yyRel2);
extern	rbool	rIsEmpty	(tRelation yyRel);
extern	int	rCard		(tRelation * yyRel);
extern	void	rSelect		(tRelation * yyRel, int * yye1, int * yye2);
extern	void	rExtract	(tRelation * yyRel, int * yye1, int * yye2);
extern	rbool	rForall		(tRelation yyRel, rProcOfIntIntToBool yyProc);
extern	rbool	rExists		(tRelation yyRel, rProcOfIntIntToBool yyProc);
extern	rbool	rExists1	(tRelation yyRel, rProcOfIntIntToBool yyProc);
extern	void	rForallDo	(tRelation yyRel, rProcOfIntInt yyProc);
extern	void	rReadRelation	(FILE * yyf, tRelation * yyRel);
extern	void	rWriteRelation	(FILE * yyf, tRelation yyRel);
extern	void	rProject1	(tRelation yyRel, int yye1, tSet * yySet);
extern	void	rProject2	(tRelation yyRel, int yye1, tSet * yySet);

# endif
