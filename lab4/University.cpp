/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: University Class - contains functions to print the information of people and buildings as well as the work menu
******************************************************/

#include "University.hpp"

//constructor sets the university name
University::University()
{
	UniName = "Oregon State University";
	
}


// prints building information
void University::buildingInfo()
{
	cout << "The buildings at " << UniName << " are:" << endl;
	building.displayInfo();
}

// prints person information
void University::personInfo()
{
	
	
	P1 = &stud1;
	P2 = &stud2;
	P3 = &prof1;
	P4 = &prof2;

	// stores GPA or rating into the personValue array by calling the virtual getVal function
	personValue[0] = P1->getVal();
	personValue[1] = P2->getVal();
	personValue[2] = P3->getVal();
	personValue[3] = P4->getVal();
	
	cout << "The people at " << UniName << " are:" << endl;
	for (int i = 0; i < 4; i++)
	{
		people.displayPeople(i);
		cout << personValue[i] << endl << endl;
	}
	
	
}

// prints menu of people available to do work
void University::workMenu()
{
	cout << "Please choose a person to do work by entering their corresponding number." << endl;
	
	for (int i = 0; i < 4; i++)
	{
		cout << i+1 << ". " << people.getName(i) << endl;
	}

	cin >> workChoice;

	while (workChoice != 1 && workChoice != 2 && workChoice != 3 && workChoice != 4)
	{
		cout << "Sorry, that was not a valid choice. Please try again" << endl;
		cin >> workChoice;
	}
	 
	people.do_work(workChoice);
}