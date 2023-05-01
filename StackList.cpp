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

StackList::void push(int num){

}

StackList::int pop(){ // remove and return the top item

}

StackList::int top(){ // return but do not remove the top item

}

StackList::bool is_empty(){
    return head == nullptr;
}
