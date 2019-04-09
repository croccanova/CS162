#Project: Lab3 - Dice War 
#Author: Christian Roccanova
#Date: 4/23/2017 

Lab3: main.o Game.o Die.o LoadedDie.o InputValidation.o 
	g++ main.o Game.o Die.o LoadedDie.o InputValidation.o -o Lab3

main.o: main.cpp
	g++ -c main.cpp

Game.o: Game.cpp Game.hpp
	g++ -c Game.cpp

Die.o: Die.cpp Die.hpp
	g++ -c Die.cpp

LoadedDie.o: LoadedDie.cpp LoadedDie.hpp
	g++ -c LoadedDie.cpp

InputValidation.o: InputValidation.cpp InputValidation.hpp
	g++ -c InputValidation.cpp

clean:
	rm *.o Lab3
