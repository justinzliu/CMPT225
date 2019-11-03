#include <cstdlib>
#include <iostream>
#include <string>
#include "StringLinkedList.h"
using namespace std;

int main() {
	cout << "Justin Liu\njzl1\n301070053\n\n";
	StringLinkedList LL;
	string input; 
	int test = 0;
	while (getline(cin,input) && test < 3) {
       LL.addFront(input);
       test++;
	}
	cout << "\n" << LL.getSize() << "\n";
	LL.printLL();
	cout << "\n" << "\n";
	LL.reverseOrder();
	LL.printLL();
	cout << ("goodbye\n");
	return EXIT_SUCCESS;
}