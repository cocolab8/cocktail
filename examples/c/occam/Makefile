LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CC	= cc
#
#	Makefile for occam recogniser - pjmp @ hrc 22/7/86
#

#
# This work is in the public domain.
# It was written by Peter Polkinghorne in 1986 & 1989 at
# GEC Hirst Research Centre, Wembley, England.
# No liability is accepted or warranty given by the Author,
# still less my employers.
#

CFLAGS	= -O -I$(INCDIR)
LFLAGS	= -cdis

all:		occam2 occam

occam:		occam.o occamlex.o
		$(CC) -o occam occam.o occamlex.o $(LIB)/libreuse.a

occam.c:        occam.lrk
		lark $(LFLAGS) occam.lrk
		awk -f lex.awk < occam.lrk > lex.h
		mv Parser.c occam.c

occam2:		occam2.o occam2lx.o
		$(CC) -o occam2 occam2.o occam2lx.o $(LIB)/libreuse.a

occam2.c:       occam2.lrk
		lark $(LFLAGS) occam2.lrk
		awk -f lex.awk < occam2.lrk > lex2.h
		mv Parser.c occam2.c

try:		occam
		time occam < test1
		time occam < test2
		time occam < test3
		time occam < test4

clean:
	rm -f *.o occam2.c occam.c lex2.h lex.h Parser.h occam occam2

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
