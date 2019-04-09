/******************************************************
Program Name: Project 2
Author: Christian Roccanova
Date: 4/29/2017
Description: Main file for Project 2. Contains the Menu function to allow users to choose to add or remove an item, display the list and exit the program
******************************************************/

#include <string>
#include<cstdio>
#include <iostream>
#include "Item.hpp"
#include "list.hpp"
#include "InputValidation.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;


//prints the menu and calls the appropriate functions based on user input
int Menu(int c, list itemList)
{
	Item tempItem;
	string tempName;
	char choice;
	char overwrite;
	
	//prints menu choices and instructions
	cout << "Welcome to the shopping list.  Please enter the number of one of the following options." << endl;
	cout << "1. Add item" << endl << "2. Remove last item" << endl << "3. Display current list" << endl << "4. Quit" << endl;
	cin >> choice;

	// Validates menu choice, asks for another choice if the given choice is not a valid option
	while (choice != '1' && choice != '2' && choice != '3' && choice != '4')
	{
		cout << "Sorry, that was not a valid choice. Please try again" << endl;
		cin >> choice;
	}

	// switch calls relevant function based on user input and exits if user chooses to quit
	switch (choice)
	{
	// user chooses to add an item
	case '1':
		cout << "Please enter the name of the item." << endl;
		cin >> tempName;
		tempItem.setName(tempName);
		
		// overloaded == operator checks if the item is already on the list
		if (itemList.operator==(tempItem))
		{
			cout << "That item is already on the list, would you like to overwrite it? (Y/N)" << endl;
			cin >> overwrite;
			while (overwrite != 'n' && overwrite != 'y' && overwrite != 'N' && overwrite != 'Y')
			{
				cout << "Sorry, that was not a valid choice. Please try again" << endl;
				cin >> overwrite;
			}
			// overwrites the original item with the new data
			if (overwrite == 'y' || overwrite == 'Y')
			{
				itemList.addItem(itemList.getCopy(), tempName);
			}
			
			return 3;	
				
		}
		else
		{
			itemList.addItem(c, tempName);
		}
		return 1;

	//user chooses to remove the last item
	case '2':
		if (c == 0)
		{
			cout << "The list is currently empty." << endl << endl;
		}
		else
		{
			itemList.removeItem(c);
		}
		return 2;

	//user chooses to display the list
	case '3':
		if (c == 0)
		{
			cout << "The list is currently empty." << endl << endl;
		}
		else
		{
			itemList.displayList(c);
		}
		return 3;
	
	//user chooses to exit
	case '4': 
		return 4;

	}
}

int main()
{
	int selection;
	int itemCount = 0;
	list itemList;
	
	//loops through menu until user chooses to exit
	do
	{
		selection = Menu(itemCount, itemList);
		if (selection == 1)
		{
			itemCount++;
		}
		if (selection == 2)
		{
			itemCount--;
		}
	} while (selection != 4);

	itemList.deallocate(itemCount);

	return 0;
}