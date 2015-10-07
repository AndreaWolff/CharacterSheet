#pragma once
#include "CharacterRace.h"

class Elf : public CharacterRace
{
	public:
		Elf();
		~Elf();
		void populateElfNameMap();
	private:
		//map <int, string> elfName;
		string elfName;
};

