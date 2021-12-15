LIB	= $(HOME)/lib
INCDIR	= $(LIB)/cplusinc
CFLAGS	= -I$(INCDIR)
CPPC	= g++

Main:	Main.o Tree.o Eval.o
	$(CPPC) -o Main Main.o Eval.o Tree.o $(LIB)/librucpp.a

Main.o:	Tree.h Eval.h

Tree.h Tree.cxx Eval.h Eval.cxx: hag
	cg -+dimDI0 hag

test:
	cg -0+dimwDI hag
	$(MAKE) clean_bin Main
	echo 5 4 3 2 1 0 | Main
	cg -0+IT hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0+IX hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0+IY hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0+IZ hag
	$(MAKE) clean_bin Main
	echo F > TraceTab
	echo 2 0 | Main
	cg -0+ITU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0+IXU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0+IYU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0+IZU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main

clean:
	rm -f TraceTab Main Tree.*[hcox] Eval.*[hcox] Main.o yyTree.h core*

clean_bin:
	rm -f Main *.o

.SUFFIXES:	.cxx .o

.cxx.o:
	$(CPPC) $(CFLAGS) -c $*.cxx
