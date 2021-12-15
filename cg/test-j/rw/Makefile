include ../../../Makefile.config

test:	Tree.class T.class
	$(JAVA) -classpath $(CLASSPATH) T > out
	$(DIFF) expected.out out

Tree.java:	rw.ast
	ast -Jimrw rw.ast

Tree.class:	Tree.java
	$(JAVAC) -classpath $(CLASSPATH) Tree.java

T.class:	T.java Tree.java
	$(JAVAC) -classpath $(CLASSPATH) T.java

clean:
	rm -f *~ Tree* *.class tmp out
