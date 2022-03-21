#include <iostream>
#include <memory>
#include "Weapon.h"
#pragma once

using namespace std;

class Character
{
protected:
	string name;
	int health;
	shared_ptr<Weapon> weapon;
public:
	Character(const string&, int);
	const string& getName();
	int getStrength();
	int getHealth();
	void setHealth(int);

	virtual void attack(shared_ptr<Character>) = 0;
};

