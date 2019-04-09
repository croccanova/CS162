/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Harry Potter subclass- inherits from Creature, contains virtual attack and defense functions
******************************************************/

#include "HarryPotter.hpp"

HarryPotter::HarryPotter()
{
	armor = 0;
	strength = 10;
	name = "Harry Potter";
	life = 1;
}

//Processes the attacker's turn
int HarryPotter::attack()
{
	attackResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	cout << name << " attacks with a roll of " << attackResult << "." << endl;
	return attackResult;
}

//processes the defender's turn
void HarryPotter::defense(int atk)
{
	defenseResult = ((rand() % 6) + 1) + ((rand() % 6) + 1);
	cout << name << " defends with a roll of " << defenseResult << " and " << 0 << " armor." << endl;

	//damage dealt after roll and armor
	dmg = atk - (defenseResult);
	if (dmg < 0)
	{
		dmg = 0;
	}
	cout << name << " takes " << dmg << " damage." << endl;
			
	strength = strength - dmg;

	//brings Harry back to life one time
	if (life == 1)
	{
		if (strength <= 0)
		{
			strength = 20;
			cout << name << " died and came back to life!" << endl;
			life = 2;
		}
	}

}
