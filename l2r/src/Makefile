BIN	= $(HOME)/bin
OPT	= -O
CC	= cc
REUSE	= ../../reuse/c
CFLAGS	= -w -I$(REUSE) -I../.. $(OPT)
LDFLAGS = -L$(X11)/lib -ltk8.4 -ltcl8.4 -lX11 -lm -ldl $(REUSE)/libreuse.a
LDFLAGS	= $(REUSE)/libreuse.a
OBJS	= l2r.o Parser.o Scanner.o StringBu.o
SOURCES	= Scanner.h Scanner.c Parser.h Parser.c
INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= $(INSTALL)
INSTALL_DATA	= $(INSTALL) -m 644

# targets

l2r:	$(OBJS)
	$(CC) -o l2r $(OBJS) $(LDFLAGS) -s

sources: $(SOURCES)

Scanner.h Scanner.c: lex.rex
	rex -cdi lex.rex

Parser.h Parser.c: lex.lrk
	bnf -c lex.lrk | lark -cdi

touch:
	touch Scanner.h Scanner.c Parser.h Parser.c

install: l2r
	$(INSTALL_PROGRAM) l2r $(BIN)

image:	l2r
	$(INSTALL_PROGRAM) l2r $(BIN)

lint:	l2r.c Parser.c Scanner.c StringBu.c
	lint -I$(REUSE) -I../.. -b -u *.c

clean:
	rm -f core* l2r *.o

CLEAN:	clean
	rm -f $(SOURCES)

# dependencies

l2r.o:		l2r.c Scanner.h Parser.h StringBu.h
Parser.o:	Parser.c Parser.h Scanner.h StringBu.h
Scanner.o:	Scanner.c Scanner.h StringBu.h
StringBu.o:	StringBu.c StringBu.h

# print manual page

man:
	nroff -man l2r.1

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
