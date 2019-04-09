/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Header file for the Creature Base Class
******************************************************/

#ifndef Creature_hpp
#define Creature_hpp

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

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
	std::string name;

public:
	virtual int attack();
	virtual void defense(int);
	int getStrength();
	void setStrength(int);
	void setName();
	std::string getName();
	
};

#endif 
