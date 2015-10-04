#include "stdafx.h"
#include "CharacterClass.h"

CharacterClass::CharacterClass()
{
}

CharacterClass::~CharacterClass()
{
}

void CharacterClass::setHitPoints(int max, int min)
{
	//the max and min come from each class itseld
	//depending on the class is the dice that is rolled
	//this is inheritance - not sure if this is an abstract class? that the other classes call?
	maxNumber = max;
	minNumber = min;
	//call rollDie() to get random number
	//assign this random number to hitPoints variable
}

int CharacterClass::getHitPoints()
{
	return hitPoints;
}