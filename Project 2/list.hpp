/******************************************************
Program Name: Project 2
Author: Christian Roccanova
Date: 4/29/2017
Description: Header file for list class.
******************************************************/

#ifndef list_hpp
#define list_hpp

#include <string>
#include "Item.hpp"
#include "InputValidation.hpp"


class list
{
private:
	string itemName;
	string itemUnit;
	string removedItem;
	int itemPrice;
	int totalPrice;
	int itemQuantity;
	int itemUnitPrice;
	Item *item;
	int count;
	int copy;
	Validate valid;

public:
	list();
	void setCopy(int);
	int getCopy();
	void displayList(int);
	void addItem(int, string);
	void removeItem(int);
	int total(int);
	bool operator==(Item);
	void deallocate(int);


};



#endif 
