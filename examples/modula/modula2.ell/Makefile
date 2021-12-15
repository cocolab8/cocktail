MC	= mc
MC_CMD	= $(MC) -d ../../../reuse/src

SOURCES = Parser.md Parser.mi ParserDrv.mi Scanner.md Scanner.mi ScannerDrv.mi 

ParserDrv ScannerDrv:	$(SOURCES)
	echo p ScannerDrv | $(MC_CMD)
	echo p ParserDrv  | $(MC_CMD)

Scanner.md Scanner.mi ScannerDrv.mi:	modula.rex
	rex -sd modula.rex

Parser.md Parser.mi ParserDrv.mi:	modula.ell
	ell -dijpf modula.ell

clean:
	rm -f *Drv *.m? *.[dor] _Debug core*
