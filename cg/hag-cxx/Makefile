LIB	= $(HOME)/lib
INCDIR	= $(LIB)/cplusinc
CFLAGS	= -I$(INCDIR)
CC	= g++

Main:	Main.o Tree.o Eval.o
	$(CC) -o Main Main.o Eval.o Tree.o $(LIB)/librucpp.a

Main.o:	Tree.h Eval.h

Tree.h Tree.cxx Eval.h Eval.cxx: hag
	cg -c++dimDI0 hag

test:
	cg -0c++dimwDI hag
	$(MAKE) clean_bin Main
	echo 5 4 3 2 1 0 | Main
	cg -0c++IT hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0c++IX hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0c++IY hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0c++IZ hag
	$(MAKE) clean_bin Main
	echo F > TraceTab
	echo 2 0 | Main
	cg -0c++ITU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0c++IXU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0c++IYU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0c++IZU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main

clean:
	rm -f TraceTab Main Tree.* Eval.* Main.o yyTree.h core*

clean_bin:
	rm -f Main *.o

.SUFFIXES:	.cxx .o

.cxx.o:
	$(CC) $(CFLAGS) -c $*.cxx
