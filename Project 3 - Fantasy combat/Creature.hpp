/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Header file for the Harry Potter subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#ifndef Creature_hpp
#define Creature_hpp

#include <cstdlib>
#include <ctime>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Creature
{
protected:
	int attackResult;
	int defenseResult;
	int strength;
	int armor;
	int dmg;

public:
	virtual int attack();
	virtual void defense(int);
	int getStrength();

};

#endif 
