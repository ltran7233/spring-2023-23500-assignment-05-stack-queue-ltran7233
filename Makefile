OBJECTS = StackList.o Node.o Queue.o

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp StackList.h Node.h

tests.o: tests.cpp doctest.h Node.h

Queue.o: Queue.cpp Queue.h Node.h

StackList.o: StackList.cpp StackList.h Node.h 

Node.o: Node.cpp Node.h

clean:
	rm -f main tests main.o tests.o $(OBJECTS)
