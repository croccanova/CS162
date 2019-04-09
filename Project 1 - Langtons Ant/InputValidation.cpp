/******************************************************
Program Name: Project1 - Langton's Ant
Author: Christian Roccanova
Date: 4/15/2017
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

int Validate::validateInt()
{
	
	while (valid == false)
	{

		cin >> userInput;

		if (sscanf(userInput, "%d", &integer) != 1)
		{
			cout << "Sorry, that was not an integer please try again" << endl;
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