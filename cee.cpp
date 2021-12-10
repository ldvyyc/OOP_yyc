#include <iostream>
using namespace std;

class A{
    const char* s;
public:
    A(const char* str):s(str){
        cout << s << "hahaha" << endl;
    }
    ~A(){cout << s << "destroyed" << endl;}
};
class B{
public:
    B(){cout << "B cons" << endl;}
    ~B(){cout << "B dest" << endl;}
};
A global_aa("global");
int main{
    cout << "enter main" << endl;
    B global_aa;
    cout << "exit main" << endl;
    return 0;
}
