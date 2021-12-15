BIN	= $(HOME)/bin
OPT	= -O
CC	= cc
REUSE	= ../../reuse/c
CFLAGS	= -w -I$(REUSE) -I../.. $(OPT) -s
OBJS	= y2l.o Parser.o Scanner.o Tables.o
SOURCES	= Scanner.h Scanner.c Parser.h Parser.c
INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= $(INSTALL)
INSTALL_DATA	= $(INSTALL) -m 644

# targets

y2l:	$(OBJS)
	$(CC) -o y2l $(CFLAGS) $(OBJS) $(REUSE)/libreuse.a

sources:	$(SOURCES)

Scanner.h Scanner.c:	yacc.rex
	rex -cdi yacc.rex

Parser.h Parser.c:	yacc.lrk
	bnf -c yacc.lrk | lark -cdif

touch:
	touch Scanner.h Scanner.c Parser.h Parser.c

install:	y2l
	$(INSTALL_PROGRAM) y2l $(BIN)

image:	y2l
	$(INSTALL_PROGRAM) y2l $(BIN)

lint:	y2l.c Parser.c Scanner.c Tables.c
	lint -I$(REUSE) -I../.. -b -u *.c

clean:
	rm -f core* *.o y2l

CLEAN:	clean
	rm -f $(SOURCES)

# dependencies

y2l.o:		y2l.c Scanner.h Parser.h Tables.h
Parser.o:	Parser.c Parser.h Scanner.h Tables.h
Scanner.o:	Scanner.c Scanner.h Parser.h Tables.h
Tables.o:	Tables.c Tables.h

# print manual page

man:
	nroff -man y2l.1

.SUFFIXES:	.c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
