#pragma once
#include <string>
using namespace std;

class Animal
{
public:
    string name;
    Animal(string _name) : name(_name){};
    virtual void speak(){};
    virtual void swim(){};
    void action()
    {
        speak();
        swim();
    };
    virtual ~Animal(){};
};