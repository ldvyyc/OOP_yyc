#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int *a = new int[N];
    a[1]=1;
    a[2]=1;
    for (int i=3;i<=N;i++){
        a[i] = a[i-1] + a[i-2];
        if (a[i]>1000000007){
            a[i]=a[i]%1000000007;
        }
    }
    cout << a[N];
    delete[] a;
    return 0;
}