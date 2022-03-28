#pragma once
#include "Character.h"
class Troll :
    public Character
{
public:
    Troll(const string&);
    void attack(shared_ptr<Character>);
    const string& getClass();
};

