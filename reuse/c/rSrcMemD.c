/* Copyright (c) 1999 Dr. Josef Grosch, CoCoLab - Datenverarbeitung

   This file contains proprietary and confidential information and
   remains the property of CoCoLab. Use, disclosure, or reproduction
   is prohibited except as permitted by express written license agreement
   with CoCoLab.

   Phone : +49-7841-669144
   Fax   : +49-7841-669145
   E-mail: grosch@cocolab.de
*/

/* Project:	Cocktail Reuse Library
 * Descr:	Storing source lines
 *              Main program to test it.
 * Author:	Dr. Jürgen Vollmer <vollmer@cocolab.de>
 * Id: rSrcMemD.c,v 1.5 2002/10/11 13:48:09 vollmer draft $
*/

# include <stdlib.h>
# include <stdio.h>
# include <sys/stat.h>
# include <assert.h>
# include "rMemory.h"
# include "rString.h"
# include "rSrcMem.h"

# define L01   "LINE 01 abcdefghijklmnop END\n"
# define L02   "LINE 02 1234567890qwertzuiopü END\n"
# define L03a  "LINE 03 0okm89uh7zg5r-"
# define L03b  "-989876543 END\n"
# define L04   "LINE 04 1qsx 4rfgb9okcxpl,edsdqpfö, END\n"
# define L05   "LINE 05 12werfb7usdfghjklöä END\n"
# define L06a  "and-more-text\n"
# define L06   "%10,10,%" L06a
# define L16   "%30,20,foo-bar%" L06a

# define BUF1  L01  L02 L03a
# define BUF2  L03b L04 L05
# define L03   L03a L03b

# define ASSERT(s1,s2,size)         {char *XS1 = s1; char *XS2 = s2;  \
				     assert (strcmp (XS1,XS2) == 0 && \
				            strlen (XS2) == size);}

# define ASSERT_LEN(s1,s2,len,size) {char *XS1 = s1; char *XS2 = s2; 	  \
				     int XL=len;			  \
				     assert (strncmp (XS1,XS2,XL) == 0 && \
				     strlen (XS2) == size);}

static void
test1 (void)
{
  trSrcMem store;
  tPosition from, to;
  tPosition old_pos, new_pos;
  char buf [1024];
  unsigned long size;

  printf ("******* test with NULL-buffer\n");

  store = rNewSrcMem();
  new_pos.FileName = NoIdent; new_pos.Line = 1;  new_pos.Column = 1;
  rSrcMemSetPosition (store, NoPosition, new_pos, rfalse);
  rAddSrcMem (store, BUF1, strlen (BUF1));  /* BUF1 has no terminating \n */
  rAddSrcMem (store, BUF2, strlen (BUF2));  /* in L03a, hence line3 must  */
				            /* be continued 		  */

  rAddSrcMem (store, L06, strlen (L06));    /* %line directive */
  old_pos.FileName = NoIdent; old_pos.Line = 6;  old_pos.Column = 1;
  new_pos.FileName = NoIdent; new_pos.Line = 10; new_pos.Column = 10;
  rSrcMemSetPosition (store, old_pos, new_pos, rfalse);
  rAddSrcMem (store, BUF1, strlen (BUF1));  /* BUF1 has no terminating \n */
  rAddSrcMem (store, BUF2, strlen (BUF2));  /* in L03a, hence line3 must  */
				            /* be continued 		  */

  rAddSrcMem (store, L16, strlen (L16));    /* %line directive */
  old_pos.FileName = NoIdent; old_pos.Line = 16; old_pos.Column = 1;
  new_pos.FileName = MakeIdent1 ("foo-bar");
  new_pos.Line = 30; new_pos.Column = 20;

  rSrcMemSetPosition (store, old_pos, new_pos, rfalse);
  rAddSrcMem (store, BUF1, strlen (BUF1));  /* BUF1 has no terminating \n */
  rAddSrcMem (store, BUF2, strlen (BUF2));  /* in L03a, hence line3 must  */
				            /* be continued 		  */
  from.FileName = NoIdent; from.Line = 1; from.Column = 1;
  to.FileName   = NoIdent; to.Line   = 1; to.Column   = 9999;
  ASSERT (L01,rGetSrcMem (store, from, to, NULL, &size),size);

  from.Line = 2; from.Column = 1; to.Line = 2; to.Column = 9999;
  ASSERT (L02,rGetSrcMem (store, from, to, NULL, &size),size);

  from.Line = 3; from.Column = 1; to.Line = 3; to.Column = 9999;
  ASSERT (L03,rGetSrcMem (store, from, to, NULL, &size),size);

  from.Line = 4; from.Column = 1; to.Line = 4; to.Column = 9999;
  ASSERT (L04,rGetSrcMem (store, from, to, NULL, &size),size);

  from.Line = 5; from.Column = 1; to.Line = 5; to.Column = 9999;
  ASSERT (L05,rGetSrcMem (store, from, to, NULL, &size),size);

  from.Line = 2; from.Column = 2; to.Line = 4; to.Column = 7;
  sprintf (buf, "%s", L02 L03 L04);
  buf[0] = ' '; /* include leading blanks */
  buf[strlen(L02) + strlen(L03) + 7] = '\0';

  ASSERT (buf,rGetSrcMem (store, from, to, NULL, &size), size);

  from.Line = 2; from.Column = 2; to.Line = 2; to.Column = 7;
  sprintf (buf, "%s", L02);
  buf[7] = '\0';
  ASSERT (buf+1, /* do not include leading blanks, since only one line */
	  rGetSrcMem (store, from, to, NULL, &size),size);

  to.FileName = from.FileName = MakeIdent1 ("foo-bar");
  from.Line   = 30; from.Column = 1;
  to.Line     = 30; to.Column   = 9999;
  sprintf (buf, "%*c%s", 19, ' ', L06a);
  ASSERT (buf,rGetSrcMem (store, from, to, NULL, &size),size);

  rDeleteSrcMem    (store);
  rDeleteAllSrcMem ();
}

static void
test2 (void)
{
  trSrcMem store;
  tPosition from, to;
  char buf [1024];
  char res[1024];
  unsigned long size;


  printf ("******* test with NON-NULL-buffer\n");
# define RES_SIZE 20

  store = rNewSrcMem();
  to.FileName = NoIdent; to.Line = 1;  to.Column = 1;
  rSrcMemSetPosition (store, NoPosition, to, rfalse);

  rAddSrcMem (store, BUF1, strlen (BUF1));  /* BUF1 has no terminating \n */
  rAddSrcMem (store, BUF2, strlen (BUF2));  /* in L03a, hence line3 must  */
				            /* be continued 		  */

  rPrintSrcMem (stdout, store);

  from.FileName = NoIdent; from.Line = 1; from.Column = 1;
  to.FileName   = NoIdent; to.Line   = 1; to.Column   = 29;

  size = 30;
  rGetSrcMem (store, from, to, res, &size);
  ASSERT_LEN  (L01,res, 29,size);

  from.Line = 1; from.Column = 1; to.Line = 1; to.Column = 9999;
  size = RES_SIZE;
  rGetSrcMem (store, from, to, res, &size);
  ASSERT_LEN  (L01,res, RES_SIZE-1,size);

  from.Line = 2; from.Column = 1; to.Line = 2; to.Column = 9999;
  size = RES_SIZE;
  rGetSrcMem (store, from, to, res, &size);
  ASSERT_LEN  (L02,res, RES_SIZE-1,size);

  from.Line = 3; from.Column = 1; to.Line = 3; to.Column = 9999;
  size = RES_SIZE;
  rGetSrcMem (store, from, to, res, &size);
  ASSERT_LEN  (L03,res, RES_SIZE-1,size);

  from.Line = 4; from.Column = 1; to.Line = 4; to.Column = 9999;
  size = RES_SIZE;
  rGetSrcMem (store, from, to, res, &size);
  ASSERT_LEN  (L04,res, RES_SIZE-1,size);

  from.Line = 5; from.Column = 1; to.Line = 5; to.Column = 9999;
  size = RES_SIZE;
  rGetSrcMem (store, from, to, res, &size);
  ASSERT_LEN  (L05,res, RES_SIZE-1,size);

  from.Line = 2; from.Column = 2; to.Line = 4; to.Column = 7;
  sprintf (buf, "%s", L02 L03 L04);
  buf[0]        = ' '; /* include leading blanks */
  buf[RES_SIZE] = '\0';
  size = RES_SIZE;
  rGetSrcMem (store, from, to, res, &size);
  ASSERT_LEN  (buf,res, RES_SIZE-1,size);

  from.Line = 2; from.Column = 2; to.Line = 2; to.Column = 7;
  sprintf (buf, "%s", L02);
  buf[7] = '\0';
  size = RES_SIZE;
  rGetSrcMem (store, from, to, res, &size);
  ASSERT_LEN (buf+1, /* do not include leading blanks, since only one line */
	      res,  RES_SIZE-1,size);

  rDeleteSrcMem    (store);
  rDeleteAllSrcMem ();
}

static void
usage (const char *cmd)
{
  fprintf (stderr, "usage: %s\n", cmd);
  fprintf (stderr, "   selftest of the rSrcMem module\n");
  exit (1);
}

int
main (int argc, char *argv[])
{
  if (argc > 1) usage (argv[0]);

  printf ("Test of the rSrcMem module xxx\n");
  BeginrMemory    ();
  Begin_rSrcMem   ();

  test1();
  test2();

  Close_rSrcMem   ();
  CloserMemory    ();
  return 0;
}
