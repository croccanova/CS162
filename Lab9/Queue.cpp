/******************************************************
Program name: Lab 9 - STL Containers
Author: Christian Roccanova
Date: 6/2/2017
Description:  Queue Class - contains the runBuffer function to build a queue using a user defined buffer, 
the avglength function to calculate the average length of the queue and the clearQueue function to empty the queue
******************************************************/

#include "Queue.hpp"

void Queue::runBuffer(int roundCount, int addBuffer, int popBuffer)
{
	
	for (double i = 0; i < roundCount; i++)
	{
		randNum = (rand() % 1000) + 1;
		addRoll = (rand() % 100) + 1;
		popRoll = (rand() % 100) + 1;
		
		if (addRoll < addBuffer)
		{
			buffQueue.push(randNum);
			cout << randNum << " was added to the queue!" << endl;
		}

		if (!buffQueue.empty())
		{
			if (popRoll < popBuffer)
			{
				buffQueue.pop();
				cout << "The front value has been popped off the queue!" << endl;
			}
		}

		avglength(i);
	}
}

void Queue::avglength(double x)
{
	
	
	if (x == 0 && !buffQueue.empty())
	{
		
		length = 1;
		avgLen = 1;
		oldAvg = 1;
		
	}
	else if (x == 0 && buffQueue.empty())
	{
		length = 0;
		avgLen = 0;
		oldAvg = 0;
	}
	else if (!buffQueue.empty())
	{
			length = buffQueue.size();
			avgLen = (oldAvg * (x) + length) / (x + 1);		
			oldAvg = avgLen;
	}
	else
	{
		length = 0;
		avgLen = (oldAvg * (x) + length) / (x + 1);
		oldAvg = avgLen;
	}
	
	cout << "The average length in round " << x + 1 << " is " << avgLen << "." << endl;
		
}

void Queue::clearQueue()
{
	for (int i = 0; i < length; i++)
	{
		buffQueue.pop();
	}
}