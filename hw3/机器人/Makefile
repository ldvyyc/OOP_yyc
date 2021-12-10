all: main

main: main.o Alice.o Bob.o Part.o Robot.o
	g++ main.o Alice.o Bob.o Part.o Robot.o -o main

*.o: *.cpp
	g++ -c *.cpp -o *.o



clean:
	rm *.o main
