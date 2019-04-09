/******************************************************
Program name: Lab 9 - STL Containers
Author: Christian Roccanova
Date: 6/2/2017
Description:  Stack Class - contains the makePalindrome function to build a stack from a string and print it  as a palindrome
******************************************************/

#include "Stack.hpp"

// Takes the user's string and places it in a character stack, poping the characters off in reverse order
void Stack::makePalindrome(std::string input)
{
	length = input.length();

	for (int i = 0; i < length; i++)
	{
		palStack.push(input[i]);
	}

	// prints users string
	cout << "The palindrome is: " << input;

	// prints the reverse of the user string
	for (int j = 0; j < length; j++)
	{
		cout << palStack.top();
		palStack.pop();
	}
	cout << endl << endl;
}



