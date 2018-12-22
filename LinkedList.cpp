// Author: Aiden Hadisi
// CPSC 121
// 12/18/2018
#include <iostream>
using namespace std;
#include "LinkedList.h"





template <class T>
LinkedList<T>::~LinkedList() {
	Node<T> * nodeptr;
	Node<T> * nextNode;
	nodeptr = head;
	while(nodeptr != nullptr) {
		nextNode = nodeptr->next;
		delete nodeptr;
		nodeptr = nextNode;
	}
}

template <class T>
int LinkedList<T>::size() {
    Node<T> * nodeptr = head;
    int count = 0;
    while (nodeptr != nullptr) {
        count++;
        nodeptr = nodeptr->next;
    }
    return count;
}

template <class T>
void LinkedList<T>::insertItemSorted(T num) {
	Node<T> * newNode;
	Node<T> * nodeptr;
	Node<T> * previousNode = nullptr;
	newNode = new Node<T>;
	newNode->data = num;

	if(!head){
		head = newNode;
		newNode->next = nullptr;
	}
 	else {
		nodeptr = head;
		previousNode = nullptr;
		while (nodeptr != nullptr && nodeptr->data < num) {
			previousNode = nodeptr;
			nodeptr = nodeptr->next;
		}
		if(previousNode == nullptr) {
			head = newNode;
			newNode->next = nodeptr;
		}
		else {
			previousNode->next = newNode;
			newNode->next = nodeptr;
		}
	}

}


template <class T>
void LinkedList<T>::display() {
	Node<T> * nodeptr = head;
	while (nodeptr != nullptr) {
		cout << nodeptr->data << " ";
		nodeptr = nodeptr->next;
	}
	cout << endl;
}
template <class T>
bool LinkedList<T>::findValue(T num) {
	Node<T> * nodeptr = head;
	while(nodeptr != nullptr) {
		if(nodeptr->data == num)
			return true;
		nodeptr = nodeptr->next;
	}
	return false;
}

template <class T>
void LinkedList<T>::remove(T num) {
	Node<T> * nodeptr;
	Node<T> * previousNode;
	if(!head) {
		return;
	}
	if(head->data == num) {
		nodeptr = head->next;
		delete head;
		head = nodeptr;
	}
	else {
		nodeptr = head;
		while (nodeptr != nullptr && nodeptr->data != num) {
			previousNode = nodeptr;
			nodeptr = nodeptr->next;
		}
		if(nodeptr) {
			previousNode->next = nodeptr->next;
			delete nodeptr;
		}
	}
}
