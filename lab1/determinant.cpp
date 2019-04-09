/******************************************************
Program Name: Lab1
Author: Christian Roccanova
Date: 4/7/2017
Description: Calculates the determinant for the matrix created by readMatrix.cpp
******************************************************/
#include <iostream>
#include "determinant.hpp"

using std::cout;
using std::cin;
using std::endl;

// calculates and prints the determinant of the user entered array based on the size of that array
void determinant(int** matrixArray, int matrixSize)	
{
	int matrixDeterminant;

	// calculates determinant for 2x2 array if the user has selected a 2x2
	if (matrixSize == 2)	
	{
		matrixDeterminant = (matrixArray[0][0] * matrixArray[1][1]) - (matrixArray[0][1] * matrixArray[1][0]);
		cout << "The determinant for this matrix is " << matrixDeterminant << endl;
	}
	
	// calculates determinant for 3x3 array if the user has selected a 3x3
	else if (matrixSize == 3)	
	{
		matrixDeterminant = (matrixArray[0][0] * (matrixArray[1][1] * matrixArray[2][2] - matrixArray[1][2] * matrixArray[2][1])) - (matrixArray[0][1] * (matrixArray[1][0] * matrixArray[2][2] - matrixArray[1][2] * matrixArray[2][0])) + (matrixArray[0][2] * (matrixArray[1][0] * matrixArray[2][1] - matrixArray[1][1] * matrixArray[2][0]));
		cout << "The determinant for this matrix is " << matrixDeterminant << endl;
	}
}