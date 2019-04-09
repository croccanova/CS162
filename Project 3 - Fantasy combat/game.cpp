/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Game Class - contains and calls the fightMenu and fight functions to run the game
******************************************************/

#include "game.hpp"

using std::cout;
using std::cin;
using std::endl;

void Game::fightMenu()
{
	char choice1, choice2;

	//prints menu choices for creature1
	cout << "Please enter the number of the first fighter." << endl;
	cout << "1. Vampire" << endl << "2. Barbarian" << endl << "3. Blue Men" << endl << "4. Medusa" << endl << "5. Harry Potter" << endl;
	cin >> choice1;

	// Validates menu choice, asks for another choice if the given choice is not a valid option
	while (choice1 != '1' && choice1 != '2' && choice1 != '3' && choice1 != '4' && choice1 != '5')
	{
		cout << "Sorry, that was not a valid choice. Please try again" << endl;
		cin >> choice1;
	}

	// switch calls relevant function based on user input and exits if user chooses to quit
	switch (choice1)
	{
		// user chooses vampire
	case '1':
	{
		creature1 = &vamp1;
		break;
	}

	//user chooses barbarian
	case '2':
	{
		creature1 = &barb1;
		break;

	}
	//user chooses blue men
	case '3':
	{
		creature1 = &blue1;
		break;
	}

	//user chooses medusa
	case '4':
	{
		creature1 = &med1;
		break;
	}
	
	//user chooses harry potter
	case '5':
	{
		creature1 = &potter1;
		break;
	}

	}

	//prints menu choices for creature2
	cout << "Please enter the number of the second fighter." << endl;
	cout << "1. Vampire" << endl << "2. Barbarian" << endl << "3. Blue Men" << endl << "4. Medusa" << endl << "5. Harry Potter" << endl;
	cin >> choice2;

	// Validates menu choice, asks for another choice if the given choice is not a valid option
	while (choice2 != '1' && choice2 != '2' && choice2 != '3' && choice2 != '4' && choice2 != '5')
	{
		cout << "Sorry, that was not a valid choice. Please try again" << endl;
		cin >> choice2;
	}

	// switch calls relevant function based on user input and exits if user chooses to quit
	switch (choice2)
	{
		// user chooses vampire
	case '1':
	{
		creature2 = &vamp2;
		break;
	}

	//user chooses barbarian
	case '2':
	{
		creature2 = &barb2;
		break;

	}
	//user chooses blue men
	case '3':
	{
		creature2 = &blue2;
		break;
	}

	//user chooses medusa
	case '4':
	{
		creature2 = &med2;
		break;
	}


	//user chooses harry potter
	case '5':
	{
		creature2 = &potter2;
		break;
	}

	}
}

void Game::fight()
{
	int roundCount = 1;

	do
	{
		cout << "Round " << roundCount << endl;
		
		//Creature 1 attacks creature 2
		cout << "Creature 1: ";
		attackVal = creature1->attack();
		cout << "Creature 2: ";
		creature2->defense(attackVal);
						
		//cout << "damage dealt: " << damage << endl;
		cout << "Creature 2 remaining strength: " << creature2->getStrength() << endl << endl;
		if (creature2->getStrength() <= 0)
		{
			cout << "Creature 1 wins!" << endl;
			break;
		}

		//Creature 2 attacks creature 1
		cout << "Creature 2: ";
		attackVal = creature2->attack();
		
		cout << "Creature 1: ";
		creature1->defense(attackVal);
				
		//cout << "damage dealt: " << damage << endl;
		cout << "Creature 1 remaining strength: " << creature1->getStrength() << endl << endl;
		if (creature1->getStrength() <= 0)
		{
			cout << "Creature 2 wins!" << endl;
			break;
		}

		roundCount++;
	} while (creature1->getStrength() != 0 && creature2->getStrength() != 0);

}