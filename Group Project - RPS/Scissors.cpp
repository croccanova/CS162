

#include "Scissors.hpp"


/*********************************************************************
                        Scissors::Scissors()
 
 Description: default constructor that sets the inherited type and
 strength data members to their default values.
 *********************************************************************/
Scissors::Scissors()
{
    strength = 1;
    type='s';
}


/*********************************************************************
                        Scissors::Scissors()
 
 Description: constructor that sets the inherited type and strength
 data members, with an int paraemter for user defined strength.
 *********************************************************************/
Scissors::Scissors(int strength)
{
    this->strength = strength;
    type='s';
}


/*********************************************************************
                         Scissors::fight()
 
 Description: takes a pointer to a Tool object as the opponent's tool
 and determines who wins the round based on defined strength rules.
 The result is returned as an enumerated 'FightResult' value (WIN,
 LOSE, or DRAW).
 *********************************************************************/
Scissors::FightResult Scissors::fight(Tool* opponent)
{
    if (opponent->getType() == 'r')
    {
        if (double(opponent->getStrength()*2) > strength)
        {
            return LOSE;
        }
        
        if (double(opponent->getStrength()*2) < strength)
        {
            return WIN;
        }
    }
    
    
    if (opponent->getType() == 'p')
    {
        if (double(opponent->getStrength()*0.5) > strength)
        {
            return LOSE;
        }
        
        if (double(opponent->getStrength()*0.5) < strength)
        {
            return WIN;
        }
    }
    
    return DRAW;
}
