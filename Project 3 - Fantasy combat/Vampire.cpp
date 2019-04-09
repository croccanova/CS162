/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Header file for the Harry Potter subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "Vampire.hpp"

Vampire::Vampire()
{
	armor = 1;
	strength = 18;
}

//Processes the attacker's turn
int Vampire::attack()
{
	attackResult = (rand() % 12) + 1;
	cout << "Vampire attacks with a roll of " << attackResult << "." << endl;
	return attackResult;
}

//processes the defender's turn
void Vampire::defense(int atk)
{
	int charm;
	charm = rand() % 2;
	if (charm == 1)
	{
		defenseResult = 99;
		cout << "Vampire used charm!" << endl;
	}
	else
	{
		defenseResult = (rand() % 6) + 1;
		cout << "Vampire defends with a roll of " << defenseResult << " and " << 1 << " armor." << endl;
	}

	//damage dealt after roll and armor
	dmg = atk - (defenseResult + 1);
	if (dmg < 0)
	{
		dmg = 0;
	}
	cout << "Vampire takes " << dmg << " damage." << endl;

	strength = strength - dmg;

	
}

