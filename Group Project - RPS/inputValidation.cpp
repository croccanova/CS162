//
// Created by sean on 3/28/17.
//
#include <iostream>
#include <limits>
#include "inputValidation.hpp"
using namespace std;

//takes a string as a parameter and asks user for integer using that string.
//validates that user input is indeed an integer.

int intGet(std::string myResponse, int min, int max){
    int input;
    std::string myTest;
    cout << myResponse;
    cin >> input;
    std::getline(cin, myTest, '\n');
    while (cin.fail() || myTest.size() != 0 || input > max || input < min)
    {
        if(cin.fail() || myTest.size() != 0){
            cout << "Input must be an integer." << endl;
            cout << "\n";
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        else if(input > max || input < min)
        {
            cout << "input must be between " << min << " and " << max <<"." << endl;
            cout << "\n";
        }
        cout << myResponse;
        cin >> input;
        std::getline(cin, myTest, '\n');
    }

    return input;
}

//takes a string as a parameter and asks user for a double using that string.
//validates that user input is indeed a double.

double doubleGet(std::string myResponse, double min, double max){
    double input;
    std::string myTest;
    cout << myResponse;
    cin >> input;
    std::getline(cin, myTest, '\n');
    while (cin.fail() || myTest.size() != 0 || input > max || input < min)
    {
        if(cin.fail() || myTest.size() != 0) {
            cout << "Input must be a double." << endl;
            cout << "\n";
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        else if(input > max || input < min)
        {
            cout << "input must be between " << min << " and " << max <<"." << endl;
            cout << "\n";
        }
        cout << myResponse;
        cin >> input;
        std::getline(cin, myTest, '\n');
    }
    return input;
}

std::string stringGet(std::string myResponse){
    std::string input = "";
    std::cout << myResponse;
    getline(cin , input);
    while(input == "")
    {
        cout << "Input cannot be empty" << endl;
        cout << myResponse;
        std::getline(cin, input);
    }
    return input;
}

