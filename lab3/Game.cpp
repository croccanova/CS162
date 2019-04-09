/******************************************************
Program Name: lab3 - Dice War
Author: Christian Roccanova
Date: 4/21/2017
Description: Game class. Contains the Menu function to take user input 
******************************************************/

#include <iostream>
#include "Game.hpp"

using std::cout;
using std::cin;
using std::endl;

//Menu gives the option to play or quit.  If play is chosen it asks for input to create the dice.
int Game::Menu(int runNumber)
{
	Validate valid;
	char choice;
	int validSides;
	
	cout << "Welcome to Dice War.  Please enter the number of one of the following options." << endl;

	if (runNumber == 1)
	{
		cout << "1. Play" << endl;
	}
	else
	{
		cout << "1. Play again" << endl;
	}

	cout << "2. Quit" << endl;
	cin >> choice;

	// Validates menu choice asks for a choice if the given choice is not a valid option
	while (choice != '1' && choice != '2')
	{
		cout << "Sorry, that was not a valid choice. Please try again" << endl;
		cin >> choice;
	}

	// switch takes input if user chooses to play and exits if user chooses to quit
	switch (choice)
	{
	case '1':
		// asks for and validates the number of rounds in the game
		cout << "How many rounds would you like the game to play?" << endl;
		rounds = valid.validateInt();
				
		while (rounds < 1)
		{
			cout << "Please enter a number of rounds greater than 0." << endl;
			rounds = valid.validateInt();
		}

		//asks if player 1's die is loaded
		cout << "Would you the first die to be loaded? enter 1 for no or 2 yes" << endl;
		dieType = 0;
		dieType = valid.validateInt();
		while (dieType != 1 && dieType != 2)
		{
			cout << "You did not enter 1 or 2, please try again." << endl;
			dieType = valid.validateInt();
		}
		
		if (dieType == 1)
		{
			DieP1 = &Die1;
		}
		else if (dieType == 2)
		{
			DieP1 = &lDie1;
		}
		
		DieP1->setType(dieType);
		
		//asks for the sides of player 1's die
		cout << "Please enter the number of sides for the first player's Die." << endl;
		validSides = valid.validateInt();
		
		while (validSides < 1)
		{
			cout << "Please enter a number of sides greater than 0." << endl;
			validSides = valid.validateInt();
		}

		DieP1->setSides(validSides);
		
		
		
		//asks if player 2's die is loaded
		cout << "Would you the second die to be loaded? enter 1 for no or 2 yes" << endl;
		dieType = 0;
		dieType = valid.validateInt();
		while (dieType != 1 && dieType != 2)
		{
			cout << "You did not enter 1 or 2, please try again." << endl;
			dieType = valid.validateInt();
		}

		if (dieType == 1)
		{
			DieP2 = &Die2;
		}
		else if (dieType == 2)
		{
			DieP2 = &lDie2;
		}

		DieP2->setType(dieType);
		
		//asks for the sides of player 2's die
		cout << "Please enter the number of sides for the second player's Die." << endl;
		validSides = valid.validateInt();

		while (validSides < 1)
		{
			cout << "Please enter a number of sides greater than 0.";
			validSides = valid.validateInt();
		}

		DieP2->setSides(validSides);
		
		

		return 1;
	case '2':  exit(0);

	}
}

//prints the results of the game
void Game::displayResults()
{
	cout << "Player 1 used a " << DieP1->getSides() << " sided die." << "The die was " << DieP1->getType() << "." << endl;
	cout << "Player 2 used a " << DieP2->getSides() << " sided die." << "The die was " << DieP2->getType() << "." << endl;
	cout << "Roll Results:" << endl;
	cout << "P1     P2" << endl;

	//prints rolls for each round
	for (int i = 0; i < rounds; i++)
	{
		cout << rollP1[i] << "....." << rollP2[i] << endl;
	}
	
	//prints final scores
	cout << "final score:" << endl << "Player 1: " << scoreP1 << endl << "Player 2: " << scoreP2 << endl;

	//compares player scores and prints out the winner
	if (scoreP1 > scoreP2)
	{
		cout << "Player 1 wins!" << endl;
	}
	else if (scoreP2 > scoreP1)
	{
		cout << "Player 2 wins!" << endl;
	}
	else if (scoreP1 == scoreP2)
	{
		cout << "The game is a draw!" << endl;
	}
	
	//deallocates memory as the arrays are no longer needed
	delete[] rollP1;
	delete[] rollP2;
}

//Rolls the dice and places the results into arrays to be printed later
void Game::play()
{
	rollP1 = new int[rounds];
	rollP2 = new int[rounds];
	
	for (int i = 0; i < rounds; i++)
	{
		rollP1[i] = 0;
		rollP2[i] = 0;
	}
	
	//seeds random number generator
	srand(time(NULL));

	//rolls the dice
	for (int i = 0; i < rounds; i++)
	{
		rollP1[i] = DieP1->roll();
		rollP2[i] = DieP2->roll();
			
	
		//increases player 1's score if they win the round
		if (rollP1[i] > rollP2[i])
		{
			scoreP1++;
		}
		//increases players 2's score if they win the round
		else if (rollP2[i] > rollP1[i])
		{
			scoreP2++;
		}
		// increases both scores if there is a draw
		else if (rollP2[i] == rollP1[i])
		{
			scoreP1++;
			scoreP2++;
		}

	}
}

