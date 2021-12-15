LIB	= $(HOME)/lib
OPT	= -O
CC	= cc
RANLIB	= ranlib

                # C library (reuse)
REUSE	= ../../reuse/m2c

                # options for C compiler
CFLAGS	= -w -I$(REUSE) $(OPT)

                # options for linker
LDFLAGS	= -s $(REUSE)/libreuse.a

M2FLAGS	= -c

OBJS	= Actions.o Characte.o Checks.o Errors.o \
	  Listing.o Oper.o Pars.o Parser.o Path.o Rules.o Scanner.o \
	  SysError.o TokenTab.o Tokens.o WriteTok.o

libfront.a	: $(OBJS)
	ar ruc libfront.a $(OBJS)
	$(RANLIB) libfront.a

install:	ErrorTab $(LIB)/lalr
	cp ErrorTab $(LIB)/lalr
	chmod a+r $(LIB)/lalr/ErrorTab

image:	ErrorTab $(LIB)/lalr
	cp ErrorTab $(LIB)/lalr
	chmod a+r $(LIB)/lalr/ErrorTab

# installation directories

$(LIB)/lalr:	$(LIB)
	sh -c "if test ! -d $(LIB)/lalr; then mkdir -p $(LIB)/lalr; else true; fi"

lint	:
	lint -I$(REUSE) -u *.c


# HEAD

sources	: Actions.h
sources	: Actions.c
sources	: Characte.h
sources	: Characte.c
sources	: Checks.h
sources	: Checks.c
sources	: Errors.h
sources	: Errors.c
sources	: Listing.h
sources	: Listing.c
sources	: Oper.h
sources	: Oper.c
sources	: Pars.c
all	: Pars
sources	: Parser.h
sources	: Parser.c
sources	: Path.h
sources	: Path.c
sources	: Rules.h
sources	: Rules.c
sources	: Scanner.h
sources	: Scanner.c
sources	: SysError.h
sources	: SysError.c
sources	: TokenTab.h
sources	: TokenTab.c
sources	: Tokens.h
sources	: Tokens.c
sources	: WriteTok.h
sources	: WriteTok.c

Actions.o	: Actions.c	\
	Actions.h	\
	WriteTok.h	\
	TokenTab.h	\
	Errors.h	\
	SysError.h	\
	Listing.h

Characte.o	: Characte.c	\
	Characte.h

Checks.o	: Checks.c	\
	Checks.h	\
	Errors.h	\
	TokenTab.h	\
	Listing.h	\
	SysError.h

Errors.o	: Errors.c	\
	Errors.h	\
	TokenTab.h	\
	SysError.h	\
	Listing.h

Listing.o	: Listing.c	\
	Listing.h

Oper.o	: Oper.c	\
	Oper.h	\
	Errors.h	\
	SysError.h	\
	Listing.h	\
	TokenTab.h

Pars.o	: Pars.c	\
	TokenTab.h	\
	Scanner.h	\
	Rules.h	\
	Parser.h	\
	Tokens.h	\
	Oper.h	\
	Actions.h	\
	Errors.h	\
	SysError.h	\
	Listing.h	\
	Checks.h	\
	Path.h	\
	Characte.h	\
	WriteTok.h

Parser.o	: Parser.c	\
	Parser.h	\
	WriteTok.h	\
	Rules.h	\
	Tokens.h	\
	TokenTab.h	\
	Oper.h	\
	Actions.h	\
	Errors.h	\
	SysError.h	\
	Listing.h	\
	Scanner.h	\
	Checks.h

Path.o	: Path.c	\
	Path.h

Rules.o	: Rules.c	\
	Rules.h	\
	Errors.h	\
	SysError.h	\
	Listing.h	\
	TokenTab.h

Scanner.o	: Scanner.c	\
	Scanner.h	\
	Errors.h	\
	TokenTab.h	\
	SysError.h	\
	Listing.h	\
	WriteTok.h	\
	Checks.h	\
	Rules.h

SysError.o	: SysError.c	\
	SysError.h	\
	Errors.h	\
	TokenTab.h	\
	Listing.h

TokenTab.o	: TokenTab.c	\
	TokenTab.h	\
	Errors.h	\
	SysError.h	\
	Listing.h

Tokens.o	: Tokens.c	\
	Tokens.h	\
	Errors.h	\
	SysError.h	\
	Listing.h	\
	TokenTab.h

WriteTok.o	: WriteTok.c	\
	WriteTok.h	\
	TokenTab.h	\
	Errors.h	\
	SysError.h	\
	Listing.h

SYSTEM_.o	: SYSTEM_.c SYSTEM_.h

Pars	: $(SYSTEM)	\
	Pars.o	\
	TokenTab.o	\
	Scanner.o	\
	Rules.o	\
	Parser.o	\
	Tokens.o	\
	Oper.o	\
	Actions.o	\
	Errors.o	\
	SysError.o	\
	Listing.o	\
	Checks.o	\
	Path.o	\
	Characte.o	\
	WriteTok.o	\
;	$(CC) $(CFLAGS) -o Pars $(SYSTEM)	\
	Pars.o	\
	TokenTab.o	\
	Scanner.o	\
	Rules.o	\
	Parser.o	\
	Tokens.o	\
	Oper.o	\
	Actions.o	\
	Errors.o	\
	SysError.o	\
	Listing.o	\
	Checks.o	\
	Path.o	\
	Characte.o	\
	WriteTok.o	\
	$(LDFLAGS)

# TAIL

clean	:
	rm -f core *.o

CLEAN	: clean
	rm -f libfront.a

.SUFFIXES: .md .mi .h .c .o

.mi.c:
	mtc2 $(M2FLAGS) $*.mi

.md.h:
	mtc2 $(M2FLAGS) $*.md

.c.o:
	$(CC) $(CFLAGS) -c $*.c
