/******************************************************
Program Name: Project 2
Author: Christian Roccanova
Date: 4/29/2017
Description: Item Class - contains functions to set the variables for item information and functions to return those variables
******************************************************/

#include "Item.hpp"

// constructor
Item::Item()
{
	name = " ";
	unit = " ";
	price = 0;
	unitPrice = 0;
	quantity = 0;

}

void Item::setName(string n)
{
	this->name = n;
}

void Item::setUnit(string u)
{
	this->unit = u;
}

void Item::setPrice(int q, int p)
{
	this->price = p * q;
}

void Item::setQuantity(int q)
{
	this->quantity = q;
}

void Item::setUnitPrice(int up)
{
	this->unitPrice = up;
}

string Item::getName()
{
	return name;
}

string Item::getUnit()
{
	return unit;
}

int Item::getPrice()
{
	return price;
}

int Item::getQuantity()
{
	return quantity;
}

int Item::getUnitPrice()
{
	return unitPrice;
}

