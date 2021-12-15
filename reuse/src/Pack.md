DEFINITION MODULE Pack;

IMPORT IO;

TYPE
  PackHandle;
  UnpackCardHandler = PROCEDURE(LONGCARD);
  UnpackIntHandler = PROCEDURE(LONGINT);
  UnpackHandler = UnpackCardHandler;
  
  PROCEDURE BeginPackCard
    (VAR packer 	: PackHandle;
         file		: IO.tFile);

  PROCEDURE BeginPackInt
    (VAR packer 	: PackHandle;
         file		: IO.tFile);

  PROCEDURE PackCard
    (    packer		: PackHandle;
	 value		: LONGCARD);
	 
  PROCEDURE PackInt
    (    packer		: PackHandle;
	 value		: INTEGER);
	 
  PROCEDURE EndPack
    (VAR packer 	: PackHandle);

  PROCEDURE UnpackCard
    (    handler	: UnpackCardHandler;
	 string  	: ARRAY OF CHAR;
         count		: CARDINAL);
	 
  PROCEDURE Unpack
    (    handler	: UnpackCardHandler;
	 string  	: ARRAY OF CHAR;
         count		: CARDINAL);
	 
  PROCEDURE UnpackInt
    (    handler	: UnpackIntHandler;
	 string  	: ARRAY OF CHAR;
         count		: CARDINAL);
	     
END Pack.
