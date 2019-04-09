/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
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

using std::cout;
using std::cin;
using std::endl;

//Main menu to play or quit
int Menu()
{
	char play;
	Game game;
	cout << "Welcome to the fantasy combat simulator.  Please enter the number of one of the following options." << endl << "1. Play" << endl << "2. Quit" << endl;
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

	do
	{
		menuReturn = Menu();

	} while (menuReturn != 2);

		return 0;
}