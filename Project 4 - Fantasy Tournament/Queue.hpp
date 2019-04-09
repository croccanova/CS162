/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description:  Header file for the Queue class
******************************************************/


#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
#include <string>
#include "Creature.hpp"
using std::cout;
using std::endl;

class Queue
{
	struct QueueNode
	{
		Creature *data;
		QueueNode *next;
		QueueNode *prev;
		QueueNode(Creature *fighter, QueueNode *newNext = NULL)
		{
			data = fighter;
			next = newNext;
		}
	};

private:
	QueueNode *front;
	QueueNode *back;

public:
	Queue();
	~Queue();

	void addBack(Creature*);
	Creature* getFront();
	void removeFront();
	void displayQueue();
	void recover(Creature*);
	bool isEmpty();
};

#endif
