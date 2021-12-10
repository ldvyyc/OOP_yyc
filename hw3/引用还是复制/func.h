#ifndef _FUNC_
#define _FUNC_
#include "Test.h"
#include <iostream>
using namespace std;
Test f1(Test xx)
{
    Test &c = xx;
    c.print("a");
    return xx;
}

Test &f2(Test &b)
{
    b.print("b");
    return b;
}

void f3(Test &a, Test &b)
{
    Test c = move(a);
    a = move(b);
    b = move(c);
    return;
}
#endif