#include "Barbarian.h"
#include "Axe.h"

Barbarian::Barbarian(const string& nameVal, int healthVal) : Character(nameVal, 40)
{
	auto newAxe = make_shared<Axe>("Gretaxe Thunberg");
	weapon = (shared_ptr<Weapon>)newAxe;
}