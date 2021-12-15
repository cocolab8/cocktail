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
 * Id: rSrcMem.c,v 1.28 2007/01/17 14:48:10 vollmer Exp $
*/

# include <stdlib.h>
# include "rSystem.h"
# include "rString.h"
# include "rSrcMem.h"
# include "DynArray.h"
# include "rMemory.h"
# include "Errors.h"
# include "Idents.h"

# if defined _MSC_VER & (_MSC_VER >= 1100)
#  pragma warning (disable:4706)   /* assignment in conditional expr */
# endif

# undef  DEBUG_SRCMEM
# ifdef  DEBUG_SRCMEM
#   define PRINTF(args) printf args;
# else
#   define PRINTF(args)
#   ifndef NDEBUG
#     define NDEBUG
#   endif
# endif
# include <assert.h>

/*****************************************************************************/

# define MIN_COL(c1,c2) ((c1) < (c2) ? (c1) : (c2))
# define DEFAULT_TAB_STOP 8
static int tabstop = DEFAULT_TAB_STOP;

/*****************************************************************************/

/* simple list of all stores */
typedef struct sstore_list_elem *tstore_list;
typedef struct sstore_list_elem {
  tstore_list    next;
  trSrcMem       store;
} tstore_list_elem;

static tstore_list store_list = NULL;

/*****************************************************************************/

/* the module-local buffer used in rGetSrcMem */
static char         *result_buffer      = NULL;
static unsigned long result_buffer_size = 0;
# define RESULT_BUFFER_INIT_SIZE  256

/* used to implement a simple cache */
static tIdent rSrcMemPosition2InfoIndex_cached_FileName;
static int    rSrcMemPosition2InfoIndex_cached_info_nr;

static tPosition rSrcMemPosition2Index_cached_Pos;
static long      rSrcMemPosition2Index_cached_start;
static int       rSrcMemPosition2Index_cached_info_nr;

/*****************************************************************************/

void Begin_rSrcMem (void)
{
  PRINTF (("*** Begin_rSrcMem\n"));
  assert (result_buffer      == NULL);
  assert (result_buffer_size == 0);
  assert (store_list         == NULL);
  tabstop = DEFAULT_TAB_STOP;
  rSrcMemPosition2InfoIndex_cached_FileName = NoIdent;
  rSrcMemPosition2InfoIndex_cached_info_nr  = 0;

  rSrcMemPosition2Index_cached_Pos     = NoPosition;
  rSrcMemPosition2Index_cached_start   = -1;
  rSrcMemPosition2Index_cached_info_nr = 0;
}

void Close_rSrcMem (void)
{
  PRINTF (("*** Close_rSrcMem\n"));
  rDeleteAllSrcMem ();
  if (result_buffer != NULL) {
    ReleaseArray (&result_buffer, &result_buffer_size, sizeof (char));
    result_buffer      = NULL;
    result_buffer_size = 0;
  }
}

/*****************************************************************************/

# define INIT_SRC_MAX_LINES 1000
# define INIT_SRC_MAX_FILES 2
trSrcMem
rNewSrcMem (void)
{
  trSrcMem    store = (trSrcMem)    Alloc (sizeof (trSrcMem_elem));
  tstore_list list  = (tstore_list) Alloc (sizeof (tstore_list_elem));

  PRINTF (("*** rNewSrcMem\n"));

  store->last_line = -1;
  store->max_lines = INIT_SRC_MAX_LINES;
  MakeArray ((char**)&store->lines, &store->max_lines, sizeof (trSrcMem_line));

  store->last_info = -1;
  store->max_infos = INIT_SRC_MAX_FILES ;
  MakeArray ((char**)&store->infos, &store->max_infos, sizeof (trSrcMem_info));
  store->infos[0].file_name  = NoIdent;
  store->infos[0].first_line = -1;
  store->infos[0].start      = -1;
  store->infos[0].last       = -1;
  store->infos[0].user_info  = 0;

  list->next  = store_list;
  list->store = store;
  store_list  = list;

  return store;
}

/*****************************************************************************/

static void
do_release (trSrcMem store)
{
  long index;
  PRINTF (("*** do_release \n"));
  for (index = 0; index <= store->last_line; index++) {
    Free (store->lines[index].size, store->lines[index].line);
  }
  ReleaseArray ((char**)&store->lines, &store->max_lines,
		sizeof (trSrcMem_line));
  ReleaseArray ((char**)&store->infos, &store->max_infos,
		sizeof (trSrcMem_info));
  store->lines = NULL; /* nullify the store */
  Free (sizeof (trSrcMem_elem), (char*)store);
}

void
rDeleteSrcMem (trSrcMem store)
{
  /* search this store in the store list */
  tstore_list list = store_list;
  PRINTF (("*** rDeleteSrcMem\n"));

  if (store != NULL) {
    while (list != NULL) {
      if (list->store == store) {
	list->store = NULL; /* mark store as "deleted" in the list */
	do_release (store);
	return;
      }
    }
    fprintf (stderr, "INERNAL ERROR: rDeleteSrcMem, store not found\n");
    Reuse_Exit();
  }
}

void
rDeleteAllSrcMem (void)
{
  PRINTF (("*** rDeleteAllSrcMem\n"));

  while (store_list != NULL) {
    tstore_list next = store_list->next;
    if (store_list->store != NULL) {
      do_release (store_list->store);
    }
    Free (sizeof (tstore_list_elem), (char*) store_list);
    store_list = next;
  }
}

/*****************************************************************************/

void
rAddSrcMem (trSrcMem store, const char *buffer, int size)
{
  const char *cp;
  int   i;
  int   len   = 0;
  const char *start = buffer;

  long cur_index;
  long index_last_call;
  long cur_line_nr;
  long cur_info_nr;

  if (store != NULL) {
    /* If the last line of the last call of GetLine was not terminated by
     * a \n (i.e. the buffer contained only part of a line), then
     * we have to fix that line in store, so that it contains the entire line.
     */

    PRINTF (("*** rAddSrcMem: size = %d, buffer = `%s'\n", size, buffer));

    if (size <= 0) {
      return;
    }

    if (store->last_line < 0) {
      /* That's the first call */
      index_last_call = -1;
      cur_index       = -1;
      cur_line_nr     = 0;
      cur_info_nr     = 0;
    } else {
      index_last_call = store->last_line;
      cur_index       = store->last_line;
      cur_line_nr     = store->lines[cur_index].line_nr;
      cur_info_nr     = store->lines[cur_index].info_nr;
    }

    /* copy Buffer into the array store->lines */
    for (i = 0, cp = buffer; i < size; i++, cp++) {
      len ++;
      if (*cp == '\n') {
	cur_index++;
	cur_line_nr++;
	if (cur_index + 1 >= (long)store->max_lines) {
	  /* +1: may be we have to store an incomplete line */
	  ExtendArray ((char**)&store->lines, &store->max_lines,
		       sizeof (trSrcMem_line));
	}

	/* don't store the \n */
	store->lines[cur_index].size      = len; /* \n counts to len,
						   * but is not stored,
						   * and the \n is replaced
						   * by the terminating \0
						   */
	store->lines[cur_index].line      = Alloc (len);
	store->lines[cur_index].nl        = rtrue;
	store->lines[cur_index].isComment = rfalse;
	store->lines[cur_index].line_nr   = cur_line_nr;
	store->lines[cur_index].info_nr   = cur_info_nr;
	strncpy (store->lines[cur_index ].line, start, len-1);
	if (len >= 2 && store->lines[cur_index].line[len-2] == '\r') {
	  /* we don't want to store a \r in front of a \n */
	  len--;
	}
	store->lines[cur_index].line[len-1] = '\0';
	start = cp+1;
	PRINTF (("\t index= %3ld, line_nr %3ld, len=%2d nl=yes `%s'\n",
		 cur_index, cur_line_nr, len,
		 store->lines[cur_index].line));
	len   = 0;
      }
    }

    if (len != 0) {
      /* Incomplete line: the last line of the buffer is not \n-terminated */
      cur_index++;
      cur_line_nr++;
      store->lines[cur_index].size      = len+1; /* +1: the terminating \0 */
      store->lines[cur_index].line      = Alloc (len+1);
      store->lines[cur_index].nl        = rfalse;
      store->lines[cur_index].isComment = rfalse;
      store->lines[cur_index].line_nr   = cur_line_nr;
      store->lines[cur_index].info_nr   = cur_info_nr;

      strncpy (store->lines[cur_index].line, start, len);
      if (store->lines[cur_index].line[len-1] == '\r') {
	/* we don't want to store a \r in front of a \n */
	len--;
      }
      store->lines[cur_index].line[len] = '\0';
      PRINTF (("\t index= %3ld, line_nr %3ld, len=%2d nl=no  `%s'\n",
	       cur_index, cur_line_nr, len,
	       store->lines[cur_index].line));
    }

    if (index_last_call >= 0 && store->lines[index_last_call].nl == rfalse) {
      /* The last line of the previous call to SrcMem was not complete */

      /* 1. Allocate enough space to concatenate the last line of the last
       *    call of GetLine and the first line of this call
       */
      char *line = Alloc (store->lines[index_last_call].size +
			  store->lines[index_last_call+1].size - 1);
      PRINTF (("\t continue line\n"));

      /* 2. concatenate */
      sprintf (line, "%s%s",
	       store->lines[index_last_call].line,
	       store->lines[index_last_call + 1].line);

      /* 3. free the old line */
      Free (store->lines[index_last_call].size,
	    store->lines[index_last_call].line);

      /* 4. update that last line */
      store->lines[index_last_call].size +=
	store->lines[index_last_call + 1].size-1;
      store->lines[index_last_call].line = line;
      store->lines[index_last_call].nl =
	store->lines[index_last_call + 1].nl;
      /* no need to change: store->lines[index_last_call].line_nr
       * since we concated the twoi lines.
       */

      /* 5. move the following lines one forward */
      for (i = index_last_call + 1; i < cur_index; i++) {
	store->lines[i] = store->lines[i + 1];
	store->lines[i].line_nr--;
      }
      cur_index--;
    }
    store->last_line               = cur_index;
    store->infos[cur_info_nr].last = cur_index;
  }
}

/*****************************************************************************/

void
rSetTabStop (int tab)
{
  PRINTF (("*** rSetTabStop\n"));

  tabstop = tab;
}

/*****************************************************************************/

static int
copy_line (char *dest, char *src, int size, int start_col, int end_col,
	   rbool nl, rbool insert_leading_blanks)
/* Copies src to dest, but at most size chars, and expands tabulators \t.
 * Only chars between start_col and end_col are copied.
 * Copy only as long as no \0 has been seen.
 * If `nl' = true and the entire line can be copied a \n is appended.
 * Returns the number of copied chars (incl. expanded tabulators and \n).
 * Note: the result is not \0-terminated.
 */
{
# define COPY_CHAR(CHR)				\
      {if (dest > buf_end) goto end;		\
       if (col < start_col) {			\
	if (insert_leading_blanks) {		\
	  *dest++ = ' ';			\
	}					\
       } else if (col <= end_col) {		\
	 *dest++ = CHR;				\
       } else {					\
	 goto end;				\
       }					\
       col++;					\
      }

  int   col       = 1;
  char *buf_start = dest;
  char *buf_end   = dest + size - (nl? 2 : 1);
  /* buf_end: last char* where we can store a char in the buffer
   * Note: we may have to store a \n
   */
  PRINTF (("\t copy_line: size=%d\n", size));
  if (size == 0) {
    return 0;
  }
  while (*src) {
    if (*src == '\t') {
      /* expand tabulators */
      COPY_CHAR (' ');
      while (col % tabstop != 1) {
	COPY_CHAR (' ');
      }
    } else {
      COPY_CHAR (*src);
    }
    src++;
  }

  /* we still have enough space to store \n,
   * col: number of the _next_ column
   */
 end:
  if (nl) {
    if (*src == '\0' && col <= end_col) {
      *dest++ = '\n';
    } else if (col <= end_col) {
      *dest++ = *src;
    }
  }
  PRINTF (("\t copy_line: copied %d\n", dest - buf_start));
  return dest - buf_start;
}

char *
rGetSrcMem (trSrcMem       store,
	    tPosition      from,
	    tPosition      to,
	    char          *buffer,
	    unsigned long *size)
{
# define CHECK_AND_EXTEND_BUFFER(cur_size,nr) 			    	      \
	if (buffer == NULL && 						      \
	    cur_size + store->lines[nr].size >= result_buffer_size) {	      \
  	    ExtendArray (&result_buffer, &result_buffer_size, sizeof (char)); \
	    res_buffer = result_buffer;					      \
	    res_size   = result_buffer_size;				      \
        }
  long  copied = 0;
  char *res_buffer;
  long  res_size;

  PRINTF (("*** rGetSrcMem size=%ld buffer=%p from=%ld.%d to = %ld.%d\n",
	   (size==NULL) ? 0 : *size, buffer,
	    from.Line, from.Column, to.Line, to.Column));

  if (buffer == NULL) {
    if (result_buffer == NULL) {
      result_buffer_size = RESULT_BUFFER_INIT_SIZE;
      MakeArray (&result_buffer, &result_buffer_size, sizeof (char));
    }
    res_buffer = result_buffer;
    res_size   = result_buffer_size;
  } else {
    if (size == NULL) {
      fprintf (stderr, "FATAL ERROR: rGetSrcMem, size != NULL\n");
      Reuse_Exit();
    }
    res_buffer = buffer;
    res_size   = *size;
  }

  if (store != NULL) {
    long from_i = rSrcMemPosition2Index (store, from);
    long to_i   = rSrcMemPosition2Index (store, to);

    PRINTF (("\t from_i = %ld, to_i = %ld\n", from_i, to_i));
    if (from_i >= 0 && to_i >= 0 && from_i <= to_i) {
      if (from_i == to_i) {
	CHECK_AND_EXTEND_BUFFER(0, from_i);
	copied = copy_line (res_buffer,
			    store->lines[from_i].line,
			    res_size,
			    from.Column, to.Column,
			    store->lines[to_i].nl, rfalse);
      } else {
	long line_nr;
	/* start copying from the first line with the given column */
	CHECK_AND_EXTEND_BUFFER(copied, from_i);
	copied += copy_line (res_buffer,
			     store->lines[from_i].line,
			     res_size - copied, from.Column, 999999,
			     store->lines[from_i].nl, rtrue);
	for (line_nr = from_i+1; line_nr <= to_i - 1; line_nr++) {
	  CHECK_AND_EXTEND_BUFFER(copied, line_nr);
	  if (copied >= res_size) break;
	  /* copy the entire line */
	  copied += copy_line (res_buffer + copied,
			       store->lines[line_nr].line,
			       res_size - copied, 1, 999999,
			       store->lines[line_nr].nl, rtrue);
	}
	/* copy the last line only up to the given column */
	CHECK_AND_EXTEND_BUFFER(copied, to_i);
	if (copied <= res_size) {
	  copied += copy_line (res_buffer + copied,
			       store->lines[to_i].line,
			       res_size - copied, 1, to.Column,
			       store->lines[to_i].nl, rtrue);
	}
      }
    }

    if (copied >= res_size) {
      copied = res_size-1;
    }
    res_buffer[copied] = '\0';
    if (size != NULL) {
      *size = copied;
    }
  } else {
    /* store == NULL */
    res_buffer[0] = '\0';
  }
  PRINTF (("\t strlen (buffer) = %ld buffer=`%s'\n", copied, res_buffer));
  return res_buffer;
}

/*****************************************************************************/

long rSrcMemPosition2InfoIndex (trSrcMem store, tPosition pos)
/* searches file_name in store->infos,
 * if found return the array index, else -1
 */
{
  PRINTF (("*** rSrcMemPosition2Index\n"));
  PRINTF (("\t pos: %s %ld:%d\n",GetCStr(pos.FileName), pos.Line, pos.Column));
  if (store == NULL) {
    return -1;
  }

  if (rSrcMemPosition2InfoIndex_cached_FileName == pos.FileName) {
    /* The last call was for the same file, so we can use the cached value */
    return rSrcMemPosition2InfoIndex_cached_info_nr;
  } else {
    long info_nr;
    for (info_nr = 0; info_nr <= store->last_info; info_nr++) {
      if (store->infos[info_nr].file_name == pos.FileName) {
	/* file_name found */
	rSrcMemPosition2InfoIndex_cached_FileName = pos.FileName;
	rSrcMemPosition2InfoIndex_cached_info_nr  = info_nr;
	return info_nr;
      }
    }
  }
  return -1;
}

/*****************************************************************************/

long rSrcMemPosition2Index (trSrcMem  store,
			    tPosition pos)
{
  long info_nr;
  long index = -1; /* not found */
  long start;

  PRINTF (("*** rSrcMemPosition2Index\n"));
  PRINTF (("\t pos: %s %ld:%d\n",GetCStr(pos.FileName), pos.Line, pos.Column));
  if (store == NULL) {
    goto end;
  }

  if (rSrcMemPosition2Index_cached_Pos.FileName == pos.FileName &&
      rSrcMemPosition2Index_cached_Pos.Line <= pos.Line) {
    /* The last call was for the same file, and some previous line
     * so we can use the cached values
     */
    start   = rSrcMemPosition2Index_cached_start;
    info_nr = rSrcMemPosition2Index_cached_info_nr;
    rSrcMemPosition2Index_cached_Pos.Line = pos.Line;
  } else {
    if ((info_nr = rSrcMemPosition2InfoIndex (store, pos)) == -1) {
      /* pos.FileName not found */
      goto end;
    }
    start = store->infos[info_nr].start;
    rSrcMemPosition2Index_cached_Pos     = pos;
    rSrcMemPosition2Index_cached_info_nr = info_nr;
    rSrcMemPosition2Index_cached_start   = start;
  }

  /* search index */
  for (index = start; index <= store->infos[info_nr].last; index++) {
    if (store->lines[index].line_nr == (long)pos.Line) {
      /* line found */
      rSrcMemPosition2Index_cached_start = index;
      goto end;
    }
  }
 end:
  PRINTF (("\t index = %ld\n", index));
  return index;
}

/*****************************************************************************/

void rSrcMemSetPosition (trSrcMem  store,
			 tPosition old_pos,
			 tPosition new_pos,
			 rbool     join_lines)
{
  PRINTF (("*** rSrcMemSetPosition\n"));
  PRINTF (("\t old: `%s' %ld:%d; new `%s' %ld:%d join_lines=%s\n",
	   GetCStr (old_pos.FileName), old_pos.Line, old_pos.Column,
	   GetCStr (new_pos.FileName), new_pos.Line, new_pos.Column,
	   join_lines? "true" : "false"));
  if (store == NULL) {
    return;
  }

  if (store->last_info == -1) {
    /* initial call */
    store->last_info = 0;
    store->infos[0].file_name  = new_pos.FileName;
    store->infos[0].first_line = new_pos.Line;
    store->infos[0].start      = 0;
    store->infos[0].last       = -1;
  } else {
    /* not the inital call */
    long i;
    long index;
    char *p, *c;
    char *new_line;
    int   new_size;

    /* get the index of the %-directive */
    index = rSrcMemPosition2Index (store, old_pos);
    assert (index >= 0);
    join_lines &= index < store->last_line;
    				/* join only, if there is another line */
    store->infos[store->last_info].last = index  -1 ;

    /* create new info entry */
    if (store->infos[store->last_info].file_name != new_pos.FileName) {
      /* this %-directive introduces a new source name */
      if (!(store->last_info == 0 && index == 0)) {
	/* If it's the very first %-directive on the very first source line,
	 * we want to "reuse" that info, and therfore only in the other cases
	 * we create a new info.
	 */
	if (rSrcMemPosition2InfoIndex (store, new_pos) != -1) {
	  /* check that the file name is not given twice */
	  Message ("rSrcMem::rSrcMemSetPosition a source name is given twice",
		   xxRestriction, new_pos);
	  Message ("... may be you have parsed a source twice, or the %-line",
		   xxRestriction, new_pos);
	  Message ("... directives are used in an illegal way.",
		   xxRestriction, new_pos);
	  Message ("... Since the results are not very useful, I give up.",
		   xxFatal, new_pos);
	}
      }

      store->last_info++;
      if (store->last_info >= (long)store->max_infos) {
	ExtendArray ((char**)&store->infos, &store->max_infos,
		     sizeof (trSrcMem_info));
      }
      store->infos[store->last_info].file_name  = new_pos.FileName;
      store->infos[store->last_info].first_line = new_pos.Line;
      store->infos[store->last_info].start      = index;
      store->infos[store->last_info].user_info  = 0;
    }

    /* check that the first line contains '%digits,digits,filename%' */
    p = strchr (store->lines[index].line, '%');
    if (p != NULL) {
      p = strchr (p+1, '%');
    }
    if (p != NULL) {
      p++;
    }
    if (p == NULL && store->lines[index].line[0] != '\0') {
      Message ("%-position directive expected", xxFatal, old_pos);
    }

    /* replace directive by blanks */
    new_size = store->lines[index].size + new_pos.Column + 1;
    if (join_lines) {
      new_size += store->lines[index+1].size;
    }
    new_line = Alloc (new_size);
    c = new_line;
    /* insert blanks (and hence replace %digits,digits,filename%) */
    for (i = 1; i < new_pos.Column; i++) {
      *c++ = ' ';
    }

    /* copy rest of this line */
    if (p) while ((*c++ = *p++));
    Free (store->lines[index].size, store->lines[index].line);
    store->lines[index].size = new_size;
    store->lines[index].line = new_line;

    if (join_lines) {
      /* copy next line */
      p = store->lines[index+1].line;
      if (c > new_line) c--; /* one to far in above copy */
      if (c > new_line && *c == '\0') c--;
      while ((*c++ = *p++));
      Free (store->lines[index+1].size, store->lines[index+1].line);

      store->lines[index].nl = store->lines[index+1].nl;
      /* move other lines one forward */
      for (i = index+1; i < store->last_line; i++) {
	store->lines[i] = store->lines[i+1];
      }
      store->last_line--;
    }

    /* adjust line numbers of this and the following lines */
    for (i = index; i <= store->last_line; i++) {
      store->lines[i].line_nr = new_pos.Line++;
      store->lines[i].info_nr = store->last_info;
    }
    store->infos[store->last_info].last = store->last_line;
  }
}

/*****************************************************************************/

void rSrcMemSetComment (trSrcMem store, tPosition from, tPosition to,
			rbool    value)
{
  PRINTF (("*** rSrcMemSetComment from=%ld.%d to = %ld.%d, value = %d\n",
	   from.Line, from.Column, to.Line, to.Column, value));

  if (store != NULL) {
    long from_i = rSrcMemPosition2Index (store, from);
    long to_i   = rSrcMemPosition2Index (store, to);
    long i;
    if (from_i >= 0 && to_i >= 0) {
      for (i = from_i; i <= to_i; i++) {
	store->lines[i].isComment = value;
      }
    }
  }
}

rbool rSrcMemGetComment (trSrcMem  store, tPosition pos)
{
  PRINTF (("*** rSrcMemGetComment pos=%ld.%d\n",
	   pos.Line, pos.Column));
  if (store != NULL) {
    long pos_i = rSrcMemPosition2Index (store, pos);
    return (rbool) ((pos_i >= 0)? store->lines[pos_i].isComment : rfalse);
  }
  return rfalse;
}

/*****************************************************************************/

void
rPrintSrcMem (FILE *file, trSrcMem store)
{
  long i;

  PRINTF (("*** rPrintSrcMem\n"));
  if (store != NULL) {
    fprintf (file, "last = %3ld, max   = %5ld\n",
	     store->last_line,store->max_lines);
    for (i = 0; i <= store->last_info; i++) {
      fprintf (file,
	       "info = %3ld, first = %5ld start = %5ld last =% 5ld file = `%s'\n",
	       i,
	       store->infos[i].first_line,
	       store->infos[i].start,
	       store->infos[i].last,
	       GetCStr (store->infos[i].file_name));
    }

    fprintf (file, "K-index-info-line-len--123456789|"
	           "123456789|"
	           "123456789|"
	           "123456789|"
	           "123456789|"
	           "123456789|"
	           "123456789|"
	           "1234567890\n");
    for (i = 0; i <= store->last_line; i++) {
      fprintf (file, "%c %4ld %4d %4ld  %3d `%s%s'\n",
	       store->lines[i].isComment? 'C' : ' ',
	       i,
	       store->lines[i].info_nr,
	       store->lines[i].line_nr,
	       (int)strlen (store->lines[i].line) + (store->lines[i].nl?1:0),
	       store->lines[i].line,
	       store->lines[i].nl? "\\n": "");
    }
    fprintf (file, "-----------------------123456789|"
	           "123456789|"
	           "123456789|"
	           "123456789|"
	           "123456789|"
	           "123456789|"
	           "123456789|"
	           "1234567890\n");
  }
}

/****************************   e n d    *************************************/
