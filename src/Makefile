main: define.o dtester.o
	gcc -o dtest define.o dtester.o

define.o: define.c tokenizer.h
	gcc -c define.c

dtester.o: dtester.c tokenizer.h
	gcc -c dtester.c

clean:
	rm -f dtest *.o *~ *#
