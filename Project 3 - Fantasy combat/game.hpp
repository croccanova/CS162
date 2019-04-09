/******************************************************
Program Name: Project3 - Fantasy Combat
Author: Christian Roccanova
Date: 5/8/2017
Description: Header file for the Game class
******************************************************/

#ifndef game_hpp
#define game_hpp

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Creature.hpp"
#include "Medusa.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"

class Game
{
private:
	Creature *creature1;
	Creature *creature2;
	Vampire vamp1, vamp2;
	Barbarian barb1, barb2;
	BlueMen blue1, blue2;
	Medusa med1, med2;
	HarryPotter potter1, potter2;
	int attackVal, defenseVal, damage;

public:
	void fightMenu();
	void fight();
};

#endif 