#include "stdafx.h"
#include "Wizard.h"

Wizard::Wizard() 
{
}

Wizard::Wizard(int constitMod)
{
	hitPointsMax = 6 + constitMod;
	hasLightArmorProf = false;
	hasMediumArmorProf = false;
	hasHeavyArmorProf = false;
	hasShieldProf = false;
	classType = "Wizard";
}

Wizard::~Wizard()
{
}
