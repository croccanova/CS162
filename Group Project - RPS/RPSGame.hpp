

#ifndef RPSGame_hpp
#define RPSGame_hpp

#include "Tool.hpp"

class RPSGame
{
private:
    Tool* humanTool;
    Tool* computerTool;
    int numHumanWins;
    int numComputerWins;
    int numDraws;
    
public:
    RPSGame();
    //~RPSGame();
    
    void displayStats();
    void createComputerTool(bool useCustomStrength = false, int rStrength = 0, int pStrength = 0, int sStrength = 0);
    void playRound(char humanToolChoice, bool useCustomStrength = false, int rStrength = 0, int pStrength = 0, int sStrength = 0);
};

#endif /* RPSGame_hpp */
