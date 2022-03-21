#include "Character.h"

/*
*	This one is the implementation of the functions from the clas
*	character
*/

// Constructor
Character::Character(const string& nameVal, int healthVal)
{
	name = nameVal;
	health = healthVal;
}

const string& Character::getName()
{
	return name;
}

int Character::getStrength()
{
	return weapon->getDamageScore();
}

int Character::getHealth()
{
	return health;
}

void Character::setHealth(int healthVal)
{
	health = healthVal;
}

