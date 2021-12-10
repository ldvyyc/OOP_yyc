#pragma once
#include <string>
using namespace std;

class Student {
public:
    string name;
    const char* province;
    int grade;
    int date;
    int idnum;
    friend istream& operator>> (istream& cin, Student& ans); 
};