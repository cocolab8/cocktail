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
	lpp -+xzj minilax.prs

minilax.rex: minilax.scn Scanner.rpp
	rpp < minilax.scn > minilax.rex

Scanner.h Scanner.cxx: minilax.rex
	rex -+d minilax.rex

Parser.h Parser.cxx: Parser.lrk
	lark -+dis Parser.lrk

Tree.h Tree.cxx: minilax.cg
	ast -+dimRDI0 minilax.cg

Semantic.h Semantic.cxx: minilax.cg
	ag -+DI0 minilax.cg

Defs.h Defs.cxx Defs.TS: Defs.cg
	ast -+dim4 Defs.cg

Tree.TS: minilax.cg
	echo SELECT AbstractSyntax Output | cat - minilax.cg | ast -+4

Types.h Types.cxx: Types.pum Tree.TS
	puma -+dipku Types.pum

ICode.h ICode.cxx: ICode.pum Tree.TS Defs.TS
	puma -+diu ICode.pum

# dependencies

Defs.o:		Defs.cxx Defs.h Tree.h Types.h ExtTree.h
ICode.o:	ICode.cxx ICode.h Tree.h Defs.h Types.h ICodeInt.h
ICodeInt.o:	ICodeInt.cxx ICodeInt.h
Parser.o:	Parser.cxx Parser.h Scanner.h Tree.h Defs.h Types.h \
		ExtTree.h
Scanner.o:	Scanner.cxx Scanner.h
Semantic.o:	Semantic.cxx Semantic.h Tree.h Defs.h Types.h \
		ExtTree.h ExtDefs.h
Tree.o:		Tree.cxx Tree.h Defs.h Types.h
Types.o:	Types.cxx Types.h Tree.h Defs.h ExtTree.h
minilax.o:	minilax.cxx Parser.h Scanner.h Tree.h Defs.h Types.h \
		ExtTree.h Semantic.h ExtDefs.h ICode.h ICodeInt.h

# tests

test:	$(SOURCES)
	cg -+dimRDI0 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.cxx
	size Semantic.o
	cg -+dimRDI09 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5
	cg -+dimRDI minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.cxx
	size Semantic.o
	cg -+dimRDI9 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5
	cg -+dimRDIL minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.cxx
	size Semantic.o
	cg -+dimRDIL9 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5
	cg -+dimRDIK minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	tcsh -c "time minilax < in5; time minilax < in5; time minilax < in5; time minilax < in5"
	wc Semantic.cxx
	size Semantic.o
	cg -+dimRDIK9 minilax.cg
	$(MAKE) clean_bin minilax LIB=$(LIB)
	time minilax < in5

test2:	$(SOURCES)
	@ echo "*** expect compile errors at options IL,I,IL,IK: inconsistent options for ast and ag"
	cg -+dimRD	minilax.cg
	cg -+I		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I0		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	-cg -+IL	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	cg -+DIK	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+dimRD0	minilax.cg
	-cg -+I		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	cg -+I0		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	-cg -+IL	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	-cg -+DIK	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB)
	cg -+dimRDL	minilax.cg
	cg -+I		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I0		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IL		minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+DIK	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1

trace:	$(SOURCES)
	cg -+dimRwDI09	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I09T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I09YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I09X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I09Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I09Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+dimRwDI9	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I9T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I9YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I9X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I9Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+I9Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+dimRwDIL9	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IL9T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IL9YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IL9X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IL9Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IL9Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+dimRwDIK9	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IK9T	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IK9YZ	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IK9X	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IK9Y	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1
	cg -+IK9Z	minilax.cg; $(MAKE) clean_bin minilax LIB=$(LIB); minilax < in1

.depend: $(SOURCES)
	gcc -I$(INCDIR) -MM $(SOURCES) | sed -e 's;/home/[^ ]*;;g' -e '/^ *.$$/d' > .depend

clean:
	rm -f Scanner.*[hcx] Parser.*[hcx] Tree.*[hcx] Semantic.*[hcx] \
	   Defs.*[hcx] Types.*[hcx] ICode.*[hcx] *.TS yyNode .depend \
	   core* *.dbg minilax minilax.rex Parser.lrk Scanner.rpp yy*.h *.o

clean_bin:
	rm -f minilax *.o

.SUFFIXES: .cxx .o

.cxx.o:
	$(CPPC) $(CFLAGS) -c $*.cxx
