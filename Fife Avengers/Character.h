#include <iostream>
#include <memory>
#include "Weapon.h"
#pragma once
using namespace std;

/*	Character is an abstract class
*	It's the definition of a character - attributes and methods
* 
*	To allocate characters one needs to actually allocate one 
*	Of the 4 avalaible subclasses: Warrior, Mage, Barbarian and Troll
*/

class Character
{
protected:
	// The character's name - allocated at construction
	string name;
	// The health points - allocated at construction
	int health;
	
	// The weapon is allocated at sub-class construction
	// Using a smart shared pointer to avoid memory leaks
	//		Alternatively would be:     Weapon *weapon;
	shared_ptr<Weapon> weapon;
public:
	// Constructor: receives a name and a starting health level
	Character(const string&, int);

	// Access to the member variables name and health
	const string& getName();
	int getHealth();
	void setHealth(int);

	// This one doesn't match a member variable, it forwards
	// the weapon's damage level
	int getStrength();

	// Method returning the Character's class
	virtual const string& getClass();

	virtual void attack(shared_ptr<Character>) = 0;
};