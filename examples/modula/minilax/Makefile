MC	= mc
MC_CMD	= $(MC) -d ../../../reuse/src -d ../../reuse/src

SOURCES	= Scanner.md Scanner.mi Parser.md Parser.mi \
	  Tree.md Tree.mi Semantic.md Semantic.mi \
	  Types.md Types.mi Defs.md Defs.mi \
	  ICode.md ICode.mi ICodeInt.md ICodeInt.mi minilax.mi

all:	minilax
	time minilax < in1
	if test -f in5; then time minilax < in5; fi

minilax:	$(SOURCES)
	echo p minilax | $(MC_CMD)

Scanner.rpp Parser.lrk:	minilax.prs
	lpp -xzj minilax.prs

minilax.rex:	minilax.scn Scanner.rpp
	rpp < minilax.scn > minilax.rex

Scanner.md Scanner.mi:	minilax.rex
	rex -d minilax.rex

Parser.md Parser.mi:	Parser.lrk
	lark -dis Parser.lrk

Tree.md Tree.mi:	minilax.cg
	ast -dimRDI0 minilax.cg

Semantic.md Semantic.mi:	minilax.cg
	ag -DI0 minilax.cg

Defs.md Defs.mi Defs.TS:	Defs.cg
	ast -dim4 Defs.cg

Tree.TS:	minilax.cg
	echo SELECT AbstractSyntax Output | cat - minilax.cg | ast -4

Types.md Types.mi:	Types.pum Tree.TS
	puma -dipku Types.pum

ICode.md ICode.mi:	ICode.pum Tree.TS Defs.TS
	puma -diu ICode.pum

test:	$(SOURCES)
	cg -dimRDI09 minilax.cg
	$(MAKE) clean_bin minilax
	time minilax < in5
	wc Semantic.mi
	size Semantic.o
	cg -dimRDI9 minilax.cg
	$(MAKE) clean_bin minilax
	time minilax < in5
	wc Semantic.mi
	size Semantic.o
	cg -dimRDIL9 minilax.cg
	$(MAKE) clean_bin minilax
	time minilax < in5
	wc Semantic.mi
	size Semantic.o
	cg -dimRDIK9 minilax.cg
	$(MAKE) clean_bin minilax
	time minilax < in5
	wc Semantic.mi
	size Semantic.o

test2:	$(SOURCES)
	@ echo "*** expect compile errors at options IL,I,IL,IK: inconsistent options for ast and ag"
	cg -dimRD	minilax.cg
	cg -I		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I0		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	-cg -IL		minilax.cg; $(MAKE) clean_bin minilax \
				MC_CMD="$(MC_CMD) -list /home/grosch/mybin/list"
	cg -IK		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -dimRD0	minilax.cg
	-cg -I		minilax.cg; $(MAKE) clean_bin minilax \
				MC_CMD="$(MC_CMD) -list /home/grosch/mybin/list"
	cg -I0		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	-cg -IL		minilax.cg; $(MAKE) clean_bin minilax \
				MC_CMD="$(MC_CMD) -list /home/grosch/mybin/list"
	-cg -IK		minilax.cg; $(MAKE) clean_bin minilax \
				MC_CMD="$(MC_CMD) -list /home/grosch/mybin/list"
	cg -dimRDL	minilax.cg
	cg -ID		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I0		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IL		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IK		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1

trace:	$(SOURCES)
	cg -dimRwDI09	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I09T	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I09YZ	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I09X	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I09Y	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I09Z	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -dimRwDI9	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I9T		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I9YZ	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I9X		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I9Y		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -I9Z		minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -dimRwDIL9	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IL9T	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IL9YZ	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IL9X	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IL9Y	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IL9Z	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -dimRwDIK9	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IK9T	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IK9YZ	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IK9X	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IK9Y	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1
	cg -IK9Z	minilax.cg; $(MAKE) clean_bin minilax; minilax < in1

clean:
	rm -f Scanner.m? Parser.m? Tree.m? Semantic.m? Defs.m? Types.m? ICode.m?
	rm -f core* *.TS *.bak *.[dor] _Debug minilax minilax.rex Parser.lrk Scanner.rpp
	rm -f yyNode yySource

clean_bin:
	rm -f minilax *.[dor]

