/* $Id: Scanner.cxx,v 1.41 2009/10/13 14:13:39 grosch Exp $ */

# define rtrue		1
# define rfalse		0
# define StdIn		0

$@ # include "@.h"
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
$@ # include "$Source.h"
# include "rSystem.h"
# include "General.h"
# include "DynArray.h"
# include "Position.h"
# include "Global.h"

$@ # define yytChar	$_xxtChar
$@ # define yytusChar	$_xxtusChar

static	const	yyStateRange	yyDNoState	= 0;
$C constant declarations
$W define directives

static void yyExit (void) { rExit (1); }

typedef struct { yyStateRange yyCheck, yyNext; } yyCombType;

static	const	yyCombType	yyComb		[yyTableSize   + 1] = {
$T
};
static	const yyCombType * const yyBasePtr	[yyDStateCount + 1] = { 0,
$B
};
static	const	yyStateRange	yyDefault	[yyDStateCount + 1] = { 0,
$U
};
static	const	yyStateRange	yyEobTrans	[yyDStateCount + 1] = { 0,
$R
};
$M static	const	short		yyAction	[yyDStateCount + 1] = { 0,
$Q
$M };

$@ # if $_xxMaxCharacter < 256
$@ #  define yyGetLine	$_GetLine
# else
$@ #  define yyGetLine	$_GetWLine
# endif

# if yyToClassArraySize == 0
#  define yyToClass(x) (x)
# else
typedef	unsigned short	yytCharClass;

static	yytCharClass	yyToClassArray	[yyToClassArraySize] = {
$Z
};
$@ #  if $_xxMaxCharacter < yyToClassArraySize
#   define yyToClass(x) (yyToClassArray [x])
#  else
#   define yyToClass(x) \
	((x) < yyToClassArraySize ? yyToClassArray [x] : yyToClassFunction (x))

static	yytusChar	yyToClassUpb	[yyToClassRangeSize] = {
$Y
};
static	yytCharClass	yyToClassClass	[yyToClassRangeSize] = {
$S
};

static yytCharClass yyToClassFunction (yytusChar yyCh)
{
   register int yyLower = 1, yyUpper = yyToClassRangeSize;
   while (yyUpper - yyLower > 1) {			/* binary search */
      register int yyMiddle = (yyLower + yyUpper) / 2;
      if (yyToClassUpb [yyMiddle] < yyCh)
	 yyLower = yyMiddle;
      else
	 yyUpper = yyMiddle;
   }
   if (yyToClassUpb [yyLower - 1] < yyCh && yyCh <= yyToClassUpb [yyLower])
      return yyToClassClass [yyLower];
   else
      return yyToClassClass [yyUpper];
}

#  endif
# endif

					/* Start State Stack: StStSt	*/

# ifdef xxyyPush
$@ void @::yyPush (yyStateRange yyState)
{
   if (yyStStStackIdx == yyStStStackSize) {
      ExtendArray ((char * *) & yyStStStackPtr, & yyStStStackSize,
			(unsigned long) sizeof (yyStateRange));
      if (yyStStStackPtr == NULL) yyErrorMessage (xxScannerOutOfMemory);
   }
   yyStStStackPtr [yyStStStackIdx ++] = yyStartState;
   yyStart (yyState);
}
# endif

# ifdef xxyyPop
$@ void @::yyPop (void)
{
   yyPreviousStart = yyStartState;
   if (yyStStStackIdx > 0)
      yyStartState = yyStStStackPtr [-- yyStStStackIdx];
   else
      yyErrorMessage (xxStartStackUnderflow);
}
# endif

# define yyPrevious	yyPrevious ()
# define yyEcho		yyEcho ()
# define yyTab		yyTab1 (0)
# define yyTab2(a,b)	yyTab1 (a)
# define yyColumn(Ptr)	((int) ((Ptr) - (yytChar *) yyLineStart))
# define yyOffset(Ptr)	(yyFileOffset + ((Ptr) - (yytChar *) yyChBufferStart))

$@ # if $_xxMaxCharacter < 256
#  define output(c)	(void) putchar ((int) c)
# else
#  define output(c)	(void) printf ("%lc", c)
# endif

$G[ global user declarations
$@ void @::ErrorAttribute (int Token, $_tScanAttribute * Attribute)
   { }
$]

# ifndef yySetPosition
# define yySetPosition Attribute.Position.Line = yyLineCount; \
       Attribute.Position.Column = (int) ((yytusChar *) TokenPtr - yyLineStart);
# endif

# undef yyPrevious
# undef yyEcho
# undef yyTab
# undef yyTab2

# ifndef yyInitBufferSize
# define yyInitBufferSize	1024 * 8 + 256
# endif
# ifndef yyInitFileStackSize
# define yyInitFileStackSize	8
# endif
# ifndef yyTabSpace
# define yyTabSpace		8
# endif

$@ inline void @::yyStart (yyStateRange yyState)
   { yyPreviousStart = yyStartState; yyStartState = yyState; }
$@ inline void @::yyPrevious (void)
   { yyStateRange yys = yyStartState;
     yyStartState = yyPreviousStart;
     yyPreviousStart = yys; }
$@ inline void @::yyEcho (void)
   { (void) fwrite (TokenPtr, sizeof (yytChar), TokenLength, stdout); }
$@ inline void @::yyLess (int yyn)
   { yyChBufferIndex -= TokenLength - yyn; TokenLength = yyn; }
$@ inline void @::yyTab1 (int yya)
   { yyLineStart -= (yyTabSpace - 1 - ((yytusChar *) TokenPtr -
     yyLineStart + yya - 1)) & (yyTabSpace - 1); }
$@ inline void @::yyEol (int Column)
   { yyLineCount ++; yyLineStart = yyChBufferIndex - 1 - Column; }
$@ inline void @::unput (yytChar yyc)
   { * (-- yyChBufferIndex) = yyc; }

# define yyStart(State)	{ yyPreviousStart = yyStartState; yyStartState = State;}
# define yyPrevious	{ yyStateRange s = yyStartState; \
			yyStartState = yyPreviousStart; yyPreviousStart = s; }
# define yyEcho    { fwrite (TokenPtr, sizeof (yytChar), TokenLength, stdout); }
# define yyLess(n)    { yyChBufferIndex -= TokenLength - (n); TokenLength = n; }
# define yyTab		yyLineStart -= (yyTabSpace - 1 - \
	((yytusChar *) TokenPtr - yyLineStart - 1)) & (yyTabSpace - 1)
# define yyTab1(a)	yyLineStart -= (yyTabSpace - 1 - \
	((yytusChar *) TokenPtr - yyLineStart + (a) - 1)) & (yyTabSpace - 1)
# define yyTab2(a,b)	yyLineStart -= (yyTabSpace - 1 - \
	((yytusChar *) TokenPtr - yyLineStart + (a) - 1)) & (yyTabSpace - 1)
# define yyEol(Column)	{ yyLineCount ++; \
			yyLineStart = yyChBufferIndex - 1 - (Column); }
# define unput(c)	* (-- yyChBufferIndex) = c

static	yytusChar	yyInitChBuffer [] = {
   '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0',
   '\0', '\0', '\0', '\0', '\0', '\0', '\0', yyEolCh, yyEobCh, '\0', };

# ifndef EBCDIC
$@ #  if $_xxMaxCharacter < 256
#   include <ctype.h>
#   define yyToUpper(x)	toupper (x)
#   define yyToLower(x)	tolower (x)
#  else
#   include <wctype.h>
#   define yyToUpper(x)	towupper (x)
#   define yyToLower(x)	towlower (x)
#  endif
# else
#  define yyToLower(x)	yyToLowerArray [x]
#  define yyToUpper(x)	yyToUpperArray [x]

# ifdef xxGetLower
static	yytusChar	yyToLower	[] = {
'\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\x07',
'\x08', '\x09', '\x0A', '\x0B', '\x0C', '\x0D', '\x0E', '\x0F',
'\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
'\x18', '\x19', '\x1A', '\x1B', '\x1C', '\x1D', '\x1E', '\x1F',
'\x20', '\x21', '\x22', '\x23', '\x24', '\x25', '\x26', '\x27',
'\x28', '\x29', '\x2A', '\x2B', '\x2C', '\x2D', '\x2E', '\x2F',
'\x30', '\x31', '\x32', '\x33', '\x34', '\x35', '\x36', '\x37',
'\x38', '\x39', '\x3A', '\x3B', '\x3C', '\x3D', '\x3E', '\x3F',
'\x40', '\x41', '\x42', '\x43', '\x44', '\x45', '\x46', '\x47',
'\x48', '\x49', '\x4A', '\x4B', '\x4C', '\x4D', '\x4E', '\x4F',
'\x50', '\x51', '\x52', '\x53', '\x54', '\x55', '\x56', '\x57',
'\x58', '\x59', '\x5A', '\x5B', '\x5C', '\x5D', '\x5E', '\x5F',
'\x60', '\x61', '\x62', '\x63', '\x64', '\x65', '\x66', '\x67',
'\x68', '\x69', '\x6A', '\x6B', '\x6C', '\x6D', '\x6E', '\x6F',
'\x70', '\x71', '\x72', '\x73', '\x74', '\x75', '\x76', '\x77',
'\x78', '\x79', '\x7A', '\x7B', '\x7C', '\x7D', '\x7E', '\x7F',
'\x80',    'a',    'b',    'c',    'd',    'e',    'f',    'g',
   'h',    'i', '\x8A', '\x8B', '\x8C', '\x8D', '\x8E', '\x8F',
'\x90',    'j',    'k',    'l',    'm',    'n',    'o',    'p',
   'q',    'r', '\x9A', '\x9B', '\x9C', '\x9D', '\x9E', '\x9F',
'\xA0', '\xA1',    's',    't',   'u',     'v',    'w',    'x',
   'y',    'z', '\xAA', '\xAB', '\xAC', '\xAD', '\xAE', '\xAF',
'\xB0', '\xB1', '\xB2', '\xB3', '\xB4', '\xB5', '\xB6', '\xB7',
'\xB8', '\xB9', '\xBA', '\xBB', '\xBC', '\xBD', '\xBE', '\xBF',
'\xC0',    'a',    'b',    'c',    'd',    'e',    'f',    'g',
   'h',    'i', '\xCA', '\xCB', '\xCC', '\xCD', '\xCE', '\xCF',
'\xD0',    'j',    'k',    'l',    'm',    'n',    'o',    'p',
   'q',    'r', '\xDA', '\xDB', '\xDC', '\xDD', '\xDE', '\xDF',
'\xE0', '\xE1',    's',    't',    'u',    'v',    'w',    'x',
   'y',    'z', '\xEA', '\xEB', '\xEC', '\xED', '\xEE', '\xEF',
'\xF0', '\xF1', '\xF2', '\xF3', '\xF4', '\xF5', '\xF6', '\xF7',
'\xF8', '\xF9', '\xFA', '\xFB', '\xFC', '\xFD', '\xFE', '\xFF'
};
# endif

# ifdef xxGetUpper
static	yytusChar	yyToUpper	[] = {
'\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\x07',
'\x08', '\x09', '\x0A', '\x0B', '\x0C', '\x0D', '\x0E', '\x0F',
'\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
'\x18', '\x19', '\x1A', '\x1B', '\x1C', '\x1D', '\x1E', '\x1F',
'\x20', '\x21', '\x22', '\x23', '\x24', '\x25', '\x26', '\x27',
'\x28', '\x29', '\x2A', '\x2B', '\x2C', '\x2D', '\x2E', '\x2F',
'\x30', '\x31', '\x32', '\x33', '\x34', '\x35', '\x36', '\x37',
'\x38', '\x39', '\x3A', '\x3B', '\x3C', '\x3D', '\x3E', '\x3F',
'\x40', '\x41', '\x42', '\x43', '\x44', '\x45', '\x46', '\x47',
'\x48', '\x49', '\x4A', '\x4B', '\x4C', '\x4D', '\x4E', '\x4F',
'\x50', '\x51', '\x52', '\x53', '\x54', '\x55', '\x56', '\x57',
'\x58', '\x59', '\x5A', '\x5B', '\x5C', '\x5D', '\x5E', '\x5F',
'\x60', '\x61', '\x62', '\x63', '\x64', '\x65', '\x66', '\x67',
'\x68', '\x69', '\x6A', '\x6B', '\x6C', '\x6D', '\x6E', '\x6F',
'\x70', '\x71', '\x72', '\x73', '\x74', '\x75', '\x76', '\x77',
'\x78', '\x79', '\x7A', '\x7B', '\x7C', '\x7D', '\x7E', '\x7F',
'\x80',    'A',    'B',    'C',    'D',    'E',    'F',    'G',
   'H',    'I', '\x8A', '\x8B', '\x8C', '\x8D', '\x8E', '\x8F',
'\x90',    'J',    'K',    'L',    'M',    'N',    'O',    'P',
   'Q',    'R', '\x9A', '\x9B', '\x9C', '\x9D', '\x9E', '\x9F',
'\xA0', '\xA1',    'S',    'T',    'U',    'V',    'W',    'X',
   'Y',    'Z', '\xAA', '\xAB', '\xAC', '\xAD', '\xAE', '\xAF',
'\xB0', '\xB1', '\xB2', '\xB3', '\xB4', '\xB5', '\xB6', '\xB7',
'\xB8', '\xB9', '\xBA', '\xBB', '\xBC', '\xBD', '\xBE', '\xBF',
'\xC0',    'A',    'B',    'C',    'D',    'E',    'F',    'G',
   'H',    'I', '\xCA', '\xCB', '\xCC', '\xCD', '\xCE', '\xCF',
'\xD0',    'J',    'K',    'L',    'M',    'N',    'O',    'P',
   'Q',    'R', '\xDA', '\xDB', '\xDC', '\xDD', '\xDE', '\xDF',
'\xE0', '\xE1',    'S',    'T',    'U',    'V',    'W',    'X',
   'Y',    'Z', '\xEA', '\xEB', '\xEC', '\xED', '\xEE', '\xEF',
'\xF0', '\xF1', '\xF2', '\xF3', '\xF4', '\xF5', '\xF6', '\xF7',
'\xF8', '\xF9', '\xFA', '\xFB', '\xFC', '\xFD', '\xFE', '\xFF'
};
# endif

# endif

$@ @::@ (void)
{
   Exit			= yyExit;
   ErrorsObj		= & gErrors;
   Attribute.Position	= NoPosition;
   yyStateStackSize	= yyInitBufferSize;
   MakeArray ((char * *) & yyStateStack, & yyStateStackSize,
			(unsigned long) sizeof (yyStateRange));
   if (yyStateStack == NULL) yyErrorMessage (xxScannerOutOfMemory);
   yyStateStack [0]	= yyDefaultState;
   yyStartState		= STD;
   yyPreviousStart	= STD;
   yySourceFile		= StdIn;
   yyEof		= rfalse;
   yyBytesRead		= 0;
   yyChBufferPtr	= yyInitChBuffer;
   yyChBufferSize	= 0;
   yyChBufferStart	= & yyInitChBuffer [16];
   yyChBufferIndex	= & yyInitChBuffer [16];
# if yyInitFileStackSize != 0
   yyFileStackSize	= yyInitFileStackSize;
   MakeArray ((char * *) & yyFileStack, & yyFileStackSize,
$@ 			(unsigned long) sizeof ($_yytFileStack));
   if (yyFileStack == NULL) yyErrorMessage (xxScannerOutOfMemory);
   yyFileStackPtr	= yyFileStack;
# endif
# if defined xxyyPush | defined xxyyPop
# define yyInitStStStackSize 16
   yyStStStackIdx	= 0;
   yyStStStackSize	= yyInitStStStackSize;
   MakeArray ((char * *) & yyStStStackPtr, & yyStStStackSize,
		     (unsigned long) sizeof (yyStateRange));
# endif

   {
$I user initialization code
   }
}

$@ int @::GetToken (void)
{
   register	yyStateRange	yyState;
   register	yyStateRange *	yyStatePtr;
   register	yytusChar * yyChBufferIndexReg;
   register const yyCombType * const * const yyBasePtrReg = yyBasePtr;
$L local user declarations and actions

yyBegin:
   yyState		= yyStartState;		/* initialize */
   yyStatePtr		= & yyStateStack [1];
   yyChBufferIndexReg	= yyChBufferIndex;
   TokenPtr		= (yytChar *) yyChBufferIndexReg;
$J if (yyChBufferIndexReg [-1] == yyEolCh) yyState ++;

   /* ASSERT yyChBuffer [yyChBufferIndex] == first character */

yyContinue:		/* continue after sentinel or skipping blanks */
   for (;;) {		/* execute as many state transitions as possible */
			/* determine next state and get next character */
      register const yyCombType * const yyTablePtr =
		    (yyBasePtrReg [yyState] + yyToClass (* yyChBufferIndexReg));
      if (yyTablePtr->yyCheck == yyState) {
	 yyState = yyTablePtr->yyNext;		/* determine next state */
	 * yyStatePtr ++ = yyState;		/* push state */
	 yyChBufferIndexReg ++;			/* get next character */
	 goto yyContinue;
      }
      if ((yyState = yyDefault [yyState]) == yyDNoState) break;
   }

   for (;;) {				/* search for last final state */
      TokenLength = (int) (yyChBufferIndexReg - (yytusChar *) TokenPtr);
      yyChBufferIndex = yyChBufferIndexReg;
$A switch header and user actions /* switch (* -- yyStatePtr) {	/* pop state */
$N non final states
	 /* non final states */
	 yyChBufferIndexReg --;			/* return character */
	 break;

$P    case yyDefaultState:
	 yySetPosition
	 TokenLength = 1;
	 yyChBufferIndex = ++ yyChBufferIndexReg;
	 {
$D[ default action
	    output (yyChBufferIndexReg [-1]);
$]
	 }
	 goto yyBegin;

      case yyDNoState:
	 goto yyBegin;

$O    case yyEobState:			/* end of buffer sentinel found */
	 yyChBufferIndex = -- yyChBufferIndexReg; /* undo last state transit */
	 if (-- TokenLength == 0) {		/* get previous state */
	    yyState = yyStartState;
$J	    if (yyChBufferIndexReg [-1] == yyEolCh) yyState ++;
	 } else {
	    yyState = * (yyStatePtr - 1);
	 }

	 if (yyChBufferIndex != & yyChBufferStart [yyBytesRead]) {
					/* end of buffer sentinel in buffer */
	    if ((yyState = yyEobTrans [yyState]) == yyDNoState) continue;
	    yyChBufferIndexReg ++;
	    * yyStatePtr ++ = yyState;		/* push state */
	    goto yyContinue;
	 }
						/* end of buffer reached */
	 if (! yyEof) {
	    if (yyChBufferSize == 0) {
	       yyStateRange * yyOldStateStack = yyStateStack;
	       yyInitialize ();
	       yyStatePtr += yyStateStack - yyOldStateStack;
	       yyChBufferIndexReg = yyChBufferIndex;
	    }
	    register yytChar * yySource = TokenPtr - 1;
	    register yytChar * yyTarget = (yytChar *) & yyChBufferPtr
			   [(yyMaxAlign - 1 - TokenLength) & (yyMaxAlign - 1)];
	    unsigned long yyChBufferFree = Exp2 (Log2 (yyChBufferSize - 4 -
					yyMaxAlign - TokenLength));
		/* copy initial part of token in front of the input buffer */
	    if (yySource > yyTarget) {
	       TokenPtr = yyTarget + 1;
	       do * yyTarget ++ = * yySource ++;
	       while (yySource < (yytChar *) yyChBufferIndexReg);
	       yyLineStart += (yytusChar *) yyTarget - yyChBufferStart -
				yyBytesRead;
	       yyChBufferStart = (yytusChar *) yyTarget;
	    } else {
	       yyChBufferStart = yyChBufferIndexReg;
	    }
						/* extend buffer if necessary */
	    if (yyChBufferFree < yyChBufferSize >> 3 /* / 8 */ ) {
	       register ptrdiff_t yyDelta;
	       register yytusChar * yyOldChBufferPtr = yyChBufferPtr;
	       ExtendArray ((char * *) & yyChBufferPtr, & yyChBufferSize,
				(unsigned long) sizeof (yytChar));
	       if (yyChBufferPtr == NULL) yyErrorMessage (xxScannerOutOfMemory);
	       yyDelta = yyChBufferPtr - yyOldChBufferPtr;
	       yyChBufferStart	+= yyDelta;
	       yyLineStart	+= yyDelta;
	       TokenPtr		+= yyDelta;
	       yyChBufferFree = Exp2 (Log2 (yyChBufferSize - 4 -
					yyMaxAlign - TokenLength));
	       if (yyStateStackSize < yyChBufferSize) {
		  yyStateRange * yyOldStateStack = yyStateStack;
		  ExtendArray ((char * *) & yyStateStack, & yyStateStackSize,
				(unsigned long) sizeof (yyStateRange));
		  if (yyStateStack == NULL)
		     yyErrorMessage (xxScannerOutOfMemory);
		  yyStatePtr	+= yyStateStack - yyOldStateStack;
	       }
	    }
						/* read buffer and restart */
	    yyChBufferIndex = yyChBufferIndexReg = yyChBufferStart;
	    yyFileOffset += yyBytesRead;
	    yyBytesRead = yyGetLine (yySourceFile,
			     (yytChar *) yyChBufferIndex, (int) yyChBufferFree);
	    if (yyBytesRead <= 0) { yyBytesRead = 0; yyEof = rtrue; }
	    yyChBufferStart [yyBytesRead    ] = yyEobCh;
	    yyChBufferStart [yyBytesRead + 1] = '\0';
	    goto yyContinue;
	 }

	 if (TokenLength == 0) {		/* end of file reached */
	    if (yyChBufferSize == 0) return EofToken;
	    yySetPosition
	    CloseFile ();
# if yyInitFileStackSize != 0
	    if (yyFileStackPtr == yyFileStack) {
$E eof action
	    }
	    if (yyFileStackPtr == yyFileStack) {
	       yyResetScanner ();
	       return EofToken;
	    }
	    goto yyBegin;
# else
$E eof action
	    yyResetScanner ();
	    return EofToken;
# endif
	 }
	 break;

      default:
	 yyErrorMessage (xxScannerInternalError);
      }
   }
}

$@ void @::yyResetScanner (void)
   {
      yyChBufferPtr	= yyInitChBuffer;
      yyChBufferSize	= 0;
      yyChBufferStart	= & yyInitChBuffer [16];
      yyChBufferIndex	= & yyInitChBuffer [16];
      yyStateStack [0]	= yyDefaultState;
      yyStartState	= STD;
      yyPreviousStart	= STD;
      yySourceFile	= StdIn;
   }

$@ void @::yyInitialize (void)
   {
# if yyInitFileStackSize != 0
      if (yyFileStackPtr >= yyFileStack + yyFileStackSize - 1) {
	 ptrdiff_t yyyFileStackPtr = yyFileStackPtr - yyFileStack;
	 ExtendArray ((char * *) & yyFileStack, & yyFileStackSize,
$@ 			   (unsigned long) sizeof ($_yytFileStack));
	 if (yyFileStack == NULL) yyErrorMessage (xxScannerOutOfMemory);
	 yyFileStackPtr = yyFileStack + yyyFileStackPtr;
      }
      yyFileStackPtr ++;			/* push file */
      yyFileStackPtr->yySourceFile	= yySourceFile		;
      yyFileStackPtr->yyEof		= yyEof			;
      yyFileStackPtr->yyChBufferPtr	= yyChBufferPtr		;
      yyFileStackPtr->yyChBufferStart	= yyChBufferStart	;
      yyFileStackPtr->yyChBufferSize	= yyChBufferSize	;
      yyFileStackPtr->yyChBufferIndex	= yyChBufferIndex	;
      yyFileStackPtr->yyBytesRead	= yyBytesRead		;
      yyFileStackPtr->yyFileOffset	= yyFileOffset		;
      yyFileStackPtr->yyLineCount	= yyLineCount		;
      yyFileStackPtr->yyLineStart	= yyLineStart		;
# endif
						/* initialize file state */
      yyChBufferSize	   = yyInitBufferSize;
      MakeArray ((char * *) & yyChBufferPtr, & yyChBufferSize,
			(unsigned long) sizeof (yytChar));
      if (yyChBufferPtr == NULL) yyErrorMessage (xxScannerOutOfMemory);
      yyChBufferStart	   = & yyChBufferPtr [yyMaxAlign];
      yyChBufferStart [-1] = yyEolCh;		/* begin of line indicator */
      yyChBufferStart [ 0] = yyEobCh;		/* end of buffer sentinel */
      yyChBufferStart [ 1] = '\0';
      yyChBufferIndex	   = yyChBufferStart;
      TokenPtr		   = (yytChar *) yyChBufferStart;
      yyEof		   = rfalse;
      yyBytesRead	   = 0;
      yyFileOffset	   = 0;
      yyLineCount	   = 1;
      yyLineStart	   = & yyChBufferStart [-1];
   }

$@ void @::BeginFile (char * yyFileName)
   {
      yyInitialize ();
      yySourceFile = yyFileName == NULL ? StdIn :
# ifdef SOURCE_VER
$@ 	 $_BeginSourceFile (yyFileName);
# else
$@ 	 $_BeginSource (yyFileName);
# endif
      if (yySourceFile < 0) yyErrorMessage (xxCannotOpenInputFile);
   }

# ifdef SOURCE_VER

# if HAVE_WCHAR_T

$@ void @::BeginFileW (wchar_t * yyFileName)
   {
      yyInitialize ();
      yySourceFile = yyFileName == NULL ? StdIn :
$@ 	 $_BeginSourceFileW (yyFileName);
      if (yySourceFile < 0) yyErrorMessage (xxCannotOpenInputFile);
   }

# endif

$@ void @::BeginMemory (void * yyInputPtr)
   {
      yyInitialize ();
$@       $_BeginSourceMemory (yyInputPtr);
   }

$@ void @::BeginMemoryN (void * yyInputPtr, int yyLength)
   {
      yyInitialize ();
$@       $_BeginSourceMemoryN (yyInputPtr, yyLength);
   }

$@ void @::BeginGeneric (void * yyInputPtr)
   {
      yyInitialize ();
$@       $_BeginSourceGeneric (yyInputPtr);
   }

# endif

$@ void @::CloseFile (void)
   {
# if yyInitFileStackSize != 0
      if (yyFileStackPtr == yyFileStack) yyErrorMessage (xxFileStackUnderflow);
# endif
$@       $_CloseSource (yySourceFile);
      ReleaseArray ((char * *) & yyChBufferPtr, & yyChBufferSize,
			(unsigned long) sizeof (yytChar));
# if yyInitFileStackSize != 0
						/* pop file */
      yySourceFile	= yyFileStackPtr->yySourceFile		;
      yyEof		= yyFileStackPtr->yyEof			;
      yyChBufferPtr	= yyFileStackPtr->yyChBufferPtr		;
      yyChBufferStart	= yyFileStackPtr->yyChBufferStart	;
      yyChBufferSize	= yyFileStackPtr->yyChBufferSize	;
      yyChBufferIndex	= yyFileStackPtr->yyChBufferIndex	;
      yyBytesRead	= yyFileStackPtr->yyBytesRead		;
      yyFileOffset	= yyFileStackPtr->yyFileOffset		;
      yyLineCount	= yyFileStackPtr->yyLineCount		;
      yyLineStart	= yyFileStackPtr->yyLineStart		;
      yyFileStackPtr --;
# else
      yyChBufferSize	= 0;
# endif
   }

# ifdef xxGetWord
$@ int @::GetWord (yytChar * yyWord)
   {
      register yytChar * yySource		= TokenPtr;
      register yytChar * yyTarget		= yyWord;
      register yytChar * yyChBufferIndexReg	= (yytChar *) yyChBufferIndex;

      while (yySource < yyChBufferIndexReg)
	 * yyTarget ++ = * yySource ++;
      * yyTarget = '\0';
      return (int) (yyChBufferIndexReg - TokenPtr);
   }
# endif

# ifdef xxGetLower
$@ int @::GetLower (yytChar * yyWord)
   {
      register yytusChar * yySource		= (yytusChar *) TokenPtr;
      register yytusChar * yyTarget		= (yytusChar *) yyWord;
      register yytusChar * yyChBufferIndexReg	= yyChBufferIndex;

      while (yySource < yyChBufferIndexReg)
	 * yyTarget ++ = yyToLower (* yySource ++);
      * yyTarget = '\0';
      return (int) (yyChBufferIndexReg - (yytusChar *) TokenPtr);
   }
# endif

# ifdef xxGetUpper
$@ int @::GetUpper (yytChar * yyWord)
   {
      register yytusChar * yySource		= (yytusChar *) TokenPtr;
      register yytusChar * yyTarget		= (yytusChar *) yyWord;
      register yytusChar * yyChBufferIndexReg	= yyChBufferIndex;

      while (yySource < yyChBufferIndexReg)
	 * yyTarget ++ = yyToUpper (* yySource ++);
      * yyTarget = '\0';
      return (int) (yyChBufferIndexReg - (yytusChar *) TokenPtr);
   }
# endif

# ifdef xxinput
$@ yytChar @::input (void)
   {
      if (yyChBufferIndex == & yyChBufferStart [yyBytesRead]) {
	 if (! yyEof) {
	    yyLineStart -= yyBytesRead;
	    yyChBufferIndex = yyChBufferStart = & yyChBufferPtr [yyMaxAlign];
	    yyFileOffset += yyBytesRead;
	    yyBytesRead = yyGetLine (yySourceFile, (yytChar *) yyChBufferIndex,
	       (int) Exp2 (Log2 (yyChBufferSize)));
	    if (yyBytesRead <= 0) { yyBytesRead = 0; yyEof = rtrue; }
	    yyChBufferStart [yyBytesRead    ] = yyEobCh;
	    yyChBufferStart [yyBytesRead + 1] = '\0';
	 }
      }
      if (yyChBufferIndex == & yyChBufferStart [yyBytesRead]) return '\0';
      else return * yyChBufferIndex ++;
   }
# endif

$@ @::~@ (void)
   {
$F user finalization code
# if yyInitFileStackSize != 0
      while (yyFileStackPtr != yyFileStack) CloseFile ();
# endif
      ReleaseArray ((char * *) & yyStateStack, & yyStateStackSize,
			(unsigned long) sizeof (yyStateRange));
# if yyInitFileStackSize != 0
      ReleaseArray ((char * *) & yyFileStack, & yyFileStackSize,
$@ 		        (unsigned long) sizeof ($_yytFileStack));
# endif
# if defined xxyyPush | defined xxyyPop
      ReleaseArray ((char * *) & yyStStStackPtr, & yyStStStackSize,
			(unsigned long) sizeof (yyStateRange));
# endif
   }

$@ void @::yyErrorMessage (int yyErrorCode)
   {
      ErrorsObj->ErrorMessageI (yyErrorCode, xxFatal, Attribute.Position,
$@ 	 xxString, "@");
      Exit ();
   }
