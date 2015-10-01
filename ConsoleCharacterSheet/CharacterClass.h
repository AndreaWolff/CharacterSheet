#pragma once
#ifndef ClassH
#define ClassH
#include <iostream>
#include <string>

using namespace std;

class CharacterClass
{
	public:
		CharacterClass();
		~CharacterClass();
	private:
		int maxNumber;
		int minNumber;
		int hitPoints;
		int	skill;
};

#endif
