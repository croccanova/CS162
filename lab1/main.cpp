/******************************************************
Program Name: Lab1
Author: Christian Roccanova
Date: 4/7/2017
Description: Main file for lab 1.  Asks user whether they want a 2x2 or 3x3 matrix and then creates a 2D array to store the matrix values. It then calls functions to fill the matrix and calculate its determinant.
******************************************************/

#include <iostream>
#include "readMatrix.hpp"
#include "determinant.hpp"

using std::cout;
using std::cin;
using std::endl;


int main()
{
	int matrixSize;	// variable for the size of the matrix chosen by the user

	// prompts user for matrix size
	cout << "Please enter '2' for a 2x2 matrix or '3' for a 3x3 matrix. " << endl;	
	cin >> matrixSize;

	// tests if user input is a valid choice and prompts them for a new one if it is not
	while (matrixSize != 2 && matrixSize != 3)		
	{
		cout << "Sorry, that is an invalid selection. Please enter '2' for a 2x2 matrix or '3' for a 3x3 matrix. " << endl;
		cin >> matrixSize;
	}
		
	// initializes the 2-D array for the matrix - code as shown in the assignment example 
	// at http://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new (Links to an external site.)
	int** matrixArray = new int*[matrixSize];	
	for (int i = 0; i < matrixSize; ++i)
	{
		matrixArray[i] = new int[matrixSize];
	}

	// calls read matrix function
	readMatrix(matrixArray, matrixSize);

	cout << "Here is your matrix:" << endl;
	cout << "_____" << endl;
	
	// loops through and prints each integer in the matrix
	for (int i = 0; i < matrixSize; i++)		
	{
		for (int j = 0; j < matrixSize; j++)
		{
			cout << matrixArray[i][j] << " ";
		}

		cout << endl;
	}
	cout << "_____" << endl;

	// calls determinant function
	determinant(matrixArray, matrixSize);
		
	// deallocates memory - code as shown in the assignment example at http://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new (Links to an external site.)
	for (int i = 0; i < matrixSize; i++)	
	{
		delete[] matrixArray[i];
	}
	delete[] matrixArray;
		
	return 0;

}