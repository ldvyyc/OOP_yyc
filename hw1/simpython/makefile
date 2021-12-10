#makefile

all: main

main: main.o Parser.o
	g++ main.o Parser.o -o main

Parser.o: Parser.h Parser.cpp
	g++ -c Parser.cpp -o Parser.o

main.o: main.cpp
	g++ -c main.cpp -o main.o

clean:
	rm *.o main