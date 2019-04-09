/******************************************************
Program name: Lab 9 - STL Containers
Author: Christian Roccanova
Date: 6/2/2017
Description:  Main file - contains the menu function 
******************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "InputValidation.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include <string>
#include <stack>
#include <queue>


using std::cin;
using std::cout;
using std::endl;

void Menu()
{
	char choice;
	int num, rounds, addBuff, popBuff;
	bool repeat = true;
	std::string text;
	Validate valid;
	Queue buffer;
	Stack palindrome;

	//menu loops until user quits
	do
	{
		//prints menu and instructions
		cout << "Welcome, please enter the number of one of the following options." << endl;
		cout << "1. Queue Buffer" << endl << "2. Stack Palindrome" << endl << "3. Exit" << endl;
		cin >> choice;

		//loops if the user's choice is not an option
		while (choice != '1' && choice != '2' && choice != '3')
		{
			cout << "Sorry, that was not a valid choice. Please try again" << endl;
			cin >> choice;

		}

		switch (choice)
		{

			// user chooses to use a queue to simulate a buffer
		case '1':
		{
						
			cout << "How many rounds would you like to run?" << endl;
			rounds = valid.validateInt(); // validates user input is an integer

			cout << "What percentage would you like be added?" << endl;
			addBuff = valid.validateInt();

			cout << "What percentage would you like to be removed?" << endl;
			popBuff = valid.validateInt();
						
			// builds the queue with the user defined buffer
			buffer.runBuffer(rounds, addBuff, popBuff);

			// clears queue for the next round
			buffer.clearQueue(); 
						
		}
		break;

		// user chooses to use a stack to print a palindrome
		case '2':
		{
			
			cout << "Please enter a line of text." << endl;
			cin >> text;
			
			// builds a stack from the user defined string and prints it as a palindrome
			palindrome.makePalindrome(text);
						
		}
		break;

		// user chooses to exit
		case '3':
		{
			repeat = false;
		}
		break;
		}
					
	} while (repeat == true);

}



int main()
{
	//seeds random number generator
	srand(time(NULL));
	
	//calls menu
	Menu();

	return 0;

}