MC	= mc
MC_CMD	= $(MC) -d ../../../reuse/src -d ../../reuse/src

SOURCES	= Scanner.md Scanner.mi Parser.md Parser.mi \
	  Tree.md Tree.mi Semantic.md Semantic.mi \
	  Types.md Types.mi ICode.md ICode.mi ICodeInt.md ICodeInt.mi minilax.mi

all:	minilax
	time minilax < in1
	if test -f in5; then time minilax < in5; fi

test:	minilax
	time minilax < in5
	wc Semantic.mi
	size Semantic.o

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
	ast -dimRDIL minilax.cg

Semantic.md Semantic.mi:	minilax.cg
	ag -DIL minilax.cg

Tree.TS:	minilax.cg
	echo SELECT AbstractSyntax Output | cat - minilax.cg | ast -L4

Types.md Types.mi:	Types.pum Tree.TS
	puma -dipku Types.pum

ICode.md ICode.mi:	ICode.pum Tree.TS
	puma -diu ICode.pum

clean:
	rm -f Scanner.m? Parser.m? Tree.m? Semantic.m? Types.m? ICode.m? *.TS *.bak
	rm -f core* *.[dor] _Debug minilax minilax.rex Parser.lrk Scanner.rpp
