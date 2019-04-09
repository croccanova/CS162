/******************************************************
Program Name: lab4 - OSU Information System
Author: Christian Roccanova
Date: 4/27/2017
Description: Building class - contains information about campus buildings and a function to display that information
******************************************************/

#include "Building.hpp"

// constructor places the information for buildings into arrays
Building::Building()
{
	buildingName[0] = "Adams Hall";
	buildingAddress[0] = "606 SW 15TH ST CORVALLIS, OR 97331";
	buildingSQFT[0] = "11,168 sqft";

	buildingName[1] = "Fairbanks Hall";
	buildingAddress[1] = "220 SW 26TH STREET CORVALLIS, OR 97331";
	buildingSQFT[1] = "37,286 sqft";

	buildingName[2] = "Kelley Engineering Center";
	buildingAddress[2] = "110 SW PARK TERRACE CORVALLIS, OR 97331	";
	buildingSQFT[2] = "152,166 sqft";

}

// prints building info
void Building::displayInfo()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Building: " << buildingName[i] << endl;
		cout << "Address: " << buildingAddress[i] << endl;
		cout << "Square footage: " << buildingSQFT[i] << endl << endl;
	}
}