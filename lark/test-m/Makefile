test1:	ParserDrv in1 in2 in3 out1 out2 out3
	ParserDrv < in1 > o && diff out1 o
	ParserDrv < in2 > o && diff out2 o
	ParserDrv < in3 > o && diff out3 o

ParserDrv:	Scanner.md Scanner.mi Parser.md Parser.mi ParserDrv.mi
	echo p ParserDrv | mc -d ../../reuse/src

Scanner.md Scanner.mi: d.rex
	rex -d d.rex

Parser.md Parser.mi ParserDrv.mi: d.lrk
	lark -dip d.lrk

do2:
	lark $(OPT) d.lrk
	rm -f Parser.o ParserDrv
	$(MAKE) ParserDrv
	ParserDrv < in1 > o

test2:
	rm -f Parser.[dor] ParserDrv.[dor]
	$(MAKE) do2 OPT=-dip0
	$(MAKE) do2 OPT=-i
	$(MAKE) do2 OPT=-i1
	$(MAKE) do2 OPT=-ir0
	$(MAKE) do2 OPT=-ir
	$(MAKE) do2 OPT=-ir1

clean:
	rm -f ParserDrv* core* *.[dor] *.dbg Parser.m? Scanner.m? o
