MC	= mc
MC_CMD	= $(MC) -d ../../../reuse/src

SOURCES	= Scanner.md Scanner.mi Parser.md Parser.mi ParserDrv.mi

ParserDrv:	$(SOURCES)
	echo p ParserDrv | $(MC_CMD)

Scanner.rpp Parser.lrk:	modula3.prs
	lpp -xzj modula3.prs

modula3.rex:	modula3.scn Scanner.rpp
	rpp < modula3.scn > modula3.rex

Scanner.md Scanner.mi:	modula3.rex
	rex -di modula3.rex

Parser.md Parser.mi ParserDrv.mi:	Parser.lrk
	lark -dips Parser.lrk

clean:
	rm -f Scanner.m? Parser.m? ParserDrv.mi *.bak
	rm -f core *.[dor] _Debug ParserDrv modula3.rex Parser.lrk Scanner.rpp
