/******************************************************
Program Name: Project1 - Langton's Ant
Author: Christian Roccanova
Date: 4/15/2017
Description: Main file for Project 1.  Simulates Langton's Ant by creating a 2D board array of size chosen by the user.  The user can then choose a starting location for the ant
	which will step on spaces changing them from "#" to "." and vice versa, turning left when it reaches a "." and right when it reaches a "#".  The ant will be controlled by the Ant class.
******************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Ant.hpp"
#include "InputValidation.hpp"

using std::cout;
using std::cin;
using std::endl;


//Menu function prototype
int Menu();

// Menu function - displays user options
int Menu()
{
	char choice;
	cout << "Welcome to Langton's Ant.  Please enter the number of one of the following options." << endl << "*Note that there are two options to play" << endl;
	cout << "1. Play" << endl << "2. Play with random start" << endl << "3. Quit" << endl;
	cin >> choice;

	// Validates menu choice asks for a choice if the given choice is not a valid option
	while (choice != '1' && choice != '2' && choice != '3')
	{
		cout << "Sorry, that was not a valid choice. Please try again" << endl;
		cin >> choice;
	}

	// switch breaks if user chooses to play and exits if user chooses to quit
	switch (choice)
	{
	case '1':
		return 1;
	case '2':
		return 2;
	case '3': exit(0);
		
	}
		
}

// prototype for Board function
void Board(char**, int, int);

// Board function - fills board array with initial blank spaces
void Board(char** board, int rowCount, int colCount)
{
			
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			board[i][j] = '.';
		}
	}
}

int main()
{
	
	int rows, columns, steps, xStart, yStart, stepCount = 0;
	Ant myAnt;
	Validate valid;
	bool dummy = true;
	int menuChoice;
	unsigned seed;

	// Loops back to menu after a game finishes
	while (dummy == true)
	{
		menuChoice = Menu();

		cout << "First, please enter the number of rows in the board." << endl;
		rows = valid.validateInt();
		
		cout << "Next, please enter the number of columns in the board." << endl;
		columns = valid.validateInt();
		cout << "How many steps would you like the ant to take?" << endl;
		steps = valid.validateInt();
		if (menuChoice == 1)
		{
			cout << "Finally, enter the X and then Y coordinate of the space you would like to start." << endl << "(Note that the upper left corner will have the coordinate (0,0)" << endl;
			xStart = valid.validateInt();
			yStart = valid.validateInt();
		}
		else if (menuChoice == 2)
		{
			seed = time(0);
			srand(seed);
			xStart = rand() % columns;
			yStart = rand() % rows;
		}

		// asks for another start point if the given start point is outside the board
		while ((xStart < 0 || xStart > columns) && (yStart < 0 || yStart > rows))
		{
			cout << "Sorry, that starting point was outside the board, please enter another X, then Y coordinate." << endl;
			cin >> xStart;
			cin >> yStart;
		}

		char** board = new char*[rows];
		for (int i = 0; i < rows; ++i)
		{
			board[i] = new char[columns];
		}

		//calls Board function to fill the initial board
		Board(board, rows, columns);

		//myAnt.saveSpace(board, yStart, xStart)

		//Sets the starting space of the ant
		myAnt.setAnt(board, yStart, xStart);
		
		// prints the initial board
		cout << "Initial board: " << endl;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				cout << board[i][j] << " ";
			}

			cout << endl;
		}

		for (int a = 0; a < steps; a++)
		{
			//Saves the space that the ant will be placed on
			myAnt.saveSpace(board);

			//Moves ant
			myAnt.step(board, columns, rows);

			//Turns ant
			myAnt.turn();

			//Sets the direction for the next step
			myAnt.direction();

			stepCount++;
			cout << "Step #" << stepCount << endl;

			// prints the board
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					cout << board[i][j] << " ";
				}

				cout << endl;
			}
		}

		//resets step counter
		stepCount = 0;

		//resets Ant class variables
		myAnt.reset();
		
		//deallocates memory for the board array
		for (int i = 0; i < rows; i++)
		{
			delete[] board[i];
		}
		delete[] board;
					
	}

	return 0;
}