/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: Header file for the Space class.
******************************************************/

#ifndef Space_hpp
#define Space_hpp

#include <string>
#include <cstdio>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Space
{
protected:
		
	string direction;
	int playerX, playerY;
	int tempX, tempY;
	bool bridge;
	bool bossDoor;
	string* right, left, up, down;
	


public:
	Space();
	virtual int move(string);
	virtual void printBoard();
	virtual bool isWall(int, int);
	virtual int door(int, int);
	virtual bool specialSpace();
};
#endif 
