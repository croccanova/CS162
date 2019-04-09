/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Header file for the Harry Potter subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "HarryPotter.hpp"

HarryPotter::HarryPotter()
{
	armor = 0;
	strength = 10;
}

//Processes the attacker's turn
int HarryPotter::attack()
{
	attackResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	cout << "Harry Potter attacks with a roll of " << attackResult << "." << endl;
	return attackResult;
}

//processes the defender's turn
void HarryPotter::defense(int atk)
{
	int life = 1;
	defenseResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	cout << "Harry Potter defends with a roll of " << defenseResult << " and " << 0 << " armor." << endl;

	//damage dealt after roll and armor
	dmg = atk - (defenseResult + 1);
	if (dmg < 0)
	{
		dmg = 0;
	}
	cout << "Harry Potter takes " << dmg << " damage." << endl;
			
	strength = strength - dmg;

	//brings Harry back to life one time
	if (life == 1)
	{
		if (strength <= 0)
		{
			strength = 20;
			cout << "Harry Potter died and came back to life!" << endl;
			life++;
		}
	}

}
