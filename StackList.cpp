#include <iostream>
#include "StackList.h"
#include "Node.h"

StackList::StackList(){
    head = nullptr;
}

StackList::~StackList(){
    std::cerr << "Calling the destructor\n";
    Node *walker = head;
    Node *trailer = nullptr;
    while (walker != nullptr){
        trailer = walker;
        walker = walker->getNext();
        std::cerr << "Deleting " << trailer->getData() << ", ";
        delete trailer;
    }
    std::cerr << "\n";
}

void StackList::push(std::string data){
	Node *tmp = new Node(data);
	tmp->setNext(head);
	head = tmp;
}

std::string StackList::pop(){ // remove and return the top item
	Node *walker;
	walker = head;
	if (this->is_empty() == true)
	{
		throw STACK_ERR_EMPTY;
	}

	head = head->getNext();
	return head->getData();
}

std::string StackList::top(){ // return but do not remove the top item
	if (this->is_empty() == true)
	{
		throw STACK_ERR_EMPTY;
	}
	return head->getData();
}

bool StackList::is_empty(){
    return head == nullptr;
}

std::string StackList::toString() // helper function for testing
{
	Node *tmp = this->head;
	std::string result = "";
	result = result + "head-->";
	while (tmp != nullptr)
	{
		result = result + tmp->getData();
		result = result + "-->";
		tmp = tmp->getNext();
	}
	result = result + "nullptr";
	return result;
}
