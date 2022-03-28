#include "Warrior.h"
#include "Sword.h"

/*
*	This is a subclass of chracter. It takes a name. It sets the level of
*	your character as a fixed value (50) and allocates a sword to the
*	weapon property
*/
Warrior::Warrior(const string& nameVal) : Character(nameVal, 50)
{
	auto newSword = make_shared<Sword>("Excalibur");
	weapon = (shared_ptr<Weapon>)newSword;

	// If we weren't using smart pointers the lines above would be
	// Weapon *newSword = new Sword("Excalibur");
	// weapon = (Weapon*)newSword;
}

/*
*	If we weren't using smart pointers we would need a destructor
* Warrior::~Warrior()
* {
*	delete weapon;
* }
*/

void Warrior::attack(shared_ptr<Character>)
{
	// Leave it empty for now
}

const string& Warrior::getClass()
{
	return "Warrior";
}