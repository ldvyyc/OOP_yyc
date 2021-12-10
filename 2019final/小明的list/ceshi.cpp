#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    list<int> x;
    auto left = x.begin();
    auto right = x.end();
    for (int i=3; i<8; i++){
        if (left == right){
            --left;
        }
        x.insert(right, i);
        
    }
    auto it = left;
    // it ++;
    // it++;
    // it++;
    cout <<*it;
    //cout << *left;
    return 0;
}