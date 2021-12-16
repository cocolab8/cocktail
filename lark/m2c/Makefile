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


all:	lark

install	:	lark lark.sh $(LIB)/lark
	sh -c "if test $(LIB) = $(BIN); then echo error: BIN = LIB; false; else true; fi"
	sed 's;LIB;$(LIB);g' < lark.sh > $(BIN)/lark
	chmod a+rx $(BIN)/lark
	$(INSTALL_PROGRAM) gcpp $(BIN)
	$(INSTALL_PROGRAM) gupd $(BIN)
	$(INSTALL_PROGRAM) lark $(LIB)/lark
	cp ../lib/P* ../lib/*.e ../lib/*.ad? $(LIB)/lark
	chmod a+r $(LIB)/lark/*

image	:	lark lark.sh $(LIB)/lark
	$(INSTALL_PROGRAM) lark.sh $(BIN)
	$(INSTALL_PROGRAM) gcpp $(BIN)
	$(INSTALL_PROGRAM) gupd $(BIN)
	$(INSTALL_PROGRAM) lark $(LIB)/lark
	cp ../lib/P* ../lib/*.e ../lib/*.ad? $(LIB)/lark
	chmod a+r $(LIB)/lark/*

# installation directories

$(LIB)/lark:
	mkdir -p $(LIB)/lark

lint	:
	lint -I$(REUSE) -u *.c

# SYSTEM_	= SYSTEM_.o


# HEAD

sources	: Compress.h
sources	: Compress.c
sources	: Conflict.h
sources	: Conflict.c
sources	: Delta.h
sources	: Delta.c
sources	: Errors.h
sources	: Errors.c
sources	: Explain.h
sources	: Explain.c
sources	: GenLRk.h
sources	: GenLRk.c
sources	: Generate.h
sources	: Generate.c
sources	: LR1.h
sources	: LR1.c
sources	: LRk.h
sources	: LRk.c
sources	: LarkTime.h
sources	: LarkTime.c
sources	: Parser.h
sources	: Parser.c
sources	: Position.h
sources	: Position.c
sources	: Queue.h
sources	: Queue.c
sources	: Scanner.h
sources	: Scanner.c
sources	: Semantic.h
sources	: Semantic.c
sources	: Tree.h
sources	: Tree.c
sources	: lark.c
all	: lark

Compress.o	: Compress.c	\
	Compress.h	\
	LarkTime.h	\
	Conflict.h	\
	Delta.h	\
	LRk.h	\
	Explain.h	\
	GenLRk.h	\
	Generate.h	\
	Semantic.h	\
	Queue.h	\
	Parser.h	\
	Scanner.h	\
	Tree.h	\
	Errors.h	\
	Position.h	\
	LR1.h

Conflict.o	: Conflict.c	\
	Conflict.h	\
	Delta.h	\
	LRk.h	\
	Tree.h	\
	Errors.h	\
	Explain.h	\
	GenLRk.h	\
	Generate.h	\
	Compress.h	\
	LarkTime.h	\
	Position.h	\
	Semantic.h	\
	Queue.h	\
	Parser.h	\
	Scanner.h	\
	LR1.h

Delta.o	: Delta.c	\
	Delta.h	\
	LR1.h	\
	Compress.h	\
	LarkTime.h	\
	Conflict.h	\
	LRk.h	\
	Explain.h	\
	GenLRk.h	\
	Generate.h	\
	Errors.h	\
	Position.h	\
	Semantic.h	\
	Queue.h	\
	Parser.h	\
	Scanner.h	\
	Tree.h

Errors.o	: Errors.c	\
	Errors.h	\
	Position.h

Explain.o	: Explain.c	\
	Explain.h	\
	LR1.h	\
	Compress.h	\
	LarkTime.h	\
	Tree.h	\
	GenLRk.h	\
	Generate.h	\
	LRk.h	\
	Conflict.h	\
	Delta.h	\
	Semantic.h	\
	Queue.h	\
	Parser.h	\
	Scanner.h	\
	Errors.h	\
	Position.h

GenLRk.o	: GenLRk.c	\
	GenLRk.h	\
	Generate.h	\
	Errors.h	\
	Position.h	\
	Compress.h	\
	LarkTime.h	\
	Conflict.h	\
	Delta.h	\
	Explain.h	\
	LRk.h	\
	LR1.h	\
	Semantic.h	\
	Queue.h	\
	Parser.h	\
	Scanner.h	\
	Tree.h

Generate.o	: Generate.c	\
	Generate.h	\
	GenLRk.h	\
	LRk.h	\
	Compress.h	\
	LarkTime.h	\
	Conflict.h	\
	Delta.h	\
	Explain.h	\
	LR1.h	\
	Semantic.h	\
	Queue.h	\
	Parser.h	\
	Scanner.h	\
	Tree.h	\
	Errors.h	\
	Position.h

LR1.o	: LR1.c	\
	LR1.h	\
	Semantic.h	\
	Queue.h	\
	Parser.h	\
	Scanner.h	\
	LarkTime.h	\
	Compress.h	\
	Conflict.h	\
	Delta.h	\
	LRk.h	\
	Explain.h	\
	GenLRk.h	\
	Generate.h	\
	Errors.h	\
	Position.h	\
	Tree.h

LRk.o	: LRk.c	\
	LRk.h	\
	LR1.h	\
	Compress.h	\
	LarkTime.h	\
	Conflict.h	\
	Delta.h	\
	Explain.h	\
	GenLRk.h	\
	Generate.h	\
	Semantic.h	\
	Queue.h	\
	Parser.h	\
	Scanner.h	\
	Errors.h	\
	Position.h	\
	Tree.h

LarkTime.o	: LarkTime.c	\
	LarkTime.h	\
	Tree.h	\
	Position.h

Parser.o	: Parser.c	\
	Parser.h	\
	Tree.h	\
	Position.h	\
	Errors.h	\
	Scanner.h

Position.o	: Position.c	\
	Position.h

Queue.o	: Queue.c	\
	Queue.h

Scanner.o	: Scanner.c	\
	Scanner.h	\
	Tree.h	\
	Errors.h	\
	Position.h

Semantic.o	: Semantic.c	\
	Semantic.h	\
	Queue.h	\
	Parser.h	\
	Scanner.h	\
	LarkTime.h	\
	Errors.h	\
	Position.h	\
	Tree.h

Tree.o	: Tree.c	\
	Tree.h	\
	Position.h

lark.o	: lark.c	\
	Delta.h	\
	LarkTime.h	\
	Generate.h	\
	GenLRk.h	\
	Compress.h	\
	Explain.h	\
	Conflict.h	\
	LRk.h	\
	LR1.h	\
	Semantic.h	\
	Queue.h	\
	Tree.h	\
	Parser.h	\
	Scanner.h	\
	Errors.h	\
	Position.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

lark	: $(SYSTEM)	\
	lark.o	\
	Delta.o	\
	LarkTime.o	\
	Generate.o	\
	GenLRk.o	\
	Compress.o	\
	Explain.o	\
	Conflict.o	\
	LRk.o	\
	LR1.o	\
	Semantic.o	\
	Queue.o	\
	Tree.o	\
	Parser.o	\
	Scanner.o	\
	Errors.o	\
	Position.o	\
;	$(CC) $(CFLAGS) -o lark $(SYSTEM)	\
	lark.o	\
	Delta.o	\
	LarkTime.o	\
	Generate.o	\
	GenLRk.o	\
	Compress.o	\
	Explain.o	\
	Conflict.o	\
	LRk.o	\
	LR1.o	\
	Semantic.o	\
	Queue.o	\
	Tree.o	\
	Parser.o	\
	Scanner.o	\
	Errors.o	\
	Position.o	\
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
