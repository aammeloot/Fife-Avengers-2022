#include "Barbarian.h"
#include "Axe.h"

Barbarian::Barbarian(const string& nameVal) : Character(nameVal, 40)
{
	auto newAxe = make_shared<Axe>("Gretaxe Thunberg");
	weapon = (shared_ptr<Weapon>)newAxe;
}

void Barbarian::attack(shared_ptr<Character>) { }

const string& Barbarian::getClass()
{
	string s = "Barbarian";
	return s;
}