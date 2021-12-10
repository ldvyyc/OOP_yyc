#ifndef __STACK
#define __STACK

#include "LinearDataStruct.h"
#include "IteratorBase.h"

class Stack: public LinearDataStruct {
    // TODO
    int fla;
public:

    class Iterator: public IteratorBase {
        // TODO
    public:
        int _max;
        int flag;
        Iterator(int* _data, int _idx, int n, int fla):IteratorBase(_data,_idx){_max = n;flag = fla;}
        bool operator!=(Iterator A){
            if(this->idx == A.idx && flag ==0){
                return false;
            }
            flag = 0;
            return true;
        }
        IteratorBase& operator++(int){
            idx++;
            return *this;
        }
    };

    // TODO
    Stack(int s):LinearDataStruct(s){}
    void push(int c){
        fla = 1;
        data[idx_end] = c;
        n++;
        idx_end++;
        // if (idx_end==max_n) idx_end = 0;
    }
    int pop(){
        fla = 0;
        int yy = idx_end;
        idx_end--;
        if (idx_end<0) idx_end=max_n-1;
        n--;
        return data[yy-1];
    }
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