/******************************************************
Program Name: Project 2
Author: Christian Roccanova
Date: 4/29/2017
Description: list Class - contains functions to add new items, print the list and grow the array if necessary.  Also contains override of the == operator.
******************************************************/

#include "list.hpp"

//constructor
list::list()
{
	item = new Item[4];
	count = 0;
		
}


//prints the list and its current total price
void list::displayList(int count)
{
	cout << "Here is your current list:" << endl;
	
	// individually prints each item
	for (int i = 0; i < count; i++)
	{
		
		cout << "Item: " << item[i].getName() << endl;
		cout << "Unit: " << item[i].getUnit() << endl;
		cout << "Unit Price: $" << item[i].getUnitPrice() << endl;
		cout << "Quantity: " << item[i].getQuantity() << endl;
		cout << "Price: $" << item[i].getPrice() << endl << endl;
	}

	cout << "The total price is: $" << total(count) << endl;
}

// calculates the total price of the list
int list::total(int count)
{
	totalPrice = 0;
	
	for (int i = 0; i < count; i++)
	{
		totalPrice += item[i].getPrice();
	}

	return totalPrice;
}

//takes input to set the information about an item
void list::addItem(int count, string itemName)
{
	
	

	//cin >> itemName;
	item[count].setName(itemName);

	cout << "What is the item unit?" << endl;
	cin >> itemUnit;
	item[count].setUnit(itemUnit);

	cout << "How many do you want?" << endl;
	itemQuantity = valid.validateInt();
	item[count].setQuantity(itemQuantity);

	cout << "What is the unit price?" << endl;
	itemUnitPrice = valid.validateInt();
	item[count].setUnitPrice(itemUnitPrice);

	item[count].setPrice(itemQuantity, itemUnitPrice);
		

	//increases the size of the array if it's capacity is reached
	if (count > 4)
	{
		int newMax = count + 1;
		Item *temp = new Item[newMax];
		for (int i = 0; i < count; i++)
		{
			temp[i] = item[i];
		}

		item = temp;
	}

}

//removes an item from the array
void list::removeItem(int count)
{
	
	string blank = "";
	int zero = 0;
	item[count-1].setName(blank);
	item[count-1].setUnit(blank);
	item[count-1].setQuantity(zero);
	item[count-1].setUnitPrice(zero);

		
}

// sets the copy variable equal to the array position of the duplicate item
void list::setCopy(int dup)
{
	copy = dup;
}

// returns the array position of the duplicate item
int list::getCopy()
{
	return copy;
}

// overloads the == operator to return true if an item name already exists within the list
bool list::operator==(Item temp)
{
	
	for (int i = 0; i <= count; i++)
	{
		if (item[i].getName() == temp.getName())
		{
			setCopy(i);
			return true;		
		}
		
	}
	return false;
}

// deallocates item array
void list::deallocate(int c)
{
	delete[] item;
}