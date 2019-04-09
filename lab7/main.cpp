/******************************************************
Program name: Lab 7 - Queue
Author: Christian Roccanova
Date: 5/20/2017
Description:  Main file - contains the menu function to test the queue
******************************************************/

#include <iostream>
#include "Queue.hpp"
#include "InputValidation.hpp"

using std::cout;
using std::cin;
using std::endl;

//prints the menu and calls functions based on user choice
void Menu()
{
	Queue();
	char choice;
	Validate valid;
	Queue queue;
	int newNum;
	bool repeat = true;

	//menu loops until user quits
	do
	{
		//prints menu and instructions
		cout << "Welcome to the Queue.  Please enter the number of one of the following options." << endl;
		cout << "1. Enter a value to be added to the queue" << endl << "2. Display first node (front) value" << endl << "3. Remove first node (front) value" << endl << "4. Display the queue contents" << endl << "5. Exit" << endl;
		cin >> choice;

		//loops if the user's choice is not an option
		while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5')
		{
			cout << "Sorry, that was not a valid choice. Please try again" << endl;
			cin >> choice;
		}

		switch (choice)
		{
		case '1':
		{
			cout << "Please enter an integer to add to the queue." << endl;
			newNum = valid.validateInt();
			queue.addBack(newNum);
		}
		break;
		//	return 1;

		case '2':
		{
			if (queue.isEmpty())
			{
				cout << "The queue is empty." << endl << endl;
			}
			else
			{
				cout << "The number at the front of the queue is: " << queue.getFront() << endl << endl;
			}
		}
		break;
		//	return 2;

		case '3':
		{
			queue.removeFront();
		}
		break;
		//	return 3;

		case '4':
		{
			queue.displayQueue();
		}
		break;
		//	return 4;
				
		case '5':
		{
			repeat = false;
		}
		}

	} while (repeat == true);

	
}

int main()
{
	//calls menu
	Menu();

	return 0;

}