#include "Vector.h"
#include "Node.h"
#include <iostream>
using namespace std;

int Vector::getlen(){
    return this->len;
}

Vector::Vector(int n){
    len = 0;
    capacity = n;
    array = new Node[n];
};

Vector::~Vector(){
    delete[] array; 
};

Vector::Vector(const Vector & other){
    capacity = other.capacity;
    len = other.len;
    array = new Node[capacity];
    for(int i=0; i<len; i++) 
			array[i] = other.array[i]; //拷贝数据
};

Vector::Vector(Vector && other){
    capacity = other.capacity;
    len = other.len;
    array = move(other.array);
    other.array = nullptr;
};
Vector & Vector::operator=(const Vector & other){
    capacity = other.capacity;
    if (array)
        delete[] array;
    len = other.len;
    array = new Node[capacity];
    for(int i=0; i<len; i++)
		array[i] = other.array[i];  //拷贝数据
	return *this;
};
Vector& Vector::operator=(Vector && other){
    if(array)
        delete[] array;
    capacity = other.capacity;
    len = other.len;
    array = other.array;
    other.array = nullptr;
    other.len = 0;
    other.capacity = 0;
    return *this;
};
Node& Vector::operator [] (int pos){
    return array[pos];
};

void Vector::append(int value){
    Node hhh(value);
    array[len] = move(hhh);
    len++;
    //hhh.~Node();
};
	
void Vector::insert(int pos, int value){
    for (int i=len-1;i>=pos;i--){
        array[i+1] = move(array[i]);
    }
    Node hhhh(value);
    array[pos] = move(hhhh);
    len++;
    //hhhh.~Node();
};
	
void Vector::swap(int pos1, int pos2){
    Node sw = move(array[pos1]);
    array[pos1] = move(array[pos2]);
    array[pos2] = move(sw);
};
	
void Vector::dilatation(){
    capacity*=2;
    Node * hh=new Node[capacity];
    for (int i=0;i<len;i++)
    {
        hh[i]=move(array[i]);
    }
    delete[] array;
    array=hh;
};