#Project: Lab4 - OSU Information System 
#Author: Christian Roccanova
#Date: 4/29/2017


Lab4: main.o University.o Building.o People.o Instructor.o Student.o
	g++ main.o University.o Building.o People.o Instructor.o Student.o -o Lab4

main.o: main.cpp
	g++ -c main.cpp

University.o: University.cpp University.hpp
	g++ -c University.cpp

Building.o: Building.cpp Building.hpp
	g++ -c Building.cpp

People.o: People.cpp People.hpp
	g++ -c People.cpp

Instructor.o: Instructor.cpp Instructor.hpp
	g++ -c Instructor.cpp

Student.o: Student.cpp Student.hpp
	g++ -c Student.cpp

clean:
	rm *.o Lab4
