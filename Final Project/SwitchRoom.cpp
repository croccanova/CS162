/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: the Space class.
******************************************************/

#include "SwitchRoom.hpp"

SwitchRoom::SwitchRoom()
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
	board[1][2] = "S";	// monster room
	board[4][2] = "D"; // door

}

void SwitchRoom::printBoard()
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

int SwitchRoom::move(string dir)
{

	if (dir == "w")
	{

		tempX = playerX;
		tempY = playerY - 1;

		if (door(tempX, tempY) != 5)
		{
			return door(tempX, tempY);
		}

		//specialSpace(tempX, tempY);

		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = tempX;
			playerY = tempY;
			board[playerY][playerX] = "@";
			return 5;
		}
	}
	else if (dir == "s")
	{
		tempX = playerX;
		tempY = playerY + 1;

		if (door(tempX, tempY) != 5)
		{
			return door(tempX, tempY);
		}

		//specialSpace(tempX, tempY);

		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX;
			playerY = playerY + 1;
			board[playerY][playerX] = "@";
			return 5;
		}


	}
	else if (dir == "d")
	{
		tempX = playerX + 1;
		tempY = playerY;

		if (door(tempX, tempY) != 5)
		{
			return door(tempX, tempY);
		}

		//specialSpace(tempX, tempY);

		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX + 1;
			playerY = playerY;
			board[playerY][playerX] = "@";
			return 5;
		}

	}
	else if (dir == "a")
	{
		tempX = playerX - 1;
		tempY = playerY;

		if (door(tempX, tempY) != 5)
		{
			return door(tempX, tempY);
		}

		//specialSpace(tempX, tempY);

		if (isWall(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX - 1;
			playerY = playerY;
			board[playerY][playerX] = "@";
			return 5;
		}
	}
}

//checks if a space is a wall
bool SwitchRoom::isWall(int x, int y)
{
	if (board[y][x] == "|" || board[y][x] == "-")
	{
		cout << "You bumped into a wall!" << endl;
		return true;
	}

	return false;
}

// checks if a space is a door
int SwitchRoom::door(int x, int y)
{
	if (board[y][x] == "D")
	{
		return 1;

	}

	return 5;

}

bool SwitchRoom::specialSpace(int x, int y)
{
	if (y == 1 && x == 2)
	{
		cout << "The drawbridge has been lowered!" << endl;
		return true;
	}
	return false;
}

int SwitchRoom::getX()
{
	return playerX;
}

int SwitchRoom::getY()
{
	return playerY;
}