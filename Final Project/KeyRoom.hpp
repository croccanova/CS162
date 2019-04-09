/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: Header for the KeyRoom class.
******************************************************/

#ifndef KeyRoom_hpp
#define KeyRoom_hpp

#include "Space.hpp"

class KeyRoom : public Space
{
private:
	string board[5][5];
	int playerX, playerY;
	int tempX, tempY;
	

public:
	KeyRoom();
	virtual void printBoard();
	virtual bool isWall(int, int);
	virtual int move(string);
	virtual int door(int, int);
	virtual bool specialSpace(int, int);
	int getX();
	int getY();
};
#endif 
