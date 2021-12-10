#include <iostream>
using namespace std;

struct Cow{
    string name;
    int l,n,m;
};
Cow cow[100];
int main(){
    int n;
    cin >> n;
    string name1;
    int ll,nn,mm;
    for (int i=0;i<n;i++){
        cin >> name1 >> ll >> nn >> mm;
        cow[i].name=name1;
        cow[i].l=ll;
        cow[i].n=nn;
        cow[i].m=mm;
    }
    int k;
    cin >> k;
    int nnn;//给几头牛喂食
    int much;//喂多少
    for (int i=0;i<k;i++){
        cin >> nnn;
        for (int j=0;j<nnn;j++){
            cin >> name1 >> much;
        }
    }
}