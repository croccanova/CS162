/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: Header file for the Student class.
******************************************************/

#ifndef Student_hpp
#define Student_hpp

#include <string>
#include <iostream>
#include "People.hpp"

class Student : public People
{
private:
	double GPA;
public:
	virtual double getVal();
	
};
#endif 
