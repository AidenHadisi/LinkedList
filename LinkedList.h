//Aiden Hadisi
//CS 121 Fall 18
//Declares a linked list that can hold a variable amount of items


#pragma once
#include <iostream>

template <class T>
struct Node {
	T data;
	Node * next;
};

template <class T>
class LinkedList {
private:
	//Points to the entry point for our linked list
	Node<T> * head;
	//Part of extra credit
	int recursiveSum(Node<T> * h = NULL);
public:
	//Constructor initializes values upon declaration
	LinkedList() {
		head = NULL;
	}
	//Deconstructor frees up any dynamic memory space granted to this class
	~LinkedList();
	//Returns the number of nodes that are contained in the linked list. USEFUL IN OTHER MEMBER FUNCTIONS.
	int size();
	//Displays all values in the list in order, starting from the head
	void display();
	//Inserts a node containing the argument into the linked list, fulfilling ascending order
	void insertItemSorted(T);
	//Returns whether the linked list contains the provided value or not
	bool findValue(T);
	//If a node is found containing the value passed as an argument, it will be safely removed from the LL
	void remove(T);
	int startRecursiveFunction() {
		return recursiveSum(head);
	}
};
