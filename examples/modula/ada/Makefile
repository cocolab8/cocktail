MC	= mc
MC_CMD	= $(MC) -d ../../../reuse/src

SOURCES	= Scanner.md Scanner.mi Parser.md Parser.mi ParserDrv.mi

ParserDrv:	$(SOURCES)
	echo p ParserDrv | $(MC_CMD)

Scanner.rpp Parser.lrk:	ada.prs
	lpp -xzj ada.prs

ada.rex:	ada.scn Scanner.rpp
	rpp < ada.scn > ada.rex

Scanner.md Scanner.mi:	ada.rex
	@echo expect 4 warnings
	rex -d ada.rex

Parser.md Parser.mi ParserDrv.mi:	Parser.lrk
	lark -dipns Parser.lrk

clean:
	rm -f Scanner.m? Parser.m? ParserDrv.mi ParserDrv
	rm -f core *.[dor] _Debug ada.rex Parser.lrk Scanner.rpp *.bak
