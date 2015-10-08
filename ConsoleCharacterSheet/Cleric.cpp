#include "stdafx.h"
#include "Cleric.h"

Cleric::Cleric()
{
}

Cleric::Cleric( int constitMod )
{
	hitPointsMax = 8 + constitMod;
	hasLightArmorProf = true;
	hasMediumArmorProf = true;
	hasHeavyArmorProf = false;
	hasShieldProf = true;
}

Cleric::~Cleric()
{
}


