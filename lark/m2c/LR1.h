#define DEFINITION_LR1

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#define ZiS8_0	0
#define ZiS8_1	1
#define ZiS8_2	2
#define ZiS8_3	3
#define ZiS8_4	1
typedef SHORTCARD ZiS8_5;
typedef struct LR1_1 {
ZiS8_5 A[1000000 + 1];
} *ZiS8_6;
typedef struct LR1_2 {
CARDINAL Y0, Y1;
SHORTCARD Y2, Y3, Y4, Y5, Y6, Y7, Y8;
ZiS8_5 Y9;
ZiS8_6 Y10;
} ZiS8_7;
typedef struct LR1_3 {
SHORTCARD Y0, Y1;
SHORTCARD Y2;
} ZiS8_8;
typedef struct LR1_4 {
Zq0A4_57 Y0;
struct LR1_5 {
ZiS8_5 A[1000000 - 1 + 1];
} *Y1;
ZiS8_5 Y2, Y3;
SHORTCARD Y4;
} ZiS8_9;
typedef struct LR1_6 {
SHORTINT Y0, Y1;
SHORTCARD Y2;
} ZiS8_10;
typedef struct LR1_7 {
CARDINAL Y0;
SHORTINT Y1;
} ZiS8_11;
extern LONGINT ZiS8_12;
extern LONGINT ZiS8_13;
extern struct LR1_8 {
ZiS8_7 A[100000 + 1];
} *ZiS8_14;
extern LONGINT ZiS8_15;
extern LONGINT ZiS8_16;
extern struct LR1_9 {
ZiS8_8 A[10000000 + 1];
} *ZiS8_17;
extern LONGINT ZiS8_18;
extern LONGINT ZiS8_19;
extern struct LR1_10 {
ZiS8_9 A[1000000 + 1];
} *ZiS8_20;
extern LONGINT ZiS8_21;
extern struct LR1_11 {
ZiS8_5 A[1000000 + 1];
} *ZiS8_22;
extern LONGINT ZiS8_23;
extern struct LR1_12 {
ZiS8_10 A[1000000 + 1];
} *ZiS8_24;
extern LONGINT ZiS8_25;
extern LONGINT ZiS8_26;
extern struct LR1_13 {
ZiS8_11 A[1000000 + 1];
} *ZiS8_27;
extern CARDINAL ZiS8_28, ZiS8_29, ZiS8_30;
extern LONGINT ZiS8_31, ZiS8_32;
extern BOOLEAN ZiS8_33;
extern Zq0A4_35 ZiS8_34;
extern SHORTCARD ZiS8_35, ZiS8_36, ZiS8_37, ZiS8_38, ZiS8_39, ZiS8_40, ZiS8_41;
extern ZpmCQ_4 ZiS8_42, ZiS8_43;
extern void ZiS8_44 ARGS ((void));
extern void ZiS8_45 ARGS ((void));
extern void ZiS8_46 ARGS ((void));
extern void ZiS8_47 ARGS ((void));
extern ADDRESS ZiS8_48 ARGS ((void));
extern void ZiS8_49 ARGS ((ZiS8_5 Z197, CARDINAL Z198, ZpmCQ_4 *Z199));
extern void ZiS8_50 ARGS ((void));
extern void ZiS8_51 ARGS ((void));
extern void ZiS8_52 ARGS ((void));
extern void ZiS8_53 ARGS ((void));
extern void ZiS8_54 ARGS ((void));
extern void ZiS8_55 ARGS ((void));
extern void ZiS8_56 ARGS ((void));
extern void ZiS8_57 ARGS ((SHORTCARD Z144, SHORTCARD Z145, ZpmCQ_4 *Z208));
extern void ZiS8_58 ARGS ((void));
extern void ZiS8_59 ARGS ((ZfM_3 Z211, ZiS8_5 Z197));
extern void ZiS8_60 ARGS ((ZfM_3 Z211, CARDINAL Z198, CARDINAL Z213));
extern void ZiS8_61 ARGS ((void));
extern void ZiS8_62 ARGS ((void));
extern void BEGIN_LR1 ARGS ((void));
