#include <iostream>
#include "Vector.h"
#include "Node.h"

using namespace std;

Vector::Vector(int n):capacity(n) {
    array = new Node[capacity];
    len = 0;
}

Vector::~Vector() {
    delete []array;
}

Vector::Vector(const Vector & other) {
    capacity = other.capacity;
    len = other.len;
    array = new Node[capacity];
    for (int i = 0; i < len; i++)
        array[i] = other.array[i];
}
	
Vector::Vector(Vector && other):array(other.array) {
    capacity = other.capacity;
    len = other.len;
    other.array = nullptr;
}

Vector & Vector::operator=(const Vector & other) {
    capacity = other.capacity;
    delete[] array;
    len = other.len;
    array = new Node[capacity];
	for(int i=0; i<len; i++)
		array[i] = other.array[i];
	return *this;
}
	
Vector & Vector::operator=(Vector && other) {
    capacity = other.capacity;
    delete[] array;
    len = other.len;
    other.capacity = 0;
    other.len = 0;
	this->array = other.array;  
	other.array = nullptr;
	return *this;
}

Node& Vector::operator [] (int pos) {
    return array[pos];
}

void Vector::append(int value) {
    Node tmp(value);
    array[len] = move(tmp);
    len++;
}//0+6+0+6

void Vector::insert(int pos, int value) {
    for (int i = len; i > pos; i--)
        array[i] = move(array[i - 1]);
    Node tmp1(value);
    array[pos] = move(tmp1);
    len++;
}

void Vector::swap(int pos1, int pos2) {
    Node tmp2(move(array[pos1]));
    array[pos1] = move(array[pos2]);
    array[pos2] = move(tmp2);
}
 
void Vector::dilatation() {
    Node* tmp3 = move(array);
    
    capacity = 2 * capacity;
    array = new Node[capacity];
    for (int i = 0; i < len; i++)
        array[i] = move(tmp3[i]);
    delete []tmp3;
}

int Vector::getlen() {
    return this->len;
}
