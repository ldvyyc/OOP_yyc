#ifndef __QUEUE
#define __QUEUE

#include "LinearDataStruct.h"
#include "IteratorBase.h"

class Queue: public LinearDataStruct {
    // TODO
    int fla;
public:

    class Iterator: public IteratorBase {
        // TODO
    public:
        int _max;
        int flag;
        Iterator(int* _data, int _idx,int max, int fla):IteratorBase(_data,_idx){_max = max; flag=fla;}
        bool operator!=(Iterator A){
            if(this->idx == A.idx && flag == 0){
                return false;
            }
            flag = 0;
            return true;
        }
        IteratorBase& operator++(int){
            idx++;
            if(idx==_max){
                idx=0;
            }
            return *this;
        }
    };

    // TODO
    Queue(int w):LinearDataStruct(w){};
    void push(int c){
        fla = 1;
        data[idx_end] = c;
        n++;
        idx_end++;
        if (idx_end>=max_n) idx_end = 0;
    };
    int pop(){
        fla = 0;
        int xx = idx_begin;
        idx_begin++;
        if (idx_begin==max_n){
            idx_begin = 0;
        }
        n--;
        return data[xx];
    };
    Iterator begin(){
        Iterator x(&data[0], idx_begin, max_n, fla);
        return x;
    };
    Iterator end(){
        Iterator y(&data[0], idx_end, max_n, fla);
        return y;
    };
};

#endif