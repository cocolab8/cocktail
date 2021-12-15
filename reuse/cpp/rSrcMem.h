/* Copyright (c) 1999 Dr. Josef Grosch, CoCoLab - Datenverarbeitung

   This file contains proprietary and confidential information and
   remains the property of CoCoLab. Use, disclosure, or reproduction
   is prohibited except as permitted by express written license agreement
   with CoCoLab.

   Phone : +49-7841-669144
   Fax   : +49-7841-669145
   E-mail: grosch@cocolab.com
*/

/* Project:	Cocktail Reuse Library
 * Descr:	Storing source lines
 * Author:	Dr. Jürgen Vollmer <vollmer@cocolab.com>
 * Id: rSrcMem.h,v 1.18 2007/01/17 14:46:25 vollmer Exp $
*/

# ifndef rSrcMem_H
# define rSrcMem_H

# include <stdio.h>
# include "ratc.h"
# include "Idents.h"
# include "Position.h"

# define rSrcMemVersion "2007-01-17"

/*                       r S r c M e m
 *                       =============
 *
 * This module allows to store the source to be scanned / parsed in memory
 * and to retrieve parts of the source based on a start and end position (i.e.
 * filename, line and column information). The retrieval expands tab-chars.
 * The source is stored on a line-by-line base. Adding text into a store must
 * not be done line-by-line but an entire buffer may be added. The splitting
 * into lines is done by this module.
 *
 * Handling of %line-directives with different filenames is supported.
 * For each source stored in a single trSrcMem store, a an attribute
 * is maintained, which "belongs" to the user of this module. This allows
 * to memoize source-oriented user defined data.
 * A source line may be marked as "comment" line.
 *
 * It is assumed, that a trSrcMem-object represents only one input file, or
 * if several files, these files are added entirely one after the other.
 * Each source can be added only once.
 * With other words the following calling sequence is forbidden for a single
 * store:
 *  rSrcMemSetPosition (store, new_pos.Filename = f1, ...)
 *  rSrcMemSetPosition (store, new_pos.Filename = f2, ...)
 *  rSrcMemSetPosition (store, new_pos.Filename = f1, ...)
 * As a consequence: a single  trSrcMem-object can not be used to represent
 * "nested" sources.
 *
 * Begin_rSrcMem, Close_rSrcMem
 * ----------------------------
 *  Initialization and termination of the module.
 *  NOTE: We are using `rMemory' to allocate the required memory. Hence
 *       `BeginrMemory' should be called before `Begin_rSrcMem', and
 *       `CloserMemory' should be called only after `Close_rSrcMem'.
 *
 * rNewSrcMem, rDeleteSrcMem, rDeleteAllSrcMem
 * -------------------------------------------
 *  Before a source file can be stored, a new storage has to be created.
 *  Several independent storages may be created and deleted separately.
 *
 * rPrintSrcMem
 * ------------
 *  Writes the given store to a file.
 *
 * rAddSrcMem
 * ----------
 *  Adds an entire buffer into the given storage.
 *  Split the content of the buffer into \n-terminated lines and stores
 *  them. If this routine is called several times, and the last line of the
 *  last call was not terminated by a \n, the first line of current buffer is
 *  concatenated to the last line of the last call.
 *
 * rSrcMemSetPosition
 * ------------------
 * Sets new_pos as current position.
 *
 * rSetTabStop
 * -----------
 *  Sets the tab stop, default: 8
 *
 * rGetSrcMem
 * ----------
 *  Fills a buffer with the source contained between the start and end
 *  position. Tabulator characters are expanded. \n are added if several
 *  lines are retrieved.
 *  If the result consists of only one line, and the start column is > 1,
 *  no leading blanks are inserted. If the result consists of more than
 * one line, and the start column is > 1 leading blanks are inserted.
 *
 * rSrcMemPosition2Index, rSrcMemPosition2InfoIndex
 * ------------------------------------------------
 * Given a source position, returns the index into store->lines and
 * store->infos array corresponding to tha position.
 *
 * rSrcMemSetComment, rSrcMemGetComment
 * ------------------------------------
 * Set / get the value of the isComment flag.
 */

/* You may use these data structures, but only in a read-only fashion! */

/* By the term "source" we mean: the name of the file, under we should store a
 * given line. If no %-Position directive is contained in the source, that's
 * the name of the physical source file. If %-Position directives are used,
 * that is the filename given by the directive at a given point.
 * The "first_line" is the line number of the first line in a source. If no
 * %-Position directive is given it's 1, else it's the line number given
 * by the first %-Position directive for a given source.
 * Note: if for a given source name several %-Position directives are given:
 *       1. between two of such directives, no other directive with another
 *          filename may be given;
 *       2. the line numbers must increase.
 */

/* a single line of source */
typedef struct {
  char   *line;
  size_t  size;      /* of the allocated memory for the line, this must not be
		      * equal to `strlen (line)'.
		      */
  rbool   nl;        /* true, if the line is terminated with a \n.
	              * Note: \n and \r char's are not stored.
		      */
  int     info_nr;   /* Index in the info-array specifying the file
		      * containing this line
		      */
  long    line_nr;   /* in this line */
  rbool   isComment; /* true, iff the entire line is a comment line.
		      * c.f. rAddSrcSetComment/rAddSrcgetComment,
		      * Default false.
		      */
} trSrcMem_line;

/* Mapping of source names to start/end indices */
typedef struct {
  tIdent file_name;
  long   first_line;   /* The line number of the first physical line in the
		        * source. Default 1.
		        */
  long start;          /* Index in trSrcMem->lines, which contains the physical
		        * first line of the source.
		        */
  long last;           /* Index in trSrcMem->lines, which contains the physical
		        * last line of the source.
		        * The last line could be a %-Position directive, which
		        * defines a new first_line of the following "source".
			* -1: no line stored so far.
		        */
  void *user_info;     /* may be set by the "user" of this module, is
			* initialized to 0. This is the only field, which may
			* be written by the user of this module.
			*/
} trSrcMem_info;

/* all source lines */
typedef struct {
  long            last_line;  /* The array elements 0 .. last_line are used */
  unsigned long   max_lines;  /* The array contains 0 .. max_lines elements */
  trSrcMem_line  *lines;      /* Dynamic array of lines, c.f. DynArray.h    */
  long            last_info;  /* The array elements 0 .. last_info are used
                               * rNewSrcMem() sets store->last_info = -1;
			       * After rNewSrcMem() before anything other
			       * rSrcMemSetPosition() must be called.
			       */
  unsigned long   max_infos;  /* The array contains 0 .. last_info elements */
  trSrcMem_info  *infos;      /* Dynamic growing array of file informations */
} trSrcMem_elem, *trSrcMem;


extern void Begin_rSrcMem (void);
/* Initialize the rSrcMem module. */

extern void Close_rSrcMem (void);
/* Terminate the module (deallocates all allocated memory for this module) */

extern trSrcMem rNewSrcMem (void);
/* Create a new source memory data structure. Return a handle to it. */

extern void rDeleteSrcMem (trSrcMem store);
/* Delete the `store'.
 * If store == NULL, this call is ignored.
 */

extern void rDeleteAllSrcMem (void);
/* Delete all stores created before. */

extern void rPrintSrcMem (FILE *file, trSrcMem store);
/* write `store' to `file'
 * if store == NULL, do nothing
 */

extern void  rAddSrcMem (trSrcMem store, const char *buffer, int size);
/* Split the content of `buffer' into \n-terminated lines and store
 * them `store'. `size' is the number of char's contained in `buffer'.
 * if store == NULL, do nothing
 */

extern void rSrcMemSetPosition (trSrcMem  store,
				tPosition old_pos,
				tPosition new_pos,
				rbool     join_lines);
/* Sets new_pos as current position, old_pos == NoPosition indicates the
 * initial filename, the filename is set to new_pos.FileName, and "first_line"
 * is set to 1.
 * The %-Position directive must be contained in the line indicated by
 * old_pos (if old_pos != NoPosition). The characters of the directive are
 * replaced by new_pos.Column blanks. The line number of that line will
 * be changed to new_pos.Line.
 * join_lines == true the line follwoing the %-directive is joined to the
 *               line containing the %-directive
 * if store == NULL, do nothing
 */

extern void rSetTabStop (int tab);
/* Sets the tab stop to `tab'. default: 8 */

extern long rSrcMemPosition2Index (trSrcMem  store, tPosition pos);
/* Returns the index into store->lines array, which stores the
 * line with the given position.
 * If there is no such line, returns -1.
 * if store == NULL, do nothing
 */

extern long rSrcMemPosition2InfoIndex (trSrcMem  store, tPosition pos);
/* Returns the index into store->infos array, which represents the file
 * containing the line with the given position.
 * If there is no such line, returns -1.
 * if store == NULL, do nothing
 */

extern char *rGetSrcMem (trSrcMem       store,
			 tPosition      from,
			 tPosition      to,
			 char          *buffer,
			 unsigned long *size);
/* Returns the source stored within the given position range.
 * to.Column may be a very large integer (i.e. may be larger than the actual
 * length of the to-line), if the entire line should be fetched.
 *
 * If `buffer' == NULL
 * then an global internal buffer is used, large enough to hold all characters
 *      of of the given range. This buffer is reused the next time this routine
 *      is called with `buffer' == NULL. The address of that buffer is
 *      returned.
 *      If 'size' != NULL *size = strlen (buffer)
 * If `buffer' != NULL
 * then the buffer can store at most `size' characters. If the result is
 *      larger, the result its truncated. `buffer' is returned.
 *      *size = strlen (buffer)
 * The resulting string is always \0 terminated.
 * if store == NULL, return the empty string
 */

extern void rSrcMemSetComment (trSrcMem  store,
			       tPosition from,
			       tPosition to,
			       rbool     value);
/* Sets the value of the isComment flag to value for all lines in the range
 * 'from' to 'to'.
 * if store == NULL, do nothing
 */
extern rbool rSrcMemGetComment (trSrcMem  store,
			        tPosition pos);
/* Returns the value of the isComment flag for the given position
 * If store == NULL, rfalse is returned in any case.
 */

/*
 * Log: rSrcMem.h,v $
 * Revision 1.18  2007/01/17 14:46:25  vollmer
 * replaced #include <string.h> by #include "rString.h"
 *
 * Revision 1.17  2006/09/05 16:44:28  vollmer
 * compiles now without warnings (GCC; G++, MS-CL)
 *
 * Revision 1.16  2006/03/15 16:53:07  vollmer
 * fixed some initializaions and changed some types from unsigned to signed
 *
 * Revision 1.15  2006/03/13 13:57:49  vollmer
 * rSrcMemSetPosition: fixed off-by-one error
 *
 * Revision 1.14  2005/10/14 17:56:10  vollmer
 * handle situations where rSrcMemPosition2Index returns -1
 *
 * Revision 1.13  2004/11/25 16:29:03  vollmer
 * Fixed a bug if two %-Position directives follow without any character
 * in between
 *
 * Revision 1.12  2002/10/11 13:48:09  vollmer
 *  * replace call of abort() by Reuse_Exit()
 *
 * Revision 1.11  2001/08/22 14:40:42  vollmer
 * rSrcMemSetPosition: added a check if "nested" sources are added.
 *                     Since this invalidates internal invariants,
 * 		    a xxFatal Error Message is emitted.
 *
 * Revision 1.10  2001/08/21 14:38:03  vollmer
 * - added support for storing several source in one trSrcMem store
 * - added trSrcMem_info for mapping of source names to start/end indices
 * - replaced rSetPositionForSrcMem by rSrcMemSetPosition
 *
 * rSrcMem.h,v
 * Revision 1.9  2001/07/25 11:33:23  vollmer
 * rAddSrcMem:   fixed handling of isComment
 * rPrintSrcMem: added output of isComment flag
 *
 * Revision 1.8  2001/06/29 12:05:54  vollmer
 * added rAddSrcSetComment, rAddSrcGetComment
 * all routines accept now store == NULL; they do nothing in that case
 *
 * Revision 1.7  2001/06/28 07:42:37  vollmer
 * AddSrcMem: fixed: a \r at the end of an incomplete last
 *            line was not removed
 *
 * Revision 1.6  2000/07/03 15:26:34  vollmer
 * Fixed memory allocation memory in rGetSrcMem, if buffer==NULL
 *
 * Revision 1.5  2000/05/08 11:15:59  vollmer
 * typoo
 *
 * Revision 1.4  2000/05/03 13:16:54  vollmer
 * - compiles now unter C,C++ (GCC) and Microsoft Windows(Visual Studio)
 * - fixed rDeleteAllSrcMem (freed wrong amount of memory)
 *
 * Revision 1.2  1999/09/01 11:45:48  vollmer
 * Now, when calling rSetPositionForSrcMem, the store may contain more than one
 * line. No error is produced, when the %-directive is missing.
 *
 * Revision 1.1  1999/08/15 18:51:53  vollmer
 * Initial revision
 *
 */
# endif
