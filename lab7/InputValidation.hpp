/******************************************************
Program Name: Lab 7
Author: Christian Roccanova
Date: 5/20/2017
Description: Header file for the InputValidation class.
******************************************************/

#ifndef InputValidation_hpp
#define InputValidation_hpp

#include<string>
#include<cstdio>

class Validate
{
private:

	char userInput[4096];
	int integer;
	bool valid;


public:
	Validate();
	int validateInt();
};
#endif 


