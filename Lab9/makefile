#Project: Lab9 - Stl Containers
#Author: Christian Roccanova
#Date: 6/4/2017


Lab9: Main.o InputValidation.o Stack.o Queue.o	
	g++ Main.o Stack.o Queue.o InputValidation.o -o Lab9

Main.o: Main.cpp
	g++ -c Main.cpp

Stack.o: Stack.cpp Stack.hpp
	g++ -c Stack.cpp

Queue.o: Queue.cpp Queue.hpp
	g++ -c Queue.cpp

InputValidation.o: InputValidation.cpp InputValidation.hpp
	g++ -c InputValidation.cpp

clean:
	rm *.o Lab9

