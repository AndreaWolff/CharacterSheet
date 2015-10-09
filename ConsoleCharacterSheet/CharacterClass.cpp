#include "stdafx.h"
#include "CharacterClass.h"

CharacterClass::CharacterClass()
{
}

CharacterClass::CharacterClass( string cClass )
{
	classType = cClass;
}


CharacterClass::~CharacterClass()
{
}

void CharacterClass::setHitPoints( int newHitPointsMax )
{
	hitPointsMax = newHitPointsMax;
}

int CharacterClass::getHitPoints()
{
	return hitPointsMax;
}

bool CharacterClass::getLightArmorProf()
{
	return hasLightArmorProf;
}

bool CharacterClass::getMediumArmorProf()
{
	return hasMediumArmorProf;
}

bool CharacterClass::getHeavyArmorProf()
{
	return hasHeavyArmorProf;
}

bool CharacterClass::getShieldArmorProf()
{
	return hasShieldProf;
}

string CharacterClass::getClassType()
{
	return classType;
}




