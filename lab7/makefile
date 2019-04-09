#Project: Lab7 - Queue
#Author: Christian Roccanova
#Date: 5/21/2017


Lab7: main.o Queue.o InputValidation.o	
	g++ main.o Queue.o InputValidation.o -o Lab7

main.o: main.cpp
	g++ -c main.cpp

Queue.o: Queue.cpp Queue.hpp
	g++ -c Queue.cpp

InputValidation.o: InputValidation.cpp InputValidation.hpp
	g++ -c InputValidation.cpp

clean:
	rm *.o Lab7

