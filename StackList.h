#pragma once
#include <iostream>
#include "Node.h"

class StackList{
private:
Node *head;
public:
StackList();
~StackList();
void push(std::string data);
int pop(); // remove and return the top item
int top(); // return but do not remove the top item
bool is_empty();
};
