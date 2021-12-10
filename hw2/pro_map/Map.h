#pragma once
#include "Pair.h"

class Map{
    Pair * data;
    int sz;
public:
    Map(int n);
    int nn;
    // TODO
    int size();
    int x;
    int& operator[](string y){
        for (int i=0; i<sz; i++){
            if (data[i].hasKey(y)!=0){
                //x = data[i].getVal();
                return data[i].getVal();
            }
        }
        data[sz].reset(y,0);
        sz++;
        return data[sz-1].getVal();
    };
    const int operator[](string y)const{
        for (int i=0; i<sz;i++){
            if (data[i].hasKey(y)!=0){
                int x = data[i].getVal();
                return x;
            }
        }
        return 0;
    };
    ~Map();
};