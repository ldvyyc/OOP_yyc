all: main

main: main.o Example.o
	g++ main.o Example.o -o main

main.o: main.cpp
	g++ -c main.cpp -o main.o

Example.o: Example.cpp Example.h
	g++ -c Example.cpp -o Example.o

clean:
	rm *.o main
