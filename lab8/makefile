#Project: Lab8 - Search and Sort
#Author: Christian Roccanova
#Date: 5/25/2017

CXXFLAGS= -std=c++11

Lab8: Main.o InputValidation.o	
	g++ Main.o InputValidation.o -o Lab8

Main.o: Main.cpp
	g++ -c $(CXXFLAGS) Main.cpp

InputValidation.o: InputValidation.cpp InputValidation.hpp
	g++ -c $(CXXFLAGS) InputValidation.cpp

clean:
	rm *.o Lab8

