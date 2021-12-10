all: main

main: main.o Farm.o Cow.o
	g++ main.o Farm.o Cow.o -o main

main.o: main.cpp
	g++ -c main.cpp -o main.o

Cow.o: Cow.cpp Cow.h
	g++ -c Cow.cpp -o Cow.o

Farm.o: Farm.cpp Farm.h
	g++ -c Farm.cpp -o Farm.o

clean:
	rm *.o main
