#include <iostream>
using namespace std;
class ceshi{
public:
    ceshi(){
        cout << "默认" << endl;
    }
    ceshi(int x){
        cout << x << endl;
    }
};


int main(){
    ceshi aa;
    aa = 1;
    return 0;
}