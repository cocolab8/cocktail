int
# define beginint(a)		
# define closeint(a)		
# define readint(a)		fscanf (yyf, "%d", & a);
# define writeint(a)		fprintf (yyf, "%d", a);
# define getint(a)		yyGet ((char *) & a, sizeof (a));
# define putint(a)		yyPut ((char *) & a, sizeof (a));
# define copyint(a, b)		
# define equalint(a, b)		(a) == (b)
# define writeXMLint(a)		fprintf (yyf, "%d", a);
short
# define beginshort(a)		
# define closeshort(a)		
# define readshort(a)		fscanf (yyf, "%hd", & a);
# define writeshort(a)		fprintf (yyf, "%hd", a);
# define getshort(a)		yyGet ((char *) & a, sizeof (a));
# define putshort(a)		yyPut ((char *) & a, sizeof (a));
# define copyshort(a, b)	
# define equalshort(a, b)	(a) == (b)
# define writeXMLshort(a)	fprintf (yyf, "%hd", a);
long
# define beginlong(a)		
# define closelong(a)		
# define readlong(a)		fscanf (yyf, "%ld", & a);
# define writelong(a)		fprintf (yyf, "%ld", a);
# define getlong(a)		yyGet ((char *) & a, sizeof (a));
# define putlong(a)		yyPut ((char *) & a, sizeof (a));
# define copylong(a, b)		
# define equallong(a, b)	(a) == (b)
# define writeXMLlong(a)	fprintf (yyf, "%ld", a);
unsigned
# define beginunsigned(a)	
# define closeunsigned(a)	
# define readunsigned(a)	fscanf (yyf, "%u", & a);
# define writeunsigned(a)	fprintf (yyf, "%u", a);
# define getunsigned(a)		yyGet ((char *) & a, sizeof (a));
# define putunsigned(a)		yyPut ((char *) & a, sizeof (a));
# define copyunsigned(a, b)	
# define equalunsigned(a, b)	(a) == (b)
# define writeXMLunsigned(a)	fprintf (yyf, "%u", a);
float
# define beginfloat(a)		
# define closefloat(a)		
# define readfloat(a)		fscanf (yyf, "%g", & a);
# define writefloat(a)		fprintf (yyf, "%g", a);
# define getfloat(a)		yyGet ((char *) & a, sizeof (a));
# define putfloat(a)		yyPut ((char *) & a, sizeof (a));
# define copyfloat(a, b)	
# define equalfloat(a, b)	(a) == (b)
# define writeXMLfloat(a)	fprintf (yyf, "%g", a);
double
# define begindouble(a)		
# define closedouble(a)		
# define readdouble(a)		fscanf (yyf, "%g", & a);
# define writedouble(a)		fprintf (yyf, "%g", a);
# define getdouble(a)		yyGet ((char *) & a, sizeof (a));
# define putdouble(a)		yyPut ((char *) & a, sizeof (a));
# define copydouble(a, b)	
# define equaldouble(a, b)	(a) == (b)
# define writeXMLdouble(a)	fprintf (yyf, "%g", a);
rbool
# define beginrbool(a)		
# define closerbool(a)		
# define readrbool(a)		a = fgetc (yyf) == 'T';
# define writerbool(a)		fputc (a ? 'T' : 'F', yyf);
# define getrbool(a)		yyGet ((char *) & a, sizeof (a));
# define putrbool(a)		yyPut ((char *) & a, sizeof (a));
# define copyrbool(a, b)	
# define equalrbool(a, b)	(a) == (b)
# define writeXMLrbool(a)	fputc (a ? 'T' : 'F', yyf);
char
# define beginchar(a)		
# define closechar(a)		
# define readchar(a)		a = fgetc (yyf);
# define writechar(a)		fputc (a, yyf);
# define getchar(a)		yyGet ((char *) & a, sizeof (a));
# define putchar(a)		yyPut ((char *) & a, sizeof (a));
# define copychar(a, b)		
# define equalchar(a, b)	(a) == (b)
# define writeXMLchar(a)	yyWriteCharXML (a);
vchar
# define beginvchar(a)		
# define closevchar(a)		
# define readvchar(a)		fscanf (yyf, vFc, & a);
# define writevchar(a)		fprintf (yyf, vFc, a);
# define getvchar(a)		yyGet ((char *) & a, sizeof (a));
# define putvchar(a)		yyPut ((char *) & a, sizeof (a));
# define copyvchar(a, b)		
# define equalvchar(a, b)	(a) == (b)
# define writeXMLvchar(a)	yyWriteCharXML (a);
tString
# define begintString(a)	
# define closetString(a)	
# define readtString(a)		
# define writetString(a)	fputs (a, yyf);
# define gettString(a)		
# define puttString(a)		
# define copytString(a, b)	
# define equaltString(a, b)	strcmp (a, (b)) == 0
# define writeXMLtString(a)	yyWriteStringXML (a);
tStringRef
# define begintStringRef(a)	a = NoString;
# define closetStringRef(a)	
# define readtStringRef(a)	{ char yys [1024]; fgets (yys, 1024, yyf); ungetc ('\n', yyf); a = PutString (yys, strlen (yys) - 1); }
# define writetStringRef(a)	WriteString (yyf, a);
# define gettStringRef(a)	{ char yys [1024]; fgets (yys, 1024, yyf); a = PutString (yys, strlen (yys) - 1); }
# define puttStringRef(a)	{ WriteString (yyf, a); fputc ('\n', yyf); }
# define copytStringRef(a, b)	
# define equaltStringRef(a, b)	(a) == (b)
# define writeXMLtStringRef(a)	yyWriteStringXML (StGetCStr (a));
tWStringRef
# define begintWStringRef(a)	a = NoWString;
# define closetWStringRef(a)	
# define readtWStringRef(a)	
# define writetWStringRef(a)	WriteWString (yyf, a);
# define gettWStringRef(a)	
# define puttWStringRef(a)	{ WriteWString (yyf, a); fputc ('\n', yyf); }
# define copytWStringRef(a, b)	
# define equaltWStringRef(a, b)	(a) == (b)
# define writeXMLtWStringRef(a)	yyWriteWStringXML (StGetWCStr (a));
vtStringRef
# define beginvtStringRef(a)	a = vNoString;
# define closevtStringRef(a)	
# define readvtStringRef(a)	
# define writevtStringRef(a)	vWriteString (yyf, a);
# define getvtStringRef(a)	
# define putvtStringRef(a)	{ vWriteString (yyf, a); fputc ('\n', yyf); }
# define copyvtStringRef(a, b)	
# define equalvtStringRef(a, b)	(a) == (b)
# define writeXMLvtStringRef(a)	yyWriteStringXML (vStGetCStr (a));
tIdent
# define begintIdent(a)		a = NoIdent;
# define closetIdent(a)		
# define readtIdent(a)		a = yyReadIdent ();
# define writetIdent(a)		WriteIdent (yyf, a);
# define gettIdent(a)		yyGetIdent (& a);
# define puttIdent(a)		yyPutIdent (a);
# define copytIdent(a, b)	
# define equaltIdent(a, b)	(a) == (b)
# define writeXMLtIdent(a)	yyWriteStringXML (GetCStr (a));
tWIdent
# define begintWIdent(a)	a = NoWIdent;
# define closetWIdent(a)		
# define readtWIdent(a)		
# define writetWIdent(a)	WriteWIdent (yyf, a);
# define gettWIdent(a)		
# define puttWIdent(a)		{ WriteWIdent (yyf, a); fputc ('\n', yyf); }
# define copytWIdent(a, b)	
# define equaltWIdent(a, b)	(a) == (b)
# define writeXMLtWIdent(a)	yyWriteWStringXML (GetWCStr (a));
vtIdent
# define beginvtIdent(a)	a = vNoIdent;
# define closevtIdent(a)		
# define readvtIdent(a)		
# define writevtIdent(a)	vWriteIdent (yyf, a);
# define getvtIdent(a)		
# define putvtIdent(a)		{ vWriteIdent (yyf, a); fputc ('\n', yyf); }
# define copyvtIdent(a, b)	
# define equalvtIdent(a, b)	(a) == (b)
# define writeXMLvtIdent(a)	yyWriteStringXML (vGetCStr (a));
tSet
# define begintSet(a)		
# define closetSet(a)		
# define readtSet(a)		ReadSet (yyf, & a);
# define writetSet(a)		WriteSet (yyf, & a);
# define gettSet(a)		
# define puttSet(a)		
# define copytSet(a, b)		
# define equaltSet(a, b)	IsEqual (& a, & b)
# define writeXMLtSet(a)	WriteSet (yyf, & a);
tPosition
# define begintPosition(a)	a = NoPosition;
# define closetPosition(a)	
# define readtPosition(a)	ReadPosition (yyf, & a);
# define writetPosition(a)	WritePosition (yyf, a);
# define gettPosition(a)	yyGet ((char *) & a, sizeof (a));
# define puttPosition(a)	yyPut ((char *) & a, sizeof (a));
# define copytPosition(a, b)	
# define equaltPosition(a, b)	Compare (a, b) == 0
# define writeXMLtPosition(a)	WritePosition (yyf, a);
NodeHead
# define beginNodeHead(a)	
# define closeNodeHead(a)	
# define readNodeHead(a)	
# define writeNodeHead(a)	
# define getNodeHead(a)		
# define putNodeHead(a)		
# define copyNodeHead(a, b)	
# define equalNodeHead(a, b)	rtrue
# define writeXMLNodeHead(a)	
