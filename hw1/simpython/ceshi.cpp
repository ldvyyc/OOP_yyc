#include <iostream>
#include <cstring>
using namespace std;

bool Num(string str)  //判断是否为纯数字
{  
    for (int i = 0; i < str.size(); i++)
    {
        int tmp = (int)str[i];
        if (tmp >= 48 && tmp <= 57)
        {
            continue;
        }
        else
        {
            return false;
        }
    } 
    return true;
}  

int main(int argc, char *argv[]){
    string a="2356";
    if (Num(a)==0) cout << "is"<< endl;
    if (Num(a)!=0) cout << "no"<< endl;
    return 0;
    cout << argc << endl;
    for (int i=1;i<argc;i++){
        cout << argv[i] << ' ';
    };
    cout << endl << strlen(argv[2]);
    return 0;
}