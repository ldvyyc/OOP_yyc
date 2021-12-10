#include <iostream>
using namespace std;

class Farm{
public:
    int hei;
    int len;
    int S;
    int get_S(int h,int l);
    Farm(int n);
};
int Farm::get_S(int h, int l){
    return h*l;
}
Farm::Farm(int n){
    cout << "fuck" << n << endl;
}

int main(){
    int n=3;
    Farm farm(n);
    farm.hei=2;
    farm.len=5;
    cout <<farm.get_S(farm.hei,farm.len);
    return 0;

}