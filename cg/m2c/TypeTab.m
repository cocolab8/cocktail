INTEGER
# define beginINTEGER(a)	
# define closeINTEGER(a)	
# define readINTEGER(a)		a := IO.ReadI (yyf);
# define writeINTEGER(a)	IO.WriteI (yyf, a, 0);
# define getINTEGER(a)		yyGet (a);
# define putINTEGER(a)		yyPut (a);
# define copyINTEGER(a, b)	
# define equalINTEGER(a, b)	(a) = (b)
# define writeXMLINTEGER(a)	IO.WriteI (yyf, a, 0);
SHORTINT
# define beginSHORTINT(a)	
# define closeSHORTINT(a)	
# define readSHORTINT(a)	a := IO.ReadI (yyf);
# define writeSHORTINT(a)	IO.WriteI (yyf, a, 0);
# define getSHORTINT(a)		yyGet (a);
# define putSHORTINT(a)		yyPut (a);
# define copySHORTINT(a, b)	
# define equalSHORTINT(a, b)	(a) = (b)
# define writeXMLSHORTINT(a)	IO.WriteI (yyf, a, 0);
LONGINT
# define beginLONGINT(a)	
# define closeLONGINT(a)	
# define readLONGINT(a)		a := IO.ReadI (yyf);
# define writeLONGINT(a)	IO.WriteI (yyf, a, 0);
# define getLONGINT(a)		yyGet (a);
# define putLONGINT(a)		yyPut (a);
# define copyLONGINT(a, b)	
# define equalLONGINT(a, b)	(a) = (b)
# define writeXMLLONGINT(a)	IO.WriteI (yyf, a, 0);
CARDINAL
# define beginCARDINAL(a)	
# define closeCARDINAL(a)	
# define readCARDINAL(a)	a := IO.ReadI (yyf);
# define writeCARDINAL(a)	IO.WriteCard (yyf, a, 0);
# define getCARDINAL(a)		yyGet (a);
# define putCARDINAL(a)		yyPut (a);
# define copyCARDINAL(a, b)	
# define equalCARDINAL(a, b)	(a) = (b)
# define writeXMLCARDINAL(a)	IO.WriteCard (yyf, a, 0);
SHORTCARD
# define beginSHORTCARD(a)	
# define closeSHORTCARD(a)	
# define readSHORTCARD(a)	a := IO.ReadI (yyf);
# define writeSHORTCARD(a)	IO.WriteCard (yyf, a, 0);
# define getSHORTCARD(a)	yyGet (a);
# define putSHORTCARD(a)	yyPut (a);
# define copySHORTCARD(a, b)	
# define equalSHORTCARD(a, b)	(a) = (b)
# define writeXMLSHORTCARD(a)	IO.WriteCard (yyf, a, 0);
LONGCARD
# define beginLONGCARD(a)	
# define closeLONGCARD(a)	
# define readLONGCARD(a)	a := IO.ReadI (yyf);
# define writeLONGCARD(a)	IO.WriteCard (yyf, a, 0);
# define getLONGCARD(a)		yyGet (a);
# define putLONGCARD(a)		yyPut (a);
# define copyLONGCARD(a, b)	
# define equalLONGCARD(a, b)	(a) = (b)
# define writeXMLLONGCARD(a)	IO.WriteCard (yyf, a, 0);
REAL
# define beginREAL(a)		
# define closeREAL(a)		
# define readREAL(a)		a := IO.ReadR (yyf);
# define writeREAL(a)		IO.WriteR (yyf, a, 0, 6, 1);
# define getREAL(a)		yyGet (a);
# define putREAL(a)		yyPut (a);
# define copyREAL(a, b)		
# define equalREAL(a, b)	(a) = (b)
# define writeXMLREAL(a)	IO.WriteR (yyf, a, 0, 6, 1);
LONGREAL
# define beginLONGREAL(a)	
# define closeLONGREAL(a)	
# define readLONGREAL(a)	a := IO.ReadR (yyf);
# define writeLONGREAL(a)	IO.WriteR (yyf, a, 0, 6, 1);
# define getLONGREAL(a)		yyGet (a);
# define putLONGREAL(a)		yyPut (a);
# define copyLONGREAL(a, b)	
# define equalLONGREAL(a, b)	(a) = (b)
# define writeXMLLONGREAL(a)	IO.WriteR (yyf, a, 0, 6, 1);
BOOLEAN
# define beginBOOLEAN(a)	
# define closeBOOLEAN(a)	
# define readBOOLEAN(a)		a := IO.ReadB (yyf);
# define writeBOOLEAN(a)	IO.WriteB (yyf, a);
# define getBOOLEAN(a)		yyGet (a);
# define putBOOLEAN(a)		yyPut (a);
# define copyBOOLEAN(a, b)	
# define equalBOOLEAN(a, b)	(a) = (b)
# define writeXMLBOOLEAN(a)	IO.WriteB (yyf, a);
CHAR
# define beginCHAR(a)		
# define closeCHAR(a)		
# define readCHAR(a)		a := IO.ReadC (yyf);
# define writeCHAR(a)		IO.WriteC (yyf, a);
# define getCHAR(a)		yyGet (a);
# define putCHAR(a)		yyPut (a);
# define copyCHAR(a, b)		
# define equalCHAR(a, b)	(a) = (b)
# define writeXMLCHAR(a)	IO.WriteC (yyf, a);
WCHAR
# define beginWCHAR(a)		
# define closeWCHAR(a)		
# define readWCHAR(a)		
# define writeWCHAR(a)		
# define getWCHAR(a)		yyGet (a);
# define putWCHAR(a)		yyPut (a);
# define copyWCHAR(a, b)		
# define equalWCHAR(a, b)	(a) = (b)
# define writeXMLWCHAR(a)	
BITSET
# define beginBITSET(a)		
# define closeBITSET(a)		
# define readBITSET(a)		yyReadHex (a);
# define writeBITSET(a)		yyWriteHex (a);
# define getBITSET(a)		yyGet (a);
# define putBITSET(a)		yyPut (a);
# define copyBITSET(a, b)	
# define equalBITSET(a, b)	(a) = (b)
# define writeXMLBITSET(a)	yyWriteHex (a);
BYTE
# define beginBYTE(a)		
# define closeBYTE(a)		
# define readBYTE(a)		yyReadHex (a);
# define writeBYTE(a)		yyWriteHex (a);
# define getBYTE(a)		yyGet (a);
# define putBYTE(a)		yyPut (a);
# define copyBYTE(a, b)		
# define equalBYTE(a, b)	(a) = (b)
# define writeXMLBYTE(a)	yyWriteHex (a);
WORD
# define beginWORD(a)		
# define closeWORD(a)		
# define readWORD(a)		yyReadHex (a);
# define writeWORD(a)		yyWriteHex (a);
# define getWORD(a)		yyGet (a);
# define putWORD(a)		yyPut (a);
# define copyWORD(a, b)		
# define equalWORD(a, b)	(a) = (b)
# define writeXMLWORD(a)	yyWriteHex (a);
ADDRESS
# define beginADDRESS(a)	
# define closeADDRESS(a)	
# define readADDRESS(a)		yyReadHex (a);
# define writeADDRESS(a)	yyWriteHex (a);
# define getADDRESS(a)		yyGet (a);
# define putADDRESS(a)		yyPut (a);
# define copyADDRESS(a, b)	
# define equalADDRESS(a, b)	(a) = (b)
# define writeXMLADDRESS(a)	yyWriteHex (a);
tString
# define begintString(a)	
# define closetString(a)	
# define readtString(a)		Strings.ReadL (yyf, a);
# define writetString(a)	Strings.WriteL (yyf, a);
# define gettString(a)		yyGet (a);
# define puttString(a)		yyPut (a);
# define copytString(a, b)	
# define equaltString(a, b)	Strings.IsEqual (a, b)
# define writeXMLtString(a)	Strings.WriteL (yyf, a);
tWString
# define begintWString(a)	
# define closetWString(a)	
# define readtWString(a)	WStrings.ReadL (yyf, a);
# define writetWString(a)	WStrings.WriteL (yyf, a);
# define gettWString(a)		yyGet (a);
# define puttWString(a)		yyPut (a);
# define copytWString(a, b)	
# define equaltWString(a, b)	WStrings.IsEqual (a, b)
# define writeXMLtWString(a)	WStrings.WriteL (yyf, a);
tStringRef
# define begintStringRef(a)	a := StringM.NoString;
# define closetStringRef(a)	
# define readtStringRef(a)	
# define writetStringRef(a)	StringM.WriteString (yyf, a);
# define gettStringRef(a)	
# define puttStringRef(a)	
# define copytStringRef(a, b)	
# define equaltStringRef(a, b)	(a) = (b)
# define writeXMLtStringRef(a)	StringM.WriteString (yyf, a);
tWStringRef
# define begintWStringRef(a)	a := StringM.NoString;
# define closetWStringRef(a)	
# define readtWStringRef(a)	
# define writetWStringRef(a)	StringM.WriteWString (yyf, a);
# define gettWStringRef(a)	
# define puttWStringRef(a)	
# define copytWStringRef(a, b)	
# define equaltWStringRef(a, b)	(a) = (b)
# define writeXMLtWStringRef(a)	StringM.WriteWString (yyf, a);
tIdent
# define begintIdent(a)		a := Idents.NoIdent;
# define closetIdent(a)		
# define readtIdent(a)		a := yyReadIdent ();
# define writetIdent(a)		Idents.WriteIdent (yyf, a);
# define gettIdent(a)		yyGetIdent (a);
# define puttIdent(a)		yyPutIdent (a);
# define copytIdent(a, b)	
# define equaltIdent(a, b)	(a) = (b)
# define writeXMLtIdent(a)	Idents.WriteIdent (yyf, a);
tWIdent
# define begintWIdent(a)	a := Idents.NoWIdent;
# define closetWIdent(a)		
# define readtWIdent(a)		
# define writetWIdent(a)	Idents.WriteWIdent (yyf, a);
# define gettWIdent(a)		
# define puttWIdent(a)		
# define copytWIdent(a, b)	
# define equaltWIdent(a, b)	(a) = (b)
# define writeXMLtWIdent(a)	Idents.WriteWIdent (yyf, a);
tText
# define begintText(a)		
# define closetText(a)		
# define readtText(a)		
# define writetText(a)		Texts.WriteText (yyf, a);
# define gettText(a)		
# define puttText(a)		
# define copytText(a, b)	
# define equaltText(a, b)	FALSE
# define writeXMLtText(a)	Texts.WriteText (yyf, a);
tSet
# define begintSet(a)		
# define closetSet(a)		
# define readtSet(a)		Sets.ReadSet (yyf, a);
# define writetSet(a)		Sets.WriteSet (yyf, a);
# define gettSet(a)		
# define puttSet(a)		
# define copytSet(a, b)		
# define equaltSet(a, b)	Sets.IsEqual (a, b)
# define writeXMLtSet(a)	Sets.WriteSet (yyf, a);
tRelation
# define begintRelation(a)	
# define closetRelation(a)	
# define readtRelation(a)	Relation.ReadRelation (yyf, a);
# define writetRelation(a)	Relation.WriteRelation (yyf, a);
# define gettRelation(a)	
# define puttRelation(a)	
# define copytRelation(a, b)	
# define equaltRelation(a, b)	Relation.IsEqual (a, b)
# define writeXMLtRelation(a)	Relation.WriteRelation (yyf, a);
tPosition
# define begintPosition(a)	a := Position.NoPosition;
# define closetPosition(a)		
# define readtPosition(a)	Position.ReadPosition (yyf, a);
# define writetPosition(a)	Position.WritePosition (yyf, a);
# define gettPosition(a)	yyGet (a);
# define puttPosition(a)	yyPut (a);
# define copytPosition(a, b)		
# define equaltPosition(a, b)	Position.Compare (a, b) = 0
# define writeXMLtPosition(a)	Position.WritePosition (yyf, a);
NodeHead
# define beginNodeHead(a)	
# define closeNodeHead(a)	
# define readNodeHead(a)	
# define writeNodeHead(a)	
# define getNodeHead(a)		
# define putNodeHead(a)		
# define copyNodeHead(a, b)	
# define equalNodeHead(a, b)	TRUE
# define writeXMLNodeHead(a)	
