#include "node.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
void PlaceholderNode::set_val(float val)
{
    value_ = val;
}
Node::~Node(){}
void PlaceholderNode::calc(){}