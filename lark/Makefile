# requires ~/lib/librucpp.a
# requires ~/lib/librugpp.a

LIB	= $(HOME)/lib

test1:
	-cd test-c	&& $(MAKE) LIB=$(LIB) test2 test3 test4 test5 -i
	-cd test-cpp	&& $(MAKE) LIB=$(LIB)
	-cd test-m	&& $(MAKE) LIB=$(LIB) test1 test2
#	-cd test-a	&& $(MAKE) LIB=$(LIB) test1 test2
#	-cd test-e	&& $(MAKE) LIB=$(LIB) test1 test2
	-cd test-j	&& $(MAKE) LIB=$(LIB) test1 test2
	-cd tst2-c	&& $(MAKE) LIB=$(LIB) test2 test3 test4 test5 -i
	-cd tst2-cpp	&& $(MAKE) LIB=$(LIB)
	-cd tst2-m	&& $(MAKE) LIB=$(LIB) test1 test2
#	-cd tst2-a	&& $(MAKE) LIB=$(LIB) test1 test2
#	-cd tst2-e	&& $(MAKE) LIB=$(LIB) test1 test2
	-cd tst2-j	&& $(MAKE) LIB=$(LIB) test1 test2

clean:
	cd test-c	&& $(MAKE) clean
	cd test-cpp	&& $(MAKE) clean
	cd test-m	&& $(MAKE) clean
	cd test-a	&& $(MAKE) clean
#	cd test-e	&& $(MAKE) clean
	cd test-j	&& $(MAKE) clean
	cd tst2-c	&& $(MAKE) clean
	cd tst2-cpp	&& $(MAKE) clean
	cd tst2-m	&& $(MAKE) clean
	cd tst2-a	&& $(MAKE) clean
#	cd tst2-e	&& $(MAKE) clean
	cd tst2-j	&& $(MAKE) clean

