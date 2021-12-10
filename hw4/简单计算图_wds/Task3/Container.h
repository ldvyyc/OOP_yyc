#pragma once
#include <string>
using namespace std;
template <class T>
class Container
{
    int data1[1000];
    int data2[1000];
    T data3[1000];
    int num = 0;

public:
    void insert(int x, int y, T item)
    {
        data1[num] = x;
        data2[num] = y;
        data3[num] = item;
        num++;
        return;
    }
    T *find(int x, int y)
    {
        for (int i = 0; i < num; i++)
        {
            if (data1[i] == x && data2[i] == y)
                return &data3[i];
        }
        return NULL;
    }
};
