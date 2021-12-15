# ifndef yySets
# define yySets

/* Id: Sets.h,v 1.20 2000/04/10 16:01:51 grosch rel $ */

/*
 * Log: Sets.h,v $
 * Revision 1.20  2000/04/10 16:01:51  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.19  1998/04/04 10:12:51  grosch
 * added alias BeginSets for InitSets
 *
 * Revision 1.18  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.17  1997/04/08 13:38:16  grosch
 * added prefix yy to all argument names
 *
 * Revision 1.16  1996/07/04  17:15:43  grosch
 * added function ResizeSet
 *
 * Revision 1.15  1996/06/05  12:00:48  grosch
 * adaption to MS VC++
 *
 * Revision 1.14  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.13  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.12  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.11  1994/07/21  21:08:52  grosch
 * changed element type from cardinal to int
 *
 * Revision 1.10  1994/07/03  11:22:39  grosch
 * adaption to 64 bit machines like DEC Alpha
 *
 * Revision 1.9  1994/01/29  22:13:50  grosch
 * renamed bool to rbool
 *
 * Revision 1.8  1993/01/16  11:22:26  grosch
 * adaption to machines where int takes 2-bytes
 *
 * Revision 1.7  1992/08/07  14:36:33  grosch
 * layout changes
 *
 * Revision 1.6  1992/02/06  09:29:54  grosch
 * fixed bug: stdio and ANSI C
 *
 * Revision 1.5  1991/11/21  14:25:34  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.4  91/07/17  17:23:38  grosch
 * introduced ARGS trick for ANSI compatibility
 * 
 * Revision 1.3  90/07/04  14:34:05  grosch
 * introduced conditional include
 * 
 * Revision 1.2  89/12/08  17:25:03  grosch
 * complete redesign in order to increase efficiency
 * 
 * Revision 1.1  89/01/09  17:29:42  grosch
 * added functions Size, Minimum, and Maximum
 * 
 * Revision 1.0  88/10/04  11:44:45  grosch
 * Initial revision
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

# include "ratc.h"
# include <stdio.h>

# define BeginSets		InitSets
# define BitsPerBitset		(sizeof (BITSET) * 8)
# define MaskBitsPerBitset	(BitsPerBitset - 1)

# define IsElement(Elmt, Set)	((rbool) \
				(((Set)->BitsetPtr [(Elmt) / BitsPerBitset] >> \
					((Elmt) & MaskBitsPerBitset)) & 1))
# define Size(Set)		    ((Set)->MaxElmt)
# define Select(Set)		    Minimum (Set)
# define IsNotEqual(Set1, Set2)	    (! IsEqual (Set1, Set2))
# define IsStrictSubset(Set1, Set2) (IsSubset (Set1, Set2) && \
				     IsNotEqual (Set1, Set2))

# ifdef _MSC_VER
typedef int32_t	BITSET		; /* operator << does not work with 64 bits */
# elif rWORDSIZE == 64
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

extern void	MakeSet		ARGS ((tSet * yySet, int yyMaxSize));
extern void	ResizeSet	ARGS ((tSet * yySet, int yyMaxSize));
extern void	ReleaseSet	ARGS ((tSet * yySet));
extern void	Union		ARGS ((tSet * yySet1, tSet * yySet2));
extern void	Difference	ARGS ((tSet * yySet1, tSet * yySet2));
extern void	Intersection	ARGS ((tSet * yySet1, tSet * yySet2));
extern void	SymDiff		ARGS ((tSet * yySet1, tSet * yySet2));
extern void	Complement	ARGS ((tSet * yySet));
extern void	Include		ARGS ((tSet * yySet, int yyElmt));
extern void	Exclude		ARGS ((tSet * yySet, int yyElmt));
extern int	Card		ARGS ((tSet * yySet));
/* extern int	Size		ARGS ((tSet * yySet)); */
extern int	Minimum		ARGS ((tSet * yySet));
extern int	Maximum		ARGS ((tSet * yySet));
/* extern int	Select		ARGS ((tSet * yySet)); */
extern int	Extract		ARGS ((tSet * yySet));
extern rbool	IsSubset	ARGS ((tSet * yySet1, tSet * yySet2));
/* extern rbool	IsStrictSubset	ARGS ((tSet * yySet1, tSet * yySet2)); */
extern rbool	IsEqual		ARGS ((tSet * yySet1, tSet * yySet2));
/* extern rbool	IsNotEqual	ARGS ((tSet * yySet1, tSet * yySet2)); */
/* extern rbool	IsElement	ARGS ((int yyElmt, tSet * yySet)); */
extern rbool	IsEmpty		ARGS ((tSet * yySet));
extern rbool	Forall		ARGS ((tSet * yySet, rbool (* yyProc) (int)));
extern rbool	Exists		ARGS ((tSet * yySet, rbool (* yyProc) (int)));
extern rbool	Exists1		ARGS ((tSet * yySet, rbool (* yyProc) (int)));
extern void	Assign		ARGS ((tSet * yySet1, tSet * yySet2));
extern void	AssignElmt	ARGS ((tSet * yySet, int yyElmt));
extern void	AssignEmpty	ARGS ((tSet * yySet));
extern void	ForallDo	ARGS ((tSet * yySet, void (* yyProc) (int)));
extern void	ReadSet		ARGS ((FILE * yyFile, tSet * yySet));
extern void	WriteSet	ARGS ((FILE * yyFile, tSet * yySet));
extern void	InitSets	ARGS ((void));

# endif
