all:	ScanDrv.mod Scanner.def Scanner.mod Source.def Source.mod

clean:
	rm -f core* *.def *.mod

.SUFFIXES:	.def .mod .md .mi

.md.def:
	ln $*.md $*.def

.mi.mod:
	ln $*.mi $*.mod
