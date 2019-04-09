/******************************************************
Program Name: Lab1
Author: Christian Roccanova
Date: 4/7/2017
Description: Contains the readMatrix function which prompts the user for integers to fill the matrix.
******************************************************/
#include <iostream>
#include "readMatrix.hpp"

using std::cout;
using std::cin;
using std::endl;

// prompts the user for integers to fill the matrix and places them in the appropriate slot
void readMatrix(int** matrixArray, int matrixSize)	
{
	
	for (int i = 0; i < matrixSize; i++)	// loop for rows
	{
		for (int j = 0; j < matrixSize; j++)	//loop for columns
		{
			cout << "Please enter an integer to be placed in row " << i << ", column " << j << endl;
			cin >> matrixArray[i][j];

		}
	}
}