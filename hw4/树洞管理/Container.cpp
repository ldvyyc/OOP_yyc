#include "Container.h"
template <class A>
void Container<A>::insert(int x, int y, A item)
{
    xx[count] = x;
    yy[count] = y;
    itemm[count] = item;
    count++;
}

template <class B>
B *Container<B>::find(int x, int y)
{
    for (int i = 0; i < count; i++)
    {
        if (xx[i] == x && yy[i] == y)
        {
            return &itemm[i];
        }
    }
    return NULL;
}
//template <class A>
//Container<A>::Container()
//{
//    count = 0;
//    memset(xx, 0, sizeof(xx));
//    memset(yy, 0, sizeof(yy));
//    memset(itemm, 0, sizeof(itemm));
//}