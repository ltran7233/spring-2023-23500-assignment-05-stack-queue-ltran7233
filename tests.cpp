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
