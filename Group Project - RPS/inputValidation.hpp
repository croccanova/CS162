/*********************************************************************
** Author:Sean Moss
** Date:04/11/2017
** Description: Input validation functions that check for integer or double and range
*********************************************************************/

#ifndef INPUTVALIDATION_HPP
#define INPUTVALIDATION_HPP
#include <iostream>

int intGet(std::string myResponse = "Please enter an integer: ", int min = 0, int max = 10);
double doubleGet(std::string myResponse = "Please enter a double: ", double min = 0, double max = 10);
std::string stringGet(std::string myResponse = "Please enter a double: ");

#endif