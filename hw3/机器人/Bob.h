#ifndef _BOB_
#define _BOB_
#include "Robot.h"
#include <iostream>
class Bob: public Robot{
public:
    Bob(int i):Robot(i){which = "Bob";};
    int run();
};
#endif