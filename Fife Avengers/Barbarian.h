#pragma once
#include "Character.h"
class Barbarian :
    public Character
{
public:
    Barbarian(const string&);
    void attack(shared_ptr<Character>);
    const string& getClass();
};

