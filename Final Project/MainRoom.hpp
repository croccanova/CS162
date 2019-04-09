/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: Header for the MainRoom class.
******************************************************/

#ifndef MainRoom_hpp
#define MainRoom_hpp

#include "Space.hpp"

class MainRoom : public Space
{
private:
	string board[15][15];
	int playerX, playerY;
	int tempX, tempY;
	bool unlocked;
	
public:
	MainRoom();
	virtual int move(string);
	virtual void printBoard();
	void lowerBridge();
	void unlock();
	bool isWall(int, int);
	bool isMoat(int, int);
	int door(int, int);
};
#endif 