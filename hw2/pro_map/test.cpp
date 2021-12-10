#include <iostream>
using namespace std;

class A{
public:
    string key;
    int val;
    A();
    void aa(string k, int v);
};
A::A(){

};

class B{
public:
    A * x;
    A y[100];
    B();
};

B::B(){
    x = new A[10];
//    x->key = "qwer";
//    x->val = 1234;
}
int o = 2;
int &ceee(){
    return o;
}
int main(){
    B bb;
    bb.x[1].val = 3; 
    bb.y[1].val = 4;
    cout << bb.x[1].val << endl;
    //cout << bb.y[1].val;

    ceee() = 3;
    cout << o;
    return 0;

}