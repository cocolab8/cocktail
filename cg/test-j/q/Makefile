include ../../../Makefile.config

test:	Tree.class T.class
	$(JAVA) -classpath $(CLASSPATH) T < in > out
	-$(DIFF) expected.out out

testi:	Tree.class T.class
	$(JAVA) -classpath $(CLASSPATH) T

Tree.java:	q.ast
	ast -Jimq q.ast

Tree.class:	Tree.java
	$(JAVAC) -classpath $(CLASSPATH) Tree.java

T.class:	T.java Tree.java
	$(JAVAC) -classpath $(CLASSPATH) T.java

clean:
	rm -f *~ Tree* *.class out
