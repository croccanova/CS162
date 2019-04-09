/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/29/2017
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


