LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR)
CC	= cc
LDFLAGS	= -L$(X11)/lib -ltk8.4 -ltcl8.4 -lX11 -lm -ldl $(LIB)/libreuse.a
LDFLAGS	= -lm $(LIB)/libreuse.a

ParserDrv: ParserDrv.o Scanner.o Parser.o
	$(CC) -o ParserDrv ParserDrv.o Scanner.o Parser.o $(LDFLAGS)

Scanner.rpp Parser.lrk: modula.prs
	lpp -cxzj modula.prs

modula.rex: modula.scn Scanner.rpp
	rpp < modula.scn > modula.rex

Scanner.h Scanner.c: modula.rex
	rex -cd modula.rex

Parser.h Parser.c ParserDrv.c: Parser.lrk
	lark -cdips Parser.lrk

ParserDrv.o:	Parser.h Scanner.h
Parser.o:	Parser.h Scanner.h
Scanner.o:	Scanner.h

lint:	ParserDrv.c Parser.c Scanner.c
	lint $(CFLAGS) -b -u *.c

clean:
	rm -f core *.[hco] *.dbg ParserDrv modula.rex Parser.lrk Scanner.rpp

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
