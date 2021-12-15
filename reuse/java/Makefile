# $Id: Makefile,v 1.1.1.4.2.1 1999/06/18 07:40:08 howie Exp $
# $Log: Makefile,v $
# Revision 1.1.1.4.2.1  1999/06/18 07:40:08  howie
# few cosmetic corrections, changed name of author, changed contents of javadoc @version tag
#
# @author
# <A HREF="mailto:tcn@melvaig.co.uk">Trevor Nash</A>,
# <A HREF="http://www.melvaig.co.uk">Melvaig Software Engineering Limited</A><NL>
# <A HREF="mailto:cocktail@hwy.de">Dr. Thomas M&uuml;ller</A>
# @version $Name:  $
# Revision 1.1.1.4  1999/06/17 08:00:57  howie
# cron import
#

include ../../Makefile.config

#-----------------------------------------------------------------------
# Internal variables

# Location of class files:
CLS_PATH	= .$(JDK1)

# Package name in directory notation.  Needed to construct paths.
PCKSUBDIR	= de/cocolab/reuse

# Options given to java compiler:
JAVAOPTIONS	= -d . -classpath "$(CLS_PATH)" -g

# Directory for generated documentation:
DOCDIR		= doc.html

# Directory for file reuse.jar:
LIB		= $(CT)/lib

#-----------------------------------------------------------------------
# From DynArrayX.base all implementations of DynArray for basic types
# will be generated (DynArrayObject is not generated).
# Source files:
SRC = \
	CocktailError.java \
	CocktailReader.java \
	CocktailWriter.java \
	Comparable.java \
	DynArrayX.base \
	DynArrayObject.java \
	Errors.java \
	FatalError.java \
	General.java \
	Global.java \
	HasPosition.java \
	Ident.java \
        IdentTable.java \
	MaskedException.java \
	Position.java \
	Set.java \
	Sort.java \
	TestDataGenerator.java \
	TrafoAbortException.java

# Generated Java source files
JAVAGEN	= \
	DynArrayBoolean.java \
	DynArrayByte.java \
	DynArrayChar.java \
	DynArrayDouble.java \
	DynArrayFloat.java \
	DynArrayInt.java \
	DynArrayLong.java \
	DynArrayShort.java

# Java Source files (some generated):
JAVASRC = \
	CocktailError.java \
	CocktailReader.java \
	CocktailWriter.java \
	Comparable.java \
	DynArrayObject.java \
	Errors.java \
	FatalError.java \
	General.java \
	Global.java \
	HasPosition.java \
	Ident.java \
	IdentTable.java \
	MaskedException.java \
	Position.java \
	Set.java \
	Sort.java \
	TestDataGenerator.java \
	TrafoAbortException.java \
	$(JAVAGEN)

# Targets
#
# 'doc' is not a dependency of 'reuse' because it is dependent on JDK 1.2:
# we do not want it failing when testing on platforms other than this.
# Besides, we do not regenerate the documentation for *every* source change:
# this is dangerous unless you are going to check it all every time as well.

# Default target: make a jar file for the binary distribution
#
reuse:	reuse.jar

reuse.jar: $(JAVASRC)
	$(JAVAC) $(JAVAOPTIONS) $(JAVASRC)
# classes must be jar'ed with the complete path name matching the package name.
	$(JAR) reuse.jar de

# Install target: rebuild jar if necessary, check that documentation has
# been generated.
#
install: reuse.jar $(LIB) # doc.html
#	If make says 'do not know how to make doc.html' then you need to
#	'make doc' and check that the result is what you want.
#	Could just say 'doc', but that would run Javadoc again with no
#	guarantee the output will be identical.
#
#	jar file
	mkdir -p $(LIB)
	cp reuse.jar $(LIB)

to_be_changed:
#
#	sources
	mkdir -p $(CT)/reuse/java
	cp $(SRC) Makefile $(CT)/reuse/java
#
#	documentation
	mkdir -p $(CT)/doc.html
	cp -R doc.html/* $(CT)/doc.html


# Make the .class files (e.g. if there is no 'jar' utility)
#
class:	$(JAVASRC)
	$(JAVAC) $(JAVAOPTIONS) $(JAVASRC)

# Make sources (the DynArray classes are made from a template)
#
src:	$(JAVASRC)

# Make the documentation
#
doc:	$(JAVASRC) doc.html
#
#	run javadoc, supplying various arguments to tailor the output.
#
#	The use of -J to specify a classpath to find javadoc itself is necessary
#	because we want to replace the default resources/standard.properties
#	with the one under ./com/sun/tools/javadoc/resources.  This
#	is found via the class path, and if tools.jar is not specified too javadoc
#	will not run.  The modified file lets us change some of the generated
#	HTML.
#
#	NB.  While the rest of the Makefile is designed to operate under many
#	different JDKs, this part is reliant on the version of javadoc that
#	comes with Sun's JDK 1.2.
#
#	Copy source to directory with full package name in tree
#	This is useful as a record of the state of the source code at the
#	time the documentation was generated.
	mkdir -p src/$(PCKSUBDIR)/test
	cp $(JAVASRC) package.html src/$(PCKSUBDIR)
	cp test/*.java test/package.html src/$(PCKSUBDIR)/test
#
	javadoc -d $(DOCDIR) \
		-overview overview.html \
		-windowtitle "Cocktail" \
		-doctitle "Cocktail" \
		-header "<A href=\"http://www.cocolab.de\" target="_top">CoCoLab</A>" \
		-footer "<A href=\"http://www.cocolab.de\" target="_top">CoCoLab</A>" \
		-bottom "&copy; Copyright CoCoLab 2000" \
		-public -version \
		-classpath "$(CLS_PATH)" -sourcepath "src" \
		-J-classpath "-J$(CLS_PATH)$(CPS)$(JAVADOCPATH)" \
		de.cocolab.reuse de.cocolab.reuse.test

doc.html:
	mkdir doc.html

#-----------------------------------------------------------------------
# Generate the DynArray classes from a common template.
# This assumes we are either on Unix or have the 'sed' from the cocktail
# 'util' directory.  You may need to put cocktail/util on your path.
#
DynArrayBoolean.java: DynArrayX.base
	sed -e s/_X/Boolean/g -e s/_x/boolean/g <$? >$@

DynArrayByte.java: DynArrayX.base
	sed -e s/_X/Byte/g -e s/_x/byte/g <$? >$@

DynArrayChar.java:    DynArrayX.base
	sed -e s/_X/Char/g -e s/_x/char/g <$? >$@

DynArrayDouble.java:  DynArrayX.base
	sed -e s/_X/Double/g -e s/_x/double/g <$? >$@

DynArrayFloat.java:   DynArrayX.base
	sed -e s/_X/Float/g -e s/_x/float/g <$? >$@

DynArrayInt.java:     DynArrayX.base
	sed -e s/_X/Int/g -e s/_x/int/g <$? >$@

DynArrayLong.java:    DynArrayX.base
	sed -e s/_X/Long/g -e s/_x/long/g <$? >$@

DynArrayShort.java:   DynArrayX.base
	sed -e s/_X/Short/g -e s/_x/short/g <$? >$@


clean:
	rm -rf core* de src reuse.jar *~

clean_gen: clean
	rm -f $(JAVAGEN)
