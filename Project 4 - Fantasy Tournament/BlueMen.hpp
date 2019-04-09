/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Header file for the BlueMen subclass- inherits from Creature, contains virtual attack and defense functions
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