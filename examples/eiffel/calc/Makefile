SOURCES	= scanner.e parser.e parserdrv.e buffer.e

parserdrv:	$(SOURCES)
	ln -f Eiffel.pdl parserdrv.pdl
	ecc parserdrv

scanner.e buffer.e:	calc.rex
	rex -e calc.rex

parser.e parserdrv.e:	calc.lrk
	lark -eips calc.lrk

clean:
	rm -rf core* scanner.e parser.e parserdrv.e buffer.e *.txt *.dbg parserdrv \
		eansi.h *.err eif2bin etrace parserdrv.p*

