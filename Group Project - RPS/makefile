

groupProject: main.o Tool.o Rock.o Paper.o Scissors.o RPSGame.o iVal.o menuFunctions.o
	g++ -std=c++11  main.o Tool.o Rock.o Paper.o Scissors.o RPSGame.o iVal.o menuFunctions.o -o groupProject
	valgrind groupProject

main.o: main.cpp
	g++ -c main.cpp

Tool.o: Tool.cpp Tool.hpp
	g++ -c Tool.cpp

Rock.o: Rock.cpp Rock.hpp
	g++ -c Rock.cpp

Paper.o: Paper.cpp Paper.hpp
	g++ -c Paper.cpp

RPSGame.o: RPSGame.cpp RPSGame.hpp
	g++ -std=c++11  -c RPSGame.cpp


Scissors.o: Scissors.cpp Scissors.hpp
	g++ -c Scissors.cpp

iVal.o: iVal.cpp iVal.hpp
	g++ -std=c++11 iVal.cpp -c

menuFunctions.o: menuFunctions.cpp menuFunctions.hpp
	g++ -std=c++11 menuFunctions.cpp -c


clean:
	rm *.o groupProject


