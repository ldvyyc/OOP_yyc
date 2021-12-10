#include <iostream>
#include "Test.h" 
#include "func.h" 

using namespace std;

const Test& F(const Test& a){
    Test b = a;
    return Test(1);
}
int main() {
    Test a;
    const Test &A = F(std::move(a));
    return 0;
}