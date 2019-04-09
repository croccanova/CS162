/******************************************************
Program Name: Project1 - Langton's Ant
Author: Christian Roccanova
Date: 4/15/2017
Description: the Ant class.
******************************************************/

#include "Ant.hpp"

Ant::Ant()
{
	char color = '.';
	std::string antDirection = "up";
	int xfacing = 0, yfacing = -1; // sets starting ant direction to "up"
}

void Ant::setAnt(char** board, int yCoord, int xCoord)
{
	board[yCoord][xCoord] = '@';
	xAnt = xCoord;
	yAnt = yCoord;

}

// reverses and stores the color of the space the ant steps on
void Ant::saveSpace(char** board)
{
	if (board[xAnt - xfacing][yAnt - yfacing] == '.')
	{
		color = '#';
	}
	else if (board[xAnt - xfacing][yAnt - yfacing] == '#')
	{
		color = '.';
	}
}

// Turns the ant based on its current direction and the color of the space (right if black '#', left if white '.')
void Ant::turn()
{
	//nextColor = board[xAnt + xfacing][yAnt + yfacing]
	if (antDirection == "up")
	{
		if (nextColor == '.')
		{
			newHeading = "right";
		}
		else if (nextColor == '#')
		{
			newHeading = "left";
		}
	}
	else if (antDirection == "down")
	{
		if (nextColor == '.')
		{
			newHeading = "left";
		}
		else if (nextColor == '#')
		{
			newHeading = "right";
		}
	}
	else if (antDirection == "left")
	{
		if (nextColor == '.')
		{
			newHeading = "up";
		}
		else if (nextColor == '#')
		{
			newHeading = "down";
		}
	}
	else if (antDirection == "right")
	{
		if (nextColor == '.')
		{
			newHeading = "down";
		}
		else if (nextColor == '#')
		{
			newHeading = "up";
		}
	}

	antDirection = newHeading;
}

//Sets the ant's direction prior to the next step
void Ant::direction()
{
	if (antDirection == "up")
	{
		xfacing = 0;
		yfacing = -1;
	}
	else if (antDirection == "down")
	{
		xfacing = 0;
		yfacing = 1;
	}
	else if (antDirection == "left")
	{
		xfacing = -1;
		yfacing = 0;
	}
	else if (antDirection == "right")
	{
		xfacing = 1;
		yfacing = 0;
	}
	
	

}

//Moves the ant and replaces the space it was occupying
void Ant::step(char** board, int columnMax, int rowMax)
{
	
	// if the next step would take the ant off the board, it reverses
	while(xfacing + xAnt < 0 || xfacing + xAnt > columnMax - 1 || yfacing + yAnt < 0 || yfacing + yAnt > rowMax - 1)
	{
		if (xfacing + xAnt < 0 || xfacing + xAnt > columnMax - 1)
		{
			xfacing = xfacing * -1;
		}

		if (yfacing + yAnt < 0 || yfacing + yAnt > rowMax - 1)
		{
			yfacing = yfacing * -1;
		}
	}

	board[yAnt][xAnt] = color;
	xAnt = xAnt + xfacing;
	yAnt = yAnt + yfacing;
	nextColor = board[yAnt][xAnt];
	board[yAnt][xAnt] = '@';
		
}

//Resets variables when the game finishes
void Ant::reset()
{
	color = '.';
	nextColor = '.';
	antDirection = "up";
	newHeading = "up";
	xfacing = 0;
	yfacing = -1; 
	
}
