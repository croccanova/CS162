/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Header file for the Harry Potter subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "BlueMen.hpp"

BlueMen::BlueMen()
{
	armor = 3;
	strength = 12;
}

//Processes the attacker's turn
int BlueMen::attack()
{
	attackResult = ((rand() % 10) + 1) + ((rand() % 10) + 1);
	cout << "Blue Men attack with a roll of " << attackResult << "." << endl;
	return attackResult;
}

//processes the defender's turn
void BlueMen::defense(int atk)
{
	if (strength > 8)
	{
		defenseResult = ((rand() % 6) + 1) + ((rand() % 6) + 1) + ((rand() % 6) + 1);
	}
	else if (strength > 4)
	{
		defenseResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	}
	else
	{
		defenseResult = ((rand() % 6) + 1);
	}

	cout << "Blue Men defend with a roll of " << defenseResult << " and " << 3 << " armor." << endl;
	
	//damage dealt after roll and armor
	dmg = atk - (defenseResult + 1);
	if (dmg < 0)
	{
		dmg = 0;
	}
	cout << "Blue Men take " << dmg << " damage." << endl;

	strength = strength - dmg;
}