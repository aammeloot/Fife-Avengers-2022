#include "Troll.h"
#include "Warhammer.h"

Troll::Troll(const string& nameVal) : Character(nameVal, 80)
{
	auto newHammer = make_shared<Warhammer>("Stop! Hammertime");
	weapon = (shared_ptr<Weapon>)newHammer;
}

void Troll::attack(shared_ptr<Character>) { }

const string& Troll::getClass()
{
	string s = "Troll";
	return s;
}