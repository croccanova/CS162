/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: Header file for the Instructor class.
******************************************************/

#ifndef Instructor_hpp
#define Instructor_hpp

#include <string>
#include <iostream>
#include "People.hpp"

using std::cout;
using std::cin;
using std::endl;

class Instructor : public People
{
private:
	double rating;
public:
	virtual double getVal();
};
#endif 