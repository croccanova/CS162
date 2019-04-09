/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Header file for the Harry Potter subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "Creature.hpp"

//Processes the attacker's turn
int Creature::attack()
{
	attackResult = 0;
	std::cout << "not working" << std::endl;
	return attackResult;
	
}

//Processes the defender's turn
void Creature::defense(int d)
{
	defenseResult = rand() % 7;
	
}

//returns creature's strength
int Creature::getStrength()
{
	return strength;
}


