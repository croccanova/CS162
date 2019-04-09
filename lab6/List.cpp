/******************************************************
Program Name: Lab6 - linked lists
Author: Christian Roccanova
Date: 5/11/2017
Description: List class - contains functions to add and remove nodes to the head and tail, traverse and print the list in reverse and display the head and tail individually.
******************************************************/

#include "List.hpp"

List::List()
{
	head = NULL;
	tail = NULL;
	
}

//adds a new node to the head
void List::addHead(int &newVal)
{
	Node *node = new Node(newVal);
	
	//if list is empty, creates the first node
	if (head == NULL)
	{
		head = node;
		tail = node;
		prev = NULL;
	}
	else
	{
		head->prev = node;
		node->next = head;
		head = node;

		Node *temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		tail = temp;
	}
	
	


	// prints the current list
	cout << "The current list is: " << endl;
	while (node)
	{
		cout << node->num << endl;
		node = node->next;
	}
	
}

//adds a new node to the tail
void List::addTail(int &newVal)
{
	Node *node = new Node(newVal);
	Node *temp = head;

	//if list is empty, cretes the first node
	if (head == NULL)
	{
		head = node;
		tail = node;		
	}
	else
	{
		//moves to tail
		while (temp->next != NULL)
		{
			temp = temp->next; 
		}
		
		temp->next = node;
		tail = node;
		node->prev = temp;
		
	}

	cout << "The current list is: " << endl;
	node = head;

	while (node)
	{
		cout << node->num << endl;
		node = node->next;
	}
}

//removes the head node
void List::removeHead()
{
	Node *temp;
	Node *node;
	if (head == NULL)
	{
		cout << "The List is empty." << endl << endl;
	}
	else
	{
		temp = head;
		head = head->next;
		delete temp;
	}

	cout << "The current list is: " << endl;
	node = head;

	while (node)
	{
		cout << node->num << endl;
		node = node->next;
	}
}

//removes the tail node
void List::removeTail()
{
	Node *temp = head;
	Node *node;
	if (temp == NULL)
	{
		cout << "The List is empty." << endl << endl;
	}

	else
	{
		//loops until temp is the last node
		while (temp->next != NULL)
		{
			
			temp = temp->next;
			
		}
		temp = tail;
		tail = temp->prev;
		delete temp;
		
	}

	cout << "The current list is: " << endl;
	node = head;

	while (node != tail)
	{
		cout << node->num << endl;
		node = node->next;
	}
	cout << tail->num << endl;
}

//prints the list in backwards
void List::traverse()
{
	Node* temp = head;
	if (temp == NULL)
	{
		cout << "The List is empty." << endl << endl;
	}
	
	else
	{
		//loops until temp is the last node
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		
		cout << "The List in reverse order is:" << endl;
		// Traversing backward using prev pointer
		while (temp != head)
		{
			cout << temp->num << endl;
			temp = temp->prev;
		}
		cout << head->num << endl;
	}
}

//destructor
List::~List()
{
	Node *temp = head;
	while (temp != NULL)
	{
		Node *trash = temp;
		temp = temp->next;
		delete trash;
	}

}

// Extra Credit : prints the value of the head node
void List::printHead()
{
	if (head == NULL)
	{
		cout << "The list is empty." << endl << endl;
	}
	else
	{
		cout << "The head is: " << head->num << endl << endl;
	}
}

// Extra Credit : prints the value of the tail node
void List::printTail()
{
	if (head == NULL)
	{
		cout << "The list is empty." << endl << endl;
	}
	else
	{
		cout << "The tail is: " << tail->num << endl << endl;
	}
	
}