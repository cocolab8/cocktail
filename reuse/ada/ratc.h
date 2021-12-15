# ifndef yyratc
# define yyratc

/* $Id: ratc.h,v 1.10 2000/09/04 14:22:39 grosch rel $ */

/*
 * $Log: ratc.h,v $
 * Revision 1.10  2000/09/04 14:22:39  grosch
 * fixed typo
 *
 * Revision 1.9  2000/09/04 13:56:04  grosch
 * added # ifndef HAVE_ARGS
 * removed # define cardinal
 *
 * Revision 1.8  2000/04/10 16:09:13  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.7  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.6  1994/04/05 09:00:35  grosch
 * added prefix 'r' to true and false for improved portability
 *
 * Revision 1.5  1994/01/29  22:13:50  grosch
 * renamed bool to rbool
 *
 * Revision 1.4  1992/08/07  14:35:05  grosch
 * changed tString from # define to typedef
 *
 * Revision 1.3  1992/02/18  12:52:30  grosch
 * changed tString from unsigned char * to char *
 *
 * Revision 1.2  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.1  90/07/04  14:34:13  grosch
 * introduced conditional include
 * 
 * Revision 1.0  88/10/04  11:44:54  grosch
 * Initial revision
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

# if defined __STDC__ | defined __cplusplus | defined _MSC_VER
#  define HAVE_ARGS
# endif

# ifndef ARGS
#  ifdef HAVE_ARGS
#   define ARGS(parameters) parameters
#  else
#   define ARGS(parameters) ()
#  endif
# endif

# ifndef rbool
#  define rbool		char
# endif

# ifndef rtrue
#  define rtrue		1
# endif

# ifndef rfalse
#  define rfalse	0
# endif

typedef char * tString;

# endif
