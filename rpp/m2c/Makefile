BIN	= $(HOME)/bin
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

all	: rpp

install	: rpp
	$(INSTALL_PROGRAM) rpp $(BIN)

image	: rpp
	$(INSTALL_PROGRAM) rpp $(BIN)

lint	:
	lint -I$(REUSE) -u *.c


# HEAD

sources	: Scanner.h
sources	: Scanner.c
sources	: rpp.c
all	: rpp

Scanner.o	: Scanner.c	\
	Scanner.h

rpp.o	: rpp.c	\
	Scanner.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

rpp	: $(SYSTEM)	\
	rpp.o	\
	Scanner.o	\
;	$(CC) $(CFLAGS) -o rpp $(SYSTEM)	\
	rpp.o	\
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
