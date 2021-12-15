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

all:	r2l

install:	r2l r2l.sh $(LIB)/r2l
	sh -c "if test $(LIB) = $(BIN); then echo error: BIN = LIB; false; else true; fi"
	sed 's;LIB;$(LIB);g' < r2l.sh > $(BIN)/r2l
	chmod a+rx $(BIN)/r2l
	$(INSTALL_PROGRAM) r2l $(LIB)/r2l

image:	r2l r2l.sh $(LIB)/r2l
	$(INSTALL_PROGRAM) r2l.sh $(BIN)
	$(INSTALL_PROGRAM) r2l $(LIB)/r2l

# installation directories

$(LIB)/r2l:	$(LIB)
	sh -c "if test ! -d $(LIB)/r2l; then mkdir -p $(LIB)/r2l; else true; fi"

lint	:
	lint -I$(REUSE) -u *.c

# SYSTEM_	= SYSTEM_.o

# HEAD

sources	: DefTable.h
sources	: DefTable.c
sources	: Errors.h
sources	: Errors.c
sources	: Parser.h
sources	: Parser.c
sources	: Scanner.h
sources	: Scanner.c
sources	: r2l.c
all	: r2l

DefTable.o	: DefTable.c	\
	DefTable.h

Errors.o	: Errors.c	\
	Errors.h

Parser.o	: Parser.c	\
	Parser.h	\
	DefTable.h	\
	Errors.h	\
	Scanner.h

Scanner.o	: Scanner.c	\
	Scanner.h	\
	Errors.h

r2l.o	: r2l.c	\
	Parser.h	\
	DefTable.h	\
	Errors.h	\
	Scanner.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

r2l	: $(SYSTEM)	\
	r2l.o	\
	Parser.o	\
	DefTable.o	\
	Errors.o	\
	Scanner.o	\
;	$(CC) $(CFLAGS) -o r2l $(SYSTEM)	\
	r2l.o	\
	Parser.o	\
	DefTable.o	\
	Errors.o	\
	Scanner.o	\
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
