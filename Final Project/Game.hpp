/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: Header file for the Game class.
******************************************************/

#ifndef Game_hpp
#define Game_hpp

#include <string>
#include <cstdio>
#include <iostream>
#include <queue>
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
using std::string;
using std::queue;

class Game
{
private:

	queue<string> inventory;
	string board[15][15];
	string direction;
	int playerX, playerY;
	int tempX, tempY;
	int winState;
	int currentRoom;
	int roomNum;
	int turn;
	bool wallCheck;
	bool moatCheck;
	string* right, left, up, down;
	Space* main;
	Space* current;
	MainRoom mainRm;
	SwordRoom swordRm;
	ShieldRoom shieldRm;
	SwitchRoom switchRm;
	KeyRoom keyRm;
	BossRoom bossRm;



public:
	Game();
	void play();
	

};
#endif 