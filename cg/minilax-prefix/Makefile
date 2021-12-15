LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR)
CC	= cc -g
CPPC	= g++
LDFLAGS	= -lm $(LIB)/libreuse.a

SOURCES	= Scanner.h Scanner.c Parser.h Parser.c Tree.h Tree.c \
	  Semantic.h Semantic.c Types.h Types.c Defs.h Defs.c \
	  ICode.h ICode.c ICodeInt.h ICodeInt.c minilax.c

OBJS	= minilax.o Scanner.o Parser.o Tree.o \
	  Types.o Defs.o Semantic.o ICode.o ICodeInt.o

all:	minilax
	time minilax < in1
	if test -f in5; then time minilax < in5; fi

run:	minilax
	$(MAKE) all

minilax:	$(OBJS)
	$(CC) -o minilax $(OBJS) $(LDFLAGS)

minilax-cpp:	$(SOURCES)
	$(CPPC) $(CFLAGS) -c *.c
	$(CPPC) -o minilax $(OBJS) $(LIB)/librugpp.a -lm

Scanner.rpp Parser.lrk:	minilax.prs
	lpp -cxzj minilax.prs

minilax.rex:	minilax.scn Scanner.rpp
	rpp < minilax.scn > minilax.rex

Scanner.h Scanner.c:	minilax.rex
	rex -cd minilax.rex

Parser.h Parser.c:	Parser.lrk
	lark -cdis Parser.lrk

Tree.h Tree.c:	minilax.cg
	ast -cdimRDI0 minilax.cg

Semantic.h Semantic.c:	minilax.cg
	ag -cDI0 minilax.cg

Defs.h Defs.c Defs.TS:	Defs.cg
	ast -cdim4 Defs.cg

Tree.TS:	minilax.cg
	echo SELECT AbstractSyntax Output | cat - minilax.cg | ast -c4

Types.h Types.c:	Types.pum Tree.TS
	puma -cdipku Types.pum

ICode.h ICode.c:	ICode.pum Tree.TS Defs.TS
	puma -cdiu ICode.pum

Parser.o:	Parser.h Scanner.h Tree.h Types.h Defs.h
Semantic.o:	Semantic.h Tree.h Defs.h Types.h
Tree.o:		Tree.h
Defs.o:		Defs.h Tree.h
Types.o:	Tree.h Types.h Defs.h
ICode.o:	Tree.h Types.h ICodeInt.h
minilax.o:	Scanner.h Parser.h Tree.h Semantic.h Defs.h ICode.h ICodeInt.h Types.h

lint:	$(SOURCES)
	lint $(CFLAGS) -u *.c

test:	$(SOURCES)
	cg -cdimRDI0 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.c
	size Semantic.o
	cg -cdimRDI09 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5
	cg -cdimRDI minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.c
	size Semantic.o
	cg -cdimRDI9 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5
	cg -cdimRDIL minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.c
	size Semantic.o
	cg -cdimRDIL9 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5
	cg -cdimRDIK minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.c
	size Semantic.o
	cg -cdimRDIK9 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5

test2:	$(SOURCES)
	@ echo "*** expect compile errors at options IL,I,IL,IK: inconsistent options for ast and ag"
	cg -cdimRD	minilax.cg
	cg -cI		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI0		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	-cg -cIL	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	cg -cIK		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cdimRD0	minilax.cg
	-cg -cI		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	cg -cI0		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	-cg -cIL	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	-cg -cIK	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	cg -cdimRDL	minilax.cg
	cg -cI		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI0		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIL		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIK		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1

trace:	$(SOURCES)
	cg -cdimRwDI09	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI09T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI09YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI09X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI09Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI09Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cdimRwDI9	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI9T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI9YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI9X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI9Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cI9Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cdimRwDIL9	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIL9T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIL9YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIL9X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIL9Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIL9Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cdimRwDIK9	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIK9T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIK9YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIK9X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIK9Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -cIK9Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1

clean:
	rm -f Scanner.? Parser.? Tree.? Semantic.? Defs.? Types.? ICode.? *.TS
	rm -f core* *.dbg minilax minilax.rex Parser.lrk Scanner.rpp yy*.h *.o
	rm -f yyNode yySource

clean_bin:
	rm -f minilax *.o

.SUFFIXES:	.c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
