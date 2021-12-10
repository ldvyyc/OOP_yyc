#pragma once
#include <string>
#include "Student.h"
using namespace std;

class School {
    Student * data;
    int number;
    int point;
public:
    School(int n);
    void add_member(Student s);
    Student& operator[] (int sid);
    Student& operator[] (string y);
    Student& operator[] (char x);
    //friend istream& operator>> (istream& cin, Student& ans); 
	friend ostream& operator<< (ostream& cout, const Student& ans);
    ~School();
};
