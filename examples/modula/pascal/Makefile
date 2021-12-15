MC	= mc
MC_CMD	= $(MC) -d ../../../reuse/src

SOURCES	= Scanner.md Scanner.mi Parser.md Parser.mi ParserDrv.mi

ParserDrv:	$(SOURCES)
	echo p ParserDrv | $(MC_CMD)

Scanner.rpp Parser.lrk:	pascal.prs
	lpp -xzj pascal.prs

pascal.rex:	pascal.scn Scanner.rpp
	rpp < pascal.scn > pascal.rex

Scanner.md Scanner.mi:	pascal.rex
	rex -d pascal.rex

Parser.md Parser.mi ParserDrv.mi:	Parser.lrk
	lark -dips Parser.lrk

clean:
	rm -f Scanner.m? Parser.m? ParserDrv.mi ParserDrv
	rm -f core *.[dor] _Debug pascal.rex Parser.lrk Scanner.rpp *.bak
