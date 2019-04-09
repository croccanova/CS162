/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: The Student Class - inherits from People, contains the virtual function getVal to generate a GPA
******************************************************/

#include "Student.hpp"


// generates a random student GPA
double Student::getVal()
{
	GPA = (double)rand() / RAND_MAX;
	return GPA * 4.0;
}