#ifndef HCOMPARE_H_
#define HCOMPARE_H_
#include "heap.h"
#include <iostream>

long double HCompare (Heap& heap1, Heap& heap2); //return largest key present in heap1 that is not present in heap2. removes all elements in heap2 until match is not found.

long double HCompare (Heap& heap1, Heap& heap2) {
	int s1 = heap1.size();
	int s2 = heap2.size();
	long double key1;
	long double key2;
	for (int i=0; i<s1; i++) {
		key1 = heap1.extractMax();
		//make sure heap is not empty
		if (s2 > 0) { 
			key2 = heap2.peekMaxPriority();
			if (key1 <= key2) {
				while (key1 < key2){
		    		s2--;
		   			key2 = heap2.extractMax();
		   			//if heap was been completely emptied, then max element in heap 1 is returned
		   			if (s2 <= 0) { 
		   				return key1;
		   			}
		   			key2 = heap2.peekMaxPriority();
		   		}
		   		//max element in heap1 is larger than all elements remaining in heap2. need to include to allow for efficiency when comparing more elements
		   		if (key1 > key2) {
		   			return key1;
		   		}
			}
			//max element in heap1 is larger than all elements remaining in heap2
			else {
		       return key1;
		    }
		}
		//heap2 is empty, so max element in heap1 is returned
		else {
			return key1;
		}
	}
	return -1;
}

#endif /* HCOMPARE_H_ */