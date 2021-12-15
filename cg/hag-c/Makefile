LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR)
CC	= cc

Main:	Main.o Tree.o Eval.o
	$(CC) -o Main Main.o Eval.o Tree.o $(LIB)/libreuse.a

Main.o:	Tree.h Eval.h

Tree.h Tree.c Eval.h Eval.c: hag
	cg -cdimDI0 hag

lint:	Tree.h Tree.c Eval.h Eval.c
	lint $(CFLAGS) -u *.c

test:
	cg -0cdimwDI hag
	$(MAKE) clean_bin Main
	echo 5 4 3 2 1 0 | Main
	cg -0cIT hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0cIX hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0cIY hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0cIZ hag
	$(MAKE) clean_bin Main
	echo F > TraceTab
	echo 2 0 | Main
	cg -0cITU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0cIXU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0cIYU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main
	cg -0cIZU hag
	$(MAKE) clean_bin Main
	echo 2 0 | Main

clean:
	rm -f TraceTab Main Tree.* Eval.* Main.o yyTree.h core*

clean_bin:
	rm -f Main *.o

.SUFFIXES:	.c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
