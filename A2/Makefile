
Objects = main.o StringLinkedList.o

Assignment2: $(Objects)
	g++ -o Assignment2 $(Objects)
main.o: main.cpp
	g++ -c main.cpp
StringLinkedList.o: StringLinkedList.cpp StringLinkedList.h StringNode.h
	g++ -c StringLinkedList.cpp
clean:
	rm *o Assignment2
