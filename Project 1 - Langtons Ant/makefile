#Project: Project1
#Author: Christian Roccanova#Date: 4/16/2017 

Project1: main.o Ant.o InputValidation.o 
	g++ main.o Ant.o InputValidation.o -o Project1

main.o: main.cpp
	g++ -c main.cpp

Ant.o: Ant.cpp Ant.hpp
	g++ -c Ant.cpp

determinant.o: InputValidation.cpp InputValidation.hpp
	g++ -c InputValidation.cpp

clean:
	rm *.o Project1