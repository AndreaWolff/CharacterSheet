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
		CharacterRace(string, string);
		~CharacterRace();
	private:
		string charRace;
		string charGender;
		string charName;
		int age;
		int ability;
		int speed;
		bool darkvision;
};

#endif
