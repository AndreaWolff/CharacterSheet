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
		//CharacterClass( int, int);
		~CharacterClass();
		virtual void setHitPoints( int ) = 0; // Pure virtual function
		virtual int getHitPoints() = 0; // Pure virtual function
	protected:
		int hitPointsMax;
		int	skill;
};

#endif
