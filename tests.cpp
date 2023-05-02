#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "StackList.h"
#include "Queue.h"

StackList *s1 = new StackList();
Queue *q1 = new Queue();

TEST_CASE("stack isempty()"){
	CHECK(s1->is_empty() == true);
}

TEST_CASE("stack functions"){
	s1->push("1");
	s1->push("2");
	s1->push("3");
	CHECK(s1->top() == "3");
	CHECK(s1->pop() == "2");
	s1->push("4");
	CHECK(s1->top() == "4");
	CHECK(s1->pop() == "2");
}

TEST_CASE("queue functions"){
	CHECK(q1->is_empty() == 1);
	CHECK(q1->is_full() == 0);
	q1->enqueue("2");
	q1->enqueue("4");
	q1->enqueue("6");
	q1->enqueue("8");
	CHECK(q1->front() == "2");
	q1->enqueue("10");
	q1->enqueue("12");
	q1->enqueue("14");
	q1->enqueue("16");
	q1->enqueue("18");
	q1->enqueue("20"); // full
	CHECK(q1->is_full() == 1);
	CHECK(q1->is_empty() == 0);
	q1->dequeue();
	CHECK(q1->front() == "4");
	for (int i=0; i<9; i++){
		q1->dequeue();
	}
	CHECK(q1->is_empty() == 1);
}
