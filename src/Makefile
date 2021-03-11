main: define.o dtester.o history.o interface.o
	gcc -o dtest define.o dtester.o history.o
	gcc -o gui define.o interface.o history.o

define.o: define.c tokenizer.h
	gcc -c define.c

dtester.o: dtester.c tokenizer.h
	gcc -c dtester.c

history.o: history.c history.h
	gcc -c history.c

interface.o: interface.c tokenizer.h history.h
	gcc -c interface.c

clean:
	rm -f dtest gui *.o *~ *#
