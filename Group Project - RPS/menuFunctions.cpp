//
// Created by sean on 4/10/17.
//
#include "menuFunctions.hpp"

//displays menu based on user inputted name and options
void displayMenu(std::string menuName, std::string options[], int optionsLength)
{
    std::cout << std::endl;
    std::cout << menuName << std::endl;
    std::cout << "please choose from the options below: " << std::endl;
    // cycles through options array
    for(int i=0; i<optionsLength; i++)
    {
        std::cout << i+1<< ") " << options[i] << std:: endl;
    }
}