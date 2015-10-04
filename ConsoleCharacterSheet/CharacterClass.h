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
		void setHitPoints(int, int);
		int getHitPoints();
	private:
		int maxNumber;
		int minNumber;
		int hitPoints;
		int	skill;
};

#endif
