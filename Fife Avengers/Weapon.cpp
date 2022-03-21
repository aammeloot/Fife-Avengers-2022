#include "Weapon.h"

// Constructor:
Weapon::Weapon(const string& nameValue, int damageValue)
{
	name = nameValue;
	damageScore = damageValue;
}

string Weapon::getName()
{
	return name;
}

int Weapon::getDamageScore()
{
	return damageScore;
}

