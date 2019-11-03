/* StringLinkedList.cpp */
#include "StringLinkedList.h"
#include <iostream>

//Constructor
StringLinkedList::StringLinkedList() : head(NULL) {}

//Destructor
StringLinkedList::~StringLinkedList() {
   while(!empty()) {
      removeFront();
   }
}

//Empty List?
bool StringLinkedList::empty() const {
	return head == NULL;
}

//Return Front Element
const string& StringLinkedList::front() const {
	return head->elem;
}

//Add Node to Front
void StringLinkedList::addFront(const string& e) {
	StringNode* v = new StringNode;
	v->elem = e;
	v->next = head;
	head = v;
}

//Remove Front Node
void StringLinkedList::removeFront() {
	StringNode* old = head;
	head = old->next;
	delete old;
}

//getSize: Get Size of Linked List
int StringLinkedList::getSize() const {
	int count = 0;
	if (head != NULL) {
	   StringNode* current = head;
       while (current->next != NULL) {
          count ++;
          current = current->next;
       }
       count ++;
    }
    return count;  
}

//Print Linked List into Standard Output
int StringLinkedList::printLL() const {
	if (head != NULL) {
       StringNode* current = head;
       while (current->next != NULL) {
          std::cout << current->elem << " ";
          current = current->next;
       }
       std::cout << current->elem << "\n";
       return 0; //return success
	}
	return 1; //return error
}

int StringLinkedList::reverseOrder() {
	if (head != NULL) {
		StringNode* current = head;
		StringNode* previous = NULL;
		StringNode* temp;
		while (current->next != NULL) {
			temp = current->next;
		    current->next = previous;
		    previous = current;
		    current = temp;
		}
		current->next = previous;
		head = current;
		return 0; //return success
	}
	return 1; //return error
}