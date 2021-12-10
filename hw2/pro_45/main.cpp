#include <iostream>
#include "Example.h"

using namespace std;

void create_example(int n)
{

	cout << "--------create_example is ready--------\n";

	Example *e[10];
	for (int i = 0; i < n; i++)
		e[i] = new Example(i);

	// (6)
	e[n] = new Example(2333);
	for (int i = 0; i < n; i++)
	{
		e[i]->getData();
	}

	for (int i = 0; i < n; i++)
	{
		e[i]->~Example();
	}
	e[n]->getData();
	cout << "--------create_example is over--------\n";
}

// (7)
Example outt(23);
int count1 = 0;
class for6
{
public:
	//for6();
	~for6();
};
for6::~for6()
{
	cout << "Example #6 is destroyed" << endl;
}
for6 A;
int main()
{

	cout << "--------main_function is ready--------\n";

	// (8)
	Example local(233);

	create_example(3);

	// (9)
	Example last(23333);
	outt.getData();
	local.getData();
	last.getData();

	cout << "--------main_function is over---------\n";

	return 0;
}
