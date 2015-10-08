#include "stdafx.h"
#include "Fighter.h"

Fighter::Fighter()
{
}

Fighter::Fighter( int constitMod )
{
	hitPointsMax = 10 + constitMod;
	hasLightArmorProf = true;
	hasMediumArmorProf = true;
	hasHeavyArmorProf = true;
	hasShieldProf = true;
}

Fighter::~Fighter()
{
}


