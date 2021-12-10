#include <iostream>
using namespace std;
class A {
public:
    void func(int a,int b) {}; 
};
void func(int a, int b){
    cout << a+b << endl;
};
int main() {
    A aa;
    aa.func(2,3);    
    return 0;
}
