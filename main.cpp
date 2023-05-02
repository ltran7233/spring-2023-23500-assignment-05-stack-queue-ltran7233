#include <iostream>
#include "StackList.h"
#include "Queue.h"

int main()
{
	StackList *s1 = new StackList();
	Queue *q1 = new Queue();
	std::cout << s1->is_empty() << std::endl;
	
}
