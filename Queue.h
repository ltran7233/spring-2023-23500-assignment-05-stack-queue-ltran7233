#pragma once

class Queue
{
private:
	int head;
	int tail;
	int size = 5;
	std::string q[5];

public:
	Queue();
	int getHead();
	int getTail();
	void enqueue(std::string i);
	std::string dequeue();
	std::string front();
	bool is_empty();
	bool is_full();
	std::string toString();
};
