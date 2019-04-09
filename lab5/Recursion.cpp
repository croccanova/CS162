/******************************************************
Program Name: Lab 5 - Recursion
Author: Christian Roccanova
Date: 5/5/2017
Description: The Recursion class contains recursive functions to reverse a string, sum an array and calculate a triangular number as well as their supporting functions.
******************************************************/

#include "Recursion.hpp"

Recursion::Recursion()
{
	triNum = 0;
	arrSum = 0;
}

// takes user input as a string and sets an integer value for its length
void Recursion::setString()
{
	cin.ignore();
	std::getline(std::cin, userString);  //getline used to allow spaces in the user string
	stringLength = userString.length();
}

//returns the length of the user input string
int Recursion::getLength()
{
	return stringLength;
}

//returns the use input string
string Recursion::getString()
{
	return userString;
}

//recursively prints the reverse of the user input string
void Recursion::reverse(int s)
{
	
		if (s == 0)
		{
			cout << endl << "The string has been reversed." << endl << endl;
		}
		else
		{
			cout << userString[s-1];
			s--;
			reverse(s);
		}
	
}

//sets size of the array
void Recursion::setSize(int size)
{
	arrSize = size;
}



//recursively sums the elements of an array
void Recursion::sum(int x, int userArray[])
{
		
	if (x == 0)
	{
		cout << "The sum of this array is: " << arrSum << endl << endl;
	}
	else
	{
		arrSum += userArray[x-1];
		sum(x-1, userArray);
	}
}

//recursively calculates the triangular number of an integer
void Recursion::triangle(int n)
{
	if (n == 0)
	{
		cout << "The triangular number for this integer is: " << triNum << endl << endl;
	}
	else
	{
		triNum += n;
		n--;
		triangle(n);
	}
}