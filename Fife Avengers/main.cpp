#include <iostream>
#include "Warrior.h"

using namespace std;

int main()
{

	auto w = make_shared<Warrior>("Craig");

	cout << "Warrior" << endl;
	cout << w->getName() << endl;
	cout << w->getStrength() << endl;

	return 0;
}