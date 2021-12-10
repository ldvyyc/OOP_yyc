// Farm.h
#ifndef Farm_h
#define Farm_h
#include "Cow.h"
#include <string>
using namespace std;
class Farm {
public:
	int count=0;//记录牛
	int nn;//n头牛
	float fin=0;
	string name;
	Farm(int n);
	struct ccow{
		string name1;
    	int l1;
    	int u1;
    	int m1;
    	int left;
	};
	ccow done[100];
	void addCow(Cow cc);
	void startMeal();
	void supply(string name,int a);
	void produceMilk();
	float getMilkProduction();
};
#endif 
