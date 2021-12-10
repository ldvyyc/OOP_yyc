#include <iostream>
using namespace std;

class A{
public:
    static int a;
    void add(){
        a++;
    }
    void out(){
        cout << a;
    }
};
//int A::a = 2;

int main(){
    A b;
    b.add();
    A c;
    c.out();
    return 0;
}