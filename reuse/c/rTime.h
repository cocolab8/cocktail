# ifndef yyTime
# define yyTime

# include "ratc.h"

extern long	StepTime	ARGS ((void));
			/* Returns the sum of user time and system time */
			/* since the last call to 'StepTime' in milli-	*/
			/* seconds.					*/
 
extern void	WriteStepTime	ARGS ((char * yystring));
			/* Writes a line consisting of the string	*/
			/* 'string' and the value obtained from a call	*/
			/* to 'StepTime' on standard output.		*/

# endif
