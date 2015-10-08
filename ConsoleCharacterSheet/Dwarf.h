#pragma once
#include "CharacterRace.h"

class Dwarf : public CharacterRace
{
	public:
		Dwarf();
		Dwarf( string );
		~Dwarf();
		void populateDwarfNameMap();
		virtual string getName();
	private:
		virtual void setName(string);
		map <int, string> dwarfMaleName;
		map <int, string> dwarfFemaleName;
};

