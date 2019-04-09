#Project: Final Project - Dungeon Game
#Author: Christian Roccanova
#Date: 6/13/2017 

Final: main.o Game.o Space.o BossRoom.o SwordRoom.o ShieldRoom.o SwitchRoom.o KeyRoom.o MainRoom.o 
	g++ main.o Game.o Space.o BossRoom.o SwordRoom.o ShieldRoom.o SwitchRoom.o KeyRoom.o MainRoom.o -o Final

main.o: main.cpp
	g++ -c main.cpp

Game.o: Game.cpp Game.hpp
	g++ -c Game.cpp

Space.o: Space.cpp Space.hpp
	g++ -c Space.cpp

BossRoom.o: BossRoom.cpp BossRoom.hpp
	g++ -c BossRoom.cpp

SwordRoom.o: SwordRoom.cpp SwordRoom.hpp
	g++ -c SwordRoom.cpp

ShieldRoom.o: ShieldRoom.cpp ShieldRoom.hpp
	g++ -c ShieldRoom.cpp

SwitchRoom.o: SwitchRoom.cpp SwitchRoom.hpp
	g++ -c SwitchRoom.cpp

KeyRoom.o: KeyRoom.cpp KeyRoom.hpp
	g++ -c KeyRoom.cpp

MainRoom.o: MainRoom.cpp MainRoom.hpp
	g++ -c MainRoom.cpp

clean:
	rm *.o Final
