#include "Mage.h"
#include "Spell.h"

Mage::Mage(const string& nameVal, int healthVal) : Character(nameVal, 40)
{
	auto newSpell = make_shared<Spell>("IceBlast");
	weapon = (shared_ptr<Weapon>)newSpell;
}