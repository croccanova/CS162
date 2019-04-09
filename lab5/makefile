#Project: Lab5 - Recursion 
#Author: Christian Roccanova
#Date: 5/7/2017


Lab5: main.o Recursion.o InputValidation.o	
	g++ main.o Recursion.o InputValidation.o -o Lab5

main.o: main.cpp
	g++ -c main.cpp

Recursion.o: Recursion.cpp Recursion.hpp
	g++ -c Recursion.cpp

InputValidation.o: InputValidation.cpp InputValidation.hpp
	g++ -c InputValidation.cpp

clean:
	rm *.o Lab5

