

#ifndef Rock_hpp
#define Rock_hpp

#include "Tool.hpp"

class Rock : public Tool
{
public:
    Rock();
    Rock(int strength);
    virtual FightResult fight(Tool*);
};

#endif /* Rock_hpp */
