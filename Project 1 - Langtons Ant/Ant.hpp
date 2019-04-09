/******************************************************
Program Name: Project1 - Langton's Ant
Author: Christian Roccanova
Date: 4/15/2017
Description: Header file for the Ant class.
******************************************************/

#ifndef Ant_hpp
#define Ant_hpp

#include<string>

class Ant
{
	private:
		char color, nextColor;
		std::string antDirection, newHeading;
		int xfacing, yfacing; // sets starting ant direction to "up"
		int xAnt, yAnt;

	public:
		Ant();
		void setAnt(char**, int, int);
		void saveSpace(char**);
		void turn();
		void direction();
		void step(char**, int, int);
		void reset();
		
};
#endif 

	