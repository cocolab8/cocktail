# include "ratc.h"

# include "ICodeIntConst.h"

typedef unsigned char OpCode;

extern void Emit	ARGS ((OpCode oc, int Param1, int Param2));
extern void EmitReal	ARGS ((OpCode oc, int Param1, float Param2));
extern void WriteCode	ARGS ((void));
extern void Interpret	ARGS ((void));
