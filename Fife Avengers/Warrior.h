#pragma once
#include "Character.h"

/*
*   Warrior is just a subclass of Characyer
*/
class Warrior :
    public Character
{
public:
    // Constructor takes only a name, the health will be added manually
    Warrior(const string&);
    // If we weren't using smart pointers, a destructor would be necessary
    // ~Warrior();

    const string& getClass();
    void attack(shared_ptr<Character>);
};

