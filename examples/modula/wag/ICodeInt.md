(****************************************************************)
(*								*)
(*	Uebersetzerbau-Praktikum				*)
(*	========================				*)
(*								*)
(*	Purpose	: stores and interpretes the intermediate	*)
(*		  language I-Code				*)
(*								*)
(*	Author	: E. Klein					*)
(*	Date	: 05.02.88					*)
(*	Updated	: 08.02.88					*)
(*								*)
(****************************************************************)

DEFINITION MODULE ICodeInt;

CONST
	  (* coding of OpCode parameters *)
      IntType	= 1;
      RealType	= 2;
      BoolType	= 3;

      FalseCode	= 0;
      TrueCode	= 1;


	  (* ICode instructions *)
TYPE OpCode =  (LDA, LDC, LDI, STI, JMP, FJP, ADD, SUB, MUL, INV,
		LES, IXA, FLT, WRI, REA, MST, JSR, ENT, RET, CHK);


PROCEDURE Emit (oc: OpCode; Param1, Param2: CARDINAL);
PROCEDURE EmitReal (oc: OpCode; Param1: CARDINAL; Param2: REAL);
  (* the repeated call of 'Emit' resp. 'EmitReal' writes *)
  (* the program into 'Code', starting at Code [0].	 *)
PROCEDURE NewLabel (): INTEGER;
  (* create a new symbolic label *)
PROCEDURE DeclLabel (l: INTEGER);
  (* associate a symbolic label with the current value of the program counter PC *)
PROCEDURE ResolveLabels;
  (* replace symbolic labels by concrete PC values *)


PROCEDURE WriteCode;
  (* 'Code' is written on StdOut *)

PROCEDURE Interpret;
  (* executes ICode program *)

END ICodeInt.
