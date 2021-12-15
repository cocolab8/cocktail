(* $Id: ScanDrv.mi,v 2.6 1999/01/20 11:22:32 grosch rel $ *)

$@ MODULE @Drv;

$@ FROM @	IMPORT BeginScanner, GetToken, GetWord, Attribute, EofToken,
			TokenLength, CloseScanner;
FROM Strings	IMPORT tString, ArrayToString, WriteL;
FROM IO		IMPORT StdOutput, WriteI, WriteC, WriteNl, CloseIO;
FROM Position	IMPORT WritePosition;
FROM rSystem	IMPORT rExit;

VAR Token	: INTEGER;
    Word	: tString;
    Debug	: BOOLEAN;
    Count	: INTEGER;

BEGIN
   Debug := FALSE;
   Count := 0;
   BeginScanner;
   REPEAT
      Token := GetToken ();
      INC (Count);
      IF Debug THEN
	 IF TokenLength <= 256 THEN
	    GetWord (Word);
	 ELSE
	    ArrayToString ("very long token", Word);
	 END;
	 WritePosition (StdOutput, Attribute.Position);
	 WriteI (StdOutput, Token, 5);
	 WriteC (StdOutput, ' ');
	 WriteL (StdOutput, Word);
      END;
   UNTIL Token = EofToken;
   CloseScanner;
   WriteI (StdOutput, Count, 0);
   WriteNl (StdOutput);
   CloseIO;
   rExit (0);
$@ END @Drv.
