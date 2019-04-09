/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: the Space class.
******************************************************/

#ifndef ShieldRoom_hpp
#define ShieldRoom_hpp

#include "Space.hpp"

class ShieldRoom : public Space
{
private:
	string board[5][5];
	int playerX, playerY;
	int tempX, tempY;



public:
	ShieldRoom();
	virtual void printBoard();
	virtual bool isWall(int, int);
	virtual int move(string);
	virtual int door(int, int);
	virtual bool specialSpace(int, int);
	int getX();
	int getY();
};
#endif 