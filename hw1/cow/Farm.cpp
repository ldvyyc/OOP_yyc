#include "Farm.h"
#include "Cow.h"
#include <iostream>
#include <string>
using namespace std;
Farm::Farm(int n){
    nn=n;
}

void Farm::addCow(Cow cow)
{
    done[count].l1 = cow.l1;
    done[count].m1 = cow.m1;
    done[count].u1 = cow.u1;
    done[count].left = 0;
    done[count].name1 = cow.name1;
    count++;
}

void Farm::supply(string name, int a)
{
    for (int i = 0; i < nn; i++)
    {
        if (name.compare(done[i].name1) == 0)
        {
            done[i].left += a;
        }
    }
}

void Farm::startMeal()
{
    for (int i = 0; i < nn; i++)
    {
        if (done[i].left==0) continue;
        if ((done[i].left<done[i].l1)&&(done[i].left!=0)){
            fin += float(done[i].m1)/2;
            done[i].left=0;
        }
        if ((done[i].left>=done[i].l1)&&(done[i].left<=done[i].u1)){
            fin += float(done[i].m1);
            done[i].left=0;
        }
        if (done[i].left>done[i].u1){
            fin += float(done[i].m1);
            done[i].left -= done[i].u1;
        }
    }
}

void Farm::produceMilk()
{
}

float Farm::getMilkProduction()
{
    return fin;
}