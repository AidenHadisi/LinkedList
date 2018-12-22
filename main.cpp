
//Provided for testing. A different main (with same usage/assumptions) may be used to grade your submission.

#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;
int main()
{
	LinkedList<int> mylist;
	cout << "Starting size: " << mylist.size() << endl;
	mylist.insertItemSorted(4);
	mylist.insertItemSorted(3);
	mylist.insertItemSorted(5);
	mylist.display();
	mylist.startRecursiveFunction();
	cout << "Size after insertion: " << mylist.size() << endl;
	mylist.remove(4);
	cout << "Size after deletion: " << mylist.size() << endl;
	cout << "1 for item found: " << mylist.findValue(3) << endl;
	cout << "0 for item missing: " << mylist.findValue(4) << endl;
	return 0;
}

template <class T>
int LinkedList::recursiveSum(Node<T> * n)
{

}
