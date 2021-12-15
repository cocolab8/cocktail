BIN	= $(HOME)/bin
LIB	= $(HOME)/lib
OPT	= -O
CC	= cc
RANLIB	= ranlib
INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= $(INSTALL)
INSTALL_DATA	= $(INSTALL) -m 644
CG_AST	= ../../cg/src/cg.cg

                # C library (reuse)
REUSE	= ../../reuse/m2c

                # options for C compiler
CFLAGS	= -w -I$(REUSE) $(OPT)

                # options for linker
LDFLAGS	= -s $(REUSE)/libreuse.a $(WIBU_LIB)

M2FLAGS	= -c -d../../reuse/src


all	: puma

install	: puma puma.sh $(LIB)/puma
	sh -c "if test $(LIB) = $(BIN); then echo error: BIN = LIB; false; else true; fi"
	sed 's;LIB;$(LIB);g' < puma.sh > $(BIN)/puma
	chmod a+rx $(BIN)/puma
	$(INSTALL_PROGRAM) gcpp $(BIN)
	$(INSTALL_PROGRAM) gupd $(BIN)
	$(INSTALL_PROGRAM) grm $(BIN)
	$(INSTALL_PROGRAM) puma $(LIB)/puma
	$(INSTALL_DATA) TypeTab.c $(LIB)/puma
	$(INSTALL_DATA) TypeTab.cx $(LIB)/puma
	$(INSTALL_DATA) TypeTab.cxx $(LIB)/puma
	$(INSTALL_DATA) TypeTab.m $(LIB)/puma
	$(INSTALL_DATA) TypeTab.j $(LIB)/puma

image	: puma puma.sh $(LIB)/puma
	$(INSTALL_PROGRAM) puma.sh $(BIN)
	$(INSTALL_PROGRAM) gcpp $(BIN)
	$(INSTALL_PROGRAM) gupd $(BIN)
	$(INSTALL_PROGRAM) grm $(BIN)
	$(INSTALL_PROGRAM) puma $(LIB)/puma
	$(INSTALL_DATA) TypeTab.c $(LIB)/puma
	$(INSTALL_DATA) TypeTab.cx $(LIB)/puma
	$(INSTALL_DATA) TypeTab.cxx $(LIB)/puma
	$(INSTALL_DATA) TypeTab.m $(LIB)/puma
	$(INSTALL_DATA) TypeTab.j $(LIB)/puma

# installation directories

$(LIB)/puma:	$(LIB)
	sh -c "if test ! -d $(LIB)/puma; then mkdir -p $(LIB)/puma; else true; fi"

lint	:
	lint -I$(REUSE) -u *.c

# SYSTEM_	= SYSTEM_.o

OBJS	= C.o Optimize.o Parser.o Scanner.o Semantic.o Tree.o pumal.o

Tree3.h Tree3.c:
	echo SELECT AstIn Ast Common PumaIn Puma | cat - $(CG_AST) ../src/puma.cg | pumagen

libpumal.a	: $(OBJS)
	ar ruc libpumal.a $(OBJS)
	$(RANLIB) libpumal.a

pumal	: Tree3.o libpumal.a
	$(CC) -o pumal Tree3.o $(LDFLAGS) libpumal.a $(LDFLAGS)

# !delete!: all : pumal
# !delete!: sources : Tree3.h

# HEAD

sources	: C.h
sources	: C.c
sources	: Cxx.h
sources	: Cxx.c
sources	: Eval.h
sources	: Eval.c
sources	: Java.h
sources	: Java.c
sources	: Mod.h
sources	: Mod.c
sources	: Optimize.h
sources	: Optimize.c
sources	: Parser.h
sources	: Parser.c
sources	: Scanner.h
sources	: Scanner.c
sources	: Semantic.h
sources	: Semantic.c
sources	: Tree.h
sources	: Tree.c
sources	: Tree2.h
sources	: Tree2.c
sources	: puma.c
all	: puma
sources	: pumal.c

C.o	: C.c	\
	C.h	\
	Optimize.h	\
	Scanner.h	\
	Semantic.h	\
	Eval.h	\
	Tree.h

Cxx.o	: Cxx.c	\
	Cxx.h	\
	Optimize.h	\
	Scanner.h	\
	Semantic.h	\
	Eval.h	\
	Tree.h

Eval.o	: Eval.c	\
	Eval.h	\
	Scanner.h	\
	Tree.h

Java.o	: Java.c	\
	Java.h	\
	Scanner.h	\
	Optimize.h	\
	Semantic.h	\
	Eval.h	\
	Tree.h

Mod.o	: Mod.c	\
	Mod.h	\
	Optimize.h	\
	Scanner.h	\
	Semantic.h	\
	Eval.h	\
	Tree.h

Optimize.o	: Optimize.c	\
	Optimize.h	\
	Scanner.h	\
	Tree.h

Parser.o	: Parser.c	\
	Parser.h	\
	Tree.h	\
	Scanner.h

Scanner.o	: Scanner.c	\
	Scanner.h	\
	Tree.h

Semantic.o	: Semantic.c	\
	Semantic.h	\
	Eval.h	\
	Scanner.h	\
	Tree.h

Tree.o	: Tree.c	\
	Tree.h

Tree2.o	: Tree2.c	\
	Tree2.h	\
	Tree.h

puma.o	: puma.c	\
	Tree2.h	\
	Java.h	\
	Cxx.h	\
	C.h	\
	Mod.h	\
	Optimize.h	\
	Semantic.h	\
	Eval.h	\
	Tree.h	\
	Parser.h	\
	Scanner.h

pumal.o	: pumal.c	\
	Tree3.h	\
	C.h	\
	Optimize.h	\
	Semantic.h	\
	Eval.h	\
	Tree.h	\
	Parser.h	\
	Scanner.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

puma_OBJS =	\
	puma.o	\
	Tree2.o	\
	Java.o	\
	Cxx.o	\
	C.o	\
	Mod.o	\
	Optimize.o	\
	Semantic.o	\
	Eval.o	\
	Tree.o	\
	Parser.o	\
	Scanner.o

puma	: $(puma_OBJS) $(SYSTEM)
	$(CC) -o puma $(puma_OBJS) $(SYSTEM) $(LDFLAGS)

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
