/******************************************************
Program Name: Lab 5 - Recursion
Author: Christian Roccanova
Date: 5/5/2017
Description: Main file for Lab 5. Contains the Menu function to allow users to choose to reverse a string, sum an array, find a triangle number and exit the program
******************************************************/

#include <string>
#include <iostream>
#include <cstdio>
#include "Recursion.hpp"
#include "InputValidation.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;


//prints the menu and calls the appropriate functions based on user input
int Menu()
{
	char choice;
	Recursion recur;
	Validate valid;
	int length;
	int arraySize;
	int userInt;
	
	
	//prints menu choices and instructions
	cout << "Welcome to the Recursion menu.  Please enter the number of one of the following options." << endl;
	cout << "1. Reverse a string" << endl << "2. Find the sum of an array" << endl << "3. Find a triangle number" << endl << "4. Quit" << endl;
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
		// user chooses to reverse a string
	case '1':
	{
		cout << "Please enter a word or phrase." << endl;
		recur.setString();
		length = recur.getLength();
		recur.reverse(length);
	}
		return 1;

		//user chooses to sum an array
	case '2':
	{
		cout << "How many elements would you like the array to hold?" << endl;
		arraySize = valid.validateInt();
		int* userArray = new int[arraySize];
		recur.setSize(arraySize);

		for (int i = 0; i < arraySize; i++)
		{
			cout << "Please enter an integer element." << endl;
			userArray[i] = valid.validateInt();
		}

		recur.sum(arraySize, userArray);
				
		delete[] userArray;
		
		return 2;
	}
		//user chooses to find a triangle number
	case '3':
	{
		cout << "Please enter the integer you would like to find the triangular number for." << endl;
		userInt = valid.validateInt();
		recur.triangle(userInt);
		return 3;
	}
		//user chooses to exit
	case '4':
		return 4;
	
	}
}

int main()
{
	int menuReturn;
	do
	{
		menuReturn = Menu();
	} while (menuReturn != 4);

	return 0;
}