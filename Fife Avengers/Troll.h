#pragma once
#include "Character.h"
class Troll :
    public Character
{
public:
    Troll(const string&, int);
    void attack(shared_ptr<Character>);
};

