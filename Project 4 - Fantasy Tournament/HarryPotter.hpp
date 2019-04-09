/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Header file for the Harry Potter subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#ifndef HarryPotter_hpp
#define HarryPotter_hpp
#include "Creature.hpp"

class HarryPotter : public Creature
{
private:
	int life;

public:
	HarryPotter();
	virtual int attack();
	virtual void defense(int);

};

#endif 