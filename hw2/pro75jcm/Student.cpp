#include "School.h"
#include "Student.h"
using namespace std;

istream& operator>> (istream& cin, Student& ans) {
    string line;
    getline(cin, line);
    int len = line.size();
    string idnum = line.substr(len - 6, len);
    string date = line.substr(len - 11, len - 7); 
    string grade = line.substr(len - 13, len - 12);
    string province = line.substr(len - 15, len - 14);
    string name = line.substr(0, len - 16);
    ans.name = name;
    ans.province = province.c_str();
    ans.grade = stoi(grade);
    ans.date = stoi(date);
    ans.idnum = stoi(idnum);
    return cin;
}