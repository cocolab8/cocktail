LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include

# Tcl/Tk include files and libraries
TCL_INC	= /usr/X11/include
TCL_LIB	= -L$(X11)/lib -ltcl8.4 -ltk8.4 -lX11

# system libraries
SYS_LIB	= -ldl

# C compiler and options
CC	= cc
C_OPTIM	= # -O2
C_DEBUG	= -g -DDRAWTREE
C_DEBUG	= -g

# -include ../Makefile.config

REUSE	= ../reuse
CFLAGS	= -I. -I$(INCDIR) -I$(REUSE) -I$(TCL_INC) $(C_OPTIM) $(C_DEBUG)
LIBS	= $(REUSE)/libreuse.a
LIBS	= $(LIB)/libreuse.a
LDFLAGS	= $(LIBS) $(TCL_LIB) $(SYS_LIB) -lm
LDFLAGS	= $(LIBS) -lm

SOURCES	= main.c Scanner.c Parser.c Tree.c Trafo.c deftab.c
OBJS	= main.o Scanner.o Parser.o Tree.o Trafo.o deftab.o


main:	$(OBJS)
	$(CC) -o main $(OBJS) $(LDFLAGS)

purify:	$(OBJS)
	purify $(CC) -o main $(OBJS) $(LDFLAGS)

gprof:	$(OBJS)
	$(CC) -o main -pg $(OBJS) $(LDFLAGS)

visual:	Parser.lrk
	lark -ci5 Parser.lrk
	$(MAKE) main

Scanner.rpp Parser.lrk: c.prs
	@echo expect a few informations and warnings
	lpp -cxzj c.prs

c.rex:	c.scn Scanner.rpp
	rpp < c.scn > c.rex

Scanner.h Scanner.c: c.rex
	@echo expect 2 warnings
	rex -cdi c.rex

Parser.h Parser.c: Parser.lrk
	@echo expect 1 conflict message
	lark -cdiws Parser.lrk

Tree.h Tree.c Tree.TS yyTree.h: c.ast
	ast -cdimFR4k +D c.ast

Trafo.h Trafo.c yyTrafo.h: c.pum Tree.TS
	puma -cdi c.pum


main.o: main.c Scanner.h Tree.h Parser.h Trafo.h deftab.h
Scanner.o: Scanner.c Scanner.h Tree.h deftab.h
Parser.o: Parser.c Parser.h Scanner.h Tree.h Trafo.h deftab.h
Tree.o: Tree.c Tree.h yyTree.h
Trafo.o: Trafo.c Trafo.h Tree.h deftab.h yyTrafo.h
deftab.o: deftab.c deftab.h Tree.h Trafo.h


c-ast.html: Tree.TS
	ast2html -n "Abstract Syntax for C" -Pc

CPPFLAGS = -undef -D__linux__ -D__i386__ -DNDEBUG \
	   -D__signed__= -D__inline__= -D__inline= \
	   -D__const__=const -D__const=const

CPP	= /lib/cpp -lang-c $(CPPFLAGS)

test:	test1

test1:
	-for f in *.c; do echo +++ $$f; $(CPP) $(CFLAGS) $$f | main; done

lint:	$(SOURCES)
	lint $(CFLAGS) -b -u $(SOURCES)

.depend: $(SOURCES)
	gcc $(CFLAGS) -MM $(SOURCES) | \
	sed -e 's;\.\./reuse/[^ ]*;;g' \
	    -e '/^ *.$$/d' \
	    -e 's/   */ /g' > .depend

clean:
	rm -f core* *.o *.dbg Scanner.[hc] Parser.[hc] Tree.[hc] Trafo.[hc] \
		main c.rex Parser.lrk Scanner.rpp yy* Tree.TS .depend gmon.out

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
