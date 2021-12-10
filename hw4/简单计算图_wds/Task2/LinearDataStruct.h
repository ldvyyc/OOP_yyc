#ifndef __LINEARDATASTRUCT
#define __LINEARDATASTRUCT

class LinearDataStruct
{

protected:
    int data[1000];
    int idx_begin;
    int idx_end;
    int max_n;
    int n;

public:
    LinearDataStruct(int _n = 0) : idx_begin(0), idx_end(0), max_n(_n), n(0)
    {
    }

    void push(int k)
    {
        if (n < max_n)
        {
            n++;
            data[idx_end] = k;
            idx_end++;
            if (idx_end > 999)
                idx_end %= 1000;
        }
    }
    virtual int pop() = 0;
    int max_size()
    {
        return max_n;
    }
    int size()
    {
        return n;
    }
};

#endif