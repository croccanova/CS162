/******************************************************
Program name: Lab 7 - Queue
Author: Christian Roccanova
Date: 5/20/2017
Description:  Queue class - contains functions to add to the queue, remove nodes from the front, display the front value and display the full queue.
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
void Queue::addBack(int val)
{
	QueueNode *node = new QueueNode(val);
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
		while (temp->next != front)
		{
			temp = temp->next;
		}

		temp->next = node;
		back = node;
		temp->next->next = front; // sets next from the last node equal to the front node
		node->prev = temp;

	}

	cout << "The current queue is: " << endl;
	node = front;

	while (node)
	{
		cout << node->data << endl;
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
int Queue::getFront()
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
		while (temp->next != front)
		{
			temp = temp->next;
		}
		temp->next->next = front;

		delete temp;
	}



	cout << "The current queue is: " << endl;
	node = front;

	while (node)
	{
		cout << node->data << endl;
		node = node->next;
	}
}

//prints the current queue
void Queue::displayQueue()
{
	cout << "The current queue is: " << endl;
	QueueNode *node = front;

	while (node)
	{
		cout << node->data << endl;
		node = node->next;
	}
}