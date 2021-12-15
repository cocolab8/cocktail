FOREIGN MODULE TclTk;

FROM SYSTEM	IMPORT ADDRESS;
FROM Argument	IMPORT ArgTable;

CONST
   TCL_OK		= 0;
   TCL_VOLATILE		= 1;
   TCL_DYNAMIC		= 3;

TYPE
   Tcl_Interp_Record	= RECORD END;
   Tcl_Interp		= POINTER TO Tcl_Interp_Record;
   ClientData_Record	= RECORD END;		
   ClientData		= POINTER TO ClientData_Record;		
   Null_Ptr		= POINTER TO INTEGER;
   Tk_Init_Proc		= PROCEDURE (Tcl_Interp): INTEGER;
   CallBack_Proc	= PROCEDURE (ClientData, Tcl_Interp, INTEGER, ArgTable): INTEGER;
   TclTk_String		= ARRAY [0..127] OF CHAR;

PROCEDURE Tcl_FindExecutable	(VAR	 Dummy	: ARRAY OF CHAR	);
PROCEDURE Tcl_CreateInterp	(): Tcl_Interp;
PROCEDURE Tcl_Init		(	Interp	: Tcl_Interp	): INTEGER;
PROCEDURE Tcl_StaticPackage	(	Interp	: Tcl_Interp	;
				VAR	Tk	: TclTk_String	;
					Tk_Init	: Tk_Init_Proc	;
					Null	: Null_Ptr	);
PROCEDURE Tcl_CreateCommand	(	Interp	: Tcl_Interp	;
				VAR	Name	: TclTk_String	;
					Proc	: CallBack_Proc	;
					ClientData: Null_Ptr	;
					Null	: Null_Ptr	);
PROCEDURE Tcl_EvalFile		(	Interp	: Tcl_Interp	;
				VAR	FileName: ARRAY OF CHAR	): INTEGER;
PROCEDURE Tcl_VarEval		(	Interp	: Tcl_Interp	;
				VAR	String1	: TclTk_String	;
				VAR	String2	: TclTk_String	;
					Null	: Null_Ptr	);
PROCEDURE Tcl_DeleteInterp	(	Interp	: Tcl_Interp	);
PROCEDURE Tcl_Finalize		();
PROCEDURE Tcl_GetStringResult	(	Interp	: Tcl_Interp	): ADDRESS;
PROCEDURE Tcl_SetResult		(	Interp	: Tcl_Interp	;
				VAR	String	: TclTk_String	;
					Proc	: ADDRESS	);

PROCEDURE Tk_Init		(	Interp	: Tcl_Interp	): INTEGER;
PROCEDURE Tk_MainLoop		();

END TclTk.
