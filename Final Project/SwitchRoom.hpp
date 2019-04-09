/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: the Space class.
******************************************************/

#ifndef SwitchRoom_hpp
#define SwitchRoom_hpp

#include "Space.hpp"

class SwitchRoom : public Space
{
private:
	string board[5][5];
	int playerX, playerY;
	int tempX, tempY;
	

public:
	SwitchRoom();
	virtual void printBoard();
	virtual bool isWall(int, int);
	virtual int move(string);
	virtual int door(int, int);
	virtual bool specialSpace(int, int);
	int getX();
	int getY();

};
#endif 