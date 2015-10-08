#pragma once
#include "CharacterClass.h"
#include "CharacterEquipment.h"

class Fighter :	public CharacterClass
{
	public:
		Fighter();
		Fighter( int );
		~Fighter();
	private:
		CharacterEquipment * mainWeapon;
		CharacterEquipment * armor;
};

