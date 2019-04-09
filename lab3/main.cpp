/******************************************************
Program Name: lab3 - Dice War
Author: Christian Roccanova
Date: 4/21/2017
Description: Main file for Lab3.  
******************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Game.hpp"
#include "Die.hpp"
#include "LoadedDie.hpp"
#include "InputValidation.hpp"

using std::cout;
using std::cin;
using std::endl;



int main()
{
	
	bool repeat = true;
	int menuChoice;
	int runCount = 1;
	Game game;
	
	

	// Loops until player chooses to quit the game
	do
	{
		Game();
		
		// Calls the menu to ask if the player wishes to play or quit
		menuChoice = game.Menu(runCount);
		
		game.play();
		game.displayResults();

		if (menuChoice != 1)
		{
			repeat = false;
		}
		
		
		runCount++;
	} while (repeat == true);
		
	return 0;
}