#include "stdafx.h"
#include "Ranger.h"

Ranger::Ranger()
{
}

Ranger::Ranger( int constitMod )
{
	hitPointsMax = 10 + constitMod;
	hasLightArmorProf = true;
	hasMediumArmorProf = true;
	hasHeavyArmorProf = false;
	hasShieldProf = true;
	classType = "Ranger";
}

Ranger::~Ranger()
{
}
