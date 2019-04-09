/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Barbarian subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "Barbarian.hpp"

Barbarian::Barbarian()
{
	armor = 0;
	strength = 12;
	name = "Barbarian";
}

//Processes the attacker's turn
int Barbarian::attack()
{
	attackResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	cout << name << " attacks with a roll of " << attackResult << "." << endl;
	return attackResult;
	
}

//processes the defender's turn
void Barbarian::defense(int atk)
{
	defenseResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	cout << name << " defends with a roll of " << defenseResult << " and " << 0 << " armor." << endl;
	
	//damage dealt after roll and armor
	dmg = atk - (defenseResult + 1);
	if (dmg < 0)
	{
		dmg = 0;
	}
	cout << name << " takes " << dmg << " damage." << endl;

	strength = strength - dmg;
}