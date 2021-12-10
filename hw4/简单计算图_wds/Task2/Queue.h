#ifndef __QUEUE
#define __QUEUE


#include "LinearDataStruct.h"
#include "IteratorBase.h"

class Queue : public LinearDataStruct
{
    using LinearDataStruct::LinearDataStruct;

public:
    class Iterator : public IteratorBase
    {
        int bi;

    public:
        Iterator(int b_i, int *_data, int _idx) : IteratorBase(_data, _idx), bi(b_i) {}
        using IteratorBase::operator!=;
        int operator*()
        {

            return data[(bi + idx) % 1000];
        }
        using IteratorBase::operator++;
    };
    int pop()
    {
        n--;
        int mid = idx_begin;
        idx_begin = (idx_begin + 1) % 1000;
        return data[mid];
    }
    Iterator begin()
    {
        return Iterator(idx_begin, data, 0);
    }
    Iterator end()
    {
        return Iterator(idx_begin, data, n);
    }

    // TODO
};

#endif