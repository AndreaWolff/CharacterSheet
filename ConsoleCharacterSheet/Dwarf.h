#pragma once
#include "CharacterRace.h"

class Dwarf : public CharacterRace
{
	public:
		Dwarf();
		~Dwarf();
		void populateDwardNameMap();
	private:
		//map <int, string> dwarfName;
		string dwarfName;
};

