

#include "Rock.hpp"


/*********************************************************************
                            Rock::Rock()
 
 Description: default constructor that sets the inherited type and
 strength data members to their default values.
 *********************************************************************/
Rock::Rock()
{
    strength = 1;
    type='r';
}


/*********************************************************************
                            Rock::Rock()
 
 Description: constructor that sets the inherited type and strength
 data members, with an int paraemter for user defined strength.
 *********************************************************************/
Rock::Rock(int strength)
{
    this->strength = strength;
    type='r';
}

/*********************************************************************
                            Rock::fight()
 
 Description: takes a pointer to a Tool object as the opponent's tool
 and determines who wins the round based on defined strength rules.  
 The result is returned as an enumerated 'FightResult' value (WIN,
 LOSE, or DRAW).
 *********************************************************************/
Rock::FightResult Rock::fight(Tool* opponent)
{
    if (opponent->getType() == 'p')
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

    
    if (opponent->getType() == 's')
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
