/******************************************************
Program name: Lab 7 - Queue
Author: Christian Roccanova
Date: 5/20/2017
Description:  Header file for the Queue class
******************************************************/


#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
using std::cout;
using std::endl;

class Queue
{
	struct QueueNode
	{
		int num;
		QueueNode *next;
		QueueNode *prev;
		QueueNode(int newVal, QueueNode *newNext = NULL)
		{
			num = newVal;
			next = newNext;
		}
	};

private:
	QueueNode *front;
	QueueNode *back;

public:
	Queue();
	~Queue();

	void addBack(int);
	int getFront();
	void removeFront();
	void displayQueue();
	bool isEmpty();
};

#endif