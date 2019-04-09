/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: Header file for the People class.
******************************************************/

#ifndef People_hpp
#define People_hpp

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>


using std::cout;
using std::cin;
using std::endl;
using std::string;

class People
{
protected:
	string personName[4];
	string personPosition[4];
	int personAge[4];
	
public:
	People();
	void displayPeople(int);
	string getName(int);
	void do_work(int);
	virtual double getVal();
	

};
#endif 