#include "stdafx.h"
#include "Fighter.h"

Fighter::Fighter()
{
}

Fighter::Fighter( int constitMod )
{
	hitPointsMax = 10 + constitMod;
}

Fighter::~Fighter()
{
}

void Fighter::setHitPoints( int newHitPointsMax )
{
	hitPointsMax = newHitPointsMax;
}

int Fighter::getHitPoints()
{
	return hitPointsMax;
}
