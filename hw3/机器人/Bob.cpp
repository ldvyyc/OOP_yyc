#include "Robot.h"
#include "Bob.h"
#include <iostream>
using namespace std;
int Bob::run(){
    int b=0;
    for (int i=0;i<num;i++){
        int c = hhh[i]*hhh[i];
        b += c;
    }
    return b;
}