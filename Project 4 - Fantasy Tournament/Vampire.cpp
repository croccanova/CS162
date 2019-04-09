/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Vampire subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "Vampire.hpp"

Vampire::Vampire()
{
	armor = 1;
	strength = 18;
	name = "Vampire";
}

//Processes the attacker's turn
int Vampire::attack()
{
	attackResult = (rand() % 12) + 1;
	cout << name << " attacks with a roll of " << attackResult << "." << endl;
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
		cout << name << " used charm!" << endl;
	}
	else
	{
		defenseResult = (rand() % 6) + 1;
		cout << name << " defends with a roll of " << defenseResult << " and " << 1 << " armor." << endl;
	}

	//damage dealt after roll and armor
	dmg = atk - (defenseResult + 1);
	if (dmg < 0)
	{
		dmg = 0;
	}
	cout << name << " takes " << dmg << " damage." << endl;

	strength = strength - dmg;

	
}

