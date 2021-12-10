#ifndef _ALICE_
#define _ALICE_
#include "Robot.h"
#include <iostream>
class Alice: public Robot{
public:
    Alice(int i):Robot(i){which = "Alice";};
    int run();
};
#endif