#include <iostream>
#include <string>
using namespace std;

class User{
public:
    string name,phone,id,clas;
    User(string a,string b,string c,string d):name(a),phone(b),id(c),clas(d){};
    friend ostream &operator<<(ostream &out,User &A){};
    virtual void cxhs()=0;
};

class Student: public User{
    using User::User;
    void cxhs(){};
};

class Teacher: public User{
    using User::name;
    using User::phone;
    Teacher(string a,string b):name(a),phone(b){};
    void cxhs(){};
};

int main() {
    User* a = new Student("Yang","18810001234","2016000000","J66");
    User* b = new Teacher("Liu","18810004321");
    cout << *a << endl;
    cout << *b << endl;
    return 0;
}
