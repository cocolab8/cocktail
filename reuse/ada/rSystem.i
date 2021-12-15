# ifndef yySystem
# define yySystem

/* $Id: rSystem.h,v 1.14 1999/01/21 10:28:58 grosch rel $ */

/*
 * $Log: rSystem.h,v $
 * Revision 1.14  1999/01/21 10:28:58  grosch
 * added exception handling to reuse library
 *
 * Revision 1.13  1998/11/09 15:01:39  grosch
 * fixed $Log: rSystem.h,v $
 * fixed Revision 1.14  1999/01/21 10:28:58  grosch
 * fixed added exception handling to reuse library
 * fixed Log-Entry
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Jan. 1992 */

# include "ratc.h"
# include <stdio.h>

/* interface for machine dependencies */

# ifndef rbool
#  define rbool char
# endif

# define tFile int

/* binary IO */

extern tFile	OpenInput	ARGS ((char * yyFileName));
			/* Opens the file whose name is given by the	*/
			/* string parameter 'FileName' for input.	*/
			/* Returns an integer file descriptor.		*/

extern tFile	OpenOutput	ARGS ((char * yyFileName));
			/* Opens the file whose name is given by the	*/
			/* string parameter 'FileName' for output.	*/
			/* Returns an integer file descriptor.		*/

extern int	rRead		ARGS ((tFile yyFile, char * yyBuffer,
					int yySize));
			/* Reads 'Size' bytes from file 'File' and	*/
			/* stores them in a buffer starting at address	*/
			/* 'Buffer'.					*/
			/* Returns the number of bytes actually read.	*/

extern int	rWrite		ARGS ((tFile yyFile, char * yyBuffer,
					int yySize));
			/* Writes 'Size' bytes from a buffer starting	*/
			/* at address 'Buffer' to file 'File'.		*/
			/* Returns the number of bytes actually written.*/

extern void	rClose		ARGS ((tFile yyFile));
			/* Closes file 'File'.				*/

extern void	rDeleteFile	ARGS ((char * yyFileName));
			/* Deletes the file named 'FileName'.		*/

extern rbool	rDirExists	ARGS ((const char * name));
			/* Returns true, if 'name' is a directory.	*/
			/* under MVS: returns always false.		*/

extern rbool	rMakeDir	ARGS ((const char * name));
			/* Creates the directory named 'name'.		*/
			/* Creates parent directories as needed.	*/
			/* Returns true, if the directory could be	*/
			/* created or already exists.			*/
			/* under MVS: returns always false.		*/

extern FILE *	fopen_input	ARGS ((char * yyFileName));
			/* Opens the file whose name is given by the	*/
			/* string parameter 'FileName' for input.	*/
			/* Returns a file descriptor of type 'FILE *'.	*/

extern FILE *	fopen_output	ARGS ((char * yyFileName));
			/* Opens the file whose name is given by the	*/
			/* string parameter 'FileName' for output.	*/
			/* Returns a file descriptor of type 'FILE *'.	*/

extern rbool IsCharacterSpecial	ARGS ((tFile yyFile));
			/* Returns true if file 'File' is connected	*/
			/* to a character device like a terminal.	*/

extern long	rFileSize	ARGS ((char * yyFileName));
			/* Returns the total number of bytes in the	*/
			/* file named 'FileName'.			*/

extern char  DirectorySeparator	ARGS ((void));
			/* Returns '\' under Windows otherwise '/'.	*/


/* calls other than IO */

extern char *	rAlloc		ARGS ((long yyByteCount));
			/* Returns a pointer to dynamically allocated	*/
			/* memory space of size 'ByteCount' bytes.	*/
			/* Returns NIL if space is exhausted.		*/

extern void	rFree		ARGS ((char * yyPtr));
			/* The dynamically allocated memory space	*/
			/* pointed to by 'Ptr' is released.		*/

extern long	rTime		ARGS ((void));
			/* Returns consumed cpu-time in milliseconds.	*/

extern char *	rtpqx		ARGS ((char *));

extern rbool	rtpqy		ARGS ((void));

extern int	GetArgCount	ARGS ((void));
			/* Returns number of arguments.			*/

extern void	GetArgument	ARGS ((int yyArgNum, char * yyArgument));
			/* Stores a string-valued argument whose index	*/
			/* is 'ArgNum' in the memory area 'Argument'.	*/

extern char *	GetEnvVar	ARGS ((char * yyName));
			/* Returns a pointer to the environment		*/
			/* variable named 'Name'.			*/

extern void	PutArgs		ARGS ((int yyArgc, char * * yyArgv));
			/* Dummy procedure that passes the values	*/
			/* 'argc' and 'argv' from Modula-2 to C.	*/

extern int	rErrNo		ARGS ((void));
			/* Returns the current system error code.	*/

extern int	rSystem		ARGS ((char * yyString));
			/* Executes an operating system command given	*/
			/* as the string 'String'. Returns an exit or	*/
			/* return code.					*/

extern void	rExit		ARGS ((int yyStatus));
			/* Terminates program execution and passes the	*/
			/* value 'Status' to the operating system.	*/

extern void  (* Reuse_Exit)	ARGS ((void));
			/* Configurable exception handling of the Reuse	*/
			/* library. Is called if out of memory.		*/

extern void	BEGIN_System	ARGS ((void));
			/* Dummy procedure with empty body.		*/

# endif
