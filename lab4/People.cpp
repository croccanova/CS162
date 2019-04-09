/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: People Class - contains information on faculty and students, functions to display that information and the getVal function
******************************************************/

#include "People.hpp"

// constructor places the information for people into arrays
People::People()
{
	personName[0] = "John Smith";
	personPosition[0] = "Student";
	personAge[0] = 25;

	personName[1] = "Mary Sue";
	personPosition[1] = "Student";
	personAge[1] = 27;

	personName[2] = "Samina Ehsan";
	personPosition[2] = "Instructor";
	personAge[2] = 35;
	
	personName[3] = "Timothy Alcon";
	personPosition[3] = "Instructor";
	personAge[3] = 47;
	
	
}

// returns the name of the person stored at the input location
string People::getName(int num)
{
	return personName[num];
}

// prints the information on students and faculty
void People::displayPeople(int i)
{
	
		cout << "Name: " << personName[i] << endl;
		cout << "Position: " << personPosition[i] << endl;
		cout << "Age: " << personAge[i] << endl;

		if (personPosition[i] == "Instructor")
		{
			cout << "Rating: ";
		}
		else if (personPosition[i] == "Student")
		{
			cout << "GPA: ";
		}
}


// generates a random number of hours a person worked and then prints it
void People::do_work(int x)
{
	if (personPosition[x - 1] == "Student")
	{
		cout << personPosition[x - 1] << " " << personName[x - 1] << " did " << rand() % 40 + 1 << " hours of homework." << endl;
	}
	else if (personPosition[x - 1] == "Instructor")
	{
		cout << personPosition[x - 1] << " " << personName[x - 1] << " graded papers for " << rand() % 40 + 1 << " hours." << endl;
	}
}

// virtual function called in the Student and Instructor classes
double People::getVal()
{
	return 0.0;
}

