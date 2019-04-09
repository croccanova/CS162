/******************************************************
Program name: Lab 8 - Sorting and Searching
Author: Christian Roccanova
Date: 5/24/2017
Description:  Main file - contains the menu function to call the functions to sort and search.  Contains functions to sort files and do linear and binary searches for values within files.
******************************************************/

#include <iostream>
#include "InputValidation.hpp"
#include <fstream>
#include <string>


using std::cout;
using std::cin;
using std::endl;

//performs a linear search for a value within a file
void search(std::string file, int number)
{
	int numCount = 0;
	int i = 0;
	int readNum;
	bool found = false;
	std::ifstream inputFile;
	inputFile.open(file);
	int searchArray[10];

	// reads data to build an array
	while (inputFile >> readNum)
	{
		searchArray[numCount] = readNum;
		numCount++;
	}

	//cycles through array until the desired value is found.
	//code is based off of that shown on page 605 of C++ Early Objects 9th ed. by Tony Gaddis
	while (i < numCount && !found)
	{
		if (searchArray[i] == number)
		{
			cout << number << " is located at position " << i + 1 << " in " << file << endl;
			found = true;
		}
		i++;
	}

	// lets user know if their number was not found
	if (found == false)
	{
		cout << number << " was not found in " << file << endl;
	}

	inputFile.close();
}

// sorts files from least to greatest
void sort(std::string file)
{
	int numCount = 0;
	int readNum;
	int temp;
	std::string outName;
	bool swap = false;
	std::ifstream inputFile;
	std::ofstream outputFile;
	inputFile.open(file);
	int sortArray[10];

	// reads data to build an array
	while (inputFile >> readNum)
	{
		sortArray[numCount] = readNum;
		numCount++;
	}

	//sorts the array
	//code is based off of that shown on page 616 of C++ Early Objects 9th ed. by Tony Gaddis
	do
	{
		swap = false;
		for (int i = 0; i < numCount - 1; i++)
		{
			if (sortArray[i] > sortArray[i + 1])
			{
				temp = sortArray[i];
				sortArray[i] = sortArray[i + 1];
				sortArray[i + 1] = temp;
				swap = true;
			}
		}

	} while (swap);

	inputFile.close();

	cout << "What would you like the output file to be called?" << endl;
	cin >> outName;

	//creates output file and writes the sorted data to it
	outputFile.open(outName);
	for (int j = 0; j < numCount; j++)
	{
		outputFile << sortArray[j] << endl;
	}

	outputFile.close();

}

//performs a binary search for a value within a file
void binSearch(std::string file, int number)
{
	int first = 0;
	int last = 9;
	int position = -1;
	int numCount = 0;
	int mid, readNum;
	bool found = false;
	int binArray[10];
	std::ifstream inputFile;

	inputFile.open(file);

	// reads data to build an array
	while (inputFile >> readNum)
	{
		binArray[numCount] = readNum;
		numCount++;
	}

	//code is based off of that shown on pages 608-609 of C++ Early Objects 9th ed. by Tony Gaddis
	while (first <= last && !found)
	{
		mid = (first + last) / 2;
		if (binArray[mid] == number)  // prints 
		{
			found = true;
			position = mid;
			cout << number << " is located at position " << position << " in the file " << file << endl << endl;
		}
		else if (binArray[mid] < number) // restricts search to lower half 
		{
			first = mid + 1;
		}
		else                            // restricts search to upper half
		{
			last = mid - 1;
		}
	}

	// lets user know if their number was not found
	if (found == false)
	{
		cout << number << " was not found in " << file << endl;
	}

	inputFile.close();

}

void Menu()
{
	char choice;
	int num;
	bool repeat = true;
	Validate valid;

	//menu loops until user quits
	do
	{
		//prints menu and instructions
		cout << "Welcome, please enter the number of one of the following options." << endl;
		cout << "1. Search for a value" << endl << "2. Sort files" << endl << "3. Binary search for a value" << endl << "4. Exit" << endl;
		cin >> choice;

		//loops if the user's choice is not an option
		while (choice != '1' && choice != '2' && choice != '3' && choice != '4')
		{
			cout << "Sorry, that was not a valid choice. Please try again" << endl;
			cin >> choice;
		}

		switch (choice)
		{
		
			// user chooses linear search option
		case '1':
		{
			cout << "Please enter an integer to search for." << endl;
			num = valid.validateInt();

			search("file1.txt", num);
			search("file2.txt", num);
			search("file3.txt", num);
			search("file4.txt", num);
					

		}
		break;

		// user chooses to sort a file
		case '2':
		{
			std::string sortFile;
			cout << "Please enter the file you wish to sort (file1.txt - file4.txt)" << endl;
			cin >> sortFile;

			// repeats if file name is not valid
			while (sortFile != "file1.txt" && sortFile != "file2.txt" && sortFile != "file3.txt" && sortFile != "file4.txt")
			{
				cout << "Sorry, that was not a valid choice. Please try again" << endl;
				cin >> sortFile;
			}
			sort(sortFile);

			cout << "Your sorted file has been created." << endl << endl;
		}
		break;

		// user chooses the binary search option
		case '3':
		{
			std::string sortedFile;
			cout << "Please enter the name of the sorted file your wish to search." << endl;
			cin >> sortedFile;

			cout << "Please enter an integer to search for." << endl;
			num = valid.validateInt();

			binSearch(sortedFile, num);
		}
		break;

		// user chooses to exit
		case '4':
		{
			repeat = false;
		}
		break;
		}

	} while (repeat == true);

}



int main()
{
	//calls menu
	Menu();

	return 0;

}