#pragma once
#include "CharacterClass.h"
#include "CharacterEquipment.h"

class Fighter :	public CharacterClass
{
	public:
		Fighter();
		Fighter( int );
		~Fighter();
		virtual void setHitPoints( int );
		virtual int getHitPoints();
	private:
		CharacterEquipment * mainWeapon;
		CharacterEquipment * armor;
};

