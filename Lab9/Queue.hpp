/******************************************************
Program name: Lab 9 - STL Containers
Author: Christian Roccanova
Date: 6/2/2017
Description:  Queue class header file 
******************************************************/

#ifndef Queue_hpp
#define Queue_hpp

#include <queue>
#include <cstdlib>
#include <ctime>
#include <iostream>

using std::cout;
using std::endl;

class Queue
{
private:
	std::queue<int> buffQueue;
	int addRoll;
	int popRoll;
	int randNum;
	double oldAvg;
	double avgLen;
	double length;

public:
	void runBuffer(int, int, int);
	void avglength(double);
	void clearQueue();

};

#endif 