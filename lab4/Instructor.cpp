/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: The Instructor Class - inherits from People, contains the virtual function getVal to generate an instructor rating
******************************************************/

#include "Instructor.hpp"


// generates a random instructor rating
double Instructor::getVal()
{
	rating = (double)rand() / RAND_MAX;
	return rating * 5.0;
}