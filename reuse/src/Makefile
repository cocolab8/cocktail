OPT	= -O
SYS	= UNIX
CFLAGS	= $(OPT) -I. -I.. -I../.. -D$(SYS)
CC	= cc
MC	= mc
M2FLAGS	= -cuw

# targets

MC:	rSystem.o TclTk.o Pointers.o Errors.mi
	rm -f Main
	echo p Main | $(MC)

M2C:	rSystem.o Errors.mi
	rm -f Main
	for file in `ls *.md`; do ln $$file `basename $$file .md`.def; done
	for file in `ls *.mi`; do ln $$file `basename $$file .mi`.mod; done
	make Main -f MakefileM2C

m2c:	Errors.mi
	cp rSystem.c rSystem.i ratc.h rString.h systimes.h TclTk.c ../m2c
	cp Pointers.c Pointers.h rIntType.h ../m2c
	make sources M2FLAGS="$(M2FLAGS) -o../m2c" -f ../m2c/Makefile
	mv ../m2c/IO.c /tmp	; sed -f dos.sed < /tmp/IO.c > ../m2c/IO.c
	mv ../m2c/Strings.c /tmp; sed -f dos.sed < /tmp/Strings.c > ../m2c/Strings.c
	@echo +++ expect 2 errors: dos.sed should have added 3 lines in 2 files
	-diff /tmp/IO.c ../m2c/IO.c
	-diff /tmp/Strings.c ../m2c/Strings.c
	rm /tmp/IO.c /tmp/Strings.c

m:	Errors.mi
	cp rSystem.c rSystem.i ratc.h rString.h systimes.h TclTk.c ../m
	cp Pointers.c Pointers.h rIntType.h ../m
	make sources M2FLAGS="-c -o../m" -f ../m/Makefile
	mv ../m/IO.c /tmp	; sed -f dos.sed < /tmp/IO.c > ../m/IO.c
	mv ../m/Strings.c /tmp	; sed -f dos.sed < /tmp/Strings.c > ../m/Strings.c
	@echo +++ expect 2 errors: dos.sed should have added 3 lines in 2 files
	-diff /tmp/IO.c ../m/IO.c
	-diff /tmp/Strings.c ../m/Strings.c
	rm /tmp/IO.c /tmp/Strings.c

sources:	# needed for m2c

test:	rSystem.o Pointers.o
	echo p DynArrDr	| mc
	echo p IODrv	| mc
	echo p rMemoryD	| mc
	echo p RelDrv	| mc
	echo p SetsDrv	| mc
	echo p SysIODrv	| mc
	echo p ErrorsDr	| mc

lint:
	lint -u *.c

CLEAN:	clean
	rm -f *.[dor] *.sym *.def *.mod

clean:
	rm -f *Drv.[dor] *Dr.[dor] *D.[dor] *Drv.sym *Drv *Dr rMemoryD Main.[dor] Main t

.c.o:
	$(CC) $(CFLAGS) -m32 -c $*.c
