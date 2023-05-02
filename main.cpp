#include <iostream>
#include "StackList.h"
#include "Queue.h"

int main()
{
	StackList *s1 = new StackList();
	std::cout << s1->is_empty() << std::endl;
	s1->push("1");
	s1->push("2");
	s1->push("3");
	std::cout << s1->top() << std::endl;
	std::cout << s1->pop() << std::endl;
	s1->push("4");
	std::cout << s1->top() << std::endl;
	std::cout << s1->pop() << std::endl;
	
	StackList *e = new StackList(); // empty stack
	try
	{
		std::cout << e->top() << "\n";
	}
	catch (int err)
	{
		std::cout << "stack empty error: " << err << "\n";
	}

	try
	{
		std::cout << e->pop() << "\n";
	}
	catch (int err)
	{
		std::cout << "stack empty error: " << err << "\n";
	}
	
	Queue *q1 = new Queue();
	std::cout << q1->is_empty() << std::endl;
	std::cout << q1->is_full() << std::endl;
	q1->enqueue("2");
	q1->enqueue("4");
	q1->enqueue("6");
	q1->enqueue("8");
	std::cout << q1->front() << std::endl;
	q1->enqueue("10");
	q1->enqueue("12");
	q1->enqueue("14");
	q1->enqueue("16");
	q1->enqueue("18");
	q1->enqueue("20"); // full
	std::cout << q1->is_full() << std::endl;
	for (int i=0; i<10; i++){
		q1->dequeue();
	}
	std::cout << q1->is_empty() << std::endl;
}
