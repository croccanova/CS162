#Project: Project2 - shopping list 

#Author: Christian Roccanova

#Date: 4/27/2017 

Project4: main.o list.o Item.o InputValidation.o 
	g++ main.o list.o Item.o InputValidation.o -o Project2

main.o: main.cpp
	g++ -c main.cpp

list: list.cpp list.hpp
	g++ -c list.cpp

Item.o: Item.cpp Item.hpp
	g++ -c Item.cpp

InputValidation.o: InputValidation.cpp InputValidation.hpp
	g++ -c InputValidation.cpp

clean:
	rm *.o Project2
