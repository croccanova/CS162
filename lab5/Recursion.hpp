/******************************************************
Program Name: Lab 5 - Recursion
Author: Christian Roccanova
Date: 5/5/2017
Description: Header file for the Recursion class.
******************************************************/

#ifndef Recursion_hpp
#define Recursion_hpp

#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Recursion
{
private:
	string userString;
	int stringLength;
	int arrSize;
	int arrSum;
	int triNum;
		
public:
	Recursion();
	void setString();
	string getString();
	int getLength();
	void reverse(int);
	void setSize(int);
	void sum(int, int*);
	void triangle(int);

	
};
#endif 