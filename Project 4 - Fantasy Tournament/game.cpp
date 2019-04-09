/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Game Class - contains and calls the fightMenu and fight functions to run the game
******************************************************/

#include "game.hpp"

using std::cout;
using std::cin;
using std::endl;


void Game::fightMenu()
{
	char choice1, choice2;
	std::string customName;
	Validate valid;

	cout << "How many fighters will each team have?" << endl;
	teamSize = valid.validateInt();

	//prints menu choices for Team 1
	for (int i = 0; i < teamSize; i++)
	{
		
		cout << "Please enter the number Team 1's fighter number " << i + 1 << "." << endl;
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
			vamp.setName();
			team1.addBack(&vamp);
			break;
		}

		//user chooses barbarian
		case '2':
		{
			barb.setName();
			team1.addBack(&barb);
			break;

		}
		//user chooses blue men
		case '3':
		{
			blue.setName();
			team1.addBack(&blue);
			break;
		}

		//user chooses medusa
		case '4':
		{
			med.setName();
			team1.addBack(&med);
			break;
		}

		//user chooses harry potter
		case '5':
		{
			potter.setName();
			team1.addBack(&potter);
			break;
		}

		}
	}

	//prints menu choices for Team 2
	for (int j = 0; j < teamSize; j++)
	{
	
		cout << "Please enter the number Team 2's fighter number " << j+1 << "." << endl;
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
			vamp2.setName();
			team2.addBack(&vamp2);
			break;
		}

		//user chooses barbarian
		case '2':
		{
			barb2.setName();
			team2.addBack(&barb2);
			break;
		}

		//user chooses blue men
		case '3':
		{
			blue2.setName();
			team2.addBack(&blue2);
			break;
		}

		//user chooses medusa
		case '4':
		{
			med2.setName();
			team2.addBack(&med2);
			break;
		}


		//user chooses harry potter
		case '5':
		{
			potter2.setName();
			team2.addBack(&potter2);
			break;
		}

		}
	}

	
}

void Game::fight()
{
	int roundCount = 1;
	int scoreP1 = 0;
	int scoreP2 = 0;

	do
	{
		creature1 = team1.getFront();
		creature2 = team2.getFront();

		do
		{
			//cout << "Round " << roundCount << endl;

			//Creature 1 attacks creature 2
			cout << "Creature 1: ";
			attackVal = creature1->attack();
			cout << "Creature 2: ";
			creature2->defense(attackVal);

			// prints remaining strength and increases Team 1 score if they win
			cout << "Creature 2 remaining strength: " << creature2->getStrength() << endl << endl;
			if (creature2->getStrength() <= 0)
			{
				cout << "Team 1 wins round " << roundCount << endl;
				loserPile.addBack(creature2); //puts the loser in the loser pile
				team1.recover(creature1); // returns the winner to the back of their team
				scoreP1++;
				roundCount++;
				team1.removeFront();
				team2.removeFront();
				break;

			}

			//Creature 2 attacks creature 1
			cout << "Creature 2: ";
			attackVal = creature2->attack();

			cout << "Creature 1: ";
			creature1->defense(attackVal);

			// prints remaining strength and increases Team 2 score if they win
			cout << "Creature 1 remaining strength: " << creature1->getStrength() << endl << endl;
			if (creature1->getStrength() <= 0)
			{
				cout << "Team 2 wins round " << roundCount << endl;
				loserPile.addBack(creature1); //puts the loser in the loser pile
				team2.recover(creature2); // returns the winner to the back of their team
				scoreP2++;
				roundCount++;
				team1.removeFront();
				team2.removeFront();
				break;
			}
						
		} while (creature1->getStrength() != 0 && creature2->getStrength() != 0);
	} while (team1.isEmpty() != true && team2.isEmpty() != true);

	// displays final scores
	cout << "Team 1 final score: " << scoreP1 << endl;
	cout << "Team 2 final score: " << scoreP2 << endl;

	// determines and displays winner of the game
	if (scoreP1 > scoreP2)
	{
		cout << "Team 1 wins the game!" << endl << endl;
	}
	else if (scoreP2 > scoreP1)
	{
		cout << "Team 2 wins the game!" << endl << endl;
	}
	else
	{
		cout << "The game is a draw!" << endl << endl;
	}
}

// asks user if they want to see the loser pile and displays it if they do
void Game::loserMenu()
{
	char showLosers;
	
	//Asks user if they would like to see the loser pile
	cout << "Would you like to see the loser pile?" << endl;
	cout << "1. Yes" << endl << "2. No" << endl;
	cin >> showLosers;

	while (showLosers != '1' && showLosers != '2')
	{
		cout << "Sorry, that was not a valid choice. Please try again" << endl;
		cin >> showLosers;
	}

	if (showLosers == '1')
	{
		cout << "The losers are:" << endl;
		loserPile.displayQueue(); // prints loser pile
	}
	cout << "Would you like to play again?" << endl;
}