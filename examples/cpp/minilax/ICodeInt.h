# include "ratc.h"

# define IntType	1
# define RealType	2
# define BoolType	3

# define FalseCode	0
# define TrueCode	1

# define LDA	0
# define LDC	1
# define LDI	2
# define STI	3
# define JMP	4
# define FJP	5
# define ADD	6
# define SUB	7
# define MUL	8
# define INV	9
# define LES	10
# define IXA	11
# define FLT	12
# define WRI	13
# define REA	14
# define MST	15
# define JSR	16
# define ENT	17
# define RET	18
# define CHK	19

typedef unsigned char OpCode;

extern void Emit	ARGS ((OpCode oc, int Param1, int Param2));
extern void EmitReal	ARGS ((OpCode oc, int Param1, float Param2));
extern void WriteCode	ARGS ((void));
extern void Interpret	ARGS ((void));
