#include <iostream>
using namespace std;
class A {
	const char* s;
public:
	A(const char* str):s(str) { 
		cout << s << " A constructing" << endl;
	}
	~A() { cout << s << " A destructing" << endl; }
};
class B {
public:
	B() { cout << "B constructing" << endl; }
	~B() { cout << "B destructing" << endl; }
};
A global_obj("global");
int main() {
	cout << "Entering main..." << endl;
	B local_obj;
	cout << "Exiting main..." << endl;
	return 0;
}