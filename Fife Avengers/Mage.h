#pragma once
#include "Character.h"
class Mage :
    public Character
{
public:
    Mage(const string&);
    void attack(shared_ptr<Character>);
    const string& getClass();
};

