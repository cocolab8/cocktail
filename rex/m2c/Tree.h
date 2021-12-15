#define DEFINITION_Tree

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#define Zq0A4_0	NIL
#define Zq0A4_1	1
#define Zq0A4_2	2
#define Zq0A4_3	3
#define Zq0A4_4	4
#define Zq0A4_5	5
#define Zq0A4_6	6
#define Zq0A4_7	7
#define Zq0A4_8	8
#define Zq0A4_9	9
#define Zq0A4_10	10
typedef struct Tree_9 *Zq0A4_11;
typedef struct Tree_1 {
SHORTCARD Y0;
} Zq0A4_12;
typedef struct Tree_2 {
SHORTCARD Y0;
Zq0A4_11 Y1;
} Zq0A4_13;
typedef struct Tree_3 {
SHORTCARD Y0;
Zq0A4_11 Y1;
Zq0A4_11 Y2;
} Zq0A4_14;
typedef struct Tree_4 {
SHORTCARD Y0;
Ztf1PEAFD_1 Y1;
} Zq0A4_15;
typedef struct Tree_5 {
SHORTCARD Y0;
ZpmCQ_4 Y1;
} Zq0A4_16;
typedef struct Tree_6 {
SHORTCARD Y0;
Zp1PEAFi_7 Y1;
} Zq0A4_17;
typedef struct Tree_7 {
SHORTCARD Y0;
Zq0A4_11 Y1;
ZqnGVQ_0 Y2;
Zfb3DLQ_0 Y3;
CARDINAL Y4;
SHORTCARD Y5;
SHORTCARD Y6;
} Zq0A4_18;
typedef struct Tree_8 {
SHORTCARD Y0;
ZpmCQ_4 Y1;
Zq0A4_11 Y2;
Zq0A4_11 Y3;
BOOLEAN Y4;
SHORTCARD Y5;
ZmtLFGGBG_0 Y6;
} Zq0A4_19;
typedef struct Tree_9 {
union {
struct {
Zq0A4_12 Y0;
} V_1;
struct {
Zq0A4_13 Y1;
} V_2;
struct {
Zq0A4_14 Y2;
} V_3;
struct {
Zq0A4_15 Y3;
} V_4;
struct {
Zq0A4_16 Y4;
} V_5;
struct {
Zq0A4_17 Y5;
} V_6;
struct {
Zq0A4_18 Y6;
} V_7;
struct {
Zq0A4_19 Y7;
} V_8;
} U_1;
} Zq0A4_20;
extern Zq0A4_11 Zq0A4_21 ARGS ((SHORTCARD Z174, Zq0A4_11 Z175));
extern Zq0A4_11 Zq0A4_22 ARGS ((SHORTCARD Z174, Zq0A4_11 Z175, Zq0A4_11 Z177));
extern Zq0A4_11 Zq0A4_23 ARGS ((SHORTCARD Z174, Ztf1PEAFD_1 Z179));
extern Zq0A4_11 Zq0A4_24 ARGS ((SHORTCARD Z174, ZpmCQ_4 Z181));
extern Zq0A4_11 Zq0A4_25 ARGS ((SHORTCARD Z174, Zp1PEAFi_7 Z183));
extern Zq0A4_11 Zq0A4_26 ARGS ((SHORTCARD Z174, Zq0A4_11 Z185, ZqnGVQ_0 Z186, Zfb3DLQ_0 Z187, CARDINAL Z188, SHORTCARD Z189, SHORTCARD Z190));
extern Zq0A4_11 Zq0A4_27 ARGS ((SHORTCARD Z174, ZpmCQ_4 Z192, Zq0A4_11 Z193, Zq0A4_11 Z194, BOOLEAN Z195, SHORTCARD Z196, ZmtLFGGBG_0 Z197));
extern void Zq0A4_28 ARGS ((Zq0A4_11 Z199));
extern struct Tree_10 {
CHAR A[256];
} Zq0A4_29;
extern void BEGIN_Tree ARGS ((void));
