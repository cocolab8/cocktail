# ifndef yyDynArray
# define yyDynArray

/* $Id: DynArray.h,v 1.7 1995/06/26 15:59:41 grosch rel $ */

/* $Log: DynArray.h,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995 */

extern void MakeArray    (char * *		yyArrayPtr,
			  unsigned long *	yyElmtCount,
			  unsigned long		yyElmtSize);
			/* 'ArrayPtr' is set to the start address of a	*/
			/* memory space to hold an array of 'ElmtCount' */
			/* elements each of size 'ElmtSize' bytes.	*/

extern void ResizeArray  (char * *		yyArrayPtr,
			  unsigned long *	yyOldElmtCount,
			  unsigned long		yyNewElmtCount,
			  unsigned long		yyElmtSize);
			/* The memory space for the array is changed	*/
			/* to 'NewElmtCount' elements.			*/

extern void ExtendArray  (char * *		yyArrayPtr,
			  unsigned long *	yyElmtCount,
			  unsigned long		yyElmtSize);
			/* The memory space for the array is increased	*/
			/* by doubling the number of elements.		*/

extern void ShrinkArray  (char * *		yyArrayPtr,
			  unsigned long *	yyElmtCount,
			  unsigned long		yyElmtSize);
			/* The memory space for the array is reduced	*/
			/* by halving the number of elements.		*/

extern void ReleaseArray (char * *		yyArrayPtr,
			  unsigned long *	yyElmtCount,
			  unsigned long		yyElmtSize);
			/* The memory space for the array is released.	*/

# endif
