#include<iostream>
#pragma once

using namespace std;

class Weapon
{
protected:
	string name;
	int damageScore;
public:
	Weapon(const string&, int);
	string getName();
	int getDamageScore();
};

