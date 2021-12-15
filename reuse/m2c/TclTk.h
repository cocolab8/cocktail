#define DEFINITION_TclTk

#ifndef DEFINITION_Argument
#include "Argument.h"
#endif

#define Zql9ut_0	0
#define Zql9ut_1	1
#define Zql9ut_2	3
typedef struct TclTk_1 {
char dummy;
} Zql9ut_3;
typedef Zql9ut_3 *Zql9ut_4;
typedef struct TclTk_2 {
char dummy;
} Zql9ut_5;
typedef Zql9ut_5 *Zql9ut_6;
typedef INTEGER *Zql9ut_7;
typedef INTEGER (*Zql9ut_8) ARGS ((Zql9ut_4));
typedef INTEGER (*Zql9ut_9) ARGS ((Zql9ut_6, Zql9ut_4, INTEGER, ZehCFLCDL_0));
typedef struct TclTk_3 {
CHAR A[127 + 1];
} Zql9ut_10;
extern void Tcl_FindExecutable ARGS ((CHAR Z129[], LONGCARD ));
extern Zql9ut_4 Tcl_CreateInterp ARGS ((void));
extern INTEGER Tcl_Init ARGS ((Zql9ut_4 Z132));
extern void Tcl_StaticPackage ARGS ((Zql9ut_4 Z132, Zql9ut_10 *Z134, Zql9ut_8 Z135, Zql9ut_7 Z136));
extern void Tcl_CreateCommand ARGS ((Zql9ut_4 Z132, Zql9ut_10 *Z138, Zql9ut_9 Z139, Zql9ut_7 Z123, Zql9ut_7 Z136));
extern INTEGER Tcl_EvalFile ARGS ((Zql9ut_4 Z132, CHAR Z141[], LONGCARD ));
extern void Tcl_VarEval ARGS ((Zql9ut_4 Z132, Zql9ut_10 *Z143, Zql9ut_10 *Z144, Zql9ut_7 Z136));
extern void Tcl_DeleteInterp ARGS ((Zql9ut_4 Z132));
extern void Tcl_Finalize ARGS ((void));
extern ADDRESS Tcl_GetStringResult ARGS ((Zql9ut_4 Z132));
extern void Tcl_SetResult ARGS ((Zql9ut_4 Z132, Zql9ut_10 *Z149, ADDRESS Z139));
extern INTEGER Tk_Init ARGS ((Zql9ut_4 Z132));
extern void Tk_MainLoop ARGS ((void));
extern void BEGIN_TclTk ARGS ((void));
