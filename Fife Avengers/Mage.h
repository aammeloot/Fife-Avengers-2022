#pragma once
#include "Character.h"
class Mage :
    public Character
{
public:
    Mage(const string&, int);
    void attack(shared_ptr<Character>);
};

