#ifndef __ITERATORBASE
#define __ITERATORBASE

class IteratorBase {
    
protected: 
    int* data;
    int idx;

public:

    IteratorBase(int* _data, int _idx): data(_data), idx(_idx) {

    }

    // TODO
    
    int operator*()const{
        int xx = data[idx];
        return xx;
    }
    
};


#endif