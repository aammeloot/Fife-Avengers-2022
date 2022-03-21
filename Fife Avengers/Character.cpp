#include "Character.h"

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
	return 0;
}

int Character::getHealth()
{
	return health;
}

void Character::setHealth(int healthVal)
{
	health = healthVal;
}

