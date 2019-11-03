/* StringNode.h */

#ifndef STRINGNODE_H_
#define STRINGNODE_H_
#include <string>

using namespace std;

class StringNode {
	private:
		string elem;
		StringNode* next;
		friend class StringLinkedList;
};

#endif /* StringNODE_H_ */