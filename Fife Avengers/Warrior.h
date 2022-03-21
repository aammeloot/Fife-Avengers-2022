#pragma once
#include "Character.h"

class Warrior :
    public Character
{
public:
    Warrior(const string&);
    void attack(shared_ptr<Character>);
};

