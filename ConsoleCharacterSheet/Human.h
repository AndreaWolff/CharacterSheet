#pragma once
#include <iostream>
#include <string>
#include <map>
#include "CharacterRace.h"
#include "Die.h"

using namespace std;

class Human : public CharacterRace
{
	public:
		Human();
		~Human();
		void populateHumanNameMap();
	private:
		map <int, string> humanMaleName;
		map <int, string> humanFemaleName;
		string humanName;
};

