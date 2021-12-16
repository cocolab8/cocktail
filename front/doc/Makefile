# $Id: Makefile,v 2.13 2016/07/28 08:18:07 grosch Exp $

LIB		= $(HOME)/lib
INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= $(INSTALL)
INSTALL_DATA	= $(INSTALL) -m 644
FIX_NROFF = sed -e 's/.//g' -e 's/\[[0-4]*m//g' -e 's/­/-/'

install:	bnf.cat bnf.syn $(LIB)/lalr
	$(INSTALL_DATA) bnf.cat  $(LIB)/lalr
	$(INSTALL_DATA) bnf.syn  $(LIB)/lalr

image:	bnf.cat bnf.syn $(LIB)/lalr
	$(INSTALL_DATA) bnf.cat  $(LIB)/lalr
	$(INSTALL_DATA) bnf.syn  $(LIB)/lalr

# installation directories

$(LIB)/lalr:
	mkdir -p $(LIB)/lalr

bnf.cat:	bnf.1
	nroff -man < bnf.1 | $(FIX_NROFF) | col > bnf.cat

print:
	troff -man bnf.1

clean:
	rm -f bnf.cat
