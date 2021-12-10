#pragma once
#include <string>

template <class A>
class Container
{
public:
    int count;
    int xx[1001];
    int yy[1001];
    A itemm[1001];
    void insert(int x, int y, A item)
    {
        xx[count] = x;
        yy[count] = y;
        itemm[count] = item;
        count++;
    };
    A *find(int x, int y)
    {
        for (int i = 0; i < count; i++)
        {
            if (xx[i] == x && yy[i] == y)
            {
                return &itemm[i];
            }
        }
        return NULL;
    };
    Container() : count(0){};
    //~Container(){};
};