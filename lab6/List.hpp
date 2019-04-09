/******************************************************
Program Name: Lab6 - linked lists
Author: Christian Roccanova
Date: 5/11/2017
Description: Header file for the List class
******************************************************/

#ifndef List_hpp
#define List_hpp

#include<iostream>

using std::cout;
using std::endl;

class List
{
private:
	struct Node
	{
		int num;
		Node* next;
		Node* prev;
		Node(int value1, Node *next1 = NULL)
		{
			num = value1;
			next = next1;
		}
	};

	Node *head;
	Node *tail;
	Node *next;
	Node *prev;

public:
	List();
	~List();
	void addHead(int&);
	void addTail(int&);
	void removeHead();
	void removeTail();
	void traverse();
	void printHead();
	void printTail();

};

#endif 
