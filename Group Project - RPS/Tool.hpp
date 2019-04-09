

#ifndef Tool_hpp
#define Tool_hpp



class Tool
{
protected:
    int strength;
    char type;
    
public:
    enum FightResult {WIN, LOSE, DRAW};
    virtual FightResult fight(Tool*)=0;
    int getStrength(){return strength;}
    char getType(){return type;}
    
};




#endif /* Tool_hpp */
