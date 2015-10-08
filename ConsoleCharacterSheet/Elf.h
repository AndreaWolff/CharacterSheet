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
		virtual void setName(string);
	private:
		map <int, string> elfMaleName;
		map <int, string> elfFemaleName;
};

