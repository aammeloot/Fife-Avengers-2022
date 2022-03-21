#include "Warrior.h"
#include "Sword.h"

Warrior::Warrior(const string& nameVal) : Character(nameVal, 50)
{
	auto newSword = make_shared<Sword>("Excalibur");
	weapon = (shared_ptr<Weapon>)newSword;
}

void Warrior::attack(shared_ptr<Character>)
{
	// Leave it empty for now
}