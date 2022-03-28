#include <iostream>
#include <vector>
#include "Warrior.h"
#include "Barbarian.h"
#include "Mage.h"
#include "Character.h"

using namespace std;

// The part of characters is going to be a global var
// A list (vector) of characters
vector<shared_ptr<Character>> party;

void createParty()
{
	cout << "Welcome to Fife avengers" << endl;
	cout << "Let's create your party of 3 characters" << endl;

	for (int counter = 0; counter < 3; counter++)
	{
		// Menu, get the user's choice
		int choice;
		string name;
		cout << "Choose your character number " << counter + 1 << endl;
		cout << "1 - Warrior, 2 - Barbarian, 3 - Mage" << endl;
		cin >> choice;
		cout << "What is your character's name?" << endl;
		cin >> name;

		// Pointer that will receive the new Character
		shared_ptr<Character> newChar;

		if (choice == 1)
		{
			// Create a warrior
			auto tempChar = make_shared<Warrior>(name);
			// Cast it to a character
			newChar = (shared_ptr<Character>)tempChar;
			// Add it to the list of character
			party.push_back(newChar);
		}
		else if (choice == 2)
		{
			// Same with a Barbarian cast to a Character
			auto tempChar = make_shared<Barbarian>(name);
			newChar = (shared_ptr<Character>)tempChar;
			party.push_back(newChar);
		}
		else if (choice == 3)
		{
			auto tempChar = make_shared<Mage>(name);
			newChar = (shared_ptr<Character>)tempChar;
			party.push_back(newChar);
		}
		else
		{
			cout << "Invalid choice, program ending" << endl;
			exit(-1);
		}
	}
}

void listParty()
{
	cout << "Your party has " << party.size() << " characters" << endl;
	int partySize = party.size();

	for (int counter = 0; counter < partySize; counter++)
	{
		auto currentChar = party[counter];
		// Display the character's position in the list
		cout << "Character " << counter + 1 << endl;
		// Displau the character's name
		cout << "Name: " << currentChar->getName() << endl;
		cout << "Class: " << currentChar->getClass() << endl;
		cout << "Starting health: " << currentChar->getHealth() << endl;
		cout << "\n\n";
	}
}

int main()
{
	createParty();
	listParty();

	return 0;
}