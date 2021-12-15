# include "ICodeInt.h"
# include <stdio.h>

# ifdef _MSC_VER
# define MaxCode	1000
# define MaxStore	1000
# else
# define MaxCode	30000
# define MaxStore	10000
# endif

# define SL	1
# define DL	2
# define RA	3

typedef unsigned char Qvariant;
typedef unsigned int Ptype;
typedef union { unsigned int qc; float qr; } Qtype;
typedef unsigned int CodeRange;
typedef unsigned int StoreRange;

# define Undef	0
# define Int	1
# define Real	2
# define Bool	3
# define Adr	4
# define Mark	5

typedef unsigned char StoreType;

static struct { OpCode OP; Ptype P; Qtype Q; } Code [MaxCode + 1];

static struct {
        StoreType Stype;
        union {
	     int Vi;
	     float Vr;
	     char Vb;
	     StoreRange Va;
	     CodeRange Vm;
        } Value;
    } Store [MaxStore + 1];

static CodeRange PC = 0, LastPC;
static StoreRange AP = 1, SP = 3;
static char * OpCodeText [CHK + 1] = {
   "LDA", "LDC", "LDI", "STI", "JMP", "FJP", "ADD", "SUB", "MUL", "INV", 
   "LES", "IXA", "FLT", "WRI", "REA", "MST", "JSR", "ENT", "RET", "CHK"
};

void Emit
# ifdef HAVE_ARGS
  (OpCode oc, int Param1, int Param2)
# else
  (oc, Param1, Param2) OpCode oc; int Param1, Param2;
# endif
{
  Code [PC].OP = oc;
  Code [PC].P = Param1;
  Code [PC].Q.qc = Param2;
  LastPC = PC ++;
}

void EmitReal
# ifdef HAVE_ARGS
  (OpCode oc, int Param1, float Param2)
# else
  (oc, Param1, Param2) OpCode oc; int Param1; float Param2;
# endif
{
  Code [PC].OP = oc;
  Code [PC].P = Param1;
  Code [PC].Q.qr = (float) Param2;
  LastPC = PC ++;
}

static void WriteInstr
# ifdef HAVE_ARGS
  (OpCode pCode, Ptype Param1, Qtype Param2)
# else
  (pCode, Param1, Param2) OpCode pCode; Ptype Param1; Qtype Param2;
# endif
{
  (void) printf ("%s", OpCodeText [pCode]);
  switch (pCode) {
  case LDC:
    (void) printf ("%5d", Param1);
    switch (Param1) {
    case IntType:
    case BoolType: (void) printf ("%5d", Param2.qc); break;
    case RealType: (void) printf ("%15.5E", Param2.qr); break;
    }
    break;
  case LDA:
  case JSR:
  case CHK:
    (void) printf ("%5d%5d", Param1, Param2.qc); break;
  case MST:
  case ENT:
  case IXA:
  case LES:
  case JMP:
  case FJP:
  case ADD:
  case MUL:
  case REA:
  case WRI:
    (void) printf ("%5d", Param1); break;
  case LDI:
  case STI:
  case RET:
  case FLT:
  case INV:
  case SUB:
    break;
  }
  (void) printf ("\n");
}

void WriteCode ARGS ((void))
{
  unsigned int pc;

  (void) printf ("\nCode: (Codelength =%4d)\n", LastPC + 1);
  for (pc = 0; pc <= LastPC; pc ++) {
    (void) printf ("%5d:   ", pc);
    WriteInstr (Code [pc].OP, Code [pc].P, Code [pc].Q);
  }
  (void) printf ("\n");
}

/*
static void WriteStore ARGS ((void))
{
  int Sptr;

  (void) printf ("\nStore: (Index, Elementtype, Contents)\n");
  for (Sptr = SP; Sptr >= 0; Sptr --) {
    if (AP == Sptr) (void) printf ("   AP ->%4d", Sptr);
    else	    (void) printf ("%12d", Sptr);

    switch (Store [Sptr].Stype) {
    case Int:
      (void) printf ("        Int %8d", Store [Sptr].Value.Vi);
      break;
    case Real:
      (void) printf ("        Real%18.5E", Store [Sptr].Value.Vr);
      break;
    case Bool:
      (void) printf ("        Bool");
      if (Store [Sptr].Value.Vb) (void) printf ("    TRUE");
      else			 (void) printf ("   FALSE");
      break;
    case Adr:
      (void) printf ("        Adr %8d", Store [Sptr].Value.Va);
      break;
    case Mark:
      (void) printf ("        Mark%8d", Store [Sptr].Value.Vm);
      break;
    default :
      (void) printf ("    Stype not defined");
      break;
    }
    (void) printf ("\n");
  }
  (void) printf ("\n");
}
*/

static void CheckStore
# ifdef HAVE_ARGS
  (unsigned int p)
# else
  (p) unsigned int p;
# endif
{
  if (p > MaxStore) (void) printf ("Store overflow");
}

static StoreRange Base
# ifdef HAVE_ARGS
  (unsigned int ld)
# else
  (ld) unsigned int ld;
# endif
{
  register int Ld = ld;
  register StoreRange Sr = AP;
  while (Ld -- > 0) Sr = Store [Sr].Value.Vm;
  return Sr;
}

void Interpret ARGS ((void))
{
  OpCode OP;
  Ptype P;
  Qtype Q;
  StoreRange sr1, sr2;

  Store [0].Stype = Undef;
  Store [SL].Stype = Adr;
  Store [SL].Value.Va = 0;
  Store [DL].Stype = Adr;
  Store [DL].Value.Va = 0;
  Store [RA].Stype = Mark;
  Store [RA].Value.Vm = 0;

  PC = 0;
  do {
    OP = Code [PC].OP;
    P = Code [PC].P;
    Q = Code [PC].Q;
    PC ++;
    switch (OP) {
    case LDA:
      SP ++;
      Store [SP].Value.Va = Base (P) + Q.qc;
      Store [SP].Stype = Adr;
      break;
    case LDC:
      SP ++;
      switch (P) {
      case IntType:
        Store [SP].Value.Vi = Q.qc;
        Store [SP].Stype = Int;
        break;
      case RealType:
        Store [SP].Value.Vr = Q.qr;
        Store [SP].Stype = Real;
        break;
      case BoolType:
        Store [SP].Value.Vb = Q.qc == TrueCode;
        Store [SP].Stype = Bool;
        break;
      }
      break;
    case LDI:
      Store [SP] = Store [Store [SP].Value.Va];
      break;
    case STI:
      Store [Store [SP - 1].Value.Va] = Store [SP];
      SP = SP - 2;
      break;
    case JMP:
      PC = P;
      break;
    case FJP:
      if (! Store [SP].Value.Vb) PC = P;
      SP --;
      break;
    case ADD:
      SP --;
      switch (P) {
      case IntType:
        Store [SP].Value.Vi = Store [SP].Value.Vi + Store [SP + 1].Value.Vi;
        break;
      case RealType:
        Store [SP].Value.Vr = Store [SP].Value.Vr + Store [SP + 1].Value.Vr;
        break;
      }
      break;
    case SUB:
      SP --;
      Store [SP].Value.Vi = Store [SP].Value.Vi - Store [SP + 1].Value.Vi;
      break;
    case MUL:
      SP --;
      switch (P) {
      case IntType:
        Store [SP].Value.Vi = Store [SP].Value.Vi * Store [SP + 1].Value.Vi;
        break;
      case RealType:
        Store [SP].Value.Vr = Store [SP].Value.Vr * Store [SP + 1].Value.Vr;
        break;
      }
      break;
    case INV:
      Store [SP].Value.Vb = ! Store [SP].Value.Vb;
      break;
    case LES:
      SP --;
      switch (P) {
      case IntType:
        Store [SP].Value.Vb = Store [SP].Value.Vi < Store [SP + 1].Value.Vi;
        break;
      case RealType:
        Store [SP].Value.Vb = Store [SP].Value.Vr < Store [SP + 1].Value.Vr;
        break;
      case BoolType:
        Store [SP].Value.Vb = Store [SP].Value.Vb < Store [SP + 1].Value.Vb;
        break;
      }
      Store [SP].Stype = Bool;
      break;
    case IXA:
      SP --;
      Store [SP].Value.Va = P * Store [SP + 1].Value.Va + Store [SP].Value.Va;
      break;
    case FLT:
      Store [SP].Value.Vr = Store [SP].Value.Vi;
      Store [SP].Stype = Real;
      break;
    case WRI:
      switch (P) {
      case IntType:
        (void) printf ("%5d\n", Store [SP].Value.Vi); break;
      case RealType:
        (void) printf ("%15.5E\n", Store [SP].Value.Vr); break;
      case BoolType:
        if (Store [SP].Value.Vb) (void) printf ("    1\n");
        else		         (void) printf ("    0\n");
        break;
      }
      SP --;
      break;
    case REA:
      SP ++;
      switch (P) {
      case IntType:
	(void) scanf ("%d", & Store [SP].Value.Vi);
        Store [SP].Stype = Int;
        break;
      case RealType:
	(void) scanf ("%e", & Store [SP].Value.Vr);
        Store [SP].Stype = Real;
        break;
      case BoolType:
	(void) scanf ("%d", & Store [SP].Value.Vi);
        Store [SP].Value.Vb = Store [SP].Value.Vi == 1;
        Store [SP].Stype = Bool;
        break;
      }
      break;
    case MST:
      Store [SP + SL].Stype = Adr;
      Store [SP + SL].Value.Va = Base (P);
      Store [SP + DL].Stype = Adr;
      Store [SP + DL].Value.Va = AP;
      Store [SP + RA].Stype = Mark;
      SP = SP + 3;
      break;
    case JSR:
      AP = SP - (P + 2);
      Store [AP + 2].Value.Vm = PC;
      PC = Q.qc;
      break;
    case ENT:
      sr2 = SP + P;
      for (sr1 = SP + 1; sr1 <= sr2; sr1 += 1) Store [sr1].Stype = Undef;
      CheckStore (sr2);
      SP = sr2;
      break;
    case RET:
      SP = AP - 1;
      PC = Store [SP + RA].Value.Vm;
      AP = Store [SP + DL].Value.Va;
      break;
    case CHK:
      if ((unsigned) Store [SP].Value.Vi < P || (unsigned) Store [SP].Value.Vi > Q.qc)
        (void) printf ("range check error\n");
      break;
    default :
      (void) printf ("wrong OpCode :%3d\n", OP);
      break;
    }
  } while (PC != 0);
}
