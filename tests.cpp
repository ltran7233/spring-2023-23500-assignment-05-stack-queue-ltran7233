#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "StackList.h"
#include "Queue.h"

StackList *s1 = new StackList();
Queue *q1 = new Queue();

TEST_CASE("stack isempty()"){
	CHECK(s1->is_empty() == true);
}

TEST_CASE(){
}
