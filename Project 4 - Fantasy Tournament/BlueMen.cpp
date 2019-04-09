/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: BlueMen subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "BlueMen.hpp"

BlueMen::BlueMen()
{
	armor = 3;
	strength = 12;
	name = "Blue Men";
}

//Processes the attacker's turn
int BlueMen::attack()
{
	attackResult = ((rand() % 10) + 1) + ((rand() % 10) + 1);
	cout << name << " attacks with a roll of " << attackResult << "." << endl;
	return attackResult;
}

//processes the defender's turn
void BlueMen::defense(int atk)
{
	//changes the Blue Men defense die based on their remaining strength
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

	cout << name << " defends with a roll of " << defenseResult << " and " << 3 << " armor." << endl;
	
	//damage dealt after roll and armor
	dmg = atk - (defenseResult + 3);
	if (dmg < 0)
	{
		dmg = 0;
	}
	cout << name << " take " << dmg << " damage." << endl;

	strength = strength - dmg;
}