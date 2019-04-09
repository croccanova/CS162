/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: the SwordRoom class - inherits from Space - Contains functions to move within the boss room and check for obstacles and special spaces.
******************************************************/

#include "SwordRoom.hpp"

// constructs sword room
SwordRoom::SwordRoom()
{
	playerX = 2;
	playerY = 3;
	tempX = playerX;
	tempY = playerY;


	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			board[i][j] = " ";
		}
	}

	for (int j = 0; j < 4; j++)
	{
		board[0][j] = "-";
	}

	for (int j = 0; j < 4; j++)
	{
		board[4][j] = "-";
	}

	for (int i = 0; i < 4; i++)
	{
		board[i][0] = "|";
	}

	for (int i = 0; i < 4; i++)
	{
		board[i][4] = "|";
	}

	// places special spaces in main room
	board[playerY][playerX] = "@";	// player
	board[1][2] = "!";	// monster room
	board[4][2] = "D"; // door

}

// prints sword room
void SwordRoom::printBoard()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
}

// moves player token
int SwordRoom::move(string dir)
{
	// moves up
	if (dir == "w")
	{

		tempX = playerX;
		tempY = playerY - 1;

		// checks if the space to be moved to is a door and returns the room type code
		if (door(tempX, tempY) != 3)
		{
			return door(tempX, tempY);
		}
			
		// checks if the space to be moved to is a wall, denying movement if it is
		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = tempX;
			playerY = tempY;
			board[playerY][playerX] = "@";
			return 3;
		}
	}
	// moves down
	else if (dir == "s")
	{
		tempX = playerX;
		tempY = playerY + 1;

		if (door(tempX, tempY) != 3)
		{
			return door(tempX, tempY);
		}


		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX;
			playerY = playerY + 1;
			board[playerY][playerX] = "@";
			return 3;
		}


	}
	// moves right
	else if (dir == "d")
	{
		tempX = playerX + 1;
		tempY = playerY;

		if (door(tempX, tempY) != 3)
		{
			return door(tempX, tempY);
		}
		

		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX + 1;
			playerY = playerY;
			board[playerY][playerX] = "@";
			return 3;
		}

	}
	// moves left
	else if (dir == "a")
	{
		tempX = playerX - 1;
		tempY = playerY;

		if (door(tempX, tempY) != 3)
		{
			return door(tempX, tempY);
		}
		

		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX - 1;
			playerY = playerY;
			board[playerY][playerX] = "@";
			return 3;
		}
	}
}

//checks if a space is a wall
bool SwordRoom::isWall(int x, int y)
{
	if (board[y][x] == "|" || board[y][x] == "-")
	{
		cout << "You bumped into a wall!" << endl;
		return true;
	}

	return false;
}

// checks if a space is a door
int SwordRoom::door(int x, int y)
{
	if (board[y][x] == "D")
	{
		return 1;

	}

	return 3;

}

// returns tru if player steps on the sword space
bool SwordRoom::specialSpace(int x, int y)
{
	if (y == 1 && x == 2)
	{
		cout << "You found a sword!" << endl;
		return true;
	}
	return false;
}

// returns player x coordinate
int SwordRoom::getX()
{
	return playerX;
}

// returns player y coordinate
int SwordRoom::getY()
{
	return playerY;
}