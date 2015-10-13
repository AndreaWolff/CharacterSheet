#pragma once
#include <iostream>
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
		virtual void setName( string );
		//void setImage( string );
	private:
		map <int, string> humanMaleName;
		map <int, string> humanFemaleName;
};

