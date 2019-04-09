/******************************************************
Program Name: Lab6 - linked lists
Author: Christian Roccanova
Date: 5/11/2017
Description: Main file - loops through the menu until the user chooses to exit - *Note to the TA, the menu includes options for Extra Credit Task 1.
******************************************************/

#include <iostream>
#include "List.hpp"
#include "InputValidation.hpp"

using std::cout;
using std::cin;
using std::endl;

//prints the menu and calls functions based on user choice
void Menu()
{
	
	List();
	char choice;
	Validate valid;
	List list;
	int newNum;
	bool repeat = true;
	
	//menu loop suntil user quits
	do
	{
		//prints menu and instructions
		cout << "Welcome to the linked lists program.  Please enter the number of one of the following options." << endl;
		cout << "1. Add a new node to the head" << endl << "2. Add a new node to the tail" << endl << "3. Delete from head" << endl << "4. Delete from tail" << endl << "5. Traverse the list reversely and print" << endl;
		cout << "6. Display the head node" << endl << "7. Display the tail node" << endl << "8. Quit" << endl;
		cin >> choice;

		//loops if the user's choice is not an option
		while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6' && choice != '7' && choice != '8')
		{
			cout << "Sorry, that was not a valid choice. Please try again" << endl;
			cin >> choice;
		}

		switch (choice)
		{
		case '1':
		{
			cout << "Please enter an integer to add to the head." << endl;
			newNum = valid.validateInt();
			list.addHead(newNum);
		}
		break;
		//	return 1;

		case '2':
		{
			cout << "Please enter an integer to add to the tail." << endl;
			newNum = valid.validateInt();
			list.addTail(newNum);
		}
		break;
		//	return 2;

		case '3':
		{
			list.removeHead();
		}
		break;
		//	return 3;

		case '4':
		{
			list.removeTail();
		}
		break;
		//	return 4;

		case '5':
		{
			list.traverse();
		}
		break;
		//	return 5;
		case '6':
		{
			list.printHead();
		}
		break;

		case '7':
		{
			list.printTail();
		}
		break;

		case '8':
		{
			repeat = false;
		}
		}
				
	}while(repeat == true);

	list.~List();
}

int main()
{
	//calls menu
	Menu();

	return 0;

}