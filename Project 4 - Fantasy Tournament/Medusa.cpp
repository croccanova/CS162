/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Medusa subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "Medusa.hpp"

Medusa::Medusa()
{
	armor = 3;
	strength = 8;
	name = "Medusa";
}

//Processes the attacker's turn
int Medusa::attack()
{
	attackResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	
	//if medusa rolls a 12, she uses glare, overpowering any defense except charm
	if (attackResult == 12)
	{
		attackResult = 99;
		cout << name << " used glare!";
	}
	else
	{
		cout << name << " attacks with a roll of " << attackResult << "." << endl;
	}
		
	return attackResult;
}

//processes the defender's turn
void Medusa::defense(int atk)
{
	defenseResult = (rand() % 6) + 1;
	cout << name << " defends with a roll of " << defenseResult << " and " << 3 << " armor." << endl;
	
	//damage dealt after roll and armor
	dmg = atk - (defenseResult + 1);
	if (dmg < 0)
	{
		dmg = 0;
	}
	cout << name << " takes " << dmg << " damage." << endl;

	strength = strength - dmg;
}
