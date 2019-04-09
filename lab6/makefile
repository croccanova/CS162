#Project: Lab6 - linked lists
#Author: Christian Roccanova
#Date: 5/14/2017


Lab6: main.o List.o InputValidation.o	
	g++ main.o List.o InputValidation.o -o Lab6

main.o: main.cpp
	g++ -c main.cpp

Recursion.o: List.cpp List.hpp
	g++ -c List.cpp

InputValidation.o: InputValidation.cpp InputValidation.hpp
	g++ -c InputValidation.cpp

clean:
	rm *.o Lab6

