/******************************************************
Program Name: Project 2
Author: Christian Roccanova
Date: 4/29/2017
Description: InputValidation class.  Contains the validateInt function which takes a user input, checks if it is an integer and if so, returns it as an integer.
******************************************************/

#include "InputValidation.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Validate::Validate()
{
	int integer = 0;
	bool valid = false;
}

//returns user input if it is an integer and an error message if it is not
int Validate::validateInt()
{
	valid = false;

	while (valid == false)
	{

		cin >> userInput;

		if (sscanf(userInput, "%d", &integer) != 1)
		{
			cout << "Sorry, that was not a valid input, please try again" << endl;
			integer = 0;
		}
		else if (sscanf(userInput, "%d", &integer) == 1)
		{
			valid = true;
		}

	}

	valid = false;
	return integer;
}