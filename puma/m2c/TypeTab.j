boolean
# define beginboolean(a)		
# define closeboolean(a)		
# define readboolean(a)		a = yyin.readB ();
# define writeboolean(a)	yyout.write (a);
# define getboolean(a)		**not used**
# define putboolean(a)		**not used**
# define copyboolean(a, b)	a = (b);
# define equalboolean(a, b)	(a) == (b)
# define writeXMLboolean(a)	yyout.write (a);
byte
# define beginbyte(a)		
# define closebyte(a)		
# define readbyte(a)		a = (byte) yyin.readI ();
# define writebyte(a)		yyout.write ((int) a);
# define getbyte(a)		**not used**
# define putbyte(a)		**not used**
# define copybyte(a, b)		a = (b);	
# define equalbyte(a, b)	(a) == (b)
# define writeXMLbyte(a)	yyout.write ((int) a);
char
# define beginchar(a)		
# define closechar(a)		
# define readchar(a)		a = (char) yyin.read ();
# define writechar(a)		yyout.write (a);
# define getchar(a)		**not used**
# define putchar(a)		**not used**
# define copychar(a, b)		a = (b);
# define equalchar(a, b)	(a) == (b)
# define writeXMLchar(a)	yyout.write (a);
double
# define begindouble(a)		
# define closedouble(a)		
# define readdouble(a)		a = Double.parseDouble (yyin.readL ().toString ());
# define writedouble(a)		yyout.write (Double.toString (a));
# define getdouble(a)		**not used**
# define putdouble(a)		**not used**
# define copydouble(a, b)	a = (b);
# define equaldouble(a, b)	(a) == (b)
# define writeXMLdouble(a)	yyout.write (Double.toString (a));
float
# define beginfloat(a)		
# define closefloat(a)		
# define readfloat(a)		a = yyin.readR ();
# define writefloat(a)		yyout.write (a, 0, 0, 0);
# define getfloat(a)		**not used**
# define putfloat(a)		**not used**
# define copyfloat(a, b)	a = (b);
# define equalfloat(a, b)	(a) == (b)
# define writeXMLfloat(a)	yyout.write (a, 0, 0, 0);
int
# define beginint(a)		
# define closeint(a)		
# define readint(a)		a = yyin.readI ();
# define writeint(a)		yyout.write (a);
# define getint(a)		**not used**
# define putint(a)		**not used**
# define copyint(a, b)		a = (b);
# define equalint(a, b)		(a) == (b)
# define writeXMLint(a)		yyout.write (a);
long
# define beginlong(a)		
# define closelong(a)		
# define readlong(a)		a = Long.parseLong (yyin.readL ().toString ());
# define writelong(a)		yyout.write (Long.toString (a));
# define getlong(a)		**not used**
# define putlong(a)		**not used**
# define copylong(a, b)		a = (b);
# define equallong(a, b)	(a) == (b)
# define writeXMLlong(a)	yyout.write (Long.toString (a));
short
# define beginshort(a)		
# define closeshort(a)		
# define readshort(a)		a = (short) yyin.readI ();
# define writeshort(a)		yyout.write ((int) a);
# define getshort(a)		**not used**
# define putshort(a)		**not used**
# define copyshort(a, b)	a = (b);	
# define equalshort(a, b)	(a) == (b)
# define writeXMLshort(a)	yyout.write ((int) a);
Ident
# define beginIdent(a)
# define closeIdent(a)	
# define readIdent(a)		a = Idents_PREFIX makeIdent (yyin.readL ());
# define writeIdent(a)		yyout.write (a);
# define getIdent(a)		**not used**
# define putIdent(a)		**not used**
# define copyIdent(a, b)	a = (b);
# define equalIdent(a, b)	(a.equals (b))
# define writeXMLIdent(a)	yyout.write (a);
Position
# define beginPosition(a)	a = Position.NoPosition;
# define closePosition(a)	
# define readPosition(a)	a = new Position (yyin);
# define writePosition(a)	yyout.write (a);
# define getPosition(a)		**not used**
# define putPosition(a)		**not used**
# define copyPosition(a, b)	a = (b);
# define equalPosition(a, b)	(a.compareTo (b) == 0)
# define writeXMLPosition(a)	yyout.write (a);
NodeHead
# define beginNodeHead(a)	
# define closeNodeHead(a)	**not used**	
# define readNodeHead(a)	
# define writeNodeHead(a)	
# define getNodeHead(a)		**not used**
# define putNodeHead(a)		**not used**
# define copyNodeHead(a, b)	
# define equalNodeHead(a, b)	true
# define writeXMLNodeHead(a)	
