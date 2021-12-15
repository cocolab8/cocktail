# include <stdio.h>
# include "/usr/local/eiffel/run3/eiffel.h"

# define DOUBLE		REAL
# define max_size	65536

FILE * c_make_read (s)
   OBJREF s;
{
   return fopen (RSTR_seq (s), "r");
}

FILE * c_make_write (s)
   OBJREF s;
{
   return fopen (RSTR_seq (s), "w");
}

void c_close (f)
   FILE * f;
{
   fclose (f);
}

void c_flush (f)
   FILE * f;
{
   fflush (f);
}

void c_putint (f, n)
   FILE * f;
   INTEGER n;
{
   fprintf (f, "%d", n);
}

void c_putpointer (f, p)
   FILE * f;
   char * p;
{
   fprintf (f, "%p", p);
}

void c_putbool (f, b)
   FILE * f;
   BOOLEAN b;
{
   fprintf (f, b ? "true" : "false");
}

void c_putreal (f, r)
   FILE * f;
   REAL r;
{
   fprintf (f, "%g", r);
}

void c_putdouble (f, d)
   FILE * f;
   DOUBLE d;
{
   fprintf (f, "%g", d);
}

void c_putstring (f, s)
   FILE * f;
   OBJREF s;
{
   fputs (RSTR_seq (s), f);
}

void c_putchar (f, c)
   FILE * f;
   CHARACTER c;
{
   putc (c, f);
}

void c_new_line (f)
   FILE * f;
{
   putc ('\n', f);
}

INTEGER c_readint (f)
   FILE * f;
{
   INTEGER i;
   fscanf (f, "%d", & i);
   return i;
}

POINTER c_readpointer (f)
   FILE * f;
{
   POINTER p;
   fscanf (f, "%p", & p);
   return p;
}

DOUBLE c_readdouble (f)
   FILE * f;
{
   float d;
   fscanf (f, "%f", & d);
   return d;
}

REAL c_readreal (f)
   FILE * f;
{
   float r;
   fscanf (f, "%f", & r);
   return r;
}

CHARACTER c_readchar (f)
   FILE * f;
{
   return getc (f);
}

BOOLEAN c_readbool (f)
   FILE * f;
{
   CHARACTER c;
   fscanf (f, " %c", & c);
   switch (c) {
   case 't': fscanf (f, "rue"); return true;
   case 'f': fscanf (f, "alse"); break;
   default:
   }
   return false;
}

OBJREF c_readline (f)
   FILE * f;
{
   char s [max_size];
   fscanf (f, "%[^\n]", & s);
   (void) getc (f);
   return RSTR_create (s);
}

OBJREF c_readstream (f, n)
   FILE * f;
   INTEGER n;
{
   char s [max_size];
   int i;
   i = fread (s, 1, n, f);
   s [i] = '\0';
   return RSTR_create (s);
}

OBJREF c_readword (f)
   FILE * f;
{
   char s [max_size];
   fscanf (f, "%s", & s);
   return RSTR_create (s);
}

void c_next_line (f)
   FILE * f;
{
   while (getc (f) != '\n');
}

FILE * c_get_stdin  () { return stdin ; }
FILE * c_get_stdout () { return stdout; }
FILE * c_get_stderr () { return stderr; }
