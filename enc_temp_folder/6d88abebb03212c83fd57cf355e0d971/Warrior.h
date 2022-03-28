#pragma once
#include "Character.h"

/*
*   Warrior is just a subclass of 
*/
class Warrior :
    public Character
{
public:
    Warrior(const string&);
    void attack(shared_ptr<Character>);
};

