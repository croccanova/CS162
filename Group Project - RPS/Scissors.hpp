

#ifndef Scissors_hpp
#define Scissors_hpp

#include "Tool.hpp"

class Scissors : public Tool
{
public:
    Scissors();
    Scissors(int strength);
    virtual FightResult fight(Tool*);
};

#endif /* Scissors_hpp */
