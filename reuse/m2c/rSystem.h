#define DEFINITION_rSystem

#define ZDz6VQCC_0	32
#define ZDz6VQCC_1	0
#define ZDz6VQCC_2	1
#define ZDz6VQCC_3	2
typedef INTEGER ZDz6VQCC_4;
typedef struct rSystem_1 {
CHAR A[1023 + 1];
} *ZDz6VQCC_5;
extern ZDz6VQCC_4 OpenInput ARGS ((CHAR Z121[], LONGCARD ));
extern ZDz6VQCC_4 OpenOutput ARGS ((CHAR Z121[], LONGCARD ));
extern INTEGER rRead ARGS ((ZDz6VQCC_4 Z124, ADDRESS Z125, INTEGER Z126));
extern INTEGER rWrite ARGS ((ZDz6VQCC_4 Z124, ADDRESS Z125, INTEGER Z126));
extern void rClose ARGS ((ZDz6VQCC_4 Z124));
extern BOOLEAN IsCharacterSpecial ARGS ((ZDz6VQCC_4 Z124));
extern CHAR DirectorySeparator ARGS ((void));
extern ADDRESS rAlloc ARGS ((LONGINT Z132));
extern LONGINT rTime ARGS ((void));
extern ZDz6VQCC_5 rtpqx ARGS ((CHAR Z135[], LONGCARD ));
extern BOOLEAN rtpqy ARGS ((void));
extern CARDINAL GetArgCount ARGS ((void));
extern void GetArgument ARGS ((INTEGER Z139, CHAR Z140[], LONGCARD ));
extern ZDz6VQCC_5 GetEnvVar ARGS ((CHAR Z142[], LONGCARD ));
extern void PutArgs ARGS ((INTEGER Z144, ADDRESS Z145));
extern INTEGER rErrNo ARGS ((void));
extern INTEGER rSystem ARGS ((CHAR Z147[], LONGCARD ));
extern void rExit ARGS ((INTEGER Z149));
extern void BEGIN_rSystem ARGS ((void));
