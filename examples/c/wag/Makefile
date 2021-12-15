LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR)
CC	= cc -g
CPPC	= g++

SOURCES	= Scanner.h Scanner.c Parser.h Parser.c Tree.h Tree.c Semantic.h Semantic.c \
	  Types.h Types.c ICode.h ICode.c ICodeInt.h ICodeInt.c minilax.c

OBJS	= minilax.o Scanner.o Parser.o Tree.o Types.o Semantic.o ICode.o ICodeInt.o

all:	minilax
	time minilax < in1
	if test -f in5; then time minilax < in5; fi

run:	minilax
	$(MAKE) all

minilax-cpp:	
	$(CPPC) $(CFLAGS) -c *.c
	$(CPPC) -o minilax $(OBJS) $(LIB)/librugpp.a -lm

minilax:	$(OBJS)
	$(CC) -o minilax $(OBJS) $(LIB)/libreuse.a -lm

Scanner.rpp Parser.lrk:	minilax.prs
	lpp -cxzj minilax.prs

minilax.rex:	minilax.scn Scanner.rpp
	rpp < minilax.scn > minilax.rex

Scanner.h Scanner.c:	minilax.rex
	rex -cd minilax.rex

Parser.h Parser.c:	Parser.lrk
	lark -cdis Parser.lrk

Tree.h Tree.c:	minilax.cg
	ast -cdimRDIL minilax.cg

Semantic.h Semantic.c:	minilax.cg
	ag -cDIL minilax.cg

Tree.TS:	minilax.cg
	echo SELECT AbstractSyntax Output | cat - minilax.cg | ast -cL4

Types.h Types.c:	Types.pum Tree.TS
	puma -cdipku Types.pum

ICode.h ICode.c:	ICode.pum Tree.TS
	puma -cdiu ICode.pum

Scanner.o:	Scanner.h
Parser.o:	Parser.h Tree.h Scanner.h
Semantic.o:	Semantic.h Tree.h Types.h ICodeInt.h
Tree.o:		Tree.h
Types.o:	Types.h Tree.h Semantic.h
ICode.o:	ICode.h Tree.h ICodeInt.h
minilax.o:	Scanner.h Parser.h Tree.h Semantic.h Types.h ICode.h ICodeInt.h

lint:	$(SOURCES)
	lint $(CFLAGS) -u *.c

test:	$(SOURCES)
	cg -cdimRDI0 minilax.cg
	make minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.c
	size Semantic.o
	cg -cdimRDI09 minilax.cg
	make minilax LIB=$(LIB)
	time minilax < in5
	cg -cdimRDI minilax.cg
	make minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.c
	size Semantic.o
	cg -cdimRDI9 minilax.cg
	make minilax LIB=$(LIB)
	time minilax < in5

test2:	$(SOURCES)
	cg -cdimRDIL minilax.cg
	make minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.c
	size Semantic.o
	cg -cdimRDIL9 minilax.cg
	make minilax LIB=$(LIB)
	time minilax < in5

clean:
	rm -f Scanner.? Parser.? Tree.? Semantic.? Types.? ICode.? *.TS yy*.h *.o
	rm -f core* _Debug minilax minilax.rex Parser.lrk Scanner.rpp

.SUFFIXES:	.c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
