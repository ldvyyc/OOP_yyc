#include<iostream>
#include "Vector.h"
#include "Node.h"
using namespace std; 
Vector::Vector (int len11)
{
    array=new Node[len11];
    len=len11;
    capacity=0;
}

Vector::Vector (const Vector & other)
{
    array=new Node[other.len];
    for(int i=0;i<=other.capacity;i++)
        array[i]=other.array[i];
    len=other.len;
    capacity=other.capacity;
}

Vector::~Vector()
{
    delete[] array;
}

Vector::Vector (Vector && other)
{
    array=other.array;
    len=other.len;
    capacity=other.capacity;
    other.array=nullptr;
}

void Vector::append(int value)
{
    Node shit(value);
    //Note shit=static_cast<Node>(value);
    //Node *shit;
    //shit=new Node(value); 
    array[capacity]=shit;
    capacity++;
    shit.~Node();
}

void Vector::insert(int pos,int value)
{
    for (int i=capacity-1;i>=pos;i--)
    {
        array[i+1]=move(array[i]);
    }
    Node shit(value);
    array[pos]=move(shit);
    capacity++;
    shit.~Node();
}

void Vector::swap(int pos1,int pos2)
{
    Node shit=move(array[pos1]);
    array[pos1]=move(array[pos2]);
    array[pos2]=move(shit);
}

void Vector::dilatation()
{
    len*=2;
    Node * haha=new Node[len];
    for (int i=0;i<=capacity;i++)
    {
        haha[i]=move(array[i]);
    }
    array=haha;
    
}

int Vector::getlen()
{
    return capacity;    
}

Node& Vector::operator [] (int pos)//有问题？
{
    return array[pos];
}

Vector & Vector::operator=(const Vector & other)
{
    array=new Node[other.len];
    for (int i=0;i<=other.capacity;i++)
    {
        array[i]=other.array[i];
    }
    len=move(other.len);
    capacity=move(other.capacity);
    return *this;
}

Vector & Vector::operator=(Vector && other)
{
    array=move(other.array);
    len=other.len;
    capacity=move(other.capacity);
    other.array=nullptr;
    other.capacity=0;
    return *this;
}

void Vector::dilatation(){
    int cap = capacity;
    capacity*=2;
    Node * hh=new Node[capacity];
    for (int i=0;i<=cap;i++)
    {
        hh[i]=move(array[i]);
    }
    delete[] array;
    array=hh;
    //delete []hh;
};

void Vector::dilatation() {
    Node* hh = move(array);
    capacity = 2 * capacity;
    array = new Node[capacity];
    for (int i = 0; i < len; i++)
        array[i] = move(hh[i]);
    delete []hh;
}