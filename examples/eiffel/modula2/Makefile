SOURCES	= scanner.e parser.e parserdrv.e buffer.e

parserdrv:	$(SOURCES)
	ln -f Eiffel.pdl parserdrv.pdl
	ecc parserdrv

scanner.e buffer.e:	modula.rex
	rex -e modula.rex

parser.e parserdrv.e:	modula.lrk
	lark -eips modula.lrk

clean:
	rm -rf core* *.e *.txt *.dbg parserdrv eansi.h *.err eif2bin etrace \
		parserdrv.p*

