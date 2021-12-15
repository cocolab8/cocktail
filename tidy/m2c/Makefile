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

all	: tidy

install	: tidy
	$(INSTALL_PROGRAM) tidy $(BIN)

image	: tidy
	$(INSTALL_PROGRAM) tidy $(BIN)

lint	:
	lint -I$(REUSE) -u *.c


# HEAD

sources	: Reader.h
sources	: Reader.c
sources	: ReaderSource.h
sources	: ReaderSource.c
sources	: Writer.h
sources	: Writer.c
sources	: WriterSource.h
sources	: WriterSource.c
sources	: tidy.c
all	: tidy

Reader.o	: Reader.c	\
	Reader.h	\
	ReaderSource.h

ReaderSource.o	: ReaderSource.c	\
	ReaderSource.h

Writer.o	: Writer.c	\
	Writer.h	\
	WriterSource.h

WriterSource.o	: WriterSource.c	\
	WriterSource.h

tidy.o	: tidy.c	\
	Reader.h	\
	ReaderSource.h	\
	Writer.h	\
	WriterSource.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

tidy	: $(SYSTEM)	\
	tidy.o	\
	Reader.o	\
	ReaderSource.o	\
	Writer.o	\
	WriterSource.o	\
;	$(CC) $(CFLAGS) -o tidy $(SYSTEM)	\
	tidy.o	\
	Reader.o	\
	ReaderSource.o	\
	Writer.o	\
	WriterSource.o	\
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
