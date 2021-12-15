# $Id: Makefile,v 1.1.1.1 1999/07/05 17:00:33 howie Exp $
# $Log: Makefile,v $
# Revision 1.1.1.1  1999/07/05 17:00:33  howie
# cron import

include ../../../Makefile.config

#-----------------------------------------------------------------------
# Internal variables

# Test length.  This is usually the number of times around a loop
# which generates random test data.
TEST_TIME	= 10000
# Test size.  Used for e.g. IdentDrv where an additional size argument
# is required.  usually TEST_TIME >> TEST_SIZE
TEST_SIZE	= 2000

# Number of parallel threads to run (for thread safety check)
THREADS		= 5

#-----------------------------------------------------------------------
# Variables
# These may need to be changed to suit your environment

# Location of class files:
CLS_PATH	= ..$(JDK1)

# Options given to java compiler:
# Sun javac JDK 1.2
JFLAGS		= -d .. -classpath "$(CLS_PATH)" -deprecation -g # -Xdepend
# jikes
#JFLAGS		= -classpath $(CLS_PATH) -depend
# kaffe
#JFLAGS		= -classpath $(CLS_PATH)

#-----------------------------------------------------------------------
# Source files:
SRC =	DynArrDrv.java \
	ErrorDrv.java \
	IODrv.java \
	IdentDrv.java \
	SetDrv.java \
	TestDriver.java

all:	test

#	If ../reuse.jar is present then so is ../de/cocolab/reuse, which
#	is where we actually get the classes from.
compiled: $(SRC) ../reuse.jar
	$(JAVAC) $(JFLAGS) $(SRC)
	touch compiled

test:	compiled
#	Run all the tests in a Java envelope which captures the output into
#	a file.
	$(JAVA) -classpath $(CLS_PATH) de.cocolab.reuse.test.TestDriver
#	Now compare files with a previous set of results.
	$(DIFF) results.out results/results.out
	$(DIFF) ErrorDrv.500 results/ErrorDrv.500
	$(DIFF) ErrorDrv.ofl results/ErrorDrv.ofl

testThreads:	IODrv.testThreads IdentDrv.testThreads

DynArrDrv.test:	compiled
	@echo .
	@echo Trying DynArrDrv ...
	$(JAVA) -classpath $(CLS_PATH) de.cocolab.reuse.test.DynArrDrv

ErrorDrv.test:	compiled
	@echo .
	@echo Trying ErrorDrv ...
	$(JAVA) -classpath $(CLS_PATH) de.cocolab.reuse.test.ErrorDrv

IODrv.test:	compiled
	@echo .
	@echo Trying IODrv ...
	$(JAVA) -classpath $(CLS_PATH) de.cocolab.reuse.test.IODrv

IODrv.testThreads:	compiled
	@echo .
	@echo Trying IODrv ...
	$(JAVA) -classpath $(CLS_PATH) de.cocolab.reuse.test.IODrv $(TEST_TIME) $(THREADS)

SetDrv.test:	compiled
	@echo .
	@echo Trying SetDrv ...
	$(JAVA) -classpath $(CLS_PATH) de.cocolab.reuse.test.SetDrv

IdentDrv.test:	compiled
	@echo .
	@echo Trying IdentDrv ...
	$(JAVA) -classpath $(CLS_PATH) de.cocolab.reuse.test.IdentDrv

IdentDrv.testThreads:	compiled
	@echo .
	@echo Trying IdentDrv ...
	$(JAVA) -classpath $(CLS_PATH) de.cocolab.reuse.test.IdentDrv  $(TEST_TIME) $(TEST_SIZE) $(THREADS)

clean:
	rm -f compiled *~ t results.out ErrorDrv.ofl ErrorDrv.500
	rm -rf ../de/cocolab/reuse/test
