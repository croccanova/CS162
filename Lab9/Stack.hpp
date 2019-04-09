/******************************************************
Program name: Lab 9 - STL Containers
Author: Christian Roccanova
Date: 6/2/2017
Description:  Stack header file - contains the menu function
******************************************************/

#ifndef Stack_hpp
#define Stack_hpp

#include <stack>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

using std::cout;
using std::endl;

class Stack
{
private:
	std::stack<char> palStack;
	int length;

public:
	//Stack();
	void makePalindrome(std::string);
	//~Stack();

};

#endif 