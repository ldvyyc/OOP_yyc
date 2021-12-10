#ifndef __ITERATORBASE
#define __ITERATORBASE

class IteratorBase
{

protected:
    int *data;
    int idx;

public:
    IteratorBase(int *_data, int _idx) : data(_data), idx(_idx)
    {
    }

    bool operator!=(IteratorBase right)
    {
        return (idx != right.idx);
    }
    IteratorBase operator++()
    {
        idx++;
        return *this;
    }
    IteratorBase operator++(int)
    {
        IteratorBase mid(*this);
        idx++;
        return mid;
    }
};

#endif