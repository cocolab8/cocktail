MC	= mc
MC_CMD	= $(MC) -d ../../../reuse/src

SOURCES	= Scanner.md Scanner.mi Parser.md Parser.mi ParserDrv.mi

ParserDrv:	$(SOURCES)
	echo p ParserDrv | $(MC_CMD)

Scanner.rpp Parser.lrk:	modula.prs
	lpp -xzj modula.prs

modula.rex:	modula.scn Scanner.rpp
	rpp < modula.scn > modula.rex

Scanner.md Scanner.mi:	modula.rex
	rex -d modula.rex

Parser.md Parser.mi ParserDrv.mi:	Parser.lrk
	lark -dips Parser.lrk

try:	ParserDrv
	sed "s/_//g" < Parser.mi | ParserDrv

clean:
	rm -f Scanner.m? Parser.m? ParserDrv.mi *.bak
	rm -f core *.[dor] _Debug ParserDrv modula.rex Parser.lrk Scanner.rpp
