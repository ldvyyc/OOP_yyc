#ifndef __STACK
#define __STACK


#include "LinearDataStruct.h"
#include "IteratorBase.h"

class Stack : public LinearDataStruct
{
    using LinearDataStruct::LinearDataStruct;

public:
    class Iterator : public IteratorBase
    {
    public:
        using IteratorBase::IteratorBase;
        using IteratorBase::operator!=;
        int operator*()
        {
            return data[idx];
        }
        using IteratorBase::operator++;
    };
    int pop()
    {
        n--;
        return (data[--idx_end]);
    }
    Iterator begin()
    {
        return Iterator(data, idx_begin);
    }
    Iterator end()
    {
        return Iterator(data, idx_end);
    }
};

#endif