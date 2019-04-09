/*******************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: Main file - contains the menu function
*******************************************/

#include <iostream>
#include <cstdlib>
#include "Game.hpp"
#include "Space.hpp"
#include "SwordRoom.hpp"
#include "BossRoom.hpp"
#include "MainRoom.hpp"
#include "ShieldRoom.hpp"
#include "SwitchRoom.hpp"
#include "KeyRoom.hpp"

using std::cin;
using std::cout;
using std::endl;

void Menu()
{
	char choice;
	bool repeat = true;
	Game game;
	

	//menu loops until user quits
	do
	{
		//prints menu and instructions
		cout << "Instructions:" << endl;
		cout << "Welcome to the Dungeon game!  Your objective is to slay the monster (M)." << endl;
		cout << "Walk into a door (D) to change rooms." << endl;
		cout << "To do this, you will need to find a key switch (K) to unlock the door to the monster room (bottom of main room)." << endl;
		cout << "You will also need to activate a switch (S) to cross the moat (~~~~~~) to reach the monster's door." << endl;
		cout << "You will also need a magic sword (!) to slay the monster and a shield (0) to protect yourself." << endl;
		cout << "To collect/activate these items, simply walk onto the symbol representing them." << endl;
		cout << "The same applies for fighting the monster." << endl;
		cout << "If you walk into a wall (- or | ), your character will not move." << endl;
		cout << "Please enter the number of one of the following options." << endl;
		cout << "1. Play" << endl << "2. Quit" << endl;
		cin >> choice;

		//loops if the user's choice is not an option
		while (choice != '1' && choice != '2')
		{
			cout << "Sorry, that was not a valid choice. Please try again" << endl;
			cin >> choice;

		}

		switch (choice)
		{

			// user chooses to play
		case '1':
		{
			game.play();
		}
		break;
				
		// user chooses to exit
		case '2':
		{
			repeat = false;
		}
		break;
		}

	} while (repeat == true);

}



int main()
{	
	//calls menu
	Menu();

	return 0;

}