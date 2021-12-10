#include <iostream>
#include "Example.h"

using namespace std;

	// (2)
extern int count1;

Example::Example(int data) {
	count1++;
	count = count1;
	cout << "Example #" << count << " is created" << endl;
	dd=data;
}

void Example::getData() {
	cout << "The data of Example #" << count << " is " << dd << endl;
	// (4)
}

Example::~Example() {
	cout << "Example #" << count << " is destroyed" << endl;
}