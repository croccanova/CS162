/******************************************************
Program Name: lab3 - Dice War
Author: Christian Roccanova
Date: 4/21/2017
Description: LoadedDie class.  Contains the altered roll function for the loaded die.
******************************************************/

#include "LoadedDie.hpp"
#include <cstdlib>
#include <ctime>

//increases chances by rolling the die 3 times and only returniong the highest value
int LoadedDie::roll()
{
	highRoll = 0;

	for (int i = 0; i < 3; i++)
	{
		temp = rand() % sides + 1;

		if (temp > highRoll)
		{
			highRoll = temp;
		}
	}

	rollResult = highRoll;

	return rollResult;
}