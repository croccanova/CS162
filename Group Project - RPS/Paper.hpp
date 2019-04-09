

#ifndef Paper_hpp
#define Paper_hpp

#include "Tool.hpp"

class Paper : public Tool
{
public:
    Paper();
    Paper(int strength);
    virtual FightResult fight(Tool*);
};

#endif /* Paper_hpp */
