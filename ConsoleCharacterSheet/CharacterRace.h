#pragma once
#ifndef CharacterRaceH
#define CharacterRaceH
#include <iostream>
#include <string>
#include <map>
#include "Die.h"

using namespace std;

class CharacterRace
{
	public:
		CharacterRace();
		CharacterRace( string );
		virtual ~CharacterRace();
		virtual void setName( string ) = 0; // Pure virtual function denoting this class as an abstract class, from which Derived objects will override
		virtual string getName() = 0;
		string getRaceType();
	protected:
		string charRace;
		string charGender;
		string charName;
		int charAge;
		int charAbility;
		int charSpeed;
		bool darkvision;
		Die * die1D6;
};

#endif
