/*  301070053 jzl1 Justin Liu
**  a4.cpp
**  Assignment 4, CMPT-225
**
**  Reads a sequence of integers (in the range of int's) from standard in;
**  It is interpreted as two lists, separated by a single 0
**/
#include <iostream>
#include "heap.h"
#include "HCompare.h"

using namespace std;

int main() { 
	long double x ;
    bool List2 = false; 
    //list 1
    Heap heap1;
    //list 2
    Heap heap2;
    cin >> x;
    //grab values from text specified in stdin
    while( !cin.eof() ){
       if (x == 0) {
          List2 = true ;
       }
       //insert into list1
       else if (!List2) {
          heap1.insert(x,x);        
       }
       //insert into list2
       else {
          heap2.insert(x,x);
       }
       cin >> x;
    }
    x = HCompare(heap1,heap2);
    cout << "301070053 jzl1 Justin Liu\n";
    if (x == -1) {
       cout << "None" << endl;
    }
    else {
       cout << x << endl;
    }
    return 0;
}