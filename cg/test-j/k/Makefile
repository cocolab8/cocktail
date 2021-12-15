include ../../../Makefile.config

test:	Tree.class T.class
	$(JAVA) -classpath $(CLASSPATH) T > out 2>err
	$(DIFF) expected.out out
	$(DIFF) expected.err err

Tree.java:	k.ast
	ast -Jimk k.ast

Tree.class:	Tree.java
	$(JAVAC) -classpath $(CLASSPATH) Tree.java

T.class:	T.java Tree.java
	$(JAVAC) -classpath $(CLASSPATH) T.java

clean:
	rm -f *~ Tree* *.class out
