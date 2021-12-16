BIN	= $(HOME)/bin
LIB	= $(HOME)/lib
OPT	= -O
CC	= cc
INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= $(INSTALL)
INSTALL_DATA	= $(INSTALL) -m 644

                # C library (reuse)
REUSE	= ../../reuse/m2c

                # options for C compiler
CFLAGS	= -w -I$(REUSE) $(OPT)

                # options for linker
LDFLAGS	= -s $(REUSE)/libreuse.a $(WIBU_LIB)

M2FLAGS	= -c -d../../reuse/src


all	: cg

install	:	cg cg.sh lpp $(LIB)/cg
	sh -c "if test $(LIB) = $(BIN); then echo error: BIN = LIB; false; else true; fi"
	sed "s;LIB;$(LIB);g" < cg.sh > $(BIN)/cg
	sed "s;BIN;$(BIN);g" < gcppt > $(BIN)/gcppt
	cp $(BIN)/cg $(BIN)/ag
	cp $(BIN)/cg $(BIN)/ast
	chmod a+rx $(BIN)/cg $(BIN)/ast $(BIN)/ag $(BIN)/gcppt
	$(INSTALL_PROGRAM) gcpp $(BIN)
	$(INSTALL_PROGRAM) gupd $(BIN)
	$(INSTALL_PROGRAM) grm $(BIN)
	$(INSTALL_PROGRAM) cg $(LIB)/cg
	$(INSTALL_DATA) TypeTab.c $(LIB)/cg
	$(INSTALL_DATA) TypeTab.cx $(LIB)/cg
	$(INSTALL_DATA) TypeTab.cxx $(LIB)/cg
	$(INSTALL_DATA) TypeTab.m $(LIB)/cg
	$(INSTALL_DATA) TypeTab.j $(LIB)/cg
	$(INSTALL_DATA) Tree.tcl $(LIB)/cg
	$(INSTALL_PROGRAM) lpp $(BIN)

image	:	cg cg.sh lpp $(LIB)/cg
	$(INSTALL_PROGRAM) cg.sh $(BIN)
	cp $(BIN)/cg.sh $(BIN)/ag.sh
	cp $(BIN)/cg.sh $(BIN)/ast.sh
	chmod a+rx $(BIN)/cg.sh $(BIN)/ast.sh $(BIN)/ag.sh
	$(INSTALL_PROGRAM) gcpp $(BIN)
	$(INSTALL_PROGRAM) gcppt $(BIN)
	$(INSTALL_PROGRAM) gupd $(BIN)
	$(INSTALL_PROGRAM) grm $(BIN)
	$(INSTALL_PROGRAM) cg $(LIB)/cg
	$(INSTALL_DATA) TypeTab.c $(LIB)/cg
	$(INSTALL_DATA) TypeTab.cx $(LIB)/cg
	$(INSTALL_DATA) TypeTab.cxx $(LIB)/cg
	$(INSTALL_DATA) TypeTab.m $(LIB)/cg
	$(INSTALL_DATA) TypeTab.j $(LIB)/cg
	$(INSTALL_DATA) Tree.tcl $(LIB)/cg
	$(INSTALL_PROGRAM) lpp $(BIN)

# installation directories

$(LIB)/cg:
	mkdir -p $(LIB)/cg

lint	:
	lint -I$(REUSE) -u *.c

# SYSTEM_	= SYSTEM_.o

sources	: pumagen.c

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
sources	: EvalCxx.h
sources	: EvalCxx.c
sources	: EvalCxx2.h
sources	: EvalCxx2.c
sources	: EvalCxx3.h
sources	: EvalCxx3.c
sources	: EvalCxx4.h
sources	: EvalCxx4.c
sources	: EvalJav2.h
sources	: EvalJav2.c
sources	: EvalJav3.h
sources	: EvalJav3.c
sources	: EvalJav4.h
sources	: EvalJav4.c
sources	: EvalJava.h
sources	: EvalJava.c
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
sources	: GramJava.h
sources	: GramJava.c
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
sources	: TreeCxx1.h
sources	: TreeCxx1.c
sources	: TreeCxx2.h
sources	: TreeCxx2.c
sources	: TreeJav1.h
sources	: TreeJav1.c
sources	: TreeJav2.h
sources	: TreeJav2.c
sources	: TreeMod1.h
sources	: TreeMod1.c
sources	: TreeMod2.h
sources	: TreeMod2.c
sources	: cg.c
all	: cg
sources	: lpp.c
all	: lpp
sources	: pumagen.c
all	: pumagen

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

EvalCxx.o	: EvalCxx.c	\
	EvalCxx.h	\
	EvalCxx3.h	\
	Position.h	\
	Errors.h	\
	TreeCxx2.h	\
	TreeCxx1.h	\
	Semantic.h	\
	Tree.h

EvalCxx2.o	: EvalCxx2.c	\
	EvalCxx2.h	\
	EvalCxx.h	\
	EvalCxx3.h	\
	Position.h	\
	Errors.h	\
	TreeCxx1.h	\
	Semantic.h	\
	TreeCxx2.h	\
	Tree.h

EvalCxx3.o	: EvalCxx3.c	\
	EvalCxx3.h	\
	Position.h	\
	Errors.h	\
	EvalCxx.h	\
	Semantic.h	\
	TreeCxx2.h	\
	TreeCxx1.h	\
	Tree.h

EvalCxx4.o	: EvalCxx4.c	\
	EvalCxx4.h	\
	EvalCxx3.h	\
	Position.h	\
	Errors.h	\
	EvalCxx.h	\
	Semantic.h	\
	TreeCxx2.h	\
	TreeCxx1.h	\
	Tree.h

EvalJav2.o	: EvalJav2.c	\
	EvalJav2.h	\
	EvalJava.h	\
	TreeJav1.h	\
	Semantic.h	\
	Errors.h	\
	Position.h	\
	TreeJav2.h	\
	Tree.h

EvalJav3.o	: EvalJav3.c	\
	EvalJav3.h	\
	Position.h	\
	Errors.h	\
	EvalJava.h	\
	Semantic.h	\
	TreeJav2.h	\
	TreeJav1.h	\
	Tree.h

EvalJav4.o	: EvalJav4.c	\
	EvalJav4.h	\
	EvalJav3.h	\
	Position.h	\
	Errors.h	\
	EvalJava.h	\
	Semantic.h	\
	TreeJav2.h	\
	TreeJav1.h	\
	Tree.h

EvalJava.o	: EvalJava.c	\
	EvalJava.h	\
	TreeJav2.h	\
	Position.h	\
	TreeJav1.h	\
	Semantic.h	\
	Errors.h	\
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
	Parser.h	\
	Errors.h	\
	Scanner.h	\
	Position.h	\
	Tree.h

GramC.o	: GramC.c	\
	GramC.h	\
	Parser.h	\
	Errors.h	\
	Scanner.h	\
	Position.h	\
	Tree.h

GramJava.o	: GramJava.c	\
	GramJava.h	\
	Parser.h	\
	Errors.h	\
	Scanner.h	\
	Position.h	\
	Tree.h

GramMod.o	: GramMod.c	\
	GramMod.h	\
	Parser.h	\
	Errors.h	\
	Scanner.h	\
	Position.h	\
	Tree.h

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
	Position.h	\
	Errors.h	\
	Scanner.h	\
	Tree.h

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
	Errors.h	\
	Position.h	\
	Tree.h

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

TreeCxx1.o	: TreeCxx1.c	\
	TreeCxx1.h	\
	TreeCxx2.h	\
	Position.h	\
	Semantic.h	\
	Errors.h	\
	Tree.h

TreeCxx2.o	: TreeCxx2.c	\
	TreeCxx2.h	\
	TreeCxx1.h	\
	Semantic.h	\
	Errors.h	\
	Position.h	\
	Tree.h

TreeJav1.o	: TreeJav1.c	\
	TreeJav1.h	\
	TreeJav2.h	\
	Position.h	\
	Semantic.h	\
	Errors.h	\
	Tree.h

TreeJav2.o	: TreeJav2.c	\
	TreeJav2.h	\
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
	EvalCxx4.h	\
	EvalCxx3.h	\
	EvalCxx2.h	\
	EvalCxx.h	\
	TreeCxx2.h	\
	TreeCxx1.h	\
	EvalJav4.h	\
	EvalJav3.h	\
	EvalJav2.h	\
	EvalJava.h	\
	TreeJav2.h	\
	TreeJav1.h	\
	GramJava.h	\
	GramAda.h	\
	EvalC4.h	\
	EvalC3.h	\
	EvalC2.h	\
	EvalC.h	\
	TreeC2.h	\
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
	Errors.h	\
	Position.h

lpp.o	: lpp.c	\
	GramJava.h	\
	GramAda.h	\
	GramYacc.h	\
	GramC.h	\
	GramMod.h	\
	Dialog.h	\
	Order.h	\
	Optimize.h	\
	Queue.h	\
	Semantic.h	\
	Tree.h	\
	Parser.h	\
	Scanner.h	\
	Errors.h	\
	Position.h

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

cg_OBJS =	\
	cg.o	\
	EvalCxx4.o	\
	EvalCxx3.o	\
	EvalCxx2.o	\
	EvalCxx.o	\
	TreeCxx2.o	\
	TreeCxx1.o	\
	EvalJav4.o	\
	EvalJav3.o	\
	EvalJav2.o	\
	EvalJava.o	\
	TreeJav2.o	\
	TreeJav1.o	\
	GramJava.o	\
	GramAda.o	\
	EvalC4.o	\
	EvalC3.o	\
	EvalC2.o	\
	EvalC.o	\
	TreeC2.o	\
	TreeC1.o	\
	GramYacc.o	\
	GramC.o	\
	EvalMod4.o	\
	TreeMod2.o	\
	EvalMod3.o	\
	EvalMod2.o	\
	EvalMod.o	\
	TreeMod1.o	\
	GramMod.o	\
	Dialog.o	\
	Order.o	\
	Optimize.o	\
	Queue.o	\
	Semantic.o	\
	Tree2.o	\
	Tree.o	\
	Parser.o	\
	Scanner.o	\
	Errors.o	\
	Position.o

cg	: $(cg_OBJS) $(SYSTEM)
	$(CC) -o cg $(cg_OBJS) $(SYSTEM) $(LDFLAGS)

lpp_OBJS =	\
	lpp.o	\
	GramJava.o	\
	GramAda.o	\
	GramYacc.o	\
	GramC.o	\
	GramMod.o	\
	Dialog.o	\
	Order.o	\
	Optimize.o	\
	Queue.o	\
	Semantic.o	\
	Tree.o	\
	Parser.o	\
	Scanner.o	\
	Errors.o	\
	Position.o

lpp	: $(lpp_OBJS) $(SYSTEM)
	$(CC) -o lpp $(lpp_OBJS) $(SYSTEM) $(LDFLAGS)

pumagen_OBJS =	\
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
	Errors.o

pumagen	: $(pumagen_OBJS) $(SYSTEM)
	$(CC) -o pumagen $(pumagen_OBJS) $(SYSTEM) $(LDFLAGS)

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
