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
		void setHitPoints( int );
		int getHitPoints();
		bool getLightArmorProf();
		bool getMediumArmorProf();
		bool getHeavyArmorProf();
		bool getShieldArmorProf();
	protected:
		int hitPointsMax;
		int	skill;
		bool hasLightArmorProf;
		bool hasMediumArmorProf;
		bool hasHeavyArmorProf;
		bool hasShieldProf;
};

#endif
