#include "Robot.h"
#include "Part.h"
#include <iostream>
using namespace std;
void Robot::add_part(Part &&A){
    hhh[count] = A.numm;
    count++;
}
Robot::Robot(int i){
    num = i;
    hhh = new int[num+1];
    count = 0;
    which = "None";
}
bool Robot::is_full(){
    if (count == num)
        return true;
    return false;
}
ostream &operator<<(ostream &out, Robot &R){
    out << "Build robot " << R.which;
    return out;
}