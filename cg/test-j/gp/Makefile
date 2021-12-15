include ../../../Makefile.config

test:	Tree.class T.class
	$(JAVA) -classpath $(CLASSPATH) T > out
	$(DIFF) expected.out out

Tree.java:	gp.ast
	ast -Jimgpw gp.ast

Tree.class:	Tree.java
	$(JAVAC) -classpath $(CLASSPATH) Tree.java

T.class:	T.java
	$(JAVAC) -classpath $(CLASSPATH) T.java

clean:
	rm -f *~ Tree* *.class tmp out
