#include "Mage.h"
#include "Spell.h"

Mage::Mage(const string& nameVal) : Character(nameVal, 40)
{
	auto newSpell = make_shared<Spell>("IceBlast");
	weapon = (shared_ptr<Weapon>)newSpell;
}

void Mage::attack(shared_ptr<Character>) {}

const string& Mage::getClass()
{
	string s = "Mage";
	return s;
}