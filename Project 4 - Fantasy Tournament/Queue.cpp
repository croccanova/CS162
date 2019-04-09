/******************************************************
Program name: Project 4 - Fantasy Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description:  Queue class - contains functions to add to the queue, remove nodes from the front, display a queue.
******************************************************/

#include "Queue.hpp"

//constructor
Queue::Queue()
{
	front = NULL;
	back = NULL;
}

//destructor
Queue::~Queue()
{
	QueueNode *temp = front;
	while (temp != NULL)
	{
		QueueNode *trash = temp;
		temp = temp->next;
		delete trash;
	}
}

//adds a value to the back of the queue
void Queue::addBack(Creature *newFighter)
{
	QueueNode *node = new QueueNode(newFighter);
	QueueNode *temp = front;

	//if list is empty, creates the first node
	if (front == NULL)
	{
		front = node;
		back = node;

	}
	else
	{
		//moves to back
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = node;
		back = node;
		node->prev = temp;

	}

	cout << "The current queue is: " << endl;
	node = front;

	while (node)
	{
		cout << node->data->getName() << endl;
		node = node->next;
	}
}

//tests if the queue is empty and returns true if it is
bool Queue::isEmpty()
{
	if (front == NULL)
	{
		return true;
	}

	return false;
}

//returns the value at the front of the queue
Creature* Queue::getFront()
{
	return front->data;
}

//deletes the value at the front of the queue
void Queue::removeFront()
{
	QueueNode *temp;
	QueueNode *node;
	if (front == NULL)
	{
		cout << "The queue is empty." << endl << endl;
	}
	else
	{
		temp = front;
		front = front->next;
		delete temp;
	}

}

//prints the current queue
void Queue::displayQueue()
{
	QueueNode *node = front;

	while (node)
	{
		cout << node->data->getName() << endl;
		node = node->next;
	}
}

// recovers the victor of a round and places them at the back of their team's queue
void Queue::recover(Creature* winner)
{
	//heals for 1d6
	int heal = winner->getStrength() + (rand() % 6) + 1;
	winner->setStrength(heal);

	QueueNode *node = new QueueNode(winner);
	QueueNode *temp = front;

	//if list is empty, creates the first node
	if (front == NULL)
	{
		front = node;
		back = node;
	}
	else
	{
		//moves to back
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = node;
		back = node;
		node->prev = temp;

	}
}