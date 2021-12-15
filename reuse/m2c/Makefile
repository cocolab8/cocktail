OPT	= -O
SYS	= UNIX
CFLAGS	= $(OPT) -I. -I.. -I../.. -D$(SYS) $(WIBU_FLAGS)
LDFLAGS	= $(WIBU_LIB) -s
CC	= cc
RANLIB	= ranlib
M2FLAGS	= -cu -o../m2c

OBJS	= Checks.o DynArray.o General.o Heap.o IO.o Idents.o Layout.o \
	  Lists.o rMemory.o Pack.o Relation.o RelatsC.o Sets.o SetsC.o \
	  StdIO.o StringM.o Strings.o rSystem.o Texts.o Times.o Argument.o \
	  SYSTEM_.o Position.o Errors.o Source.o Sort.o WStrings.o HugeSets.o \
	  TclTk.o TclTkStb.o $(WIBU_OBJ)

SYSTEM	= SYSTEM_.o $(WIBU_OBJ)

libreuse.a	: $(OBJS)
	ar ruc libreuse.a $(OBJS)
	$(RANLIB) libreuse.a

rSystem.o	: rSystem.h rSystem.c
	mv StdIO.h StdIO.i
	$(CC) $(CFLAGS) -c rSystem.c
	mv StdIO.i StdIO.h

SYSTEM_.o	:
	mv StdIO.h StdIO.i
	$(CC) $(CFLAGS) -c SYSTEM_.c
	mv StdIO.i StdIO.h

lint	:
	lint -u *.c

test	: all

# HEAD

# sources	: Argument.h
# sources	: Argument.c
sources	: Checks.h
sources	: Checks.c
sources	: DynArrDr.c
all	: DynArrDr
sources	: DynArray.h
sources	: DynArray.c
sources	: Errors.h
sources	: Errors.c
sources	: ErrorsDr.c
all	: ErrorsDr
sources	: General.h
sources	: General.c
sources	: Heap.h
sources	: Heap.c
sources	: HugeSets.h
sources	: HugeSets.c
sources	: IO.h
sources	: IO.c
sources	: IODrv.c
all	: IODrv
sources	: Idents.h
sources	: Idents.c
sources	: Layout.h
sources	: Layout.c
sources	: Lists.h
sources	: Lists.c
sources	: Main.c
all	: Main
sources	: Pack.h
sources	: Pack.c
sources	: Position.h
sources	: Position.c
sources	: RelDrv.c
all	: RelDrv
sources	: Relation.h
sources	: Relation.c
sources	: RelatsC.h
sources	: RelatsC.c
sources	: Sets.h
sources	: Sets.c
sources	: SetsC.h
sources	: SetsC.c
sources	: SetsDrv.c
all	: SetsDrv
sources	: Sort.h
sources	: Sort.c
sources	: Source.h
sources	: Source.c
sources	: StdIO.h
sources	: StdIO.c
sources	: StringM.h
sources	: StringM.c
sources	: Strings.h
sources	: Strings.c
sources	: SysIODrv.c
all	: SysIODrv
sources	: TclTk.h
sources	: Texts.h
sources	: Texts.c
sources	: Times.h
sources	: Times.c
sources	: WStrings.h
sources	: WStrings.c
sources	: rMemory.h
sources	: rMemory.c
sources	: rMemoryD.c
all	: rMemoryD
sources	: rSystem.h

Argument.o	: Argument.c	\
	Argument.h

Checks.o	: Checks.c	\
	Checks.h	\
	rSystem.h	\
	IO.h	\
	rMemory.h	\
	General.h	\
	Argument.h

DynArrDr.o	: DynArrDr.c	\
	IO.h	\
	General.h	\
	Argument.h	\
	rSystem.h	\
	DynArray.h	\
	rMemory.h

DynArray.o	: DynArray.c	\
	DynArray.h	\
	IO.h	\
	rSystem.h	\
	rMemory.h	\
	General.h	\
	Argument.h

Errors.o	: Errors.c	\
	Errors.h	\
	rSystem.h	\
	Sort.h	\
	Sets.h	\
	DynArray.h	\
	General.h	\
	Argument.h	\
	Idents.h	\
	WStrings.h	\
	Strings.h	\
	StringM.h	\
	Layout.h	\
	rMemory.h	\
	IO.h	\
	Position.h

ErrorsDr.o	: ErrorsDr.c	\
	Errors.h	\
	rSystem.h	\
	Sort.h	\
	StringM.h	\
	DynArray.h	\
	General.h	\
	Argument.h	\
	Layout.h	\
	rMemory.h	\
	Position.h	\
	Idents.h	\
	WStrings.h	\
	Strings.h	\
	Sets.h	\
	IO.h

General.o	: General.c	\
	General.h	\
	rSystem.h	\
	Argument.h

Heap.o	: Heap.c	\
	Heap.h	\
	rMemory.h	\
	IO.h	\
	rSystem.h	\
	General.h	\
	Argument.h

HugeSets.o	: HugeSets.c	\
	HugeSets.h	\
	DynArray.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	Sets.h	\
	IO.h

IO.o	: IO.c	\
	IO.h	\
	rMemory.h	\
	General.h	\
	Argument.h	\
	rSystem.h

IODrv.o	: IODrv.c	\
	IO.h	\
	rMemory.h	\
	General.h	\
	Argument.h	\
	rSystem.h

Idents.o	: Idents.c	\
	Idents.h	\
	DynArray.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	StringM.h	\
	WStrings.h	\
	Strings.h	\
	IO.h

Layout.o	: Layout.c	\
	Layout.h	\
	IO.h	\
	rMemory.h	\
	General.h	\
	Argument.h	\
	rSystem.h

Lists.o	: Lists.c	\
	Lists.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	IO.h

Main.o	: Main.c	\
	TclTk.h	\
	Times.h	\
	Checks.h	\
	rSystem.h	\
	Pack.h	\
	Source.h	\
	Sort.h	\
	Errors.h	\
	Position.h	\
	Layout.h	\
	StdIO.h	\
	IO.h	\
	RelatsC.h	\
	Relation.h	\
	HugeSets.h	\
	SetsC.h	\
	Sets.h	\
	Idents.h	\
	StringM.h	\
	Texts.h	\
	WStrings.h	\
	Strings.h	\
	Lists.h	\
	DynArray.h	\
	Heap.h	\
	rMemory.h	\
	General.h	\
	Argument.h

Pack.o	: Pack.c	\
	Pack.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	IO.h

Position.o	: Position.c	\
	Position.h	\
	Layout.h	\
	IO.h	\
	rMemory.h	\
	General.h	\
	Argument.h	\
	rSystem.h

RelDrv.o	: RelDrv.c	\
	Relation.h	\
	DynArray.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	Sets.h	\
	IO.h

Relation.o	: Relation.c	\
	Relation.h	\
	DynArray.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	Sets.h	\
	IO.h

RelatsC.o	: RelatsC.c	\
	RelatsC.h	\
	DynArray.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	Relation.h	\
	Sets.h	\
	SetsC.h	\
	IO.h

Sets.o	: Sets.c	\
	Sets.h	\
	DynArray.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	IO.h

SetsC.o	: SetsC.c	\
	SetsC.h	\
	Sets.h	\
	DynArray.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	IO.h

SetsDrv.o	: SetsDrv.c	\
	IO.h	\
	rMemory.h	\
	General.h	\
	Argument.h	\
	rSystem.h	\
	Sets.h	\
	DynArray.h

Sort.o	: Sort.c	\
	Sort.h

Source.o	: Source.c	\
	Source.h	\
	rSystem.h

StdIO.o	: StdIO.c	\
	StdIO.h	\
	IO.h	\
	rMemory.h	\
	General.h	\
	Argument.h	\
	rSystem.h

StringM.o	: StringM.c	\
	StringM.h	\
	DynArray.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	WStrings.h	\
	Strings.h	\
	IO.h

Strings.o	: Strings.c	\
	Strings.h	\
	General.h	\
	rSystem.h	\
	Argument.h	\
	IO.h	\
	rMemory.h

SysIODrv.o	: SysIODrv.c	\
	Checks.h	\
	IO.h	\
	rMemory.h	\
	General.h	\
	Argument.h	\
	rSystem.h

Texts.o	: Texts.c	\
	Texts.h	\
	StringM.h	\
	DynArray.h	\
	rMemory.h	\
	rSystem.h	\
	General.h	\
	Argument.h	\
	WStrings.h	\
	Strings.h	\
	Lists.h	\
	IO.h

Times.o	: Times.c	\
	Times.h	\
	IO.h	\
	rMemory.h	\
	General.h	\
	Argument.h	\
	rSystem.h

WStrings.o	: WStrings.c	\
	WStrings.h	\
	General.h	\
	rSystem.h	\
	Argument.h	\
	IO.h	\
	rMemory.h

rMemory.o	: rMemory.c	\
	rMemory.h	\
	IO.h	\
	rSystem.h	\
	General.h	\
	Argument.h

rMemoryD.o	: rMemoryD.c	\
	IO.h	\
	General.h	\
	Argument.h	\
	rSystem.h	\
	rMemory.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

DynArrDr_OBJS =	\
	DynArrDr.o	\
	IO.o	\
	General.o	\
	Argument.o	\
	rSystem.o	\
	DynArray.o	\
	rMemory.o

DynArrDr	: $(DynArrDr_OBJS) $(SYSTEM)
	$(CC) -o DynArrDr $(DynArrDr_OBJS) $(SYSTEM) $(LDFLAGS)

ErrorsDr_OBJS =	\
	ErrorsDr.o	\
	Errors.o	\
	rSystem.o	\
	Sort.o	\
	StringM.o	\
	DynArray.o	\
	General.o	\
	Argument.o	\
	Layout.o	\
	rMemory.o	\
	Position.o	\
	Idents.o	\
	WStrings.o	\
	Strings.o	\
	Sets.o	\
	IO.o

ErrorsDr	: $(ErrorsDr_OBJS) $(SYSTEM)
	$(CC) -o ErrorsDr $(ErrorsDr_OBJS) $(SYSTEM) $(LDFLAGS)

IODrv_OBJS =	\
	IODrv.o	\
	IO.o	\
	rMemory.o	\
	General.o	\
	Argument.o	\
	rSystem.o

IODrv	: $(IODrv_OBJS) $(SYSTEM)
	$(CC) -o IODrv $(IODrv_OBJS) $(SYSTEM) $(LDFLAGS)

Main_OBJS =	\
	Main.o	\
	TclTk.o	\
	Times.o	\
	Checks.o	\
	rSystem.o	\
	Pack.o	\
	Source.o	\
	Sort.o	\
	Errors.o	\
	Position.o	\
	Layout.o	\
	StdIO.o	\
	IO.o	\
	RelatsC.o	\
	Relation.o	\
	HugeSets.o	\
	SetsC.o	\
	Sets.o	\
	Idents.o	\
	StringM.o	\
	Texts.o	\
	WStrings.o	\
	Strings.o	\
	Lists.o	\
	DynArray.o	\
	Heap.o	\
	rMemory.o	\
	General.o	\
	Argument.o

Main	: $(Main_OBJS) $(SYSTEM)
	$(CC) -o Main $(Main_OBJS) $(SYSTEM) $(LDFLAGS)

RelDrv_OBJS =	\
	RelDrv.o	\
	Relation.o	\
	DynArray.o	\
	rMemory.o	\
	rSystem.o	\
	General.o	\
	Argument.o	\
	Sets.o	\
	IO.o

RelDrv	: $(RelDrv_OBJS) $(SYSTEM)
	$(CC) -o RelDrv $(RelDrv_OBJS) $(SYSTEM) $(LDFLAGS)

SetsDrv_OBJS =	\
	SetsDrv.o	\
	IO.o	\
	rMemory.o	\
	General.o	\
	Argument.o	\
	rSystem.o	\
	Sets.o	\
	DynArray.o

SetsDrv	: $(SetsDrv_OBJS) $(SYSTEM)
	$(CC) -o SetsDrv $(SetsDrv_OBJS) $(SYSTEM) $(LDFLAGS)

SysIODrv_OBJS =	\
	SysIODrv.o	\
	Checks.o	\
	IO.o	\
	rMemory.o	\
	General.o	\
	Argument.o	\
	rSystem.o

SysIODrv	: $(SysIODrv_OBJS) $(SYSTEM)
	$(CC) -o SysIODrv $(SysIODrv_OBJS) $(SYSTEM) $(LDFLAGS)

rMemoryD_OBJS =	\
	rMemoryD.o	\
	IO.o	\
	General.o	\
	Argument.o	\
	rSystem.o	\
	rMemory.o

rMemoryD	: $(rMemoryD_OBJS) $(SYSTEM)
	$(CC) -o rMemoryD $(rMemoryD_OBJS) $(SYSTEM) $(LDFLAGS)

# TAIL

clean	:
	rm -f core *.o
	rm -f Main.o DynArrDr IODrv Main rMemoryD RelDrv SetsDrv SysIODrv ErrorsDr

CLEAN	: clean
	rm -f libreuse.a

.SUFFIXES: .md .mi .h .c .o

.mi.c:
	mtc2 $(M2FLAGS) $*.mi

.md.h:
	mtc2 $(M2FLAGS) $*.md

.c.o:
	$(CC) $(CFLAGS) -c $*.c
