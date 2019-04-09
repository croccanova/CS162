/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: the MainRoom class - inherits from Space - Contains functions to move within the boss room and check for obstacles and special spaces.
******************************************************/

#include "MainRoom.hpp"

// Constructs the Main room
MainRoom::MainRoom()
{
		playerX = 7;
		playerY = 1;
		tempX = playerX;
		tempY = playerY;


		for (int i = 0; i < 14; i++)
		{
			for (int j = 0; j < 14; j++)
			{
				board[i][j] = " ";
			}
		}

		for (int j = 0; j < 14; j++)
		{
			board[0][j] = "-";
		}

		for (int j = 0; j < 14; j++)
		{
			board[14][j] = "-";
		}

		for (int i = 0; i < 14; i++)
		{
			board[i][0] = "|";
		}

		for (int i = 0; i < 14; i++)
		{
			board[i][14] = "|";
		}

		for (int i = 1; i < 14; i++)
		{
			board[i][4] = "|";
			board[i][10] = "|";
		}

		for (int j = 5; j < 10; j++)
		{
			board[10][j] = "~";
			board[11][j] = "~";
		}

		// places special spaces
		board[playerY][playerX] = "@";	// player
		board[14][7] = "D";	// monster room
		board[4][4] = "D"; // "key" room
		board[8][4] = "D"; // sword room
		board[4][10] = "D"; // shield room
		board[8][10] = "D"; // switch room
}

// prints the main room
void MainRoom::printBoard()
{
	
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
}

// moves player token
int MainRoom::move(string dir)
{
	// moves up
	if (dir == "w")
	{

		tempX = playerX;
		tempY = playerY - 1;

		// checks if the space to be moved to is a door and returns the room type code
		if (door(tempX, tempY) != 1)
		{
			return door(tempX, tempY);
		}

		// checks if the space to be moved to is a wall, denying movement if it is
		if (isWall(tempX, tempY) == false && isMoat(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = tempX;
			playerY = tempY;
			board[playerY][playerX] = "@";
			return 1;
		}
	}
	// moves down
	else if (dir == "s")
	{
		tempX = playerX;
		tempY = playerY + 1;

		if (door(tempX, tempY) != 1)
		{
			return door(tempX, tempY);
		}

		if (isWall(tempX, tempY) == false && isMoat(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX;
			playerY = playerY + 1;
			board[playerY][playerX] = "@";
			return 1;
		}


	}
	// moves right
	else if (dir == "d")
	{
		tempX = playerX + 1;
		tempY = playerY;

		if (door(tempX, tempY) != 1)
		{
			return door(tempX, tempY);
		}

		if (isWall(tempX, tempY) == false && isMoat(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX + 1;
			playerY = playerY;
			board[playerY][playerX] = "@";
			return 1;
		}

	}
	// moves left
	else if (dir == "a")
	{
		tempX = playerX - 1;
		tempY = playerY;

		if (door(tempX, tempY) != 1)
		{
			return door(tempX, tempY);
		}

		if (isWall(tempX, tempY) == false && isMoat(tempX, tempY) == false)
		{
			board[playerY][playerX] = " ";
			playerX = playerX - 1;
			playerY = playerY;
			board[playerY][playerX] = "@";
			return 1;
		}
	}
}

//checks if a space is a wall
bool MainRoom::isWall(int x, int y)
{
	if (board[y][x] == "|" || board[y][x] == "-")
	{
		cout << "You bumped into a wall!" << endl;
		return true;
	}

	return false;
}

// checks if a space is a door
int MainRoom::door(int x, int y)
{
	if (board[y][x] == "D")
	{
		// player activates key room door
		if (y == 4 && x == 4)
		{
			cout << "You enter a room with a switch!" << endl;
			return 2;
		}
		// player activates sword room door
		else if (y == 8 && x == 4)
		{
			cout << "You enter a room with an item!" << endl;
			return 3;
		}
		// player activates shield room door
		else if (y == 4 && x == 10)
		{
			cout << "You enter a room with an item!" << endl;
			return 4;
		}
		// player activates switch room door
		else if (y == 8 && x == 10)
		{
			cout << "You enter a room with a switch!" << endl;
			return 5;
		}
		// player activates boss room door
		else if (y == 14 && x == 7)
		{
			// checks if boss room is locked and prevents entry if it is
			if (unlocked == true)
			{
				cout << "You entered the Boss Room!" << endl;
				return 6;
			}
			cout << "This door appears to be locked.  There must be a switch to open it..." << endl;
		}
				
	}
	// defaults to main room
	return 1;
		
}

// returns true if the player attempts to step on the moat
bool MainRoom::isMoat(int x, int y)
{
	if (board[y][x] == "~")
	{
		cout << "You cannot cross the moat.  There must be a switch to lower the drawbridge somewhere..." << endl;
		return true;
	}
	return false;
}

// turns moat into standard spaces 
void MainRoom::lowerBridge()
{
		for (int j = 5; j < 10; j++)
		{
			board[10][j] = " ";
			board[11][j] = " ";
		}
	
}

// unlocks boss room door
void MainRoom::unlock()
{
	unlocked = true;
}