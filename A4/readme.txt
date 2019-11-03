301070053 jzl1 Justin Liu
CMPT225 - D100
Ramesh Krishnamurti

Method:
All values from text files of the given format are stored directly into two heaps. As the values are in added into their respective heaps (representing the two lists), the heap.insert function is called which "sorts" the values into a typical heap structure. With this attribute, I can then extract the maximum value and compare the heaps with relative efficiency. The compare function first extracts a value from the first list (heap1) and then extracts all values greater than the value being considered until a match is found, or the value is greater than any remnants in the second list (heap2).
The expected input into stdin to run program is: ./a4 < FILENAME.txt.

Libraries:
Only iostream and heap.h are included to facilitate operations such as cout, cin, heap class, etc.

Downloaded Code:
heap.h is largely adopted from our Assignment 3. A significant portion of the code is written and given by Ramesh Krishnamurti. It has been heavily modified to accomodate operations necessary for this specific program.
