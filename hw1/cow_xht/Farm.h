#ifndef __Cow__
#define __Cow__
#include"Cow.h"
using namespace std;
class Farm
{

private:
    int n,nums=0;
    float anss=0;
    string *hh1 = new string [n+1];
    int *hh2 = new int [n+1];
    int *hh3 = new int [n+1];
    int *hh4 = new int [n+1];
    int *hh5 = new int [n+1];
public:
    void addCow(Cow coww);
    Farm (int n);
    void supply(string nam, int a);
    void startMeal();
    void produceMilk();
    float getMilkProduction();
};
#endif 