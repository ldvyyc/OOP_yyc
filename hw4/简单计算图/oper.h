#pragma once
#include "operation.h"
#include "node.h"
#include "mymap.h"

class oper1: public OperationNodeTwo{
public:
    oper1(string name, Node *x1, Node *x2):OperationNodeTwo(name,x1,x2){};
    void UpdateValue(){
        value_ = input1->value() + input2->value();
    }
};

class oper2: public OperationNodeTwo{
public:
    oper2(string name, Node *x1, Node *x2):OperationNodeTwo(name,x1,x2){};
    void UpdateValue(){
        value_ = input1->value() - input2->value();
    }
};