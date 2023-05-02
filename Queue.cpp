#include <iostream>
#include "Queue.h"

Queue::Queue()
{
	head = 0;
	tail = 0;
}

void Queue::enqueue(std::string data){
	if (this->is_full())
	{
		head = 0;
	}
	else
	{
		q[head] = data;
		head++;
	}

	if (head >= size)
	{
		head = 0;
	}
}

std::string Queue::dequeue(){
	if (this->is_full())
	{
		head = size;
	}

	if (tail < head)
	{
		for(int i = tail; i < head - 1; i++)
		{
			q[i] = q[i + 1];
		}
		q[head - 1] = "";
		head = head - 1;
	}
	else
	{
		q[tail] = "";
	}

	return q[tail];
}

std::string Queue::front(){
	return q[tail];
}

bool Queue::is_empty(){
	if (tail == head && q[tail] == "")
	{
		return true;
	}
	return false;
}

bool Queue::is_full(){
	if (head == tail && q[head] != "")
	{
		return true;
	}
	return false;
}

std::string Queue::toString(){ //helper function
	std::string result = "";
	for(int i = tail; i < head; i++)
	{
		result = result + q[i] + " ";
	}

	return result;
}
