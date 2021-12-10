#include <iostream>
using namespace std;

class Test{
   const int member1;
   static float member2;
public:
    Test(int mem):member1(mem){}
    int MyMember1() const {
       member2 = 111;
       return member1;
    }
    static float Mymember2() {return member2;}
};
float Test::member2 = 0;
int main(){
    Test A(10);
    Test B(11);
    cout << A.MyMember1 << endl;
    cout << A.Mymember2 << endl;
    return 0;
}