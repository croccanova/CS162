/******************************************************
Program Name: Project 2
Author: Christian Roccanova
Date: 4/29/2017
Description: Header file for Item class.
******************************************************/

#ifndef Item_hpp
#define Item_hpp

#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Item
{
private:
	string name;
	string unit;
	int price;
	int quantity;
	int unitPrice;


public:
	Item();
	void setName(string);
	void setUnit(string);
	void setPrice(int, int);
	void setQuantity(int);
	void setUnitPrice(int);
	string getName();
	string getUnit();
	int getPrice();
	int getQuantity();
	int getUnitPrice();
};

#endif 
