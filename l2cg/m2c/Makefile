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


all	: l2cg

install	:	l2cg l2cg.sh $(LIB)/lalr
	sh -c "if test $(LIB) = $(BIN); then echo error: BIN = LIB; false; else true; fi"
	sed 's;LIB;$(LIB);g' < l2cg.sh > $(BIN)/l2cg
	chmod a+rx $(BIN)/l2cg
	$(INSTALL_PROGRAM) l2cg $(LIB)/lalr

image	:	l2cg l2cg.sh $(LIB)/lalr
	$(INSTALL_PROGRAM) l2cg.sh $(BIN)
	$(INSTALL_PROGRAM) l2cg $(LIB)/lalr

# installation directories

$(LIB)/lalr:
	mkdir -p $(LIB)/lalr

lint	:
	lint -I$(REUSE) -u *.c

# SYSTEM_	= SYSTEM_.o


# HEAD

sources	: Parser.h
sources	: Parser.c
sources	: Scanner.h
sources	: Scanner.c
sources	: l2cg.c
all	: l2cg

Parser.o	: Parser.c	\
	Parser.h	\
	Scanner.h

Scanner.o	: Scanner.c	\
	Scanner.h

l2cg.o	: l2cg.c	\
	Parser.h	\
	Scanner.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

l2cg	: $(SYSTEM)	\
	l2cg.o	\
	Parser.o	\
	Scanner.o	\
;	$(CC) $(CFLAGS) -o l2cg $(SYSTEM)	\
	l2cg.o	\
	Parser.o	\
	Scanner.o	\
	$(LDFLAGS)

# TAIL

clean	:
	rm -f core *.o l2cg

.SUFFIXES: .md .mi .h .c .o

.mi.c:
	mtc2 $(M2FLAGS) $*.mi

.md.h:
	mtc2 $(M2FLAGS) $*.md

.c.o:
	$(CC) $(CFLAGS) -c $*.c
