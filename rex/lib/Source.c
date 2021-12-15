/* $Id: Source.c,v 2.17 2008/09/12 14:22:39 grosch rel $ */

$@ # include "$Source.h"
# include <stdio.h>

# ifndef EXTERN_C_BEGIN
#  define EXTERN_C_BEGIN
#  define EXTERN_C_END
# endif

EXTERN_C_BEGIN
# include "rSystem.h"
# include "rString.h"
EXTERN_C_END

# if defined _MSC_VER
#  pragma warning (disable:4100 4127 4244)
# endif

# define buffer_size		10000
				/* kinds of input	*/
# define input_from_file	1
# define input_from_memory	2
# define user_defined_input	3
				/* constants for UTF16	*/
# define D800			0XD800
# define DC00			0XDC00
# define E000			0XE000

# define get_UCS2(ptr)	* (tUCS2 *) ptr; ptr = (tUCS2 *) ptr + 1;

# define convert_ENDIAN_2(from, to)	\
       { union { tUCS2 n; char b [2]; } in, out;	\
	 in.n = from; out.b [0] = in.b [1]; out.b [1] = in.b [0]; to = out.n; }

# define convert_ENDIAN_4(from, to)	\
       { union { tUCS4 n; char b [4]; } in, out;	\
	 in.n = from; out.b [0] = in.b [3]; out.b [1] = in.b [2];	\
	 out.b [2] = in.b [1]; out.b [3] = in.b [0]; to = (wchar_t) out.n; }

typedef uint16_t tUCS2;	/* 2 bytes Unicode	*/
typedef uint32_t tUCS4;	/* 4 bytes Unicode	*/

static	void *	input_ptr	= NULL;
static	int	input_length	= 0;
static	int	input_kind	= input_from_file;
static	int	input_encoding	= CODE_BYTE;
static	int	input_endian	= ENDIAN_NONE;
static	rbool	convert_endian	= rfalse;

typedef struct {
	void *	input_ptr	;
	int	input_length	;
	uint8_t	input_kind	;
	uint8_t	input_encoding	;
	uint8_t	input_endian	;
	rbool	convert_endian	;
} tsource_stack;

static	tsource_stack	source_stack [256];
static	int		source_stack_ptr = 0;

static void PushSource ARGS ((void))
{
   tsource_stack * stack_ptr;
   source_stack_ptr ++;
   stack_ptr = & source_stack [source_stack_ptr];
   stack_ptr->input_ptr		= input_ptr		;
   stack_ptr->input_length	= input_length		;
   stack_ptr->input_kind	= (uint8_t) input_kind	;
   stack_ptr->input_encoding	= (uint8_t) input_encoding;
   stack_ptr->input_endian	= (uint8_t) input_endian;
   stack_ptr->convert_endian	= convert_endian	;
}

static void PopSource ARGS ((void))
{
   tsource_stack * stack_ptr = & source_stack [source_stack_ptr];
   input_ptr		= stack_ptr->input_ptr		;
   input_length		= stack_ptr->input_length	;
   input_kind		= stack_ptr->input_kind		;
   input_encoding	= stack_ptr->input_encoding	;
   input_endian		= stack_ptr->input_endian	;
   convert_endian	= stack_ptr->convert_endian	;
   source_stack_ptr --;
}

$@ void $_SetEncoding
# ifdef HAVE_ARGS
   (int Encoding, int Endian)
# else
   (Encoding, Endian) int Encoding; int Endian;
# endif
{
   union { int32_t l; char c [sizeof (int32_t)]; } u;
   int our_endian;
			/* determine endian property of current system */
   u.l = 0x1234;
   if (u.c [0] == 0x34 && u.c [1] == 0x12 && u.c [2] == 0 && u.c [3] == 0)
      our_endian = ENDIAN_LITTLE;
   else if (u.c [0] == 0 && u.c [1] == 0 && u.c [2] == 0x12 && u.c [3] == 0x34)
      our_endian = ENDIAN_BIG;
   else
      our_endian = ENDIAN_NONE;

   input_encoding = Encoding;
   input_endian	  = Endian;
   convert_endian = (rbool) (input_endian != ENDIAN_NONE &&
      our_endian != ENDIAN_NONE && input_endian != our_endian);
}

$@ int $_BeginSourceFile
# ifdef HAVE_ARGS
   (char * FileName)
# else
   (FileName) char * FileName;
# endif
{
   PushSource ();
   input_kind = input_from_file;
   return OpenInput (FileName);
}

# if HAVE_WCHAR_T

$@ int $_BeginSourceFileW
# ifdef HAVE_ARGS
   (wchar_t * FileName)
# else
   (FileName) wchar_t * FileName;
# endif
{
   PushSource ();
   input_kind = input_from_file;
   /* TODO: open a file whose name is specified by a wide character string */
# if defined _MSC_VER & (_MSC_VER > 800)
   return fileno (_wfopen (FileName, L"rb"));
# else
   return 0;
# endif
}

# endif

$@ void $_BeginSourceMemory
# ifdef HAVE_ARGS
   (void * InputPtr)
# else
   (InputPtr) void * InputPtr;
# endif
{
   register int		length = 0;
   register tUCS2 *	p;
   register tUCS4 *	q;

   switch (input_encoding) {
   case CODE_NONE	:
   case CODE_BYTE	:
   case CODE_UTF8	: length = (int) strlen ((char *) InputPtr); break;
# if HAVE_WCHAR_T
   case CODE_WCHAR_T	: length = (int) wcslen ((wchar_t *) InputPtr); break;
# else
   case CODE_WCHAR_T	: length = 0; break;
# endif
   case CODE_UCS2	:
   case CODE_UTF16	: p = (tUCS2 *) InputPtr;
			  while (* p ++) length ++;
			  break;
   case CODE_UCS4	: q = (tUCS4 *) InputPtr;
			  while (* q ++) length ++;
			  break;
   }
$@    $_BeginSourceMemoryN (InputPtr, length);
}

$@ void $_BeginSourceMemoryN
# ifdef HAVE_ARGS
   (void * InputPtr, int Length)
# else
   (InputPtr, Length) void * InputPtr; int Length;
# endif
{
   PushSource ();
   input_kind	= input_from_memory;
   input_ptr	= InputPtr;
   input_length	= Length;
}

$@ void $_BeginSourceGeneric
# ifdef HAVE_ARGS
   (void * InputPtr)
# else
   (InputPtr) void * InputPtr;
# endif
{
   PushSource ();
   input_kind = user_defined_input;
}

$@ int $_GetLine
# ifdef HAVE_ARGS
   (int File, char * Buffer, int Size)
# else
   (File, Buffer, Size) int File; char * Buffer; int Size;
# endif
{
   switch (input_kind) {
   case input_from_file:
# ifdef MVS
   {
      int result = rRead (File, Buffer, Size);
      if (result) Buffer [result ++] = '\n';	/* add line terminator */
      return result;
   }
# else
      return rRead (File, Buffer, Size);
# endif
   case input_from_memory:
      if (input_length < Size) Size = input_length;
      memcpy (Buffer, input_ptr, Size);
      input_ptr = (char *) input_ptr + Size;
      input_length -= Size;
      return Size;
   case user_defined_input:
      break;
   }
   return 0;
}

# if HAVE_WCHAR_T

typedef struct
{
  int     cmask;
  int     cval;
  int32_t lmask;
  int32_t lval;
} Tab;

static Tab tab [] =
{
  { 0x80,  0x00,   0x7F,           0               /* 1 byte sequence */ },
  { 0xE0,  0xC0,   0x7FF,          0x80            /* 2 byte sequence */ },
  { 0xF0,  0xE0,   0xFFFF,         0x800           /* 3 byte sequence */ },
  { 0xF8,  0xF0,   0x1FFFFF,       0x10000         /* 4 byte sequence */ },
  { 0xFC,  0xF8,   0x3FFFFFF,      0x200000        /* 5 byte sequence */ },
  { 0xFE,  0xFC,   0x7FFFFFFF,     0x4000000       /* 6 byte sequence */ },
  { 0                                              /* end of table    */ }
};

static int mb2wc (wchar_t * p, char * s, int n)
{
  int32_t l;
  int c0, c, nc;
  Tab * t;

  nc = 0;
  c0 = * s & 0xff;
  l = c0;
  for (t = tab; t->cmask; t ++) {
    nc ++;
    if ((c0 & t->cmask) == t->cval) {
      l &= t->lmask;
      if (l < t->lval)
	return -1;
      * p = (wchar_t) l;
      return nc;
    }
    if (n <= nc)
      return -2;
    s ++;
    c = (* s ^ 0x80) & 0xFF;
    if (c & 0xC0)
      return -1;
    l = (l << 6) | c;
  }
  return -1;
}

$@ int $_GetWLine
# ifdef HAVE_ARGS
   (int File, wchar_t * Buffer, int Size)
# else
   (File, Buffer, Size) int File; wchar_t * Buffer; int Size;
# endif
{
   switch (input_kind) {

   case input_from_file	:

      switch (input_encoding) {
	 register int i;

      case CODE_NONE	:
      case CODE_WCHAR_T	:
	 if (convert_endian) {
	    if (sizeof (wchar_t) == sizeof (tUCS2)) goto lUCS2;
	    if (sizeof (wchar_t) == sizeof (tUCS4)) goto lUCS4;
	 }
	 Size = rRead (File, (char *) Buffer, Size * sizeof (wchar_t));
	 return Size / sizeof (wchar_t);

      case CODE_BYTE	:
      {
	 unsigned char char_buffer [buffer_size];
	 if (Size > buffer_size) Size = buffer_size;
	 Size = rRead (File, (char *) char_buffer, Size);
	 for (i = 0; i < Size; i ++)
	    Buffer [i] = char_buffer [i];
	 return Size;
      }

      case CODE_UCS2	:
      {
	 tUCS2 char_buffer [buffer_size];
	 if (Size > buffer_size) Size = buffer_size;
	 Size = rRead (File, (char *) char_buffer, Size * sizeof (tUCS2));
	 Size /= sizeof (tUCS2);
	 if (convert_endian) {
lUCS2:
	    for (i = 0; i < Size; i ++)
	       convert_ENDIAN_2 (char_buffer [i], Buffer [i]);
	 } else {
	    for (i = 0; i < Size; i ++)
	       Buffer [i] = char_buffer [i];
	 }
	 return Size;
      }

      case CODE_UCS4	:
      {
	 tUCS4 char_buffer [buffer_size];
	 if (Size > buffer_size) Size = buffer_size;
	 Size = rRead (File, (char *) char_buffer, Size * sizeof (tUCS4));
	 Size /= sizeof (tUCS4);
	 if (convert_endian) {
lUCS4:
	    for (i = 0; i < Size; i ++)
	       convert_ENDIAN_4 (char_buffer [i], Buffer [i]);
	 } else {
	    for (i = 0; i < Size; i ++)
	       Buffer [i] = (wchar_t) char_buffer [i];
	 }
	 return Size;
      }

      case CODE_UTF8	:
      {
	 int count = 0;
	 char char_buffer [buffer_size];
	 if (Size > buffer_size) Size = buffer_size;
	 input_length = rRead (File, char_buffer, Size);
	 input_ptr = char_buffer;
	 while (input_length > 0) {
	    int number_of_chars;
	 l_retry:
	    number_of_chars = mb2wc (Buffer, (char *) input_ptr, input_length);
	    switch (number_of_chars) {
	    case -1:		/* error */
	       input_length = 0; return count;
	    case -2:		/* end of buffer within UTF8 sequence */
	    {
	       Tab * t;		/* determine # of bytes in UTF8 sequence */
	       int nc = 0;
	       int c0 = * (char *) input_ptr & 0xff;
	       for (t = tab; t->cmask; t ++) {
		  nc ++;
		  if ((c0 & t->cmask) == t->cval) break;
	       }
				/* copy UTF8 fragment to begin of buffer */
	       memcpy (char_buffer, (char *) input_ptr, input_length);
	       input_ptr = char_buffer;
				/* read missing bytes from file */
	       input_length += rRead (File, char_buffer + input_length,
		  nc - input_length);
				/* retry decoding */
	       goto l_retry;
	    }
	    }
	    input_ptr = (char *) input_ptr + number_of_chars;
	    input_length -= number_of_chars;
	    Buffer ++;
	    count ++;
	 }
	 return count;
      }

      case CODE_UTF16	:
      {
	 int count = 0;
	 tUCS2 char_buffer [buffer_size];
	 if (Size > buffer_size) Size = buffer_size;
	 input_length = rRead (File, (char *) char_buffer, Size * sizeof (tUCS2));
	 input_length /= sizeof (tUCS2);
	 input_ptr = char_buffer;
	 while (input_length > 0) {
	    tUCS2 ch1 = get_UCS2 (input_ptr);
	    if (convert_endian) convert_ENDIAN_2 (ch1, ch1);
	    if (ch1 < D800 || ch1 >= E000) {
	       * Buffer ++ = ch1;
	       input_length -= 1;
	    } else {
	       tUCS2 ch2;
	       if (input_length > 1) {
		  ch2 = get_UCS2 (input_ptr);
	       } else {   /* we reached end of buffer, read one more char */
		  input_length = rRead (File, (char *) char_buffer, sizeof (tUCS2));
		  if (input_length == sizeof (tUCS2)) {
		     ch2 = char_buffer [0];
		  } else {
		     break;
		  }
	       }
	       if (convert_endian) convert_ENDIAN_2 (ch2, ch2);
	       * Buffer ++ = ((ch1 - D800) << 10) + ch2 - DC00 + 0X00010000;
	       input_length -= 2;
	    }
	    count ++;
	 }
	 return count;
      }
      }

   case input_from_memory:

      switch (input_encoding) {
	 register int i;

      case CODE_NONE	:
      case CODE_WCHAR_T	:
	 if (convert_endian) {
	    if (sizeof (wchar_t) == sizeof (tUCS2)) goto mUCS2;
	    if (sizeof (wchar_t) == sizeof (tUCS4)) goto mUCS4;
	 }
	 if (input_length < Size) Size = input_length;
	 wcsncpy (Buffer, (wchar_t *) input_ptr, Size);
	 input_ptr = (wchar_t *) input_ptr + Size;
	 input_length -= Size;
	 return Size;

      case CODE_BYTE	:
	 if (input_length < Size) Size = input_length;
	 for (i = 0; i < Size; i ++)
	    Buffer [i] = ((unsigned char *) input_ptr) [i];
	 input_ptr = (char *) input_ptr + Size;
	 input_length -= Size;
	 return Size;

      case CODE_UCS2	:
	 if (input_length < Size) Size = input_length;
	 if (convert_endian) {
mUCS2:
	    for (i = 0; i < Size; i ++)
	       convert_ENDIAN_2 (((tUCS2 *) input_ptr) [i], Buffer [i]);
	 } else {
	    for (i = 0; i < Size; i ++)
	       Buffer [i] = ((tUCS2 *) input_ptr) [i];
	 }
	 input_ptr = (tUCS2 *) input_ptr + Size;
	 input_length -= Size;
	 return Size;

      case CODE_UCS4	:
	 if (input_length < Size) Size = input_length;
	 if (convert_endian) {
mUCS4:
	    for (i = 0; i < Size; i ++)
	       convert_ENDIAN_4 (((tUCS4 *) input_ptr) [i], Buffer [i]);
	 } else {
	    for (i = 0; i < Size; i ++)
	       Buffer [i] = (wchar_t) ((tUCS4 *) input_ptr) [i];
	 }
	 input_ptr = (tUCS4 *) input_ptr + Size;
	 input_length -= Size;
	 return Size;

      case CODE_UTF8	:
      {
	 int count = 0;
	 while (input_length > 0 && count < Size) {
	    int number_of_chars = mb2wc (Buffer, (char *) input_ptr, input_length);
	    if (number_of_chars < 0) { input_length = 0; break; }
	    input_ptr = (char *) input_ptr + number_of_chars;
	    input_length -= number_of_chars;
	    Buffer ++;
	    count ++;
	 }
	 return count;
      }

      case CODE_UTF16	:
      {
	 int count = 0;
	 while (input_length > 0 && count < Size) {
	    tUCS2 ch1 = get_UCS2 (input_ptr);
	    if (convert_endian) convert_ENDIAN_2 (ch1, ch1);
	    if (ch1 < D800 || ch1 >= E000) {
	       * Buffer ++ = ch1;
	       input_length -= 1;
	    } else {
	       tUCS2 ch2 = get_UCS2 (input_ptr);
	       if (convert_endian) convert_ENDIAN_2 (ch2, ch2);
	       * Buffer ++ = ((ch1 - D800) << 10) + ch2 - DC00 + 0X00010000;
	       input_length -= 2;
	    }
	    count ++;
	 }
	 return count;
      }
      }

   case user_defined_input:
      break;
   }
   return 0;
}

# endif

$@ void $_CloseSource
# ifdef HAVE_ARGS
   (int File)
# else
   (File) int File;
# endif
{
   switch (input_kind) {
   case input_from_file   : rClose (File); break;
   case input_from_memory : break;
   case user_defined_input: break;
   }
   PopSource ();
}
