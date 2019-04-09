/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: Main file for Lab4.  Calls the menu function and loops through it until the user chooses to quit.
******************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "University.hpp"
#include "People.hpp"
#include "Instructor.hpp"
#include "Student.hpp"
#include "Building.hpp"


using std::cout;
using std::cin;
using std::endl;

int Menu()
{
	University OSU;

	char choice;
	cout << "Welcome to the Oregon State University information system.  Please enter the number of one of the following options." << endl;
	cout << "1. Display building information" << endl << "2. Display student/faculty information" << endl << "3. Choose a person to work" << endl << "4. Quit" << endl;
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
	case '1':
		OSU.buildingInfo();
		return 1;
	case '2':
		OSU.personInfo();
		return 2;
	case '3':
		OSU.workMenu();
		return 3;
	case '4': exit(0);

	}
}

int main()
{
	//dummy value to keep loop going until user decides to quit
	bool quit = false;
		
	//seeds random number generator
	srand(time(NULL));

	//loops menu
	while (quit == false)
	{
		Menu();
	}

}