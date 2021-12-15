# include "ratc.h"

int Tcl_CreateCommand	ARGS ((void)) { return 1; }
int Tcl_CreateInterp	ARGS ((void)) { return 1; }
int Tcl_DeleteInterp	ARGS ((void)) { return 1; }
int Tcl_EvalFile	ARGS ((void)) { return 1; }
int Tcl_Finalize	ARGS ((void)) { return 1; }
int Tcl_FindExecutable	ARGS ((void)) { return 1; }
int Tcl_Init		ARGS ((void)) { return 1; }
int Tcl_SetResult	ARGS ((void)) { return 1; }
int Tcl_StaticPackage	ARGS ((void)) { return 1; }
int Tcl_VarEval		ARGS ((void)) { return 1; }
int Tk_Init		ARGS ((void)) { return 1; }
int Tk_MainLoop		ARGS ((void)) { return 1; }

char * Tcl_GetStringResult ARGS ((void)) { return "sorry, Tcl/Tk is not available"; }
