myprog: calc.o, p1.o, iopoint.p
	gcc -ans -Wall -pedantic p1.o calc.o iopoint.o -o myprog -lm
calc.o: calc.c point_functions.h
	gcc -c -ansi -Wall -pedantic calc.c
pi.o: main.c point_functions.h
	gcc -c -ansi -Wall -pedantic main.c
iopoint.o: iopoint.c point_functions.h
	gcc -c -ansi -Wall -pedantic iopoint.c