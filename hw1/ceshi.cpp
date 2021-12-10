#define N 3
#define FUNC(n) (N+1)*n
#include <iostream>
using namespace std;
int z;// = 2 * (N + FUNC(5 + 1 >> 1))
int main(){
    z = 5 + 1 >> 1;
    cout << z;
    return 0;
}
//00000110
//00000011