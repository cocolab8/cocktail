BIN	= $(HOME)/bin
LIB	= $(HOME)/lib
OPT	= -O
CC	= cc
INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= $(INSTALL)
INSTALL_DATA	= $(INSTALL) -m 644

                # C library (reuse)
REUSE	= ../../reuse/m2c

                # C library (front)
FRONT	= ../../front/m2c

                # options for C compiler
CFLAGS	= -I$(FRONT) -I$(REUSE) $(OPT)

                # options for linker
LDFLAGS	= -s $(FRONT)/libfront.a $(REUSE)/libreuse.a $(WIBU_LIB)

M2FLAGS	= -c

all	: bnf

install	:	bnf bnf.sh $(LIB)/lalr
	sh -c "if test $(LIB) = $(BIN); then echo error: BIN = LIB; false; else true; fi"
	$(INSTALL_PROGRAM) bnf $(LIB)/lalr
	sed "s;LIB;$(LIB);" < bnf.sh > $(BIN)/bnf
	chmod a+rx $(BIN)/bnf

image	:	bnf bnf.sh $(LIB)/lalr
	$(INSTALL_PROGRAM) bnf.sh $(BIN)
	$(INSTALL_PROGRAM) bnf $(LIB)/lalr

# installation directories

$(LIB)/lalr:
	mkdir -p $(LIB)/lalr

lint	:
	lint -I$(FRONT) -I$(REUSE) -u *.c


# HEAD

sources	: ArgCheck.h
sources	: ArgCheck.c
sources	: MakeBNF.h
sources	: MakeBNF.c
sources	: bnf.c
all	: bnf

ArgCheck.o	: ArgCheck.c	\
	ArgCheck.h

MakeBNF.o	: MakeBNF.c	\
	MakeBNF.h	\
	ArgCheck.h

bnf.o	: bnf.c	\
	MakeBNF.h	\
	ArgCheck.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

bnf	: $(SYSTEM)	\
	bnf.o	\
	MakeBNF.o	\
	ArgCheck.o	\
;	$(CC) $(CFLAGS) -o bnf $(SYSTEM)	\
	bnf.o	\
	MakeBNF.o	\
	ArgCheck.o	\
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
