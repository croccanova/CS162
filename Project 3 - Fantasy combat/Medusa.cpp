/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Header file for the Harry Potter subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "Medusa.hpp"

Medusa::Medusa()
{
	armor = 3;
	strength = 8;
}

//Processes the attacker's turn
int Medusa::attack()
{
	attackResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	if (attackResult == 12)
	{
		attackResult = 99;
		cout << "Medusa used glare!";
	}
	else
	{
		cout << "Medusa attacks with a roll of " << attackResult << "." << endl;
	}
	std::cout << "Medusa" << std::endl;
	
	return attackResult;
}

//processes the defender's turn
void Medusa::defense(int atk)
{
	defenseResult = (rand() % 6) + 1;
	cout << "Medusa defends with a roll of " << defenseResult << " and " << 3 << " armor." << endl;
	
	//damage dealt after roll and armor
	dmg = atk - (defenseResult + 1);
	if (dmg < 0)
	{
		dmg = 0;
	}
	cout << "Medusa takes " << dmg << " damage." << endl;

	strength = strength - dmg;
}
