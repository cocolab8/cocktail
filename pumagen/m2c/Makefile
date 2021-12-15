BIN	= $(HOME)/bin
LIB	= $(HOME)/lib
OPT	= -O
CC	= cc
RANLIB	= ranlib
INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= $(INSTALL)
INSTALL_DATA	= $(INSTALL) -m 644

                # C library (reuse)
REUSE	= ../../reuse/m2c

                # options for C compiler
CFLAGS	= -w -I$(REUSE) $(OPT)

                # options for linker
LDFLAGS	= -s $(REUSE)/libreuse.a

M2FLAGS	= -c -d../../reuse/src


all	: pumagen $(REUSE)/libreuse.a ../../puma/m2c/libpumal.a

install	:	all $(LIB)/pumagen
	sh -c "if test $(LIB) = $(BIN); then echo error: BIN = LIB; false; else true; fi"
	$(INSTALL_PROGRAM) pumagen $(BIN)
	cd ../../reuse/m2c; cp *.h libreuse.a $(LIB)/pumagen
	$(RANLIB) $(LIB)/pumagen/libreuse.a
	cd ../../puma/m2c; cp *.h libpumal.a TypeTab.* $(LIB)/pumagen
	$(RANLIB) $(LIB)/pumagen/libpumal.a
	chmod a+r $(LIB)/pumagen/*

$(REUSE)/libreuse.a:
	cd ../../reuse/m2c; make libreuse.a

../../puma/m2c/libpumal.a:
	cd ../../puma/m2c; make libpumal.a OPT=

# installation directories

$(LIB)/pumagen:	$(LIB)
	sh -c "if test ! -d $(LIB)/pumagen; then mkdir -p $(LIB)/pumagen; else true; fi"

lint	:
	lint -I$(REUSE) -u *.c

# SYSTEM_	= SYSTEM_.o

pumagen.c:
	cd ../../cg/m2c; ln pumagen.[hc] Puma0.[hc] \
	Dialog.[hc] Order.[hc] Optimize.[hc] Queue.[hc] Semantic.[hc] \
	Position.[hc] Tree.[hc] Parser.[hc] Scanner.[hc] Errors.[hc] ../../pumagen/m2c

# HEAD

sources	: Dialog.h
sources	: Dialog.c
sources	: Errors.h
sources	: Errors.c
sources	: EvalC.h
sources	: EvalC.c
sources	: EvalC2.h
sources	: EvalC2.c
sources	: EvalC3.h
sources	: EvalC3.c
sources	: EvalC4.h
sources	: EvalC4.c
sources	: EvalMod.h
sources	: EvalMod.c
sources	: EvalMod2.h
sources	: EvalMod2.c
sources	: EvalMod3.h
sources	: EvalMod3.c
sources	: EvalMod4.h
sources	: EvalMod4.c
sources	: GramAda.h
sources	: GramAda.c
sources	: GramC.h
sources	: GramC.c
sources	: GramMod.h
sources	: GramMod.c
sources	: GramYacc.h
sources	: GramYacc.c
sources	: Optimize.h
sources	: Optimize.c
sources	: Order.h
sources	: Order.c
sources	: Parser.h
sources	: Parser.c
sources	: Position.h
sources	: Position.c
sources	: Puma0.h
sources	: Puma0.c
sources	: Queue.h
sources	: Queue.c
sources	: Scanner.h
sources	: Scanner.c
sources	: Semantic.h
sources	: Semantic.c
sources	: Tree.h
sources	: Tree.c
sources	: Tree2.h
sources	: Tree2.c
sources	: TreeC1.h
sources	: TreeC1.c
sources	: TreeC2.h
sources	: TreeC2.c
sources	: TreeMod1.h
sources	: TreeMod1.c
sources	: TreeMod2.h
sources	: TreeMod2.c
sources	: cg.c
sources	: lpp.c
sources	: pumagen.c

Dialog.o	: Dialog.c	\
	Dialog.h	\
	Order.h	\
	Errors.h	\
	Position.h	\
	Optimize.h	\
	Queue.h	\
	Tree.h

Errors.o	: Errors.c	\
	Errors.h	\
	Position.h

EvalC.o	: EvalC.c	\
	EvalC.h	\
	EvalC3.h	\
	Position.h	\
	Errors.h	\
	TreeC2.h	\
	TreeC1.h	\
	Semantic.h	\
	Tree.h

EvalC2.o	: EvalC2.c	\
	EvalC2.h	\
	EvalC.h	\
	EvalC3.h	\
	Position.h	\
	Errors.h	\
	TreeC1.h	\
	Semantic.h	\
	TreeC2.h	\
	Tree.h

EvalC3.o	: EvalC3.c	\
	EvalC3.h	\
	Position.h	\
	Errors.h	\
	EvalC.h	\
	Semantic.h	\
	TreeC2.h	\
	TreeC1.h	\
	Tree.h

EvalC4.o	: EvalC4.c	\
	EvalC4.h	\
	EvalC3.h	\
	Position.h	\
	Errors.h	\
	EvalC.h	\
	Semantic.h	\
	TreeC2.h	\
	TreeC1.h	\
	Tree.h

EvalMod.o	: EvalMod.c	\
	EvalMod.h	\
	EvalMod3.h	\
	Position.h	\
	Errors.h	\
	TreeMod2.h	\
	TreeMod1.h	\
	Semantic.h	\
	Tree.h

EvalMod2.o	: EvalMod2.c	\
	EvalMod2.h	\
	EvalMod.h	\
	EvalMod3.h	\
	Position.h	\
	Errors.h	\
	TreeMod1.h	\
	Semantic.h	\
	TreeMod2.h	\
	Tree.h

EvalMod3.o	: EvalMod3.c	\
	EvalMod3.h	\
	Position.h	\
	Errors.h	\
	EvalMod.h	\
	Semantic.h	\
	TreeMod2.h	\
	TreeMod1.h	\
	Tree.h

EvalMod4.o	: EvalMod4.c	\
	EvalMod4.h	\
	EvalMod3.h	\
	Position.h	\
	Errors.h	\
	EvalMod.h	\
	Semantic.h	\
	TreeMod2.h	\
	TreeMod1.h	\
	Tree.h

GramAda.o	: GramAda.c	\
	GramAda.h	\
	Tree.h	\
	Errors.h	\
	Position.h

GramC.o	: GramC.c	\
	GramC.h	\
	Tree.h	\
	Errors.h	\
	Position.h

GramMod.o	: GramMod.c	\
	GramMod.h	\
	Tree.h	\
	Errors.h	\
	Position.h

GramYacc.o	: GramYacc.c	\
	GramYacc.h	\
	Tree.h	\
	Errors.h	\
	Position.h

Optimize.o	: Optimize.c	\
	Optimize.h	\
	Order.h	\
	Errors.h	\
	Position.h	\
	Queue.h	\
	Tree.h

Order.o	: Order.c	\
	Order.h	\
	Errors.h	\
	Position.h	\
	Optimize.h	\
	Queue.h	\
	Tree.h

Parser.o	: Parser.c	\
	Parser.h	\
	Tree.h	\
	Position.h	\
	Errors.h	\
	Scanner.h

Position.o	: Position.c	\
	Position.h

Puma0.o	: Puma0.c	\
	Puma0.h	\
	Tree.h	\
	Errors.h	\
	Position.h

Queue.o	: Queue.c	\
	Queue.h

Scanner.o	: Scanner.c	\
	Scanner.h	\
	Errors.h	\
	Tree.h	\
	Position.h

Semantic.o	: Semantic.c	\
	Semantic.h	\
	Errors.h	\
	Position.h	\
	Tree.h

Tree.o	: Tree.c	\
	Tree.h	\
	Errors.h	\
	Position.h

Tree2.o	: Tree2.c	\
	Tree2.h	\
	Position.h	\
	Tree.h	\
	Errors.h

TreeC1.o	: TreeC1.c	\
	TreeC1.h	\
	TreeC2.h	\
	Position.h	\
	Semantic.h	\
	Errors.h	\
	Tree.h

TreeC2.o	: TreeC2.c	\
	TreeC2.h	\
	Position.h	\
	Tree.h	\
	Errors.h

TreeMod1.o	: TreeMod1.c	\
	TreeMod1.h	\
	TreeMod2.h	\
	Position.h	\
	Semantic.h	\
	Errors.h	\
	Tree.h

TreeMod2.o	: TreeMod2.c	\
	TreeMod2.h	\
	Position.h	\
	Tree.h	\
	Errors.h

cg.o	: cg.c	\
	GramAda.h	\
	EvalC4.h	\
	TreeC2.h	\
	Position.h	\
	EvalC3.h	\
	EvalC2.h	\
	EvalC.h	\
	TreeC1.h	\
	GramYacc.h	\
	GramC.h	\
	EvalMod4.h	\
	TreeMod2.h	\
	EvalMod3.h	\
	EvalMod2.h	\
	EvalMod.h	\
	TreeMod1.h	\
	GramMod.h	\
	Dialog.h	\
	Order.h	\
	Optimize.h	\
	Queue.h	\
	Semantic.h	\
	Tree2.h	\
	Tree.h	\
	Parser.h	\
	Scanner.h	\
	Errors.h

lpp.o	: lpp.c	\
	GramAda.h	\
	GramYacc.h	\
	GramC.h	\
	GramMod.h	\
	Dialog.h	\
	Order.h	\
	Optimize.h	\
	Queue.h	\
	Semantic.h	\
	Position.h	\
	Tree.h	\
	Parser.h	\
	Scanner.h	\
	Errors.h

pumagen.o	: pumagen.c	\
	Puma0.h	\
	Dialog.h	\
	Order.h	\
	Optimize.h	\
	Queue.h	\
	Semantic.h	\
	Position.h	\
	Tree.h	\
	Parser.h	\
	Scanner.h	\
	Errors.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

pumagen	: $(SYSTEM)	\
	pumagen.o	\
	Puma0.o	\
	Dialog.o	\
	Order.o	\
	Optimize.o	\
	Queue.o	\
	Semantic.o	\
	Position.o	\
	Tree.o	\
	Parser.o	\
	Scanner.o	\
	Errors.o	\
;	$(CC) $(CFLAGS) -o pumagen $(SYSTEM)	\
	pumagen.o	\
	Puma0.o	\
	Dialog.o	\
	Order.o	\
	Optimize.o	\
	Queue.o	\
	Semantic.o	\
	Position.o	\
	Tree.o	\
	Parser.o	\
	Scanner.o	\
	Errors.o	\
	$(LDFLAGS)

# TAIL

clean	:
	rm -f core* *.o

.SUFFIXES: .md .mi .h .c .o

.mi.c:
	mtc2 $(M2FLAGS) $*.mi

.md.h:
	mtc2 $(M2FLAGS) $*.md

.c.o:
	$(CC) $(CFLAGS) -c $*.c
