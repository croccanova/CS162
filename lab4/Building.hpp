/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: Header file for the Building class.
******************************************************/

#ifndef Building_hpp
#define Building_hpp

#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Building
{
private:
	
	string buildingName[3];
	string buildingAddress[3];
	string buildingSQFT[3];

public:
	Building();
	void displayInfo();
};
#endif 
