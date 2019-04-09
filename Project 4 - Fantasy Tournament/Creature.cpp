/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Creature Base Class - contains virtual attack and defense functions as well as a function to return a creature's strength
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

void Creature::setStrength(int newStrength)
{
	strength = newStrength;
}

// allows the user to set a fighter's name
void Creature::setName()
{
	cout << "Please enter a name for this fighter." << endl;
	cin >> name;
}


// returns the fighter's name set by the user
std::string Creature::getName()
{
	return name;
}

