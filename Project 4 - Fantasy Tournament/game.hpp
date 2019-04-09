/******************************************************
Program Name: Project4 - Fantasy Combat Tournament
Author: Christian Roccanova
Date: 5/28/2017
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
#include "InputValidation.hpp"
#include "Queue.hpp"

class Game
{
private:
	Creature *creature1;
	Creature *creature2;
	Vampire vamp, vamp2;
	Barbarian barb, barb2;
	BlueMen blue, blue2;
	Medusa med, med2;
	HarryPotter potter, potter2;
	Queue team1, team2, loserPile;
	int attackVal, defenseVal, damage, teamSize;
	
	
public:
	void fightMenu();
	void fight();
	void loserMenu();
};

#endif 