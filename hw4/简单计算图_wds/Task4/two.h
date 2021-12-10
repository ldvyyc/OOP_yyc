#pragma once
#include "node.h"
#include "operation.h"

class addsub : public OperationNodeTwo
{
    float op = 1;

public:
    addsub(string name, string ope, Node *x1, Node *x2) : OperationNodeTwo(name, x1, x2)
    {
        if (ope == "-")
            op = -1;
    }
    void UpdateValue()
    {
        value_ = input1->value() + op * input2->value();
    }
};