#pragma once
#include <iostream>
#include "Node.h"

#define STACK_ERR_EMPTY 1
#define STACK_ERR_FULL 2
#define STACK_ERR_OTHER 4

class StackList{
private:
	Node *head;
public:
	StackList();
	~StackList();
	void push(std::string data);
	std::string pop(); // remove and return the top item
	std::string top(); // return but do not remove the top item
	bool is_empty();
	std::string toString();
};
