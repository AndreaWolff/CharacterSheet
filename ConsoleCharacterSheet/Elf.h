#pragma once
#include "CharacterRace.h"


class Elf : public CharacterRace
{
	public:
		Elf();
		Elf( string );
		~Elf();
		void populateElfNameMap();
		virtual string getName();
	private:
		virtual void setName(string);
		map <int, string> elfMaleName;
		map <int, string> elfFemaleName;
};

