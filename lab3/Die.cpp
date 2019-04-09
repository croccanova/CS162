/******************************************************
Program Name: lab3 - Dice War
Author: Christian Roccanova
Date: 4/21/2017
Description: Die class.  Contains functions to store and return informatin about the die as well as the base roll function
******************************************************/

#include "Die.hpp"
#include <cstdlib>
#include <ctime>


void Die::setSides(int numSides)
{
	sides = numSides;
}

int Die::getSides()
{
	return sides;
}

//sets the die to either normal or loaded based on user input
void Die::setType(int t)
{
	if (t == 1)
	{
		dieType = "normal";
	}
	else if (t == 2)
	{
		dieType = "loaded";
	}
}

std::string Die::getType()
{
	return dieType;
}

//Generates a random number as a "roll" based on the number of sides of the die
int Die::roll()
{
	rollResult = rand() % sides+1;
	return rollResult;
}