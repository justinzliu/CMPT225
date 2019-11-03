/* StringLinkedList.h */

#ifndef STRINGLINKEDLIST_H_
#define STRINGLINKEDLIST_H_
#include "StringNode.h"

class StringLinkedList {
	public:
		StringLinkedList();
		~StringLinkedList();
		bool empty() const;
		const string& front() const;
		void addFront(const string& e);
		void removeFront();
		int getSize() const;
		int printLL() const;
		int reverseOrder();


	private:
		StringNode* head;
};

#endif /* STRINGLINKEDLIST_H_ */