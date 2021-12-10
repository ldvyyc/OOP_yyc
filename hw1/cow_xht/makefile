
all: shit3
shit3: main.o ccow.o ffarm.o
	g++ main.o ccow.o ffarm.o -o main
ffarm.o: Farm.h farm.cpp
	g++ -c farm.cpp -o ffarm.o
ccow.o: Cow.h cow.cpp
	g++ -c cow.cpp -o ccow.o
ssss: main.cpp
	g++ -c main.cpp -o main.o

clean :
	rm *.o main 