/******************************************************
Program Name: lab3 - Dice War
Author: Christian Roccanova
Date: 4/21/2017
Description: Header file for Game class.
******************************************************/

#ifndef Game_hpp
#define Game_hpp

#include <cstdlib>
#include <ctime>
#include "Die.hpp"
#include "LoadedDie.hpp"
#include "InputValidation.hpp"


class Game
{
private:
	Die *DieP2;
	Die *DieP1;
	Die Die1;
	Die Die2;
	LoadedDie lDie1;
	LoadedDie lDie2;
	int rounds, scoreP1, scoreP2, roll1, roll2, dieType;
	int* rollP1;
	int* rollP2;
	
public:
	
	void displayResults();
	int Menu(int);
	void play();
};



#endif 