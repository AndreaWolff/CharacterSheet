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
		virtual void setName(string);
	private:
		map <int, string> dwarfMaleName;
		map <int, string> dwarfFemaleName;
};

