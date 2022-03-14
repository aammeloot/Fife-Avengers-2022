#include<iostream>
#pragma once

using namespace std;

class Weapon
{
protected:
	string name;
	int damageScore;
public:
	Weapon(string, int);
	string getName();
	int getDamageScore();
};

