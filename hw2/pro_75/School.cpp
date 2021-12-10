#include "School.h"
#include "Student.h"
using namespace std;
extern int count;
School::School(int n){
    num = n;
    count = 0;
    riqi=0000;
}
void School::add_member(Student A){
    int count1;
    count1 = count;
    nameee[count1]=A.name1;
    iddd[count1]=A.id11;
    provvv[count1]=A.prov11;
    provvv1[count1]=A.prov1;
    timeee[count1]=A.timesub;
    timeee1[count1]=A.timeint;
    gradeee[count1]=A.gradee;
    iddd1[count1]=A.id1;
    count++;
}