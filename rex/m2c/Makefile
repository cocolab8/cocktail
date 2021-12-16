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

M2FLAGS	= -c

all	: rex

install	:	rex rex.sh $(LIB)/rex
	sh -c "if test $(LIB) = $(BIN); then echo error: BIN = LIB; false; else true; fi"
	sed "s;LIB;$(LIB);g" < rex.sh > $(BIN)/rex
	chmod a+rx $(BIN)/rex
	$(INSTALL_PROGRAM) gupd $(BIN)
	$(INSTALL_PROGRAM) gcpp $(BIN)
	$(INSTALL_PROGRAM) rex $(LIB)/rex
	cp ../lib/S* ../lib/*.e ../lib/*.ad? $(LIB)/rex
	chmod a+r $(LIB)/rex/S* $(LIB)/rex/*.e $(LIB)/rex/*.ad?

image	:	rex rex.sh $(LIB)/rex
	$(INSTALL_PROGRAM) rex.sh $(BIN)
	$(INSTALL_PROGRAM) gupd $(BIN)
	$(INSTALL_PROGRAM) gcpp $(BIN)
	$(INSTALL_PROGRAM) rex $(LIB)/rex
	cp ../lib/S* ../lib/*.e ../lib/*.ad? $(LIB)/rex
	chmod a+r $(LIB)/rex/S* $(LIB)/rex/*.e $(LIB)/rex/*.ad?

# installation directories

$(LIB)/rex:
	mkdir -p $(LIB)/rex

lint	:
	lint -I$(REUSE) -u *.c


# HEAD

sources	: Classes.h
sources	: Classes.c
sources	: DefTable.h
sources	: DefTable.c
sources	: Dfa.h
sources	: Dfa.c
sources	: Errors.h
sources	: Errors.c
sources	: Eval.h
sources	: Eval.c
sources	: GenTabs.h
sources	: GenTabs.c
sources	: Nfa.h
sources	: Nfa.c
sources	: Parser.h
sources	: Parser.c
sources	: Position.h
sources	: Position.c
sources	: ScanGen.h
sources	: ScanGen.c
sources	: ScanTabs.h
sources	: ScanTabs.c
sources	: Scanner.h
sources	: Scanner.c
sources	: Traces.h
sources	: Traces.c
sources	: Tree.h
sources	: Tree.c
sources	: Tree0.h
sources	: Tree0.c
sources	: UniCode.h
sources	: UniCode.c
sources	: rex.c
all	: rex

Classes.o	: Classes.c	\
	Classes.h	\
	Dfa.h	\
	GenTabs.h	\
	ScanGen.h	\
	Scanner.h	\
	ScanTabs.h	\
	Traces.h	\
	Nfa.h	\
	DefTable.h	\
	Errors.h	\
	Position.h	\
	Tree.h	\
	Tree0.h	\
	UniCode.h

DefTable.o	: DefTable.c	\
	DefTable.h	\
	Tree.h	\
	UniCode.h	\
	Position.h

Dfa.o	: Dfa.c	\
	Dfa.h	\
	GenTabs.h	\
	ScanGen.h	\
	Scanner.h	\
	ScanTabs.h	\
	Traces.h	\
	Nfa.h	\
	DefTable.h	\
	Errors.h	\
	Position.h	\
	Tree.h	\
	Classes.h	\
	Tree0.h	\
	UniCode.h

Errors.o	: Errors.c	\
	Errors.h	\
	Position.h

Eval.o	: Eval.c	\
	Eval.h	\
	Tree.h	\
	UniCode.h	\
	Position.h	\
	Classes.h	\
	Dfa.h	\
	GenTabs.h	\
	ScanGen.h	\
	Scanner.h	\
	ScanTabs.h	\
	Traces.h	\
	Nfa.h	\
	DefTable.h	\
	Errors.h	\
	Tree0.h

GenTabs.o	: GenTabs.c	\
	GenTabs.h	\
	UniCode.h	\
	Classes.h	\
	Tree0.h	\
	ScanGen.h	\
	Scanner.h	\
	ScanTabs.h	\
	Traces.h	\
	Dfa.h	\
	Nfa.h	\
	DefTable.h	\
	Errors.h	\
	Position.h	\
	Tree.h

Nfa.o	: Nfa.c	\
	Nfa.h	\
	UniCode.h	\
	GenTabs.h	\
	ScanGen.h	\
	Scanner.h	\
	Traces.h	\
	Dfa.h	\
	DefTable.h	\
	Errors.h	\
	Position.h	\
	Tree.h	\
	Classes.h	\
	Tree0.h	\
	ScanTabs.h

Parser.o	: Parser.c	\
	Parser.h	\
	UniCode.h	\
	ScanGen.h	\
	ScanTabs.h	\
	Classes.h	\
	Dfa.h	\
	GenTabs.h	\
	Traces.h	\
	Nfa.h	\
	DefTable.h	\
	Tree.h	\
	Tree0.h	\
	Position.h	\
	Errors.h	\
	Scanner.h

Position.o	: Position.c	\
	Position.h

ScanGen.o	: ScanGen.c	\
	ScanGen.h	\
	Position.h	\
	Tree.h	\
	UniCode.h	\
	GenTabs.h	\
	Classes.h	\
	Tree0.h	\
	Traces.h	\
	Nfa.h	\
	ScanTabs.h	\
	Dfa.h	\
	DefTable.h	\
	Scanner.h	\
	Errors.h

ScanTabs.o	: ScanTabs.c	\
	ScanTabs.h	\
	Position.h	\
	Errors.h	\
	UniCode.h	\
	Tree.h	\
	ScanGen.h	\
	DefTable.h	\
	Scanner.h	\
	Classes.h	\
	Tree0.h	\
	GenTabs.h	\
	Traces.h	\
	Nfa.h	\
	Dfa.h

Scanner.o	: Scanner.c	\
	Scanner.h	\
	ScanGen.h	\
	Tree.h	\
	GenTabs.h	\
	Classes.h	\
	Tree0.h	\
	Traces.h	\
	Nfa.h	\
	ScanTabs.h	\
	Dfa.h	\
	DefTable.h	\
	Errors.h	\
	UniCode.h	\
	Position.h

Traces.o	: Traces.c	\
	Traces.h	\
	GenTabs.h	\
	UniCode.h	\
	Classes.h	\
	Tree0.h	\
	ScanGen.h	\
	Scanner.h	\
	ScanTabs.h	\
	Nfa.h	\
	DefTable.h	\
	Errors.h	\
	Position.h	\
	Tree.h	\
	Dfa.h

Tree.o	: Tree.c	\
	Tree.h	\
	UniCode.h	\
	Position.h

Tree0.o	: Tree0.c	\
	Tree0.h	\
	UniCode.h	\
	Tree.h	\
	Position.h

UniCode.o	: UniCode.c	\
	UniCode.h

rex.o	: rex.c	\
	ScanGen.h	\
	ScanTabs.h	\
	UniCode.h	\
	DefTable.h	\
	GenTabs.h	\
	Traces.h	\
	Nfa.h	\
	Dfa.h	\
	Tree0.h	\
	Tree.h	\
	Eval.h	\
	Classes.h	\
	Parser.h	\
	Scanner.h	\
	Errors.h	\
	Position.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

rex	: $(SYSTEM)	\
	rex.o	\
	ScanGen.o	\
	ScanTabs.o	\
	UniCode.o	\
	DefTable.o	\
	GenTabs.o	\
	Traces.o	\
	Nfa.o	\
	Dfa.o	\
	Tree0.o	\
	Tree.o	\
	Eval.o	\
	Classes.o	\
	Parser.o	\
	Scanner.o	\
	Errors.o	\
	Position.o	\
;	$(CC) $(CFLAGS) -o rex $(SYSTEM)	\
	rex.o	\
	ScanGen.o	\
	ScanTabs.o	\
	UniCode.o	\
	DefTable.o	\
	GenTabs.o	\
	Traces.o	\
	Nfa.o	\
	Dfa.o	\
	Tree0.o	\
	Tree.o	\
	Eval.o	\
	Classes.o	\
	Parser.o	\
	Scanner.o	\
	Errors.o	\
	Position.o	\
	$(LDFLAGS)

# TAIL

clean	:
	rm -f core *.o

.SUFFIXES: .md .mi .h .c .o

.mi.c:
	mtc2 $(M2FLAGS) $*.mi

.md.h:
	mtc2 $(M2FLAGS) $*.md

.c.o:
	$(CC) $(CFLAGS) -c $*.c
