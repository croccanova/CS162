

#include <cstdlib>
#include <iostream>
#include "RPSGame.hpp"
#include "Paper.hpp"
#include "Rock.hpp"
#include "Scissors.hpp"

using std::cout;
using std::endl;


/*********************************************************************
                        RPSGame::RPSGame()
 
 Description: default constructor sets tool pointers to nullptr and 
 resets win/lose/draw counters to 0.
 *********************************************************************/
RPSGame::RPSGame()
{
    humanTool = nullptr;
    computerTool = nullptr;
    numDraws = numComputerWins = numHumanWins = 0;
}



/*********************************************************************
                        RPSGame::~RPSGame()
 
 Description: destructor that frees dynamically allocated memory used
 to create computer and human tool objects.
 *********************************************************************/
//RPSGame::~RPSGame()
//{
//
//    
//}


/*********************************************************************
                         RPSGame::createComputerTool()
 
 Description: selects a tool at random for the computer and dynamically
 creates the object using the 'computerTool' pointer.  If the user has
 opted to use non-defaul strengths for the tools, the tool object will
 be created with the appropriate custom strength value from the 
 optional parameters.  
 *********************************************************************/
void RPSGame::createComputerTool(bool useCustomStrength, int rStrength, int pStrength, int sStrength)
{
    int randomValue = rand() % 3;
    
            
    if (useCustomStrength)
    {
        switch(randomValue)
        {
            case 0:
                computerTool = new Rock(rStrength);
                cout << "The computer chose rock with strength " << rStrength << "." << endl;
                break;
            case 1:
                computerTool = new Paper(pStrength);
                cout << "The computer chose paper with strength " << pStrength << "." << endl;
                break;
            case 2:
                computerTool = new Scissors(sStrength);
                cout << "The computer chose scissors with strength " << sStrength << "." << endl;
                break;
        }
    }
    else
    {
        switch(randomValue)
        {
            case 0:
                computerTool = new Rock;
                cout << "The computer chose rock." << endl;
                break;
            case 1:
                computerTool = new Paper;
                cout << "The computer chose paper." << endl;
                break;
            case 2:
                computerTool = new Scissors;
                cout << "The computer chose scissors." << endl;
                break;
                
        }
    }
    
    
}


void RPSGame::displayStats()
{
    cout << "Game Stats:" << endl;
    cout << "Human wins: " << numHumanWins << endl;
    cout << "Computer wins: " << numComputerWins << endl;
    cout << "Draws: " << numDraws << endl << endl;
}


/*********************************************************************
                        RPSGame::playRound()
 
 Description: facilitates a round of game play by creating the tool
 object for the player, calling the createComputerTool function to 
 create the computers's tool, calling the fight method on the 
 player's tool object to determine the result of the round, increment
 the score board appropriately, and display the stats.  The parameters
 'useCustomStrength', 'rStrength', 'pStrength', 'sStrength' are 
 included in the event that the user has defined custom tool strengths
 and are optional.  
 *********************************************************************/
void RPSGame::playRound(char humanToolChoice, bool useCustomStrength, int rStrength, int pStrength, int sStrength)
{

    if (useCustomStrength)
    {
        switch (humanToolChoice)
        {
            case 'r':
                humanTool = new Rock(rStrength);
                cout << "You chose rock with strength " << rStrength << "." << endl;
                break;
                
            case 'p':
                humanTool = new Paper(pStrength);
                cout << "You chose paper with strength " << pStrength << "." << endl;
                break;
                
            case 's':
                humanTool = new Scissors(sStrength);
                cout << "You chose scissors with strength " << sStrength << "." << endl;
                break;
        }
        createComputerTool(true, rStrength,pStrength,sStrength);
    }
    else
    {
        switch (humanToolChoice)
        {
            case 'r':
                humanTool = new Rock;
                cout << "You chose rock." << endl;
                break;
                
            case 'p':
                humanTool = new Paper;
                cout << "You chose paper." << endl;
                break;
                
            case 's':
                humanTool = new Scissors;
                cout << "You chose scissors." << endl;
                break;
        }
        createComputerTool();
    }
    

    
    Tool::FightResult result = humanTool->fight(computerTool);
    
    switch(result)
    {
        case Tool::WIN:
            numHumanWins++;
            cout << "Human wins!" << endl;
            break;
            
        case Tool::LOSE:
            numComputerWins++;
            cout << "Computer wins!" << endl;
            break;
            
        case Tool::DRAW:
            numDraws++;
            cout << "It's a draw!" << endl;
            break;
            
    }
    cout << endl; // line break
    displayStats();
    
    if (humanTool!=nullptr)
    {
        delete humanTool;
    }
    
    if (computerTool!=nullptr)
    {
        delete computerTool;
    }
}






