# ifndef yySets
# define yySets

/* $Id: Sets.h,v 1.14 1995/05/09 13:53:42 grosch rel $ */

/* $Log: Sets.h,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995 */

# include "ratc.h"
# include <stdio.h>

# define BitsPerBitset		(sizeof (BITSET) * 8)
# define MaskBitsPerBitset	(BitsPerBitset - 1)

# define IsElement(Elmt, Set)	((rbool) \
				(((Set)->BitsetPtr [(Elmt) / BitsPerBitset] >> \
					((Elmt) & MaskBitsPerBitset)) & 1))
// # define Size(Set)		    ((Set)->MaxElmt)
// # define Select(Set)		    Minimum (Set)
# define IsNotEqual(Set1, Set2)	    (! IsEqual (Set1, Set2))
# define IsStrictSubset(Set1, Set2) (IsSubset (Set1, Set2) && \
				     IsNotEqual (Set1, Set2))

# if rWORDSIZE == 64
typedef int64_t	BITSET		;
# else
typedef int32_t	BITSET		;
# endif

typedef struct	{
      int	MaxElmt		;
      int	LastBitset	;
      BITSET *	BitsetPtr	;
      int	Card		;
      int	FirstElmt	;
      int	LastElmt	;
   } tSet;

extern void	MakeSet		(tSet * yySet, int yyMaxSize);
extern void	ResizeSet	(tSet * yySet, int yyMaxSize);
extern void	ReleaseSet	(tSet * yySet);
extern void	Union		(tSet * yySet1, tSet * yySet2);
extern void	Difference	(tSet * yySet1, tSet * yySet2);
extern void	Intersection	(tSet * yySet1, tSet * yySet2);
extern void	SymDiff		(tSet * yySet1, tSet * yySet2);
extern void	Complement	(tSet * yySet);
extern void	Include		(tSet * yySet, int yyElmt);
extern void	Exclude		(tSet * yySet, int yyElmt);
extern int	Card		(tSet * yySet);
extern int	Size		(tSet * yySet);
extern int	Minimum		(tSet * yySet);
extern int	Maximum		(tSet * yySet);
extern int	Select		(tSet * yySet);
extern int	Extract		(tSet * yySet);
extern rbool	IsSubset	(tSet * yySet1, tSet * yySet2);
/* extern rbool	IsStrictSubset	(tSet * yySet1, tSet * yySet2); */
extern rbool	IsEqual		(tSet * yySet1, tSet * yySet2);
/* extern rbool	IsNotEqual	(tSet * yySet1, tSet * yySet2); */
/* extern rbool	IsElement	(int yyElmt, tSet * yySet); */
extern rbool	IsEmpty		(tSet * yySet);
extern rbool	Forall		(tSet * yySet, rbool (* yyProc) (int));
extern rbool	Exists		(tSet * yySet, rbool (* yyProc) (int));
extern rbool	Exists1		(tSet * yySet, rbool (* yyProc) (int));
extern void	Assign		(tSet * yySet1, tSet * yySet2);
extern void	AssignElmt	(tSet * yySet, int yyElmt);
extern void	AssignEmpty	(tSet * yySet);
extern void	ForallDo	(tSet * yySet, void (* yyProc) (int));
extern void	ReadSet		(FILE * yyFile, tSet * yySet);
extern void	WriteSet	(FILE * yyFile, tSet * yySet);
extern void	InitSets	(void);

# endif
