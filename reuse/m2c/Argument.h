/* $Id: Argument.h,v 1.1 2009/10/14 10:28:53 grosch Exp $ */

#define DEFINITION_Argument

# define ZehCFLCDL_0 Argument_ArgTable

typedef struct Argument_1 {
    struct Argument_2 {
        CHAR A [999 + 1];
    } *A [999 + 1];
} *Argument_ArgTable;

extern void GetArgs ARGS ((SHORTCARD *argc, Argument_ArgTable *argv));
extern void GetEnv ARGS ((Argument_ArgTable *env));
extern void BEGIN_Argument ARGS ((void));
