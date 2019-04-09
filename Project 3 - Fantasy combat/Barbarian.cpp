/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Header file for the Harry Potter subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "Barbarian.hpp"

Barbarian::Barbarian()
{
	armor = 0;
	strength = 12;
	
}

//Processes the attacker's turn
int Barbarian::attack()
{
	attackResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	cout << "Barbarian attacks with a roll of " << attackResult << "." << endl;
	return attackResult;
	
}

//processes the defender's turn
void Barbarian::defense(int atk)
{
	defenseResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	cout << "Barbarian defends with a roll of " << defenseResult << " and " << 0 << " armor." << endl;
	
	//damage dealt after roll and armor
	dmg = atk - (defenseResult + 1);
	if (dmg < 0)
	{
		dmg = 0;
	}
	cout << "Barbarian takes " << dmg << " damage." << endl;

	strength = strength - dmg;
}