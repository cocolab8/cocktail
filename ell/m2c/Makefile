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

all:	ell

install: ell ell.sh $(LIB)/ell
	sh -c "if test $(LIB) = $(BIN); then echo error: BIN = LIB; false; else true; fi"
	sed "s;LIB;$(LIB);g" < ell.sh > $(BIN)/ell
	chmod a+rx $(BIN)/ell
	$(INSTALL_PROGRAM) ell $(LIB)/ell

image:	ell ell.sh $(LIB)/ell
	$(INSTALL_PROGRAM) ell.sh $(BIN)
	$(INSTALL_PROGRAM) ell $(LIB)/ell

# installation directories

$(LIB)/ell: $(LIB)
	sh -c "if test ! -d $(LIB)/ell; then mkdir -p $(LIB)/ell; else true; fi"

lint:
	lint -I$(REUSE) -u *.c

# SYSTEM_	= SYSTEM_.o

# HEAD

sources	: ArgCheck.h
sources	: ArgCheck.c
sources	: CodeC.h
sources	: CodeC.c
sources	: CodeM2.h
sources	: CodeM2.c
sources	: Codes.h
sources	: Codes.c
sources	: Derivabl.h
sources	: Derivabl.c
sources	: First.h
sources	: First.c
sources	: Follow.h
sources	: Follow.c
sources	: Nullable.h
sources	: Nullable.c
sources	: Parser.h
sources	: Parser.c
sources	: Reachabl.h
sources	: Reachabl.c
sources	: Scanner.h
sources	: Scanner.c
sources	: Semantic.h
sources	: Semantic.c
sources	: Stack.h
sources	: Stack.c
sources	: Table.h
sources	: Table.c
sources	: Tree.h
sources	: Tree.c
sources	: Types.h
sources	: Types.c
sources	: ell.c
all	: ell

ArgCheck.o	: ArgCheck.c	\
	ArgCheck.h	\
	Scanner.h

CodeC.o	: CodeC.c	\
	CodeC.h	\
	Types.h	\
	Scanner.h	\
	Codes.h	\
	ArgCheck.h	\
	Tree.h

CodeM2.o	: CodeM2.c	\
	CodeM2.h	\
	Types.h	\
	Scanner.h	\
	Codes.h	\
	ArgCheck.h	\
	Tree.h

Codes.o	: Codes.c	\
	Codes.h	\
	ArgCheck.h	\
	Scanner.h

Derivabl.o	: Derivabl.c	\
	Derivabl.h	\
	Types.h	\
	Tree.h	\
	Table.h

First.o	: First.c	\
	First.h	\
	Tree.h	\
	Types.h	\
	Table.h	\
	Stack.h	\
	Scanner.h	\
	ArgCheck.h	\
	Derivabl.h

Follow.o	: Follow.c	\
	Follow.h	\
	Types.h	\
	Tree.h	\
	Table.h	\
	Stack.h	\
	Scanner.h	\
	ArgCheck.h

Nullable.o	: Nullable.c	\
	Nullable.h	\
	Types.h	\
	Tree.h	\
	Table.h

Parser.o	: Parser.c	\
	Parser.h	\
	Scanner.h	\
	ArgCheck.h	\
	Tree.h

Reachabl.o	: Reachabl.c	\
	Reachabl.h	\
	Types.h	\
	Table.h	\
	Tree.h

Scanner.o	: Scanner.c	\
	Scanner.h	\
	ArgCheck.h

Semantic.o	: Semantic.c	\
	Semantic.h	\
	Types.h	\
	Table.h	\
	Scanner.h	\
	Reachabl.h	\
	Follow.h	\
	Stack.h	\
	First.h	\
	Derivabl.h	\
	Codes.h	\
	ArgCheck.h	\
	Tree.h

Stack.o	: Stack.c	\
	Stack.h

Table.o	: Table.c	\
	Table.h	\
	Types.h	\
	Tree.h

Tree.o	: Tree.c	\
	Tree.h

Types.o	: Types.c	\
	Types.h

ell.o	: ell.c	\
	Semantic.h	\
	Types.h	\
	Table.h	\
	Scanner.h	\
	Reachabl.h	\
	Follow.h	\
	Stack.h	\
	First.h	\
	Derivabl.h	\
	Codes.h	\
	Tree.h	\
	Parser.h	\
	CodeM2.h	\
	CodeC.h	\
	ArgCheck.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

ell_OBJS =	\
	ell.o	\
	Semantic.o	\
	Types.o	\
	Table.o	\
	Scanner.o	\
	Reachabl.o	\
	Follow.o	\
	Stack.o	\
	First.o	\
	Derivabl.o	\
	Codes.o	\
	Tree.o	\
	Parser.o	\
	CodeM2.o	\
	CodeC.o	\
	ArgCheck.o

ell	: $(ell_OBJS) $(SYSTEM)
	$(CC) -o ell $(ell_OBJS) $(SYSTEM) $(LDFLAGS)

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
