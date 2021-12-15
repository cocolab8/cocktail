# include "license.h"
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <wk.h>

# define FIRM_CODE 2738

static int USER_CODE;

/* structure that holds all important WIBU-KEY informations */
typedef struct {
  LONG lFirmCode;	/* FirmCode to use */
  LONG lUserCode;	/* UserCode to use */
  HWKBENTRY hwkbe;	/* handle of opened WIBU-BOX entry */
} WIBUKEYDATA; /* prefix "wkdata" */

/* prototypes for the WIBU-BOX access functions */
static BOOL OpenBox  (WIBUKEYDATA * pwkdata);
static BOOL CheckBox (WIBUKEYDATA * pwkdata);
static BOOL CloseBox (WIBUKEYDATA * pwkdata);

/* global variables */
static WIBUKEYDATA wibudata;

/****************************************************************************/

int check_license (int user_code)
{
  USER_CODE = user_code;
  putenv ("WKCOM=/D,/D,/D,/D");
  if (! OpenBox (& wibudata)) {
    fprintf (stderr, "License Control: No access to WIBU-BOX!\n");
    return 0;
  }
  if (! CheckBox (& wibudata)) {
    fprintf (stderr, "License Control: No valid license found!\n");
    return 0;
  }
  CloseBox (& wibudata);
  return 1;
}


/*****************************************************************************
P r i n t W k E r r o r
==============================================================================

This function prints an error message in dependence of the last error code.
The error code is read via the WIBU-KEY-driver function WkbGetLastError ().

Parameters
  pszFunction  name of function where the error occurred

*****************************************************************************/

# ifdef DBG_WIBU
static VOID PrintWkError (const TCHAR * pszFunction)
{
  INT nErr;
  TCHAR szError [100];

  nErr = WkbQueryInfo2 (HWKB_LOCAL, WKB_STDCTRL | WKB_QI_ERRTEXT, szError, 100);
  fprintf (stderr, "Error: Function = %s ()\n%s\n", pszFunction, szError);
}
# else
#  define PrintWkError(x)
# endif

/*****************************************************************************
O p e n B o x
==============================================================================

Initialize global structure for the WIBU-KEY.

Parameters
  pwkdata  points to the global WIBU-KEY data

Return
  This function returns TRUE if all actions were completed. If any error
  occurs FALSE will be returned.

*****************************************************************************/

static BOOL OpenBox (WIBUKEYDATA * pwkdata)
{
  ULONG flCtrl;

  /* set Firm Code and User Code */
  pwkdata->lFirmCode = FIRM_CODE;
  pwkdata->lUserCode = USER_CODE;

  /* search & open WIBU-BOX entry of accessed WIBU-KEY subsystem */
  flCtrl = WKB_STDCTRL | WKB_OPEN_FIND | WKB_VERSION2;
  pwkdata->hwkbe = WkbOpen2 (
   HWKB_LOCAL,		/* handle to local system */
   flCtrl,		/* control flags (use version 2, find entry) */
   NULL,		/* ports (NULL for all available ports) */
   pwkdata->lFirmCode,	/* Firm Code */
   pwkdata->lUserCode,	/* User Code */
   NULL			/* no optional data */
  );

  if (! pwkdata->hwkbe) {
    PrintWkError ("WkbOpen2");
    return FALSE;
  }
  return TRUE;
}


/*****************************************************************************
G e t R a n d o m C h a r
==============================================================================

This function returns a random character.

*****************************************************************************/

static TCHAR GetRandomChar (void)
{
  UINT ui = rand ();
  return (TCHAR) (ui >> 24);
}


/*****************************************************************************
G e n e r a t e R a n d o m T e x t
==============================================================================

This function fills the given array of chars with <ulLength> random characters.

Parameters
  pszText   buffer for the string
  ulLength  number of characters to be generated

*****************************************************************************/

static VOID GenerateRandomText (TCHAR * pszText, UINT ulLength)
{
  UINT i;

  /* initialize random generator */
  srand ((UINT) time (NULL));

  /* fill string with random characters */
  for (i = 0; i < ulLength; i ++) {
    pszText [i] = GetRandomChar ();
  }
}


/*****************************************************************************
C h e c k B o x
==============================================================================

This function checks, if a suitable WIBU-BOX is connected at the local system.

This function checks if a correct WIBU-BOX is attached to the local system.
In the most simple way a string is encrypted, then decryped and the
original data is being compared to the decrypted data. If the two string
are identical TRUE is returned. If the comparison of the two string fails
or any error occurs in the communication with the WIBU-KEY the function
will return FALSE.

Parameters
  pwkdata  points to the global WIBU-KEY data

Return
  This function returns TRUE if all actions were completed. If any error
  occurs FALSE will be returned.

*****************************************************************************/

# define CB_MAX_DATA   24

static BOOL CheckBox (WIBUKEYDATA * pwkdata)
{
  TCHAR szTest [CB_MAX_DATA];
  TCHAR szCrypted [CB_MAX_DATA];
  TCHAR szDecrypted [CB_MAX_DATA];
  BOOL fValid;
  UINT cbCrypt;
  UINT cbData;
  ULONG ulSC;
  UINT i;

  /* generate random Selection Code from system time */
  /* use the seconds since January 1, 1970 and clear */
  /* the three topmost bits because bit 29, 30 and 31 have special meanings. */
  ulSC = ((ULONG) time (NULL)) & WKB_SC_COREMASK;
  ulSC |= WKB_SC_EXPDATE;	/* check expiration date */

  /* select encryption algorithm */
  fValid = WkbSelect2 (
   pwkdata->hwkbe,		/* handle to opened entry */
   WKB_STDCTRL | WKB_SEL_DIRECT,/* use direct encryption */
   ulSC,			/* Selection Code */
   NULL				/* no optional data */
  );
  if (! fValid) {
    PrintWkError ("WkbSelect2 a");
    WkbClose2 (pwkdata->hwkbe);
    pwkdata->hwkbe = (HWKBENTRY) NULL;
    return FALSE;
  }

  /* generate random string to encrypt */
  cbData = 20;
  GenerateRandomText (szTest, cbData);

  /* encrypt raw data */
  fValid = WkbCrypt2 (
   pwkdata->hwkbe,		/* handle to opened entry */
   WKB_STDCTRL | WKB_CRYPT_COPY,/* flags for crypt & copy */
   szCrypted,			/* destination buffer */
   szTest,			/* source buffer */
   cbData,			/* bytes to encrypt */
   & cbCrypt			/* bytes encrypted by WkCrypt2 */
  );
  if (! fValid) {
    PrintWkError ("WkbCrypt2 a");
    WkbUnSelect2 (pwkdata->hwkbe);
    WkbClose2 (pwkdata->hwkbe);
    pwkdata->hwkbe = (HWKBENTRY) NULL;
    return FALSE;
  }

  /* Select encryption algorithm for encryption.
  // This is needed to reset all encryption parameters. If you do not reset
  // these values, WkCrypt2 will create a continous stream of encrypted
  // data. But for this example we want to do two times exactly the same
  // encryption. */
  fValid = WkbSelect2 (
   pwkdata->hwkbe,		/* handle to opened entry */
   WKB_STDCTRL | WKB_SEL_DIRECT,/* use direct encryption */
   ulSC,			/* Selection Code */
   NULL				/* no optional data */
  );
  if (! fValid) {
    PrintWkError ("WkbSelect2 b");
    WkbClose2 (pwkdata->hwkbe);
    pwkdata->hwkbe = (HWKBENTRY) NULL;
    return FALSE;
  }

  /* decrypt encrypted data */
  fValid = WkbCrypt2 (
   pwkdata->hwkbe,		/* handle to opened entry */
   WKB_STDCTRL | WKB_CRYPT_COPY,/* flags for crypt & copy */
   szDecrypted,			/* destination buffer */
   szCrypted,			/* source buffer */
   cbData,			/* bytes to encrypt */
   & cbCrypt			/* bytes encrypted by WkCrypt2 */
  );
  if (! fValid) {
    PrintWkError ("WkbCrypt2 b");
    WkbUnSelect2 (pwkdata->hwkbe);
    WkbClose2 (pwkdata->hwkbe);
    pwkdata->hwkbe = (HWKBENTRY) NULL;
    return FALSE;
  }

  /* unselect */
  fValid = WkbUnSelect2 (pwkdata->hwkbe);
  if (! fValid) {
    PrintWkError ("WkbUnSelect2");
    WkbClose2 (pwkdata->hwkbe);
    pwkdata->hwkbe = (HWKBENTRY) NULL;
    return FALSE;
  }

  /* compare original data <szText> to decrypted data <szDecrypted> to assure
   * that the encryption was correct and by this that the WIBU-KEY is connected
   */
  for (i = 0; i < cbData; i ++) {
    if (szTest [i] != szDecrypted [i]) {
      return FALSE;
    }
  }
  return TRUE;
}


/*****************************************************************************
C l o s e B o x
==============================================================================

Close access to WIBU-BOX.

Parameters
  pwkdata  points to the global WIBU-KEY data

Return
  This function returns TRUE if all actions were completed. If any error
  occurs FALSE will be returned.

*****************************************************************************/

static BOOL CloseBox (WIBUKEYDATA * pwkdata)
{
  if (pwkdata->hwkbe) {
    /* close opened WIBU-BOX entry */
    WkbClose2 (pwkdata->hwkbe);
  }
  return TRUE;
}
