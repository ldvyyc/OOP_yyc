include control.mak
CC = g++

all: a1 a2 a3 a4 main 

main: main.cpp f1.o f2.o f3.o f4.o
	$(CC) main.cpp f1.o f2.o f3.o f4.o -o main

a2: control.mak
	ifeq (TRUE, $(F2))
		$(CC) -D __F2__
	endif
a3: control.mak
	ifeq (TRUE, $(F3))
		$(CC) -D __F3__
	endif

a4: control.mak
	ifeq (TRUE, $(F4))
		$(CC) -D __F4__
	endif

a1: control.mak
	ifeq (TRUE, $(F1))
		$(CC) -D __F1__
	endif

f1.o: f1.cpp
	$(CC) -c f1.cpp -o f1.o

f2.o: f2.cpp
	$(CC) -c f2.cpp -o f2.o

f3.o: f3.cpp
	$(CC) -c f3.cpp -o f3.o

f4.o: f4.cpp
	$(CC) -c f4.cpp -o f4.o

clean:
	rm *.o main