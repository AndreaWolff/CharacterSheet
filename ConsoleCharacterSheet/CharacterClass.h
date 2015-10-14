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
		CharacterClass( string );
		~CharacterClass();
		void setHitPoints( int );
		int getHitPoints();
		bool getLightArmorProf();
		bool getMediumArmorProf();
		bool getHeavyArmorProf();
		bool getShieldArmorProf();
		string getClassType();
	protected:
		string classType;
		int hitPointsMax;
		bool hasLightArmorProf;
		bool hasMediumArmorProf;
		bool hasHeavyArmorProf;
		bool hasShieldProf;
};

#endif
