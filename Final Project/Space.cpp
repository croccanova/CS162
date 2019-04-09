/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: the Space class - parent class for MaiRoom, ShieldRoom, SwordRoom, SwitchRoom, KeyRoom and BossRoom - contains virtual functions for use by these classes.
******************************************************/

#include "Space.hpp"

// constructor
Space::Space()
{
	
}

// moves player token
int Space::move(string dir)
{	
	return 2;
}

//checks if a space is a wall
bool Space::isWall(int x, int y)
{
	return false;
}

// checks if a space is a door
int Space::door(int x, int y)
{
	return 1;
}

// applies effects of speacial spaces
bool Space::specialSpace()
{
	return false;
}

// prints board
void Space::printBoard()
{
	
}