/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: Header file for the University class
******************************************************/

#ifndef University_hpp
#define University_hpp

#include <string>
#include <iostream>
#include "People.hpp"
#include "Instructor.hpp"
#include "Student.hpp"
#include "Building.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

class University
{
private:
	Building building;
	People people;
	string UniName;
	double personValue[4];
	Student stud1;
	Student stud2;
	Instructor prof1;
	Instructor prof2;
	People * P1;
	People * P2;
	People * P3;
	People * P4;

	double test;
	int workChoice;


public:
	University();
	void buildingInfo();
	void personInfo();
	void workMenu();
};
#endif 
