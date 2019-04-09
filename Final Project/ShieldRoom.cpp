/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: the ShieldRoom class - inherits from Space - Contains functions to move within the boss room and check for obstacles and special spaces.
******************************************************/

#include "ShieldRoom.hpp"

ShieldRoom::ShieldRoom()
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
	board[1][2] = "0";	// monster room
	board[4][2] = "D"; // door

}

// prints shield room
void ShieldRoom::printBoard()
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
int ShieldRoom::move(string dir)
{
	// moves up
	if (dir == "w")
	{
		tempX = playerX;
		tempY = playerY - 1;

		// checks if the space to be moved to is a door and returns the room type code
		if (door(tempX, tempY) != 4)
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
			return 4;
		}
	}
	// moves down
	else if (dir == "s")
	{
		tempX = playerX;
		tempY = playerY + 1;

		if (door(tempX, tempY) != 4)
		{
			return door(tempX, tempY);
		}


		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX;
			playerY = playerY + 1;
			board[playerY][playerX] = "@";
			return 4;
		}


	}
	// moves right
	else if (dir == "d")
	{
		tempX = playerX + 1;
		tempY = playerY;

		if (door(tempX, tempY) != 4)
		{
			return door(tempX, tempY);
		}

		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX + 1;
			playerY = playerY;
			board[playerY][playerX] = "@";
			return 4;
		}

	}
	// moves left
	else if (dir == "a")
	{
		tempX = playerX - 1;
		tempY = playerY;

		if (door(tempX, tempY) != 4)
		{
			return door(tempX, tempY);
		}


		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX - 1;
			playerY = playerY;
			board[playerY][playerX] = "@";
			return 4;
		}
	}
}

//checks if a space is a wall
bool ShieldRoom::isWall(int x, int y)
{
	if (board[y][x] == "|" || board[y][x] == "-")
	{
		cout << "You bumped into a wall!" << endl;
		return true;
	}

	return false;
}

// checks if a space is a door
int ShieldRoom::door(int x, int y)
{
	if (board[y][x] == "D")
	{
		return 1;

	}

	return 4;

}


// returns true if player steps on the shield space
bool ShieldRoom::specialSpace(int x, int y)
{
	if (y == 1 && x == 2)
	{
		cout << "You picked up a shield!" << endl;
		return true;
	}
	return false;
}

// returns player x coordinate
int ShieldRoom::getX()
{
	return playerX;
}

// returns player y coordinate
int ShieldRoom::getY()
{
	return playerY;
}