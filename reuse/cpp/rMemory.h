# ifndef yyrMemory
# define yyrMemory

/* $Id: rMemory.h,v 1.8 1995/05/09 13:53:42 grosch rel $ */

/* $Log: rMemory.h,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

/* avoid linker problems with MS VC++ */
# ifdef _MSC_VER
# define Free rmFree
# endif

# define BeginrMemory InitrMemory

extern unsigned long MemoryUsed	;
			/* Holds the total amount of memory managed by	*/
			/* this module.					*/

extern void	InitrMemory	(void);
			/* The memory module is initialized.		*/

extern char *	Alloc		(register unsigned long yyByteCount);
			/* Returns a pointer to dynamically allocated	*/
			/* space of size 'ByteCount' bytes.		*/

extern void	Free		(unsigned long yyByteCount, const char * yya);
			/* The dynamically allocated space starting at	*/
			/* address 'a' of size 'ByteCount' bytes is	*/
			/* released.					*/

extern void	CloserMemory	(void);
			/* All memory managed by this module is		*/
			/* released.					*/

extern void	WriterMemory	(void);
			/* The internal data structure of this module   */
			/* is printed to stdout. Useful for debugging.  */

# endif
