#Project: Project3 - Fantasy combat 
#Author: Christian Roccanova
#Date: 5/10/2017 

Project3: main.o game.o Creature.o Vampire.o BlueMen.o HarryPotter.o Medusa.o Barbarian.o 
	g++ main.o game.o Creature.o Vampire.o BlueMen.o HarryPotter.o Medusa.o Barbarian.o -o Project3

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

clean:
	rm *.o Project3
