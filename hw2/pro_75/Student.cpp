#include "School.h"
#include "Student.h"
using namespace std;

istream &operator>>(istream &in, Student &A)
{
    char q;
    for (int i=0;i<20; i++){
        A.name[i] = 0;
    }
    for (int i = 0; i < 20; i++)
    {
        in >> q;
        if (q == '-')
            break;
        A.name[i] = q;
    }
    A.name1 = A.name;
    //cout << A.name1 << endl;
    in >> A.prov1;
    A.prov11 = A.prov1;
    //cout << A.prov11 << endl;
    in >> q;
    in >> A.grade;
    A.grade1 = A.grade - '0';
    A.gradee=A.grade;
    //cout << A.gradee << endl;
    in >> q;
    for (int i = 0; i < 4; i++)
    {
        in >> A.time[i];
    }
    A.time11 = A.time;
    A.timesub = A.time11.substr(0,4);
    A.timeint = stoi(A.timesub);
    //cout << A.time11 << endl;
    in >> q;
    for (int i = 0; i < 6; i++)
    {
        in >> A.id[i];
    }
    A.id11 = A.id;
    A.id1 = stoi(A.id11);
    //cout << A.id11 << endl;
    return in;
}