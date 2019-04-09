/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Header file for the Medusa subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#ifndef Medusa_hpp
#define Medusa_hpp
#include "Creature.hpp"

class Medusa : public Creature
{
private:


public:
	Medusa();
	virtual int attack();
	virtual void defense(int);

};

#endif 