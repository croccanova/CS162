/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
Description: Main file - loops through the menu until the user chooses to exit
******************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.hpp"
#include "Creature.hpp"
#include "Medusa.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "Queue.hpp"
#include "InputValidation.hpp"

using std::cout;
using std::cin;
using std::endl;

//Main menu to play or quit
int Menu()
{
	char play;
	Game game;
	
	cout << "Please enter the number of one of the following options." << endl << "1. Play" << endl << "2. Quit" << endl;
	cin >> play;

	while (play != '1' && play != '2')
	{
		cout << "Sorry, that was not a valid choice. Please try again" << endl;
		cin >> play;
	}

	switch (play)
	{
		case '1':
			{
				game.fightMenu();
				game.fight();		
				game.loserMenu();		
			
			}
			return 1;

		case '2':
			return 2;

	}
}

int main()
{
	int menuReturn;

	//seeds random number generator
	srand(time(NULL));
	cout << "Welcome to Fantasy Tournament!" << endl;

	do
	{
		menuReturn = Menu();

	} while (menuReturn != 2);

		return 0;
}