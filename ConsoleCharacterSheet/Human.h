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
		Human( string );
		~Human();
		void populateHumanNameMap();
		virtual string getName();
	private:
		virtual void chooseName( string );
		map <int, string> humanMaleName;
		map <int, string> humanFemaleName;
};

