/******************************************************
Program Name: lab3 - Dice War
Author: Christian Roccanova
Date: 4/21/2017
Description: Header file for Die class.
******************************************************/

#ifndef Die_hpp
#define Die_hpp

#include <string>

class Die
{
protected:
	int sides;
	int rollResult;
	std::string dieType;

public:
	
	void setSides(int);
	int getSides();
	virtual int roll();
	void setType(int);
	std::string getType();
};



#endif 
