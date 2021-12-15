LIB	= $(HOME)/lib
INCDIR	= $(LIB)/cplusinc
CFLAGS	= -I$(INCDIR)
CPPC	= g++ -g
LDFLAGS	= -lm $(LIB)/librucpp.a

SOURCES	= Scanner.h Scanner.cxx Parser.h Parser.cxx Tree.h Tree.cxx \
	  Semantic.h Semantic.cxx Types.h Types.cxx Defs.h Defs.cxx \
	  ICode.h ICode.cxx ICodeInt.h ICodeInt.cxx minilax.cxx

OBJS	= minilax.o Scanner.o Parser.o Tree.o \
	  Defs.o Types.o Semantic.o ICode.o ICodeInt.o

all:	minilax
	time minilax < in1
	if test -f in5; then time minilax < in5; fi

minilax: $(OBJS)
	$(CPPC) -o minilax $(OBJS) $(LDFLAGS)

Scanner.rpp Parser.lrk: minilax.prs
	lpp -c++xzj minilax.prs

minilax.rex: minilax.scn Scanner.rpp
	rpp < minilax.scn > minilax.rex

Scanner.h Scanner.cxx: minilax.rex
	rex -c++d minilax.rex

Parser.h Parser.cxx: Parser.lrk
	lark -c++dis Parser.lrk

Tree.h Tree.cxx: minilax.cg
	ast -c++dimRDI0 minilax.cg

Semantic.h Semantic.cxx: minilax.cg
	ag -c++DI0 minilax.cg

Defs.h Defs.cxx Defs.TS: Defs.cg
	ast -c++dim4 Defs.cg

Tree.TS: minilax.cg
	echo SELECT AbstractSyntax Output | cat - minilax.cg | ast -c++4

Types.h Types.cxx: Types.pum Tree.TS
	puma -c++dipku Types.pum

ICode.h ICode.cxx: ICode.pum Tree.TS Defs.TS
	puma -c++diu ICode.pum

# dependencies

Defs.o:		Defs.cxx Defs.h Tree.h Types.h
ICode.o:	ICode.cxx ICode.h Tree.h Defs.h Types.h ICodeInt.h
ICodeInt.o:	ICodeInt.cxx ICodeInt.h
Parser.o:	Parser.cxx Parser.h Scanner.h Tree.h Defs.h Types.h
Scanner.o:	Scanner.cxx Scanner.h
Semantic.o:	Semantic.cxx Semantic.h Tree.h Defs.h Types.h
Tree.o:		Tree.cxx Tree.h Defs.h Types.h
Types.o:	Types.cxx Types.h Tree.h Defs.h
minilax.o:	minilax.cxx Parser.h Scanner.h Tree.h Defs.h Types.h \
		Semantic.h ICode.h ICodeInt.h

# tests

test:	$(SOURCES)
	cg -c++dimRDI0 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.cxx
	size Semantic.o
	cg -c++dimRDI09 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5
	cg -c++dimRDI minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.cxx
	size Semantic.o
	cg -c++dimRDI9 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5
	cg -c++dimRDIL minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.cxx
	size Semantic.o
	cg -c++dimRDIL9 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5
	cg -c++dimRDIK minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.cxx
	size Semantic.o
	cg -c++dimRDIK9 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5

test2:	$(SOURCES)
	@ echo "*** expect compile errors at options IL,I,IL,IK: inconsistent options for ast and ag"
	cg -c++dimRD	minilax.cg
	cg -c++I	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I0	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	-cg -c++IL	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	cg -c++DIK	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++dimRD0	minilax.cg
	-cg -c++I	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	cg -c++I0	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	-cg -c++IL	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	-cg -c++DIK	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	cg -c++dimRDL	minilax.cg
	cg -c++I	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I0	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IL	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++DIK	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1

trace:	$(SOURCES)
	cg -c++dimRwDI09 minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I09T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I09YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I09X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I09Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I09Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++dimRwDI9	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I9T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I9YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I9X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I9Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++I9Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++dimRwDIL9 minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IL9T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IL9YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IL9X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IL9Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IL9Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++dimRwDIK9 minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IK9T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IK9YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IK9X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IK9Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -c++IK9Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1

.depend: $(SOURCES)
	gcc -I$(INCDIR) -MM $(SOURCES) | sed -e 's;/home/[^ ]*;;g' -e '/^ *.$$/d' > .depend

clean:
	rm -f Scanner.*[hcx] Parser.*[hcx] Tree.*[hcx] Semantic.*[hcx] \
	   Defs.*[hcx] Types.*[hcx] ICode.*[hcx] *.TS yyNode yySource .depend \
	   core* *.dbg minilax minilax.rex Parser.lrk Scanner.rpp yy*.h *.o

clean_bin:
	rm -f minilax *.o

.SUFFIXES: .cxx .o

.cxx.o:
	$(CPPC) $(CFLAGS) -c $*.cxx
