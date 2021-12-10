#ifndef _Student_
#define _Student_
#include <iostream>
using namespace std;

class Student
{
public:
    char name[20], time[4], id[6];
    int* next;
    char prov1, grade;
    string gradee,name1,time11,id11,prov11,timesub;
    int grade1, id1, timeint;
    friend istream &operator>>(istream &in, Student &A);
};
#endif