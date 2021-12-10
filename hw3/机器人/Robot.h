#ifndef _ROBOT_
#define _ROBOT_
#include "Part.h"
#include <string>
class Robot{
    int count;//计数
public:
    int num;
    int* hhh;
    string which;
    Robot(int i);
    bool is_full();
    void add_part(Part &&A);
    virtual int run() = 0;
    friend ostream &operator<<(ostream &out, Robot &R);
};
#endif