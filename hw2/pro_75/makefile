all: main

main: main.o Student.o School.o
	g++ main.o Student.o School.o -o main

main.o: main.cpp
	g++ -c main.cpp -o main.o

School.o: School.cpp School.h
	g++ -c School.cpp -o School.o

Student.o: Student.cpp Student.h
	g++ -c Student.cpp -o Student.o

clean:
	rm *.o main
