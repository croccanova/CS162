/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Header file for the Harry Potter subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#ifndef BlueMen_hpp
#define BlueMen_hpp
#include "Creature.hpp"

class BlueMen : public Creature
{
private:


public:
	BlueMen();
	virtual int attack();
	virtual void defense(int);

};

#endif 