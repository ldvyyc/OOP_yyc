#include<string>
#include "Farm.h"
using namespace std;

void Farm::addCow(Cow coww)
    {
        hh1[nums]=coww.name;
        hh2[nums]=coww.l;
        hh3[nums]=coww.u;
        hh4[nums]=coww.m;
        hh5[nums]=0;
        nums++;
    }
 
Farm::Farm(int x)
    {
        n=x;
    }

void Farm::supply(string nam,int a)
    {
        for (int i=0;i<n;i++)
            if (hh1[i] == nam)
                hh5[i]+=a;
    }

void Farm::startMeal()
    {
        for (int i=0;i<n;i++)
        {
            if (hh5[i]>=hh2[i])
            {
                if (hh5[i]<=hh3[i])
                    hh5[i]=0;
                else
                    hh5[i]-=hh3[i];
                anss+=(float)hh4[i];
            }
            else
            if (hh5[i]>0)
            {
                hh5[i]=0;
                anss+=(float)(hh4[i]/2);
            }
        }
    }

void Farm::produceMilk(){}
float Farm::getMilkProduction()
    {
        return anss;
    }


