/******************************************************
Program Name: lab3 - Dice War
Author: Christian Roccanova
Date: 4/21/2017
Description: Header file for LoadedDie class.  Inherits from Die class.
******************************************************/

#ifndef LoadedDie_hpp
#define LoadedDie_hpp
#include "Die.hpp"

class LoadedDie : public Die
{
private:
	int temp;
	int highRoll;

public:
	virtual int roll();

};



#endif 