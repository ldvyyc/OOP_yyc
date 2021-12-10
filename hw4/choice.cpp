#include <iostream>
using namespace std;

class Base {
    int x;
public:
    Base(){}
    Base(const Base & other){x = other.x;}
    void f(){ cout << "Base::f()" << endl;}
};

class Derive: private Base {
    int y;
public:
    Derive(){}
    Derive(const Derive & other):Base(other){y = other.y;}
    void f(){ cout << "Derive::f()" << endl;}
};

void g1(Base & obj){
    obj.f(); 
}

void g2(Base obj){
    obj.f();
}

Base g3(Derive obj){
    return obj;
}

int main(){
    Derive a;
    g1(a); // (1)
    g2(a); // (2)
    Derive b(a);
    Base c = g3(a); // (3)
    return 0;
}