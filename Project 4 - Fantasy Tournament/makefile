#Project: Project4 - Fantasy Combat Tournament
#Author: Christian Roccanova
#Date: 5/30/2017 

Project4: main.o game.o Creature.o Vampire.o BlueMen.o HarryPotter.o Medusa.o Barbarian.o Queue.o InputValidation.o 
	g++ main.o game.o Creature.o Vampire.o BlueMen.o HarryPotter.o Medusa.o Barbarian.o Queue.o InputValidation.o -o Project4

main.o: main.cpp
	g++ -c main.cpp

game.o: game.cpp game.hpp
	g++ -c game.cpp

Creature.o: Creature.cpp Creature.hpp
	g++ -c Creature.cpp

Vampire.o: Vampire.cpp Vampire.hpp
	g++ -c Vampire.cpp

BlueMen.o: BlueMen.cpp BlueMen.hpp
	g++ -c BlueMen.cpp

HarryPotter.o: HarryPotter.cpp HarryPotter.hpp
	g++ -c HarryPotter.cpp

Medusa.o: Medusa.cpp Medusa.hpp
	g++ -c Medusa.cpp

Barbarian.o: Barbarian.cpp Barbarian.hpp
	g++ -c Barbarian.cpp

Queue.o: Queue.cpp Queue.hpp
	g++ -c Queue.cpp

InputValidation.o: InputValidation.cpp InputValidation.hpp
	g++ -c InputValidation.cpp

clean:
	rm *.o Project4
