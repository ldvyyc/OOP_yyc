include control.mak

all: main lol test

main: f1.o f2.o f3.o f4.o main.o lol
	g++ f1.o f2.o f3.o f4.o main.o -o main

main.o: main.cpp control.mak
	g++ -c main.cpp -o $(Var)

f1.o: f1.cpp f1.h
	g++ -c f1.cpp -o f1.o

f2.o: f2.cpp f2.h
	g++ -c f2.cpp -o f2.o

f3.o: f3.cpp f3.h
	g++ -c f3.cpp -o f3.o

f4.o: f4.cpp f4.h
	g++ -c f4.cpp -o f4.o

lol: control.mak
Var = main.o
ifeq (TRUE, $(F1))
	Var += -D__F1__
endif

ifeq (TRUE, $(F2))
	Var += -D__F2__
endif

ifeq (TRUE, $(F3))
	Var += -D__F3__
endif

ifeq (TRUE, $(F4))
	Var += -D__F4__
endif

test: main
	./main

clean: 
	rm *.o main