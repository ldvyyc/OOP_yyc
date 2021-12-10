#include "node.h"
#include "operation.h"
#include "oper.h"
#include "mymap.h"

void PlaceholderNode::set_val(float val){
    value_ = val;
}

void PlaceholderNode::calc(){} 

Node::~Node(){}