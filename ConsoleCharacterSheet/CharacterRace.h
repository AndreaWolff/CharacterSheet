#pragma once
#ifndef CharacterRaceH
#define CharacterRaceH
#include <iostream>
#include <string>

using namespace std;

class CharacterRace
{
	public:
		CharacterRace();
		~CharacterRace();
	private:
		int ability;
		int age;
		int speed;
		string charName;
		bool darkvision;
};

#endif
