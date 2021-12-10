#include <iostream>
#include <string>
#include <cstring>
#include "School.h"
using namespace std;

School::School(int n) {
    data = new Student[n + 1];
    number = n;
    point = 0;
    data[n].name = "Not Found";
}

void School::add_member(Student s) {
    data[point].name = s.name;
    data[point].province = s.province;
    data[point].grade = s.grade;
    data[point].date = s.date;
    data[point].idnum = s.idnum;
    point++;
}

Student& School::operator[] (int sid) {
    for (int i = 0; i < number; i++) {
        if (data[i].idnum == sid)
            return data[i];
    }
    return data[number];
}
    
Student& School::operator[] (string y) {
    for (int i = 0; i < number; i++) {
        if (data[i].name == y) 
            return data[i];
    }
    return data[number];
}

Student& School::operator[] (char x) {
    int temp[number];
    int temp0 = 0;
    for (int i = 0; i < number; i++) {
        if (data[i].province[0] == x) {
            temp[temp0++] = i;
        }
    }//target province
    int temp2 = 0;
    int temp1[temp0];
    if (temp0) {
        int max0 = 0;
        for (int i = 0; i < temp0; i++) {
            if (data[temp[i]].date > max0) {
                max0 = data[temp[i]].date;
                temp2 = 0;
                temp1[temp2++] = temp[i];
            }
            else if (data[temp[i]].date == max0) {
                temp1[temp2++] = temp[i];
            }
        }
    }//target date
    int temp4 = 0;
    int temp3[temp2];
    if (temp2) {
        int max1 = 0;
        for (int i = 0; i < temp2; i++) {
            if (data[temp1[i]].idnum > max1) {
                max1 = data[temp[i]].idnum;
                temp4 = 0;
                temp3[temp4++] = temp1[i];
            }
            else if (data[temp1[i]].idnum == max1) {
                temp3[temp4++] = temp1[i];
            }
        }
    }
    //target idnum
    if (temp4)
        return data[temp3[temp4 - 1]];
    return data[number];
}



ostream& operator<< (ostream& cout, const Student& ans) {
    if (ans.name == "Not Found")
        cout << ans.name << endl;
    else {
        cout << ans.name << '-' << ans.date << '-' <<  ans.grade << '-' << ans.idnum << endl;
    }
    return cout;
}

School::~School() {
    delete []data;
}