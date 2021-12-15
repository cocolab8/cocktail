# ifndef yyRelations
# define yyRelations

/* $Id: Relation.h,v 1.5 2000/04/10 15:59:49 grosch rel $ */

/*
 * $Log: Relation.h,v $
 * Revision 1.5  2000/04/10 15:59:49  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.4  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.3  1997/04/08 13:38:16  grosch
 * added prefix yy to all argument names
 *
 * Revision 1.2  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.1  1994/08/15  22:12:07  grosch
 * fixed small bugs
 *
 * Revision 1.0  1994/07/21  21:10:48  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, July 1994 */

# include <stdio.h>
# include "ratc.h"
# include "Sets.h"

typedef void    (* rProcOfIntInt) ARGS ((int, int));
typedef rbool   (* rProcOfIntIntToBool) ARGS ((int, int));
typedef struct  { tSet * ArrayPtr; int Size1, Size2; } tRelation;

extern	void	rMakeRelation	ARGS ((tRelation * yyRel, int Size1,int Size2));
extern	void	rReleaseRelation ARGS ((tRelation * yyRel));
extern	void	rInclude	ARGS ((tRelation * yyRel, int yye1, int yye2));
extern	void	rExclude	ARGS ((tRelation * yyRel, int yye1, int yye2));
extern	rbool	rIsElement	ARGS ((int yye1, int yye2, tRelation yyRel));
extern	rbool	rIsRelated	ARGS ((int yye1, int yye2, tRelation yyRel));
extern	rbool	rIsReflexive1	ARGS ((int yye1, tRelation yyRel));
extern	rbool	rIsSymmetric1	ARGS ((int yye1, int yye2, tRelation yyRel));
extern	rbool	rIsTransitive1	ARGS ((int yye1, int yye2, int yye3,
					tRelation yyRel));
extern	rbool	rIsReflexive	ARGS ((tRelation yyRel));
extern	rbool	rIsSymmetric	ARGS ((tRelation yyRel));
extern	rbool	rIsTransitive	ARGS ((tRelation yyRel));
extern	rbool	rIsEquivalence	ARGS ((tRelation yyRel));
extern	rbool	rHasReflexive	ARGS ((tRelation yyRel));
extern	rbool	rIsCyclic	ARGS ((tRelation yyRel));
extern	void	rGetCyclics	ARGS ((tRelation yyRel, tSet * yySet));
extern	void	rClosure	ARGS ((tRelation * yyRel));
extern	void	rAssignEmpty	ARGS ((tRelation * yyRel));
extern	void	rAssignElmt	ARGS ((tRelation * yyRel, int yye1, int yye2));
extern	void	rAssign		ARGS ((tRelation * yyRel1, tRelation yyRel2));
extern	void	rUnion		ARGS ((tRelation * yyRel1, tRelation yyRel2));
extern	void	rDifference	ARGS ((tRelation * yyRel1, tRelation yyRel2));
extern	void	rIntersection	ARGS ((tRelation * yyRel1, tRelation yyRel2));
extern	void	rSymDiff	ARGS ((tRelation * yyRel1, tRelation yyRel2));
extern	void	rComplement	ARGS ((tRelation * yyRel));
extern	rbool	rIsSubset	ARGS ((tRelation yyRel1, tRelation yyRel2));
extern	rbool	rIsStrictSubset	ARGS ((tRelation yyRel1, tRelation yyRel2));
extern	rbool	rIsEqual	ARGS ((tRelation * yyRel1, tRelation * yyRel2));
extern	rbool	rIsNotEqual	ARGS ((tRelation yyRel1, tRelation yyRel2));
extern	rbool	rIsEmpty	ARGS ((tRelation yyRel));
extern	int	rCard		ARGS ((tRelation * yyRel));
extern	void	rSelect		ARGS ((tRelation * yyRel, int * yye1,
					int * yye2));
extern	void	rExtract	ARGS ((tRelation * yyRel, int * yye1,
					int * yye2));
extern	rbool	rForall		ARGS ((tRelation yyRel,
					rProcOfIntIntToBool yyProc));
extern	rbool	rExists		ARGS ((tRelation yyRel,
					rProcOfIntIntToBool yyProc));
extern	rbool	rExists1	ARGS ((tRelation yyRel,
					rProcOfIntIntToBool yyProc));
extern	void	rForallDo	ARGS ((tRelation yyRel, rProcOfIntInt yyProc));
extern	void	rReadRelation	ARGS ((FILE * yyf, tRelation * yyRel));
extern	void	rWriteRelation	ARGS ((FILE * yyf, tRelation yyRel));
extern	void	rProject1	ARGS ((tRelation yyRel, int yye1,
					tSet * yySet));
extern	void	rProject2	ARGS ((tRelation yyRel, int yye1,
					tSet * yySet));

# endif
