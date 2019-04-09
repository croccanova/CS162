/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Header file for the Barbarian subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#ifndef Barbarian_hpp
#define Barbarian_hpp
#include "Creature.hpp"


class Barbarian : public Creature
{
private:


public:
	Barbarian();
	virtual int attack();
	virtual void defense(int);

};

#endif 